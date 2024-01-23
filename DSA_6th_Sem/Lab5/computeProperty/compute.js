const { calculateAvgDegree } = require("./avgDegree");
const { calculateDensity } = require("./density");
const { longestShortestPath } = require("./shortestPath");
const { clusteringCoff } = require("./clusteringCoff");
const { mostDistantNode } = require("./helper");

function computerProperty(nodes, edges) {
  let noOfNodes = nodes.length;
  let noOfEdges = edges.length;
  let avgDegree = calculateAvgDegree(nodes, edges);
  let density = calculateDensity(noOfNodes, noOfEdges);
  let path = longestShortestPath(nodes, edges);
  let mostDistant = mostDistantNode(path[1]);
  let shortestPath = path[1];
  let diameter = path[0].toFixed(2);
  let clusteringCoffecient = clusteringCoff(nodes, edges);
  return {
    noOfNodes,
    noOfEdges,
    avgDegree,
    density,
    mostDistant,
    shortestPath,
    diameter,
    clusteringCoffecient,
  };
}

module.exports = {
  computerProperty,
};
