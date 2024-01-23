const { insertionSort } = require("../../Sort/insertionSort");
const { mergeSort } = require("../../Sort/mergeSort");

describe("Sort Algo Test", () => {
  it("should compare give array with sorted array from Insertion Sort", () => {
    const result = insertionSort([2, 4, 1, 3, 7, 0]);
    expect(result).toEqual([0, 1, 2, 3, 4, 7]);
  });
  it("should compare given array with sorted array from Merge Sort", () => {
    const result = mergeSort([2, 3, 4, 10, 40], 0, 5);
    expect(result).toEqual([undefined, 2, 3, 4, 10, 40]);
  });
});
