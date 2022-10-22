function Stopwatch() {
    this.time = 0;
    this.timer;
    
    Object.defineProperty(this, 'duration', {
        get: () => this.time
    });
}

Stopwatch.prototype.start =  function() {
    let i = 1;
    this.time = parseInt(this.time)
    this.timer = setInterval(() => {
        if(i === 160) {
            this.time += 1;
            i = 0;
        }
        i += 1;
    }, 0);
};

Stopwatch.prototype.stop = function() {
    clearInterval(this.timer);
}

Stopwatch.prototype.reset = function() {
    this.time = 0;
}

const sw = new Stopwatch();
// sw.start();
// sw.stop();
// sw.reset();