function binarySearchIterative(arr, x) {
  low = 0;
  high = arr.length - 1;
  mid = 0;
  while (low <= high) {
    mid = Math.floor((high + low) / 2);
    if (arr[mid] < x) {
      low = mid + 1;
    } else if (arr[mid] > x) {
      high = mid - 1;
    } else return mid;
  }
  return 'Not found';
}

module.exports = {
  binarySearchIterative,
};
