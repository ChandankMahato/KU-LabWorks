const {
  generateArray,
} = require("../../commonFiles/Performance/dataGenerator");
const { drawGraph } = require("../../commonFiles/Performance/drawGraph");
const {
  measureExecutionTime,
} = require("../../commonFiles/Performance/executionTime");
const { insertionSort } = require("../Sort/insertionSort");
const { mergeSort } = require("../Sort/mergeSort");

const size = [];
const insertionY = [];
const mergeY = [];
function collectData(length) {
  const A = generateArray(length);
  size.push(length);
  insertionY.push(measureExecutionTime(insertionSort(A)).time);
  mergeY.push(measureExecutionTime(mergeSort(A, 0, A.length - 1)).time);
}
for (let i = 10; i <= 1000000; i *= 10) {
  collectData(i);
}
drawGraph(size, insertionY, "Insertion Sort");
drawGraph(size, mergeY, "Merge Sort");
