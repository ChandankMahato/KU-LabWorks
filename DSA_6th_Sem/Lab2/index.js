const {
  printExecutableOutput,
  printGap,
} = require("../commonFiles/Output/print");
const { insertionSort } = require("./Sort/insertionSort");
const { mergeSort } = require("./Sort/mergeSort");

printExecutableOutput("Insertion Sort", insertionSort([5, 4, 3, 2, 1]));
printGap();
printExecutableOutput(
  "Merge Sort",
  mergeSort([5, 4, 3, 2, 1, 6, 9, 10, 4], 0, 9)
);
