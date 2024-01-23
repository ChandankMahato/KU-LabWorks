const output = require("./output");
const { items, capacity } = require("./data.js");
function BR01Knapsack(items, capacity) {
  const combinations = generateCombinations(items);
  let bestCombination = [];
  let bestValue = 0;
  combinations.forEach((combination) => {
    let weight = 0;
    let value = 0;
    combination.forEach((item) => {
      weight += item.weight;
      value += item.value;
    });
    if (weight <= capacity && value > bestValue) {
      bestCombination = combination;
      bestValue = value;
    }
  });
  return { combination: bestCombination, value: bestValue };
}

function generateCombinations(items) {
  const combinations = [[]];
  items.forEach((item) => {
    const newCombinations = [];
    combinations.forEach((combination) => {
      const newCombination = [...combination, item];
      newCombinations.push(newCombination);
    });
    combinations.push(...newCombinations);
  });
  return combinations;
}

output(items, capacity, BR01Knapsack(items, capacity));

module.exports = {
  BR01Knapsack,
};
