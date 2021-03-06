// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var Cake$Variables = require("./Cake.bs.js");

var myCake = {
  size: /* Half */1,
  flavor: /* White */0,
  frosting: /* Chocolate */1,
  layers: 1,
  filling: undefined,
  message: "Make my cake"
};

var myBetterCake_filling = /* Chocolate */1;

var myBetterCake = {
  size: /* Half */1,
  flavor: /* White */0,
  frosting: /* Chocolate */1,
  layers: 2,
  filling: myBetterCake_filling,
  message: "Very Happy Birthday"
};

var price1 = Cake$Variables.getBasePrice(myCake);

var price2 = Cake$Variables.getBasePrice(myBetterCake);

console.log("Price for the initial cake is ", price1.toFixed(2));

console.log("Cost for the better cake is ", price2.toFixed(2));

exports.myCake = myCake;
exports.myBetterCake = myBetterCake;
exports.price1 = price1;
exports.price2 = price2;
/* price1 Not a pure module */
