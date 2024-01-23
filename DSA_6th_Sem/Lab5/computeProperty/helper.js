function mostDistantNode(path) {
  const regex = /\d+/g;
  const nodes = path.match(regex);
  if (!nodes || nodes.length === 0) {
    return null;
  }
  const soruce = parseInt(nodes[0]);
  const destination = parseInt(nodes[nodes.length - 1]);
  return [soruce, destination];
}

module.exports = {
  mostDistantNode,
};
