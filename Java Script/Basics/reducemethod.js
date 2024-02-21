// const prompt = require("prompt-sync")();
let n =parseInt(prompt("Enter the limit: "));
let number = [];
for(let i=1;i<=n;i++){
    number[i] = i;
}
let newarr = number.reduce((pval,cval)=>{
    return pval+cval;
})
let product = number.reduce((pval,cval)=>{
    return pval*cval;
})

console.log(newarr);
console.log(product);