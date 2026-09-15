# Development Log

## September 14, 2026 at 5:50 PM

I changed the original stack into the fixed array version required for the assignment. I used `int data[100]` to store the values and added `topIndex` to keep track of the top value.

I decided to start `topIndex` at `-1` because the array begins at index `0`. This gives the stack a clear way to represent that it is empty.

## September 14, 2026 at 5:57 PM

I finished the functions in `Stack.cpp` and tested them in `main.cpp`. I pushed 10, 20, and 30 into the stack. I then checked the size, looked at the top value, and removed a value.

For the error behavior, I decided that a full `push()` would print an error and stop without changing the stack. An empty `pop()` or `peek()` prints an error and returns `-1`. I chose this because we were told not to use exceptions.

## September 14, 2026 at 6:12 PM

I added tests for the full and empty stack cases. I filled a stack with 100 values and tried to push one more. The extra push was rejected, the size stayed at 100, and the top value stayed the same.

I also called `pop()` and `peek()` on an empty stack. Both returned `-1`, printed the correct error messages, and did not change the size.

If I did this assignment again, I would update `Stack.h` and `Stack.cpp` together before building. This would avoid errors caused by the declaration and definition not matching. I would also plan my boundary tests before writing the driver.