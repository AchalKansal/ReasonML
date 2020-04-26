// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE
'use strict';

var Belt_Array = require("bs-platform/lib/js/belt_Array.js");
var Caml_array = require("bs-platform/lib/js/caml_array.js");
var Caml_int32 = require("bs-platform/lib/js/caml_int32.js");

var numbers = [
  1,
  2,
  3,
  4,
  5,
  6
];

console.log(Caml_array.caml_array_get(numbers, 0));

var match = Belt_Array.get(numbers, 5);

if (match !== undefined) {
  console.log(match);
} else {
  console.log("No element is found");
}

var match$1 = Belt_Array.get(numbers, 9);

if (match$1 !== undefined) {
  console.log(match$1);
} else {
  console.log("No element is found");
}

function doSquare(x) {
  return Caml_int32.imul(x, x);
}

console.log(numbers.map(doSquare));

exports.numbers = numbers;
exports.doSquare = doSquare;
/*  Not a pure module */