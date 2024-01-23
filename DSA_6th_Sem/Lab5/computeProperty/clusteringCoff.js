function clusteringCoff(nodes, edges) {
  let numNode = nodes.length;
  let totalCi = 0;
  nodes.forEach((nodeId) => {
    totalCi += findClusteringCoefficient(edges, nodeId);
  });
  return (totalCi / numNode).toFixed(2);
}
function findClusteringCoefficient(edges, nodeId) {
  const neighbors = [];
  const neighborConnection = [];
  edges.forEach((edge) => {
    if (edge.from === nodeId) {
      neighbors.push(edge.to);
    }
    if (edge.to === nodeId) {
      neighbors.push(edge.from);
    }
  });
  const numNeighbors = neighbors.length;
  if (numNeighbors <= 1) {
    return 0;
  }
  for (let i = 0; i < numNeighbors; i++) {
    for (let j = i + 1; j < numNeighbors; j++) {
      edges.forEach((edge) => {
        if (
          (neighbors[i] == edge.from && neighbors[j] == edge.to) ||
          (neighbors[i] == edge.to && neighbors[j] == edge.from)
        ) {
          neighborConnection.push(edge);
        }
      });
    }
  }
  let Ki = neighbors.length;
  let Ei = neighborConnection.length;
  const Ci = (2 * Ei) / (Ki * (Ki - 1));
  return Ci;
}

module.exports = {
  clusteringCoff,
};
