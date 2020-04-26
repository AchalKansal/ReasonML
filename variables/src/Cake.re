module Size = {
    type t = 
        | Full
        | Half
        | Quarter
        | Custom(int, int);

    let toString = (size: t): string => {
        switch (size) {
            | Full => "full sheet"
            | Half => "half sheet"
            | Quarter => "quarter sheet"
            | Custom(length, width) => "custom " ++
                Js.Int.toString(length) ++ " by" ++
                Js.Int.toString(width)
        };
    };

    let fromString = (str: string): option(t) => {
        switch (Js.String.toLowerCase(str)) {
            | "full" => Some(Full)
            | "half" => Some(Half)
            | "quarter" => Some(Quarter)
            | _ => None  // don't handle custom case
        };
    };
};

module Flavor = {
    type t =
        | White
        | Yellow
        | Chocolate;

    let toString = (flavor: t): string => {
        switch (flavor) {
            | White => "white"
            | Yellow => "yellow"
            | Chocolate => "chocolate"
        };
    };

    let fromString = (str: string): option(t) => {
        switch (Js.String.toLowerCase(str)) {
            | "white" => Some(White)
            | "yellow" => Some(Yellow)
            | "chocolate" => Some(Chocolate)
            | _ => None;
        }
    };
};

module Frosting {
    type t =
        | Vanilla
        | Chocolate;

    let toString = (frosting: t): string => {
        switch (frosting) {
            | Vanilla => "vanilla"
            | Chocolate => "chocolate"
        };
    };

    let fromString = (str: string): option(t) => {
        switch (Js.String.toLowerCase(str)) {
            | "vanilla" => Some(Vanilla)
            | "chocolate" => Some(Chocolate)
            | _ => None;
        }
    };
};

module Filling {
    type t =
        | Vanilla
        | Chocolate
        | Raspberry
        | Lemon
        | Strawberry;

    let toString = (filling: t): string => {
        switch (filling) {
            | Vanilla => "vanilla"
            | Chocolate => "chocolate"
            | Raspberry => "raspberry"
            | Lemon => "lemon"
            | Strawberry => "strawberry"
        };
    };

    let fromString = (str: string): option(t) => {
        switch (Js.String.toLowerCase(str)) {
            | "vanilla" => Some(Vanilla)
            | "chocolate" => Some(Chocolate)
            | "raspberry" => Some(Raspberry)
            | "lemon" => Some(Lemon)
            | "strawberry" => Some(Strawberry)
            | _ => None;
        }
    };
};

type t = {
    size : Size.t,
    flavor : Flavor.t,
    frosting : Frosting.t,
    layers : int,
    filling : option(Filling.t),
    message : string
};

let getBasePrice = (cake : t) : float => {
    let basePrice = switch(cake.size){
        | Full => 65.00
        | Half => 50.00
        | Quarter => 40.00
        | Custom(length,width) => float_of_int(length * width) *. 0.15
    };

    if(cake.layers > 1){
        basePrice *. float_of_int(cake.layers) *. 2.20;
    } else {
        basePrice;
    }
};

let cakeToString = (cake : t) : string => {
    Js.Int.toString(cake.layers) ++ " layer " ++ Size.toString(cake.size) ++ " size " ++ Flavor.toString(cake.flavor);
}