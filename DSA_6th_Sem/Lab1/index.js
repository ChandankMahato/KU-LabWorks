const { binarySearchIterative } = require("./Search/binaryIterative");
const { binarySearchRecursive } = require("./Search/binaryRecursive");
const { linearSearch } = require("./Search/linearSearch");
const {
  printExecutableOutput,
  printGap,
} = require("../commonFiles/Output/print");

printExecutableOutput(
  "binarySearchIterative",
  binarySearchIterative([2, 3, 4, 10, 40], 40)
);
printGap();
printExecutableOutput(
  "binarySearchRecursive",
  binarySearchRecursive([2, 3, 4, 10, 40], 0, 5, 10)
);
printGap();
printExecutableOutput(
  "linearSearch",
  linearSearch([2, 4, 1, 3, 6, 8, 10, 32, 11, 7, 0], 1)
);
