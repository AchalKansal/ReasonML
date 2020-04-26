let myCake : Cake.t = {
    size : Cake.Size.Half,
    frosting : Cake.Frosting.Chocolate,
    flavor : Cake.Flavor.White,
    layers : 1,
    filling : None,
    message : "Make my cake"
};

let myBetterCake : Cake.t = {
    ...myCake,
    layers: 2,
    filling: Some(Cake.Filling.Chocolate),
    message: "Very Happy Birthday"
}

let price1 = Cake.getBasePrice(myCake);
let price2 = Cake.getBasePrice(myBetterCake);

Js.log2("Price for the initial cake is " ,Js.Float.toFixedWithPrecision(price1 , ~digits=2));
Js.log2("Cost for the better cake is ", Js.Float.toFixedWithPrecision(price2, ~digits=2));