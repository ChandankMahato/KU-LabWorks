function linearSearch(array, x) {
  for (i in array)
    if (array[i] == x) {
      return i;
    }
  return 'Not found';
}

module.exports = {
  linearSearch,
};
