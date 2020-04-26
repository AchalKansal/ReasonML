let myCake = CakeSize.Half;

let getLowerPrice = (size : CakeSize.t) : float => {
    0.99 *. CakeSize.getCakePrice(size);
}

Js.log(getLowerPrice(CakeSize.Half));