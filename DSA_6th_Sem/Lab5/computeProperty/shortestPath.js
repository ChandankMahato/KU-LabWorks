class Graph {
  constructor() {
    this.nodes = new Map();
  }

  addNode(name) {
    this.nodes.set(name, new Map());
  }

  addEdge(source, destination, weight) {
    this.nodes.get(source).set(destination, weight);
    this.nodes.get(destination).set(source, weight);
  }

  dijkstra(startNode) {
    const distances = new Map();
    const visited = new Set();
    const previousNodes = new Map();

    for (const node of this.nodes.keys()) {
      distances.set(node, Infinity);
    }
    distances.set(startNode, 0);

    while (visited.size < this.nodes.size) {
      const currentNode = this.getMinDistanceNode(distances, visited);
      visited.add(currentNode);

      for (const [neighbor, weight] of this.nodes.get(currentNode)) {
        const distance = distances.get(currentNode) + weight;
        if (distance < distances.get(neighbor)) {
          distances.set(neighbor, distance);
          previousNodes.set(neighbor, currentNode);
        }
      }
    }

    return { distances, previousNodes };
  }

  getMinDistanceNode(distances, visited) {
    let minDistance = Infinity;
    let minNode = null;

    for (const [node, distance] of distances) {
      if (!visited.has(node) && distance < minDistance) {
        minDistance = distance;
        minNode = node;
      }
    }

    return minNode;
  }

  shortestPath(startNode, endNode) {
    const { distances, previousNodes } = this.dijkstra(startNode);
    const path = [endNode];
    let currentNode = endNode;

    while (currentNode !== startNode) {
      currentNode = previousNodes.get(currentNode);
      path.unshift(currentNode);
    }

    return { path, distance: distances.get(endNode) };
  }
}

function longestShortestPath(nodes, edges) {
  let currDistance = 0;
  let currPath = "";
  const graph = new Graph();
  nodes.forEach((node) => {
    graph.addNode(node);
  });
  edges.forEach((edge) => {
    graph.addEdge(edge.from, edge.to, parseFloat(edge.distance));
  });
  nodes.forEach((node) => {
    nodes.forEach((otherNode) => {
      if (node !== otherNode) {
        const { path, distance } = graph.shortestPath(node, otherNode);
        if (currDistance < distance) {
          currDistance = distance;
          currPath = path;
        }
      }
    });
  });
  currPath = currPath.join(" => ");
  return [currDistance, currPath];
}

module.exports = {
  longestShortestPath,
};
