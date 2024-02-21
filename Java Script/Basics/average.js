const prompt = require("prompt-sync")();
let size = prompt("Enter the size of array: ");
let marks = [],sum=0;
for(let i=0;i<size;i++){
    let idx;
    if(i==0) idx = "st";
    else if(i==1) idx = "nd";
    else if(i ==2) idx = "rd";
    else idx = "th";
    marks[i] = parseInt(prompt("Enter the marks of "+(i+1)+idx+" student: "));
    sum+=marks[i];
}
let avg = sum/size;
console.log("The average marks of  students is: "+avg);
// console.log(sum);