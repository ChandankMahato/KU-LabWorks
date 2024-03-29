function drawBLALine(X0, Y0, X1, Y1) {
  let vertexData = [];

  let dx = Math.abs(X1 - X0);
  let dy = Math.abs(Y1 - Y0);
  let slope = dy / dx;

  let X, Y, steps, p;
  if (slope < 1) {
    // m<1
    if (X0 > X1) {
      [X0, Y0, X1, Y1] = [X1, Y1, X0, Y0];
    }
    X = X0;
    Y = Y0;
    vertexData.push(normalise(X, canvasWidth));
    vertexData.push(normalise(Y, canvasHeight));
    steps = X1 - X0;
    p = 2 * dy - dx;
    for (let i = 0; i < steps; i++) {
      if (p >= 0) {
        Y++;
        p += 2 * dy - 2 * dx;
      } else {
        p += 2 * dy;
      }
      X++;
      vertexData.push(normalise(X, canvasWidth));
      vertexData.push(normalise(Y, canvasHeight));
    }
  } else {
    // m>1
    if (Y0 > Y1) {
      [X0, Y0, X1, Y1] = [X1, Y1, X0, Y0];
    }
    X = X0;
    Y = Y0;
    vertexData.push(normalise(X, canvasWidth));
    vertexData.push(normalise(Y, canvasHeight));
    steps = Y1 - Y0;
    p = 2 * dx - dy;
    for (let i = 0; i < steps; i++) {
      if (p >= 0) {
        X++;
        p += 2 * dx - 2 * dy;
      } else {
        p += 2 * dx;
      }
      Y++;
      vertexData.push(normalise(X, canvasWidth));
      vertexData.push(normalise(Y, canvasHeight));
    }
  }
  DrawObject(gl.POINTS, 1, Red, vertexData, 0, vertexData.length);
}
