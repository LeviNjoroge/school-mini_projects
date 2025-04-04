const events = require('events');
const eventEmitter = new events.EventEmitter;

function myEventHandler(){
    console.log('I just had a click');
}

eventEmitter.on('click', myEventHandler);

eventEmitter.emit('click');