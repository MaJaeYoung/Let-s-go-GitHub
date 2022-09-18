const toDOForm = document.getElementById("todo-form");
const toDoInput = document.querySelector("#todo-form input");    
const toDoList = document.getElementById("todo-list");

const TODOS_KEY = "todos";

let toDOs = [];

function saveToDos() {
    localStorage.setItem("todos", JSON.stringify(toDOs));
}

function deleteToDo(event){
    const li = event.target.parentElement;
    li.remove();
    toDos = toDOs.filter((toDo) => toDo.id !== parseInt(li.id));
    saveToDos();
}

function paintTODo(newTodo){
    const li = document.createElement("li");
    li.id = newTodo.id;
    const span = document.createElement("span");
    span.innerText = newTodo.text;
    const button = document.createElement("button");
    button.innerText = "X";
    button.addEventListener("click", deleteToDo);
    li.appendChild(span);
    li.appendChild(button);
    toDoList.appendChild(li); 
}

function handleToDoSubmit(event){
    event.preventDefault();
    const newTodo = toDoInput.value;
    toDoInput.value = "";
    const newTodoObj = {
        text:newTodo,
       id: Date.now(),
    };
    toDOs.push(newTodoObj);
    paintTODo(newTodoObj);
    saveToDos();
};

toDOForm.addEventListener("submit", handleToDoSubmit);

// function sayHello(item){
//     console.log("this is the turn of", item);
// }  alxdp => 되어있는 곳이랑 같은 것

const savedToDos = localStorage.getItem(TODOS_KEY);

if(savedToDos !== null){
    const parsedToDos = JSON.parse(savedToDos);
    toDOs = parsedToDos;
    parsedToDos.forEach(paintTODo);
}

//(item) => console.log("this is the turn of", item)


//7.8다시