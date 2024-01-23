function printExecutableOutput(executableType, output) {
  console.log(generateYellowColorText(executableType));
  console.log("Output: " + generateGreenColorText(output));
}
function printExecutionTime(time) {
  console.log("Execution Time: " + generateRedColorText(time));
}
function print(text) {
  console.log(generateYellowColorText(text));
}

function printGap() {
  console.log(" ");
}

function generateBlueColorText(text) {
  return `\x1b[34m${text}\x1b[0m`;
}
function generateYellowColorText(text) {
  return `\x1b[33m${text}\x1b[0m`;
}
function generateGreenColorText(text) {
  return `\x1b[32m${text}\x1b[0m`;
}
function generateRedColorText(text) {
  return `\x1b[31m${text}\x1b[0m`;
}

module.exports = {
  print,
  printExecutableOutput,
  printExecutionTime,
  printGap,
};

//yellow : \x1b[34m%s\x1b[0m
//green : \x1b[32m%s\x1b[0m
//red: \x1b[31m%s\x1b[0m
