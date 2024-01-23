class Node {
  constructor(key, value) {
    this.key = key;
    this.value = value;
    this.left = null;
    this.right = null;
  }
}

class BinarySearchTree {
  constructor() {
    this.root = null;
    this.count = 0;
  }

  size() {
    return this.count;
  }

  add(key, value) {
    this.root = this._addNode(this.root, key, value);
    this.count++;
  }

  _addNode(node, key, value) {
    if (node === null) {
      return new Node(key, value);
    }
    if (key < node.key) {
      node.left = this._addNode(node.left, key, value);
    } else if (key > node.key) {
      node.right = this._addNode(node.right, key, value);
    } else {
      node.value = value;
    }
    return node;
  }

  search(key) {
    let node = this._searchNode(this.root, key);
    return node ? node.value : false;
  }
  _searchNode(node, key) {
    if (node === null || node.key === key) {
      return node;
    }
    if (key < node.key) {
      return this._searchNode(node.left, key);
    } else {
      return this._searchNode(node.right, key);
    }
  }

  smallest() {
    let node = this._smallestNode(this.root);
    return node ? [node.key, node.value] : null;
  }
  _smallestNode(node) {
    if (node === null || node.left === null) {
      return node;
    }
    return this._smallestNode(node.left);
  }

  largest() {
    let node = this._largestNode(this.root);
    return node ? [node.key, node.value] : null;
  }
  _largestNode(node) {
    if (node == null || node.right === null) {
      return node;
    }
    return this._largestNode(node.right);
  }

  remove(key) {
    let node = this._removeNode(this.root, key);
    if (node !== null) {
      this.count--;
      return true;
    } else {
      return false;
    }
  }
  _removeNode(node, key) {
    if (node === null) {
      return null;
    }

    if (key < node.key) {
      node.left = this._removeNode(node.left, key);
      return node;
    } else if (key > node.key) {
      node.right = this._removeNode(node.right, key);
      return node;
    } else {
      if (node.left === null && node.right === null) {
        node = null;
        return node;
      }

      if (node.left === null) {
        node = node.right;
        return node;
      }

      if (node.right === null) {
        node = node.left;
        return node;
      }

      let tempNode = this._smallestNode(node.right);
      node.key = tempNode.key;
      node.value = tempNode.value;
      node.right = this._removeNode(node.right, tempNode.key);
      return node;
    }
  }

  inorder() {
    const nodes = [];
    function traverse(node) {
      if (node !== null) {
        traverse(node.left);
        nodes.push(node.key);
        traverse(node.right);
      }
    }
    traverse(this.root);
    return nodes;
  }

  preorder() {
    const nodes = [];
    function traverse(node) {
      if (node !== null) {
        nodes.push(node.key);
        traverse(node.left);
        traverse(node.right);
      }
    }
    traverse(this.root);
    return nodes;
  }

  postorder() {
    const nodes = [];
    function traverse(node) {
      if (node !== null) {
        traverse(node.left);
        traverse(node.right);
        nodes.push(node.key);
      }
    }
    traverse(this.root);
    return nodes;
  }
}

module.exports = {
  BinarySearchTree,
};
