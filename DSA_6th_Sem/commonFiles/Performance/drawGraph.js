const { plot } = require("nodeplotlib");

function drawGraph(
  X,
  Y,
  type,
  labelX = "Input Size",
  labelY = "Execution Time"
) {
  const plotData = [
    {
      x: X,
      y: Y,
      type: "scatter",
    },
  ];

  const layout = {
    title: type,
    xaxis: {
      title: labelX,
    },
    yaxis: {
      title: labelY,
    },
  };

  plot(plotData, layout);
}

module.exports = {
  drawGraph,
};
