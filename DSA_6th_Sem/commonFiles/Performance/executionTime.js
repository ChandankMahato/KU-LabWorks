const { performance } = require("perf_hooks");

function measureExecutionTime(executable) {
  let t0 = performance.now();
  let output = executable;
  let t1 = performance.now();
  return { output: output, time: t1 - t0 };
}

module.exports = {
  measureExecutionTime,
};
