const fs = require("fs");
const { extractData } = require("../../extractData.js");
const { computerProperty } = require("../../computeProperty/compute.js");
const { createHtmlContent } = require("../../createHtmlContent.js");
const {
  drawDegreeDistributionGraph,
} = require("../../computeProperty/degreeDistribution.js");
const { exec } = require("child_process");

const data = extractData("./Q2/G4/133_nodes.edges");
const nodes = data.nodes;
const edges = data.edges;
const property = computerProperty(nodes, edges);
drawDegreeDistributionGraph(nodes, edges, "Q2, Graph 4 - 133 Nodes");
fs.writeFile(
  "./Q2/G4/index.html",
  createHtmlContent(nodes, edges, property, "Q2, Graph 4"),
  (err) => {
    if (err) {
      console.error(err);
      return;
    }
    console.log("./Q2/G4/index.html file created successfully.");
    exec("start ./Q2/G4/index.html", (error) => {
      if (error) {
        console.error(`Error opening file: ${error}`);
      }
    });
  }
);
