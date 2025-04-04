const events = require('events');
const http = require('http');

const eventEmitter = new events.EventEmitter;

function myEventHandler(){
    console.log('I just had a click');
}

eventEmitter.on('click', myEventHandler);

// eventEmitter.emit('click');

http.createServer(function(req, res) {
    res.writeHead(200, {'Content-type':'text/html'});
    res.write('<h1>This is a page to display a callback function thingy</h1>')    
}).listen(8080);