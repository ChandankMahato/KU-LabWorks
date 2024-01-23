const { drawGraph } = require("../../commonFiles/Performance/drawGraph");

function findDegreeDistribution(nodes, edges) {
  const numNode = nodes.length;
  const degreeFrequency = {};
  const degreeDistribution = {};
  nodes.forEach((node) => {
    let degree = edges.filter(
      (edge) => edge.from === node.toString() || edge.to === node.toString()
    ).length;
    if (degreeFrequency[degree]) {
      degreeFrequency[degree] += 1;
    } else {
      degreeFrequency[degree] = 1;
    }
  });
  Object.keys(degreeFrequency).forEach((key) => {
    degreeDistribution[key] = degreeFrequency[key] / numNode;
  });
  console.log(degreeDistribution);
  return degreeDistribution;
}

function drawDegreeDistributionGraph(nodes, edges, Q) {
  const degreeDistribution = findDegreeDistribution(nodes, edges);
  let X = Object.keys(degreeDistribution);
  let Y = [];
  X.forEach((key) => {
    Y.push(degreeDistribution[key]);
  });
  drawGraph(
    X,
    Y,
    `Degree Distribution Graph of ${Q}`,
    "Degree (K)",
    "Fraction of Nodes P(k)"
  );
}

module.exports = {
  drawDegreeDistributionGraph,
};
