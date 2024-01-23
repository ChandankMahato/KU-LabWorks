const { binarySearchIterative } = require("../Search/binaryIterative");
const { binarySearchRecursive } = require("../Search/binaryRecursive");
const { linearSearch } = require("../Search/linearSearch");
const {
  sortArray,
  generateArray,
} = require("../../commonFiles/Performance/dataGenerator");
const {
  measureExecutionTime,
} = require("../../commonFiles/Performance/executionTime");
const {
  printOutput,
  printExecutableOutput,
  printExecutionTime,
  printGap,
  print,
} = require("../../commonFiles/Output/print");

const dataSet = sortArray(generateArray(1000000));

print("Linear Search");
printExecutionTime(measureExecutionTime(linearSearch(dataSet, -1)).time);

printGap();

print("Binary Search Iterative");
printExecutionTime(
  measureExecutionTime(binarySearchIterative(dataSet, -1)).time
);

printGap();

print("Binary Search Recursive");
printExecutionTime(
  measureExecutionTime(
    binarySearchRecursive(dataSet, 0, dataSet.length - 1, -1)
  ).time
);
