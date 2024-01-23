const fs = require("fs");

function extractData(path) {
  const networkData = fs.readFileSync(path, "utf-8");

  const edges = networkData.split("\n").map((line) => {
    const [source, target] = line.split(" ");
    return { from: source, to: target, distance: "1" };
  });
  
  const nodes = [];
  edges.forEach((edge) => {
    if (!nodes.includes(edge.from)) {
      nodes.push(edge.from);
    }
    if (!nodes.includes(edge.to)) {
      nodes.push(edge.to);
    }
  });
  return { edges: edges, nodes: nodes };
}

module.exports = {
  extractData,
};
