// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var Caml_int32 = require("bs-platform/lib/js/caml_int32.js");

function getCakePrice(size) {
  if (typeof size === "number") {
    switch (size) {
      case /* Full */0 :
          return 20.00;
      case /* Half */1 :
          return 15.00;
      case /* Quater */2 :
          return 10.00;
      
    }
  } else {
    return Caml_int32.imul(size[0], size[1]) * 0.10;
  }
}

function cakeSizeToString(size) {
  if (typeof size === "number") {
    switch (size) {
      case /* Full */0 :
          return "Full Sheet";
      case /* Half */1 :
          return "Half Sheet";
      case /* Quater */2 :
          return "Quater Sheet";
      
    }
  } else {
    return "Custom " + (size[0].toString() + (" X " + size[1].toString()));
  }
}

var cake2 = /* Custom */[
  20,
  30
];

var price1 = getCakePrice(/* Half */1);

var price2 = getCakePrice(cake2);

var cake1 = /* Half */1;

exports.getCakePrice = getCakePrice;
exports.cakeSizeToString = cakeSizeToString;
exports.cake1 = cake1;
exports.cake2 = cake2;
exports.price1 = price1;
exports.price2 = price2;
/* price1 Not a pure module */