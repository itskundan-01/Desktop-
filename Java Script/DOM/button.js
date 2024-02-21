let btn = document.createElement("button");
btn.innerText = `Click Me`;
btn.style.backgroundColor = "red";
btn.style.color = "white";
btn.style.height = "40px"
btn.style.width = "140px";
btn.style.marginTop = "20px";
btn.style.marginLeft = "15px";
btn.style.borderRadius = "8px";
document.querySelector("body").prepend(btn);
btn.addEventListener("click",function(){
    let name = prompt("Enter Your name: ");
    let printing = document.createElement("h2");
    printing.style.color = "Black";
    printing.innerText = `Good Morning, ${name}`;
    document.body.appendChild(printing);
});