function calculateDensity(noOfNodes, noOfEdges) {
  if (noOfNodes === 0) {
    return 0;
  } else {
    return (density = (2 * noOfEdges) / (noOfNodes * (noOfNodes - 1))).toFixed(
      2
    );
  }
}

module.exports = {
  calculateDensity,
};
