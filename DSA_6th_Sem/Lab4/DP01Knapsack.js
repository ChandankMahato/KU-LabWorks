const output = require("./output");
const { items, capacity } = require("./data.js");

function DP01Knapsack(items, capacity) {
  const n = items.length;
  const memo = new Array(n + 1)
    .fill(null)
    .map(() => new Array(capacity + 1).fill(0));
  for (let i = 1; i <= n; i++) {
    const item = items[i - 1];
    for (let C = 1; C <= capacity; C++) {
      if (item.weight > C) {
        memo[i][C] = memo[i - 1][C];
      } else {
        memo[i][C] = Math.max(
          memo[i - 1][C],
          memo[i - 1][C - item.weight] + item.value
        );
      }
    }
  }
  const selectedItems = [];
  let C = capacity;
  for (let i = n; i >= 1; i--) {
    if (memo[i][C] !== memo[i - 1][C]) {
      const item = items[i - 1];
      selectedItems.unshift(item);
      C -= item.weight;
    }
  }
  return { combination: selectedItems, value: memo[n][capacity] };
}

output(items, capacity, DP01Knapsack(items, capacity));

module.exports = {
  DP01Knapsack,
};
