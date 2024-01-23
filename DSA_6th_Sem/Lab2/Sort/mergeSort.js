function mergeSort(A, p, r) {
  if (p < r) {
    const q = Math.floor((p + r) / 2);
    mergeSort(A, p, q);
    mergeSort(A, q + 1, r);
    Merge(A, p, q, r);
  }
  return A;
}

function Merge(A, p, q, r) {
  const n1 = q - p + 1;
  const n2 = r - q;
  let L = new Array(n1);
  let R = new Array(n2);
  for (let i = 0; i < n1; i++) {
    L[i] = A[p + i];
  }
  for (let j = 0; j < n2; j++) {
    R[j] = A[q + j + 1];
  }
  L[n1] = Infinity;
  R[n2] = Infinity;
  let i = 0;
  let j = 0;
  for (let k = p; k <= r; k++) {
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
  }
}
module.exports = {
  mergeSort
};
