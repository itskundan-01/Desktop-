// const prompt = require("prompt-sync")();
let size = parseInt(prompt("Enter the size of array: "));
let marks = [],offer=parseFloat(prompt("Enter the Discount Percentage: "));
for(let i=0;i<size;i++){
    let idx;
    if(i==0) idx = "st";
    else if(i==1) idx = "nd";
    else if(i ==2) idx = "rd";
    else idx = "th";
    marks[i] = parseFloat(prompt("Enter the Price of "+(i+1)+idx+" Product: "));
    marks[i] = (marks[i] - marks[i]*offer/100);
}
for(let i=0;i<size;i++){
    console.log(`${marks[i].toFixed(2)}`);
}