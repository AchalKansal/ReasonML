let numbers =[|1,2,3,4,5,6|];

Js.log(numbers[0]);

switch(Belt.Array.get(numbers,5)){
    | Some(value) => Js.log(value);
    | None => Js.log("No element is found");
}

switch(Belt.Array.get(numbers,9)){
    | Some(value) => Js.log(value);
    | None => Js.log("No element is found");
}

let doSquare = (x) => {
    x * x;
};

Js.log(Js.Array.map(doSquare, numbers));