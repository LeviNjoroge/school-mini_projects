{
    //my initial version
    console.log("Welcome to programming ");
}

{
    // the question
    var events = require('events');
    var eventEmitter = new events.EventEmitter();

    var myEventHandler = () => {
        console.log("You just clicked!");
    }

    eventEmitter.on('click', myEventHandler);

    eventEmitter.emit('click');
}

{
    // trying a simpler version
    
}