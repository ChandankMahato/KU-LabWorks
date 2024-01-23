const fs = require("fs");
const { extractData } = require("../extractData.js");
const { computerProperty } = require("../computeProperty/compute.js");
const { createHtmlContent } = require("../createHtmlContent.js");
const { exec } = require("child_process");
const {
  drawDegreeDistributionGraph,
} = require("../computeProperty/degreeDistribution.js");

const data = extractData("./Q1/52_nodes.edges");
const nodes = data.nodes;
const edges = data.edges;
const property = computerProperty(nodes, edges);
drawDegreeDistributionGraph(nodes, edges, "Graph Q1 - 52 Nodes");
fs.writeFile(
  "./Q1/index.html",
  createHtmlContent(nodes, edges, property, "Q1"),
  (err) => {
    if (err) {
      console.error(err);
      return;
    }
    console.log("./Q1/index.html file created successfully.");
    exec("start ./Q1/index.html", (error) => {
      if (error) {
        console.error(`Error opening file: ${error}`);
      }
    });
  }
);
