// creating automatically username with name
const prompt = require("prompt-sync")(); //to take input in vs code
let fname = prompt("Enter your first name: ");
let lname = prompt("Enter your last name: ");
let fullusername = "@"+fname.toLowerCase()+lname.toLowerCase()+(fname.length+lname.length);
let funame = "@"+fname.toLowerCase()+fname.length; //funame = first username
let luname = "@"+lname.toLowerCase()+lname.length;  //luname = last username
console.log(fullusername,"\tor\t",funame,"\tor\t",luname);
