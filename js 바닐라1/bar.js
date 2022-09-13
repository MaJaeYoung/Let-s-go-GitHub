// const a = 5;
// const b =2;

// const myname = "jeayoung"
// let myName = "wodu dj"   //let은 const와 다르게 바꿀 수 있다.

// console.log("allasldl");
// console.log(a+b);
// console.log(a*b);
// console.log(a/b);
// console.log(a%b);

// console.log("hello" + myname);
// console.log(myName);
// console.log("hello " + myName);


// myName ="현봉식";

// console.log("hello " + myName);

//Boolean

//const amIFat = true; 
        //(false아님   null 아무 것도 없음 true 맞음) 문자가 아니라 타입
//let something
//console.log(amIFat);
//console.log(something);     //undefined 데이터 타입  // 정의 되지 않음

//배열
// {
// const mon = "mon"
// const tue = "tue";
// const wed = "wed";
// const thu = "thu";
// const fri = "fri";
// const sat = "sat";
// const sun = "sun";

// const daysOfweek = [mon,tue,wed,thu,fri, sat,sun];
// }// 같다. ==

// const daysOfweek = ["mon", "tue", "wed", "thu", "fri", "sat", "sun"];

// const nonsense = [1,2, "hello", false, null, true,undefined, "jaeyoung", ];

// console.log(daysOfweek , nonsense);
// console.log(daysOfweek[0]);


// daysOfweek.push()


// const playerName = "nico";
// const playerPoints = 121212;
// const playerHandsome = false;
// const playerFat = "little bit";


//const player = ["nico", 1212, false, "little bit"];


// const player = {
//         name: "nico",
//         points: 10, 
//         fat: true,
// };
// console.log(player);
// console.log(player.name);
// player.lastName = "potato";
// console.log(player);

// console.log("Hello my name is Nico");
// console.log("Hello my name is Dal");
// console.log("Hello my name is Shigatsu");
// console.log("Hello my name is Flynn");
// console.log("Hello my name is Flynn");
// console.log("Hello my name is Flynn");
// console.log("Hello my name is Flynn");    // 너무 많음 쓰기 귀찮음


//function 배우기
// function sayHello(nameOfPerson, age){
//         console.log("Hello my name is " + nameOfPerson +" and I'm " + age);
// }

// sayHello("nico", 10);
// sayHello("dal", 23);
// sayHello("lynn", 21);

// sayHello();
// sayHello();
// sayHello();
// sayHello();
// sayHello();   


// function plus(a, b){
//            console.log(a + b);
// }
// function divide(a,b){
//         console.log(a/b);
// }
// plus(8, 60);
// divide(98,20);




// const player = {
//         name: "nico",
//         sayHello: function (otherPersonsName) {
//         console.log("hello " + otherPersonsName + " nice to meet you!");
//         },
// };

// player.sayHello("lynn");


// const a=5;


// console.log(a);


// const age = 96;                                            //return 
// function calculateKrAge(ageOfForeigner) {
//      return ageOfForeigner + 2;
// }

// const krAge = calculateKrAge(age);


// console.log(krAge);


// const age = prompt("How old are you?");             //조건문 (if)

// console.log(parseInt(age));

// const age = parseInt(prompt("How old are you?"));

// if(isNaN(age)) {
//         console.log("Please write a number");
// }


// 술나이 제한
// const age = parseInt(prompt("How old are you?"));

// if(isNaN(age)) {
//         console.log("Please write a number");
// }
// else if(age < 18){
//         console.log("You are too young");
// }
// else{
//         console.log("You can drink");
// }



        //  And ,OR 
// const age = parseInt(prompt("How old are you?"));

// if(isNaN(age)) {
//         console.log("Please write a number");
// }
// else if(age < 18){
//         console.log("You are too young");
// }
// else if(age >= 18 && age <= 50){
//         console.log("You can drink");
// }
// else {
//         console.log("You can drink");
// }
// else if(age >= 50 && age <= 80){
//         console.log("You shoule exercise")
// }



// const title = document.getElementById("something");

// title.innerText = " Got you!"

// console.log(title.className);


// const hellos = document.getElementsByClassName("hello");

// console.log(hellos);

// const title = document.querySelector(".hello h1");   // hello 대신 div도 가능
//                                //or 옆에 ALL 붙이면 전부다 기존은 한개만
// console.log(title);


// const title = document.querySelector("div.hello:first-child h1");
                             
// console.dir(title);

// title.style.color ="blue";        // 색깔 바꾸기



 // 클릭하면 색깔 바뀜
// const title = document.querySelector("div.hello:first-child h1");

// console.dir(title);

// function handleTitleClick() {
//         title.style.color = " blue";
// }

// function handleMouseEnter() {
//         title.innerText ="Mouse is here!";
// }

// function handleMouseLeave(){
//         title.innerText = "Mouse is gone!";
// }

// title.addEventListener("click", handleTitleClick);
// title.addEventListener("mouseenter", handleMouseEnter);
// title.addEventListener("mouseleave", handleMouseEnter);



// const h1 = document.querySelector("div.hello:first-child h1");

// function handleTitleClick() {
//         if(h1.style.color === "blue"){
//                 h1.style.color = "tomato";
//         }
//         else {
//                 h1.style.color = "blue";  
//         }
// }

// h1.addEventListener("click", handleTitleClick);


// const h1 = document.querySelector("div.hello:first-child h1");

// function handleTitleClick(){
//         const clickedClass = "clicked";
//       if(h1.className === "clicked"){
//         h1.className = "clicked";
//       }
//       else{
//         h1.className = "active";
//       }
// }


// h1.addEventListener("click", handleTitleClick);


// const h1 = document.querySelector("div.hello:first-child h1");

// function handleTitleClick(){
//         const clickedClass = "clicked";
//       if(h1.classList.contains(clickedClass)) {
//         h1.classList.remove(clickedClass);
//       }
//       else{
//         h1.classList.add(clickedClass);
//       }
// }


// h1.addEventListener("click", handleTitleClick);


//====

// const h1 = document.querySelector("div.hello:first-child h1");

// function handleTitleClick(){
//      h1.classList.toggle("clicked");
// }

// h1.addEventListener("click", handleTitleClick);