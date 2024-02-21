// const prompt = require("prompt-sync")();  // This line is only for vs code terminal 
let g = prompt("Enter your marks: ");
if(g>79 && g<=100) console.log("'A'");
else if(g>69 && g<=79) console.log("'B'");
else if(g>59 && g<=69) console.log("'C'");
else if(g>49 && g<=59) console.log("'D'");