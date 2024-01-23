function generateArray(size) {
  return Array.from({ length: size }, () => {
    return Math.floor(Math.random() * size);
  });
}
function sortArray(A) {
  return A.sort((a, b) => a - b);
}

module.exports = {
  generateArray,
  sortArray,
};
