type cakeSize = 
  | Full
  | Half
  | Quater
  | Custom(int,int);

type t = cakeSize;

let getCakePrice = (size: cakeSize) : float => {
    switch (size) {
    | Full => 20.00
    | Half => 15.00
    | Quater => 10.00
    | Custom(length,width) => float_of_int(length * width) *. 0.10;
    }
};

let cakeSizeToString =(size : cakeSize) : string => {
    switch(size){
        | Full => "Full Sheet"
        | Half => "Half Sheet"
        | Quater => "Quater Sheet"
        | Custom(length,width) => "Custom " ++ Js.Int.toString(length) ++ " X " ++ Js.Int.toString(width)
    }
};

let cake1 = Half;
let cake2 = Custom(20,30);
let price1 = getCakePrice(cake1);
let price2 = getCakePrice(cake2);

//Js.log("Price for " ++ cakeSizeToString(cake1) ++ " is " ++ Js.Float.toString(price1));

//Js.log("Price for " ++ cakeSizeToString(cake2) ++ " is " ++ Js.Float.toString(price2));
