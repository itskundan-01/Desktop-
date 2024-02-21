const socket = io('http://localhost:3000');


const choices = document.querySelectorAll(".choice");
const msg = document.querySelector("#msg");
const us1sc = document.querySelector("#user1-score");
const us2sc = document.querySelector("#user2-score");

choices.forEach((choice) => {
    choice.addEventListener("click", () => {
        const user1Choice = choice.querySelector("img").getAttribute("id");
        const user2Choice = prompt("User 2, enter your choice (rock, paper, scissors):");
        socket.emit('userChoice', { user1Choice, user2Choice: user2Choice.toLowerCase() });
    });
});

socket.on('userChoice', ({ user1Choice, user2Choice }) => {
    console.log('Received user choices:', user1Choice, user2Choice);
    playGame(user1Choice, user2Choice);
});

const showWinner = (winner, user, comp) => {
    if (winner === "user1") {
        us1sc.innerText = parseInt(us1sc.innerText) + 1;
        console.log("User 1 Won!");
        msg.innerText = `User 1 Won!, User 1's ${user} beats User 2's ${comp}`;
        msg.style.backgroundColor = "green";
    } else if (winner === "user2") {
        us2sc.innerText = parseInt(us2sc.innerText) + 1;
        console.log("User 2 Won!");
        msg.innerText = `User 2 Won!, User 2's ${comp} beats User 1's ${user}`;
        msg.style.backgroundColor = "red";
    } else {
        console.log("Game was Draw.");
        msg.style.backgroundColor = "#923cf4";
        msg.innerText = `Game Draw, Play Again`;
    }
};

const playGame = (user1Choice, user2Choice) => {
    console.log("User 1 Choice:", user1Choice);
    console.log("User 2 Choice:", user2Choice);

    if (user1Choice === user2Choice) {
        showWinner("draw");
    } else if (
        (user1Choice === "rock" && user2Choice === "scissors") ||
        (user1Choice === "paper" && user2Choice === "rock") ||
        (user1Choice === "scissors" && user2Choice === "paper")
    ) {
        showWinner("user1", user1Choice, user2Choice);
    } else {
        showWinner("user2", user1Choice, user2Choice);
    }
};
