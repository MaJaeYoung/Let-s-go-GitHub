const quotes = [
    {
        quote: "qwe",
        author: "asd",
    },
    {
        quote: "rty",
        author: "fgh",
    },
    {
        quote: "zxc",
        author: "vbn",
    },
    {
        quote: "uio",
        author: "jkl",
    },
    {
        quote: "poi",
        author: "lki",
    },
    {
        quote: "qwdf",
        author: "dgjfj",
    },
    {
        quote: "asda",
        author: "asdasd",
    },
    {
        quote: "dsgjdy",
        author: "gukrtdyhxf",
    },
    {
        quote: "sdgdryjdrtgjn",
        author: "sstrhsf",
    },
    {
        quote: "asdgstnjs",
        author: "sfhstrjs",
    },
];


const quote = document.querySelector("#quote span:first-child");
const author = document.querySelector("#quote span:last-child");


// console.log(quotes[0-9]);

const todayQuote = quotes[Math.floor(Math.random() * quotes.length)];

quote.innerText = todayQuote.quote;
author.innerText = todayQuote.author;