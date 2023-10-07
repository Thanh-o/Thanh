window.onload = function(){
    init();
}
// DOm:Document object model
function init(){
    document.getElementById("magic").onmouseover = function(){
        this.className = "highlight";
    }
    document.getElementById("magic").onmouseover = function(){
        this.className = "";
    }
}