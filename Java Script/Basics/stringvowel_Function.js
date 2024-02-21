function vowel(string) {
    let flag = 0;
    for(let i=0;i<string.length;i++){
        for(let j=0;j<5;j++){
            let vwl = ["A","E","I","O","U"];
            if(string[i].toUpperCase()===vwl[j]){
            flag++;    
            break;
        } 
        }
    }
    return flag;
}
const prompt = require("prompt-sync")();
let count = vowel(prompt("Enter the String: "));
console.log("Total No. of vowel in String is: "+count);