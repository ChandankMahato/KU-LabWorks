function binarySearchRecursive(arr, low, high, x) {
  if (high >= low) {
    mid = Math.floor((high + low) / 2);
    if (arr[mid] == x) {
      return  mid;
    } else if (arr[mid] > x) {
      return binarySearchRecursive(arr, low, mid - 1, x);
    } else return binarySearchRecursive(arr, mid + 1, high, x);
  } else return 'Not found';
}

module.exports = {
  binarySearchRecursive,
};
