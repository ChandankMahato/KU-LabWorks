const { BinarySearchTree } = require("../../BST");

describe("BinarySearchTree", () => {
  let bst;
  beforeEach(() => {
    bst = new BinarySearchTree();
    bst.add(10, "Value for 10");
    bst.add(52, "Value for 52");
    bst.add(5, "Value for 5");
    bst.add(8, "Value for 8");
    bst.add(1, "Value for 1");
    bst.add(40, "Value for 40");
    bst.add(30, "Value for 30");
    bst.add(45, "Value for 45");
  });
  test("add", () => {
    const bsTree = new BinarySearchTree();
    expect(bsTree.size()).toBe(0);

    bsTree.add(15, "Value for 15");
    expect(bsTree.size()).toBe(1);

    bsTree.add(10, "Value for 10");
    expect(bsTree.size()).toBe(2);

    expect(bsTree.search(10)).toBe("Value for 10");
    expect(bsTree.search(15)).toBe("Value for 15");
  });
  test("inorder", () => {
    const expectedOutput = [1, 5, 8, 10, 30, 40, 45, 52];
    expect(bst.inorder()).toEqual(expectedOutput);

    bst.add(25, "Value for 25");
    const newExpectedOutput = [1, 5, 8, 10, 25, 30, 40, 45, 52];
    expect(bst.inorder()).toEqual(newExpectedOutput);
  });
  test("postorder", () => {
    const expectedOutput = [1, 8, 5, 30, 45, 40, 52, 10];
    expect(bst.postorder()).toEqual(expectedOutput);

    bst.add(25, "Value for 25");
    const newExpectedOutput = [1, 8, 5, 25, 30, 45, 40, 52, 10];
    expect(bst.postorder()).toEqual(newExpectedOutput);
  });
  test("test preorder walk", () => {
    expect(bst.preorder()).toEqual([10, 5, 1, 8, 52, 40, 30, 45]);
    bst.add(25, "Value for 25");
    expect(bst.preorder()).toEqual([10, 5, 1, 8, 52, 40, 30, 25, 45]);
  });
  test("test search", () => {
    expect(bst.search(40)).toEqual("Value for 40");
    expect(bst.search(90)).toBeFalsy();
    bst.add(90, "Value for 90");
    expect(bst.search(90)).toEqual("Value for 90");
  });
  test("test remove", () => {
    bst.remove(40);
    expect(bst.size()).toEqual(7);
    expect(bst.inorder()).toEqual([1, 5, 8, 10, 30, 45, 52]);
    expect(bst.preorder()).toEqual([10, 5, 1, 8, 52, 45, 30]);
  });
  test("test smallest", () => {
    expect(bst.smallest()).toEqual([1, "Value for 1"]);
    bst.add(6, "Value for 6");
    bst.add(4, "Value for 4");
    bst.add(0, "Value for 0");
    bst.add(32, "Value for 32");
    expect(bst.smallest()).toEqual([0, "Value for 0"]);
  });
  test("test largest", () => {
    expect(bst.largest()).toEqual([52, "Value for 52"]);
    bst.add(6, "Value for 6");
    bst.add(54, "Value for 54");
    expect(bst.largest()).toEqual([54, "Value for 54"]);
  });
});
