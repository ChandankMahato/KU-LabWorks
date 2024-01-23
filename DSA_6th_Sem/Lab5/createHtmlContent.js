function createHtmlContent(nodes, edges, property, type) {
  return `
<!DOCTYPE html>
<html>
<head>
  <title>Graph Visualization</title>
  <style>
    #network-container {
      display: flex;
      width: 100%;
      height: 85vh;
      border: 2px solid lightgray;
    }

    #property {
      margin-left: 50px;
      font-size: 20px;
      font-weight: 300;
    }

    #nav-bar {
      width: 100%;
      height: 60px;
    }

    h1 {
      text-align: center;
    }
  </style>
</head>
<body>
  <div id="nav-bar">
    <h1>Network Graph ${type}</h1>
  </div>
  <div id="network-container"> 
    
     <div id="property">
      <h2>Properties</h2>
      <p>No of Nodes: ${property.noOfNodes}</p>
      <p>No of Edges:  ${property.noOfEdges}</p>
      <p>Average Degree: ${property.avgDegree}</p>
      <p>Network Density: ${property.density}</p>
      <p>Most Distant Nodes: ${property.mostDistant}</p>
      <p>longest Shortest Path: ${property.shortestPath}</p>
      <p>Diameter: ${property.diameter}</p>
      <p>Clustering Coffecient: ${property.clusteringCoffecient}</p>
    </div>
    <div id="graph-container"></div>
  </div>
  <script src="https://unpkg.com/vis-network/standalone/umd/vis-network.min.js"></script>
  <script>
    const container = document.getElementById('graph-container');
    const data = {
      nodes: ${JSON.stringify(
        nodes.map((node) => ({ id: node, label: node }))
      )},
      edges: ${JSON.stringify(edges)}
    };
    const options = { physics: false};
    new vis.Network(container, data, options);
  </script>
</body>
</html>
`;
}

module.exports = {
  createHtmlContent,
};
