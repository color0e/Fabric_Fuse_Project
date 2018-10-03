using Fuse;
using Fuse.Scripting;
using Fuse.Reactive;
using Android;
using Uno.UX;
using Uno;
using Uno.Compiler.ExportTargetInterop;

[UXGlobalModule]
[ForeignInclude(Language.Java,
                    "android.os.AsyncTask",
                    "android.app.Activity",
                    "org.hyperledger.fabric_ca.sdk.HFCAClient",
                    "org.hyperledger.fabric.sdk.HFClient",
                    "org.hyperledger.fabric.sdk.Channel",
                    "org.hyperledger.fabric.sdk.AppUser",
                    "org.hyperledger.fabric.sdk.Fabrichelper",
                    "java.io.FileOutputStream",
                    "java.io.ObjectOutputStream",
                    "android.content.Context")]
[Require("Gradle.Repository", "maven { url 'https://maven.google.com' }")]
public class HelloUno : NativeModule
{
    static readonly HelloUno _instance;

    static NativeEvent _messageFromLoginEvt;
    static NativeEvent _messageFromRegisterEvt;
    static NativeEvent _messageFromInvokechaincodeEvt;
    static NativeEvent _messageFromQuerychaincodeEvt;


    public HelloUno()
    {
        if(_instance != null) return;

        _instance = this;
        Uno.UX.Resource.SetGlobalKey(_instance, "HelloUno");
        //login start
        AddMember(new NativeFunction("Login",(NativeCallback)Login));
        _messageFromLoginEvt = new NativeEvent("onMessageFromLogin");
        AddMember(_messageFromLoginEvt);
        //login end

        //register start
        AddMember(new NativeFunction("Register",(NativeCallback)Register));
        _messageFromRegisterEvt = new NativeEvent("onMessageFromRegister");
        AddMember(_messageFromRegisterEvt);
        //register end

        //invokechaincode start
        AddMember(new NativeFunction("Invokechaincode",(NativeCallback)Invokechaincode));
        _messageFromInvokechaincodeEvt = new NativeEvent("onMessageFromInvokechaincode");
        AddMember(_messageFromInvokechaincodeEvt);
        //invokechaincode end

        //querychaincode start
        AddMember(new NativeFunction("Querychaincode",(NativeCallback)Querychaincode));
        _messageFromQuerychaincodeEvt = new NativeEvent("onMessageFromQuerychaincode");
        AddMember(_messageFromQuerychaincodeEvt);
        //querychaincode end


 }

//Login start
 object Login(Context c, object[] args){
        string[] str = new string[2]; 
        for(int i=0;i<2;i++){
            str[i]=(string)args[i];
        }
        LoginImpl(str);
        return null;
 }

 static void UnoLogin(string message)
 {
    _messageFromLoginEvt.RaiseAsync(message);
 } 

    [Foreign(Language.Java)]
    public static extern(Android) void LoginImpl(string[] args)
    @{  
        android.util.Log.d("Fabrictest","LoginImpl");
        String result="false";
                                    try {
                                        Activity activity = com.fuse.Activity.getRootActivity();
                                        android.util.Log.d("Fabrictest","start");
                                        HFCAClient caClient = new Fabrichelper().getHfCaClient("http://220.123.29.45:7054", null);
                                        
                                        AppUser admin = Fabrichelper.getAdmin(caClient);
                                        FileOutputStream fos = activity.getApplicationContext().openFileOutput("admin.jso",Context.MODE_PRIVATE);
                                        ObjectOutputStream oos = new ObjectOutputStream(fos);
                                        oos.writeObject(admin);
                                        android.util.Log.d("Fabrictest",admin.toString());

                                        AppUser user = Fabrichelper.getUser(caClient,args.get(0),args.get(1));
                                        FileOutputStream fos2 = activity.getApplicationContext().openFileOutput(args.get(0)+".jso",Context.MODE_PRIVATE);
                                        ObjectOutputStream oos2 = new ObjectOutputStream(fos2);
                                        oos2.writeObject(user);
                                        
                                        result = args.get(0)+" enroll Success";
                                        android.util.Log.d("Fabrictest",result);
                                    } catch (java.lang.Exception e) {
                                        e.printStackTrace();
                                    }
                          @{UnoLogin(string):Call(result)};          
    @}      


    public static extern(!Android) void LoginImpl(string[] args){
        debug_log("Notifications not supported on this platform.");
    }
//Login end

//Register start
 object Register(Context c, object[] args){
        string[] str = new string[1]; 
        for(int i=0;i<1;i++){
            str[i]=(string)args[i];
        }
        RegisterImpl(str);
        return null;
 }

 static void UnoRegister(string message)
 {
    _messageFromRegisterEvt.RaiseAsync(message);
 } 

