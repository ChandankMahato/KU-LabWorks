const { BinarySearchTree } = require("./BST");

const bst = new BinarySearchTree();

bst.add(5, "A");
bst.add(3, "B");
bst.add(7, "C");
bst.add(2, "D");
bst.add(4, "E");
bst.add(6, "F");
bst.add(8, "G");

console.log("Inorder traversal: ", bst.inorder());
console.log("Preorder traversal: ", bst.preorder());
console.log("Postorder traversal: ", bst.postorder());

console.log("Size of BST: ", bst.size());

console.log("Value of node with key 2: ", bst.search(2));
console.log("Value of node with key 9: ", bst.search(9));

console.log("Smallest node: ", bst.smallest());
console.log("Largest node: ", bst.largest());

console.log("Remove node with key 3: ", bst.remove(3));
console.log("Inorder traversal after removal: ", bst.inorder());
console.log("Size of BST after removal: ", bst.size());
