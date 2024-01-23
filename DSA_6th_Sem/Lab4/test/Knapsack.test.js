const { items, capacity } = require("../data");
const { BRFKnapsack } = require("../BRFKnapsack");
const { BR01Knapsack } = require("../BR01Knapsack");
const { GFKnapsack } = require("../GFKnapsack");
const { DP01Knapsack } = require("../DP01Knapsack");

describe("Knapsack Algorithm Test", () => {
  it("should return best combination using Brute Force 0/1 Knapsack", () => {
    const result = BR01Knapsack(items, capacity);
    expect(result.combination).toEqual([
      { type: "Y", weight: 1, value: 100 },
      { type: "Z", weight: 5, value: 50 },
    ]);
  });
  it("should return best combination using Brute Force Fractional Knapsack", () => {
    const result = BRFKnapsack(items, capacity);
    expect(result.combination).toEqual([
      { type: "Y", weight: 1, value: 100 },
      { type: "X", weight: 2, value: 30 },
      { type: "Z", weight: 3, value: 30 },
    ]);
  });
  it("should return best combination using Greedy Fractional Knapsack", () => {
    const result = GFKnapsack(items, capacity);
    expect(result.combination).toEqual([
      { type: "Y", weight: 1, value: 100 },
      { type: "X", weight: 2, value: 30 },
      { type: "Z", weight: 3, value: 30 },
    ]);
  });
  it("should return best combination using Dynamic Programing 0/1 Knapsack", () => {
    const result = DP01Knapsack(items, capacity);
    expect(result.combination).toEqual([
      { type: "Y", weight: 1, value: 100 },
      { type: "Z", weight: 5, value: 50 },
    ]);
  });
});
