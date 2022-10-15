// Declaring a object
const circle = {
    radius: 1,
    location: {
        x: 1,
        y: 1
    }, 
    draw: function () {
        console.log('draw');
    }
};

circle.draw();

// Copying object is a issue because in case of bug we will have to refactor in all the places, this is an issue only when a object has a behaviour(1 or more methods), this issues is solved using Factories

function createCircle(radius) {
    return {
        radius,
        draw: function () {
            console.log('draw');
        }
    };
}

const circle2 = createCircle(1);
circle2.draw();

// Constructor function
function Circle(radius) {
    console.log('this is pointing to: ', this);
    this.radius = radius;
    this.draw = function() {
        console.log('draw');
    }
}

let circle3 = new Circle(1); //New operator first creates an empty object and then it sets 'this' keyword to point to that empty object. 

// check console to check the above statement, effect of implementing with and without new keyword. 
circle3 = Circle(1);

// Abstraction 
function AnotherCircle(radius) {
    this.radius = radius;

    let computeOptimumLocation = () => console.log('Optimum Location!');
    this.draw = () => { 
        computeOptimumLocation();
        console.log('Inside Draw!');  
    }

    // Getters and setters

    Object.defineProperty(this, 'radius', {
        get: () => radius,
        set: (value) => {
            radius = value;
        } 
    })
}

let anCircle = new AnotherCircle(2);
console.log('before: ', anCircle.radius)
anCircle.radius = 10;
console.log('after: ', anCircle.radius)