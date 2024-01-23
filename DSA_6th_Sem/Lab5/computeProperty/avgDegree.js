function calculateAvgDegree(nodes, edges) {
  let degreeSum = 0;
  nodes.forEach((node) => {
    let degree = edges.filter(
      (edge) => edge.from === node || edge.to === node
    ).length;
    degreeSum += degree;
  });
  return (degreeSum / nodes.length).toFixed(2);
}
module.exports = {
  calculateAvgDegree,
};
