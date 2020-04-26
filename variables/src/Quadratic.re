let quad =(a,b,c) => {
    Js.log(Js.Float.toString(a) ++ {js|x\u00b2 + |js} ++ Js.Float.toString(b) ++ "x + " ++ Js.Float.toString(c));
    
    let distcriment = b *. b -. 4.0 *. a *. c;

    if(distcriment < 0.0){
        Js.log("No real roots");
    } else if(distcriment == 0.0){
        let root = -.b /. (2.0 *. a);
        Js.log2("Single root is ", root);
    } else {
        let root1 = -.b +. sqrt(distcriment)/. (2.0 *.a);
        let root2 = -.b -. sqrt(distcriment)/. (2.0 *.a);
        Js.log4("Root1 is ", root1, "Root2 is ", root2);
    }
}

quad(2.0, 3.0, -20.0);