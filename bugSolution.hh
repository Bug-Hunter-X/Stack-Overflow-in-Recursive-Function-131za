function foo_iterative(x: int): int {
  var result: int = 1;
  for (var i = 1; i <= x; ++i) {
    result *= i;
  }
  return result;
}

function bar(x: int): int {
  if (x < 0) {
    return 0;
  } else {
    return foo_iterative(x);
  }
}

<<main>>
function main(): void {
  echo bar(5);
}
