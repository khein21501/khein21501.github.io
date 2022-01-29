let beforescroll = window.pageYOffset;
window.onscroll = function(){
    let nowscroll = window.pageYOffset;
    if (beforescroll > nowscroll) {
        document.querySelector("#navbar").style.top = "0";
    }else{
        document.querySelector("#navbar").style.top = "-80px"
    }
    beforescroll = nowscroll;
}


 