var Observable = require("FuseJS/Observable");
var iid = Observable("");
var pass = Observable("");

var create_date = Observable("");
var create_weight = Observable("");
var create_distance = Observable("");
var create_date2 = Observable("");
var create_rgid = Observable("");
var create_did = Observable("");
var create_rcid = Observable("");
var create_status = Observable("");
var create_money = Observable("");

var queryc_date = Observable("");

var cancel_key = Observable("");

var sign_key = Observable("");
var sign_did = Observable("");

var complete_key = Observable("");

var querym_uid = Observable("");

var money_uid = Observable("");
var money_point = Observable("");

var result = Observable("");

var createresult = Observable("");
var querycresult = Observable("");
var cancelresult = Observable("");
var signresult = Observable("");
var completeresult = Observable("");
var querymresult = Observable("");
var moneyresult = Observable("");

var HelloUno = require("HelloUno");

function test(){
    result.value="susu";
}
            
HelloUno.onMessageFromLogin = function(message) {
                console.log("login result:" + message);
                result.value=message;
};

HelloUno.onMessageFromRegister = function(message) {
                test();
                console.log("register result(secret):" + message);
                result.value=message;
};

HelloUno.onMessageFromInvokechaincode = function(message,fcn) {
                console.log("Invoke result:" + message);
                console.log("fcn:"+fcn);
                result_commit(fcn,message);
};

HelloUno.onMessageFromQuerychaincode = function(message,fcn) {
                console.log("Query result:" + message);
                console.log("fcn:"+fcn);
                result_commit(fcn,message);
};

function result_commit(fcn,data){
    console.log("result_commit");
    switch (fcn){
                    case "createContract":
                    createresult.value=data;
                    break;
                    case "cancelContract":
                    cancelresult.value=data;
                    break;
                    case "signContract":
                    signresult.value=data;
                    break;
                    case "completeContract":
                    completeresult.value=data;
                    break;
                    case "addPoint":
                    moneyresult.value=data;
                    break;
                    case "subtractPoint":
                    moneyresult.value=data;
                    break;
                    case "queryCargo":
                    querycresult.value=data;
                    break;
                    case "queryMylist":
                    querymresult.value=data;
                    break;
                    case "queryPoint":
                    moneyresult.value=data;
                    break;
                    default:
                    cosole.log("what ??");
                }
}

function Login(){
                HelloUno.Login(iid.value,pass.value);
};

function Register(){
                HelloUno.Register(iid.value);
};

function Createcargo(){
                HelloUno.Invokechaincode("createContract",create_date.value,create_weight.value,create_distance.value,create_money.value,create_date2.value,create_rgid.value,create_did.value,create_rcid.value,create_status.value);
};

function Querycargo(){
                HelloUno.Querychaincode("queryCargo",queryc_date.value);
};

function Cancelcargo(){
                HelloUno.Invokechaincode("cancelContract",cancel_key.value);
};

function Signcargo(){
                HelloUno.Invokechaincode("signContract",sign_key.value,sign_did.value);
};

function Completecargo(){
                HelloUno.Invokechaincode("completeContract",complete_key.value);
};

function Querymylist(){
                HelloUno.Querychaincode("queryMylist",querym_uid.value);
};

function Querypoint(){
                HelloUno.Querychaincode("queryPoint",money_uid.value);
};

function Addpoint(){
                HelloUno.Invokechaincode("addPoint",money_uid.value,money_point.value);
};

function Subpoint(){
                HelloUno.Invokechaincode("subtractPoint",money_uid.value,money_point.value);
};


module.exports = {
     iid:iid,
     pass:pass,
     create_date:create_date,
     create_weight:create_weight,
     create_distance:create_distance,
     create_date2:create_date2,
     create_rgid:create_rgid,
     create_did:create_did,
     create_rcid:create_rcid,
     create_status:create_status,
     create_money:create_money,
     queryc_date:queryc_date,
     cancel_key:cancel_key,
     sign_key:sign_key,
     sign_did:sign_did,
     complete_key:complete_key,
     querym_uid:querym_uid,
     money_uid:money_uid,
     money_point:money_point,
     Login:Login,
     Register:Register,
     Createcargo:Createcargo,
     Querycargo:Querycargo,
     Cancelcargo:Cancelcargo,
     Signcargo:Signcargo,
     Completecargo:Completecargo,
     Querymylist:Querymylist,
     Querypoint:Querypoint,
     Addpoint:Addpoint,
     Subpoint:Subpoint,
     result:result,
     createresult:createresult, 
     querycresult:querycresult,
     cancelresult:cancelresult,
     signresult:signresult, 
     completeresult:completeresult,
     querymresult:querymresult, 
     moneyresult:moneyresult
};
