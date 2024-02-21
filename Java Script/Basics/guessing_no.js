let attempt =0;
let  guess = Math.floor(Math.random()*10);
while(1){
    const prompt = require("prompt-sync")();
    let i=prompt("Guess the number: ");
    attempt++;
    if(i==guess){
        console.log("Congrats, You Won");
        break;
    }
    prompt("Oops ! , Press Enter to Try again");
}
console.log("You won in",attempt,"attempt");