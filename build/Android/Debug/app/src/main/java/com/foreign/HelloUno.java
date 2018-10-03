package com.foreign;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

// user defined imports
import android.os.AsyncTask;
import android.app.Activity;
import org.hyperledger.fabric_ca.sdk.HFCAClient;
import org.hyperledger.fabric.sdk.HFClient;
import org.hyperledger.fabric.sdk.Channel;
import org.hyperledger.fabric.sdk.AppUser;
import org.hyperledger.fabric.sdk.Fabrichelper;
import java.io.FileOutputStream;
import java.io.ObjectOutputStream;
import android.content.Context;

public class HelloUno
{
    static void debug_log(Object message)
    {
        android.util.Log.d("Fabric", (message==null ? "null" : message.toString()));
    }

    public static void InvokechaincodeImpl381(final com.uno.StringArray args,final int len)
    {
        android.util.Log.d("Fabrictest","InvokechaincodeImpl");
        String result="false";
        String fcn=args.get(0);
                                    try {
                                        android.util.Log.d("Fabrictest","start");
                                        HFCAClient caClient = new Fabrichelper().getHfCaClient("http://220.123.29.45:7054", null);
                                        AppUser admin = Fabrichelper.getAdmin(caClient);
                                        android.util.Log.d("Fabrictest Success22",admin.toString());
                      
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
                          ExternedBlockHost.callUno_HelloUno_UnoInvokechaincode382((String)result,(String)fcn);
    }
    
    public static void LoginImpl383(final com.uno.StringArray args)
    {
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
                          ExternedBlockHost.callUno_HelloUno_UnoLogin384((String)result);
    }
    
    public static void QuerychaincodeImpl385(final com.uno.StringArray args,final int len)
    {
        android.util.Log.d("Fabrictest","QuerychaincodeImpl");
        String result="false";
        String fcn=args.get(0);
                                    try {
                                        android.util.Log.d("Fabrictest","start");
                                        HFCAClient caClient = new Fabrichelper().getHfCaClient("http://220.123.29.45:7054", null);
                                        AppUser admin = Fabrichelper.getAdmin(caClient);
                                        android.util.Log.d("Fabrictest Success22",admin.toString());
                      
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
                          ExternedBlockHost.callUno_HelloUno_UnoQuerychaincode386((String)result,(String)fcn);
    }
    
    public static void RegisterImpl387(final com.uno.StringArray args)
    {
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
                          ExternedBlockHost.callUno_HelloUno_UnoRegister388((String)result);
    }
    
}
