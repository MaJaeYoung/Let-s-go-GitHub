const images = ["0.png", "1.png", "2.jpeg"];

const chosenImage = images[Math.floor(Math.random() * images.length)];


// console.log(chosenImage);

const bgImage = document.createElement("img");

bgImage.src = `img/${chosenImage}`;

console.log(bgImage);

document.body.appendChild(bgImage);