    [Foreign(Language.Java)]
    public static extern(Android) void RegisterImpl(string[] args)
    @{  
        android.util.Log.d("Fabrictest","RegisterImpl");
        String result="false";
                                    try {
                                        Activity activity = com.fuse.Activity.getRootActivity();
                                        android.util.Log.d("Fabrictest","start");
                                        HFCAClient caClient = new Fabrichelper().getHfCaClient("http://220.123.29.45:7054", null);
                                        AppUser admin = Fabrichelper.getAdmin(caClient);
                                        FileOutputStream fos = activity.getApplicationContext().openFileOutput("admin.jso",Context.MODE_PRIVATE);
                                        ObjectOutputStream oos = new ObjectOutputStream(fos);
                                        oos.writeObject(admin);
                                        android.util.Log.d("Fabrictest",admin.toString());
                                        String secret = Fabrichelper.registerUser(caClient,admin,args.get(0));
                                        result = secret;

                                        HFClient client = Fabrichelper.getHfClient();
                                        client.setUserContext(admin);
                                        Channel channel = Fabrichelper.getChannel(client);

                                        String[] iargs = new String[2];
                                        iargs[0]=args.get(0);
                                        iargs[1]=args.get(0);
                                        
                                        Fabrichelper.invokeBlockChain(client,"cargo-app","createUser",iargs);
                                        android.util.Log.d("Fabrictest",result);
                                    } catch (java.lang.Exception e) {
                                        e.printStackTrace();
                                    }
                          @{UnoRegister(string):Call(result)};          
    @}      


    public static extern(!Android) void RegisterImpl(string[] args){
        debug_log("Notifications not supported on this platform.");
    }
//Register end

//Invokechaincode start
 object Invokechaincode(Context c, object[] args){
        int len = args.Length;
        string[] str = new string[len]; 
        for(int i=0;i<len;i++){
            str[i]=(string)args[i];
        }
        InvokechaincodeImpl(str,len);
        return null;
 }

 static void UnoInvokechaincode(string message,string fcn)
 {
    _messageFromInvokechaincodeEvt.RaiseAsync(message,fcn);
 } 

    [Foreign(Language.Java)]
    public static extern(Android) void InvokechaincodeImpl(string[] args,int len)
    @{  
        android.util.Log.d("Fabrictest","InvokechaincodeImpl");
        String result="false";
        String fcn=args.get(0);
                                    try {
                                        android.util.Log.d("Fabrictest","start");
                                        HFCAClient caClient = new Fabrichelper().getHfCaClient("http://220.123.29.45:7054", null);
                                        AppUser admin = Fabrichelper.getAdmin(caClient);
                                        android.util.Log.d("Fabrictest Success22",admin.toString());
                                        //Inputstream 귀찮..
                      
                                        HFClient client = Fabrichelper.getHfClient();
                                        client.setUserContext(admin);
                                        Channel channel = Fabrichelper.getChannel(client);
                                        String[] iargs=new String[len-1];
                                        for(int i=1;i<len;i++){
                                            iargs[i-1]=args.get(i);
                                        }
                                        boolean result2=Fabrichelper.invokeBlockChain(client,"cargo-app",args.get(0),iargs);
                                        if(result2==true){
                                            result="true";
                                        }
                                        else{
                                            result="false";
                                        }
                                        //qresult = Fabrichelper.queryBlockChain(client,"fabcar","queryAllCars",qargs);
                                        android.util.Log.d("Fabrictest Success",result);
                                    } catch (java.lang.Exception e) {
                                        e.printStackTrace();
                                    }
                          @{UnoInvokechaincode(string,string):Call(result,fcn)};          
    @}      


    public static extern(!Android) void InvokechaincodeImpl(string[] args,int len){
        debug_log("Notifications not supported on this platform.");
    }
//Createcargo end
    

//Querychaincode start
 object Querychaincode(Context c, object[] args){
        int len = args.Length;
        string[] str = new string[len]; 
        for(int i=0;i<len;i++){
            str[i]=(string)args[i];
        }
        QuerychaincodeImpl(str,len);
        return null;
 }

 static void UnoQuerychaincode(string message,string fcn)
 {
    _messageFromQuerychaincodeEvt.RaiseAsync(message,fcn);
 } 

    [Foreign(Language.Java)]
    public static extern(Android) void QuerychaincodeImpl(string[] args,int len)
    @{  
        android.util.Log.d("Fabrictest","QuerychaincodeImpl");
        String result="false";
        String fcn=args.get(0);
                                    try {
                                        android.util.Log.d("Fabrictest","start");
                                        HFCAClient caClient = new Fabrichelper().getHfCaClient("http://220.123.29.45:7054", null);
                                        AppUser admin = Fabrichelper.getAdmin(caClient);
                                        android.util.Log.d("Fabrictest Success22",admin.toString());
                                        //Inputstream 귀찮..
                      
                                        HFClient client = Fabrichelper.getHfClient();
                                        client.setUserContext(admin);
                                        Channel channel = Fabrichelper.getChannel(client);
                                        String[] qargs=new String[len-1];
                                        for(int i=1;i<len;i++){
                                            qargs[i-1]=args.get(i);
                                        }
                                        result = Fabrichelper.queryBlockChain(client,"cargo-app",args.get(0),qargs);
                                        android.util.Log.d("Fabrictest Success",result);
                                    } catch (java.lang.Exception e) {
                                        e.printStackTrace();
                                    }
                          @{UnoQuerychaincode(string,string):Call(result,fcn)};          
    @}      


    public static extern(!Android) void QuerychaincodeImpl(string[] args,int len){
        debug_log("Notifications not supported on this platform.");
    }
//Querycargo end

}