function Stopwatch() {
    let time = '000';
    let timer;

    this.start = () => {
        console.log('started');
        let i = 1;
        time = parseInt(time)
        timer = setInterval(() => {
            // console.log(time);
            if(i === 160) {
                time += 1;
                i = 0;
            }
            i += 1;
        }, 0);
    }

    this.stop = () => {
        clearInterval(timer);
    }

    this.reset = () => {
        time = '000';
    }

    Object.defineProperty(this, 'duration', {
        get: () => time
    })
}

const sw = new Stopwatch();
// sw.start();
// sw.stop();
console.log(sw.duration)
// sw.reset();