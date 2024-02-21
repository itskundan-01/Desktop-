const express = require('express');
const http = require('http');
const path = require('path');
const socketIO = require('socket.io');

const app = express();
const server = http.createServer(app);
const io = socketIO(server);

// Serve static files (HTML, CSS, JS, images)
app.use(express.static(path.join(__dirname, 'public')));


// Socket.io logic
io.on('connection', (socket) => {
    console.log('A user connected');

    // Listen for user choice
    socket.on('userChoice', (userChoice) => {
        // Broadcast the user choice to all connected clients
        io.emit('userChoice', userChoice);
    });

    // Handle disconnection
    socket.on('disconnect', () => {
        console.log('User disconnected');
    });
});

const PORT = process.env.PORT || 3000;
server.listen(PORT, () => {
    console.log(`Server is running on http://localhost:${PORT}`);
});
