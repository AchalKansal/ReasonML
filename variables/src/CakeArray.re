let orders = CakeSize.([|Half, Full, Half, Quater,Full, Quater, Half|]);

let orderPrices = Js.Array.map(CakeSize.getCakePrice, orders);

Js.log(orderPrices);

let add = (accumulate, item) => {
    accumulate +. item;
};

let numbers = [|1,2,3,4,5,2,2,54,3,2,2,4,1|];
let totalPrice = Js.Array.reduce(add,0.0,orderPrices);

Js.log(totalPrice);