const output = require("./output");
const { items, capacity } = require("./data.js");
function BRFKnapsack(items, capacity) {
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
      for (let i = 1; i < item.weight; i++) {
        const fraction = i / item.weight;
        const newItem = {
          type: item.type,
          weight: i,
          value: fraction * item.value,
        };
        const newCombination = [...combination, newItem];
        newCombinations.push(newCombination);
      }
    });
    combinations.push(...newCombinations);
  });
  return combinations;
}

output(items, capacity, BRFKnapsack(items, capacity));

module.exports = {
  BRFKnapsack,
};
