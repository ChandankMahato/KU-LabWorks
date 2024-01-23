const { printExecutionTime, print } = require("../../commonFiles/Output/print");
const {
  generateArray,
} = require("../../commonFiles/Performance/dataGenerator");
const {
  measureExecutionTime,
} = require("../../commonFiles/Performance/executionTime");
const { insertionSort } = require("../Sort/insertionSort");
const { mergeSort } = require("../Sort/mergeSort");

const A = generateArray(100000);

print("Inseration Sort");
printExecutionTime(measureExecutionTime(insertionSort(A)).time);

print("Merge Sort");
printExecutionTime(measureExecutionTime(mergeSort(A, 0, A.length)).time);
