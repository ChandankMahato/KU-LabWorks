const { binarySearchIterative } = require("../Search/binaryIterative");
const { binarySearchRecursive } = require("../Search/binaryRecursive");
const { linearSearch } = require("../Search/linearSearch");
const { drawGraph } = require("../../commonFiles/Performance/drawGraph");
const {
  sortArray,
  generateArray,
} = require("../../commonFiles/Performance/dataGenerator");
const {
  measureExecutionTime,
} = require("../../commonFiles/Performance/executionTime");

const size = [];
const linearY = [];
const iterativeY = [];
const recursiveY = [];

function collectData(length) {
  size.push(length);
  const dataSet = sortArray(generateArray(length));

  linearY.push(measureExecutionTime(linearSearch(dataSet, -1)).time.toFixed(5));

  iterativeY.push(
    measureExecutionTime(binarySearchIterative(dataSet, -1)).time.toFixed(5)
  );

  recursiveY.push(
    measureExecutionTime(
      binarySearchRecursive(dataSet, 0, dataSet.length - 1, -1)
    ).time.toFixed(5)
  );
}

for (let i = 100; i <= 1000000; i += 10000) {
  collectData(i);
}

drawGraph(size, linearY, "LinearSearch");
drawGraph(size, recursiveY, "Binary Search Recursive");
drawGraph(size, iterativeY, "Binary Search Iterative");
