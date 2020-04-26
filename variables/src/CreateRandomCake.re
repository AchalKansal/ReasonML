let cakeMessageArray = [|"Happy Birthday", "Happy Anniversary", "Happy Death Day"|];
let cakeSizeChoiceArray = Cake.Size.([|Half, Full, Quarter|]);
let cakeFrostingChoiceArray = Cake.Frosting.([|Vanilla, Chocolate|]);
let cakeFillingChoiceArray = Cake.Filling.([|Vanilla,Strawberry,Chocolate,Lemon,Raspberry|]);
let cakeFlavorChoiceArray = Cake.Flavor.([|White,Yellow,Chocolate|]);
let cakeLayersChoiceArray = [|1,2,3,4,5,6,7,8,9|];

let getRandomChoice = (arr)  => {
    arr[Js.Math.random_int(0,Js.Array.length(arr))];
}
let createRandomCake = () :Cake.t => {
    size : getRandomChoice(cakeSizeChoiceArray),
    frosting : getRandomChoice(cakeFrostingChoiceArray),
    flavor : getRandomChoice(cakeFlavorChoiceArray),
    layers : getRandomChoice(cakeLayersChoiceArray),
    filling : Some(getRandomChoice(cakeFillingChoiceArray)),
    message : getRandomChoice(cakeMessageArray)
}

let theCake = createRandomCake();
let cakeString = Cake.cakeToString(theCake);
Js.log(cakeString);



