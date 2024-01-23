const output = require("./output");
const { items, capacity } = require("./data.js");

function GFKnapsack(items, capacity) {
  const sortedItems = sortItems(items);
  let bestCombination = [];
  let bestValue = 0;
  let weight = 0;
  for (let i = 0; i < sortedItems.length; i++) {
    let item = items[i];
    if (weight + item.weight <= capacity) {
      weight += item.weight;
      bestValue += item.value;
      bestCombination.push(item);
    } else {
      let fractionWeight = capacity - weight;
      let fractionValue = item.value / item.weight;
      weight += fractionWeight;
      let newValue = fractionValue * fractionWeight;
      bestValue += newValue;
      bestCombination.push({
        type: item.type,
        weight: fractionWeight,
        value: newValue,
      });
      return { combination: bestCombination, value: bestValue };
    }
  }
}

function sortItems(items) {
  items.sort((a, b) => b.value / b.weight - a.value / a.weight);
  return items;
}

output(items, capacity, GFKnapsack(items, capacity));

module.exports = {
  GFKnapsack,
};
