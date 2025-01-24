# Stack Overflow in Recursive Factorial Function

This repository demonstrates a common error in recursive functions: stack overflow. The `foo` function calculates the factorial recursively. When called with a large number, it exceeds the maximum recursion depth, resulting in a stack overflow error.

The `bug.hh` file contains the buggy code.  The `bugSolution.hh` file provides a corrected version using iterative approach to avoid stack overflow.

## How to Reproduce

1. Clone the repository.
2. Compile and run `bug.hh` (this will likely crash).
3. Compile and run `bugSolution.hh` (this will work correctly).
