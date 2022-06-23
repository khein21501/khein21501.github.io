function mydisplay(some){
    document.getElementById("khh").innerHTML = some 
}
let myPromise = new Promise(
    function(myRessolve,myReject){
        let x = 0;
    
    if(x == 0 ){
        myRessolve("ok");
    }else{
        myReject("Error");
    }
});

myPromise.then(
    function(value){
        mydisplay(value);
    },
    function(error){
        mydisplay(error);
    }

    
);