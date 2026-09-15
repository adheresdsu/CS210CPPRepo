# Array Based Stack ADT

For this lab, I made a stack that stores integers in an array. It follows last in, first out order, so the last value added is the first value removed. The array can hold up to 100 integers.

## Reflection Questions

### 1. What value does `topIndex` hold immediately after construction, and why?

When my stack is created, `topIndex` starts at `-1`. Since the first valid position in `data` is index `0`, using `-1` means there is currently nothing in the stack. My `isEmpty()` function can just check if `topIndex == -1`. At first I was confused about why it started at `-1`, but it made sense when I saw that the first push changes it to `0`.

### 2. Walk through `push` step by step.

My `push` function first calls `isFull()` to check if the stack already has 100 values. If it is full, an error message is printed and the function stops. If there is space, `topIndex` is increased by one. The new value is then stored in `data[topIndex]`.

The order is important because `topIndex` starts at `-1`. It needs to become `0` before the first value is stored. If I stored the value before increasing `topIndex`, the program would try to use `data[-1]`, which is not a valid array position.

### 3. Give and justify the time complexity of each operation.

My `push` function is O(1) because it checks one condition, increases `topIndex`, and writes to one array position.

My `pop` function is O(1) because it checks if the stack is empty, reads one value, and decreases `topIndex`.

My `peek` function is O(1) because it checks if the stack is empty and directly reads `data[topIndex]`.

My `isEmpty` function is O(1) because it only compares `topIndex` with `-1`.

My `isFull` function is O(1) because it only compares `topIndex` with `99`.

My `size` function is O(1) because it returns `topIndex + 1`.

None of these functions use a loop, so the number of values in the stack does not change how many steps they take.

### 4. What happens when `push` is called while the stack is full?

If my stack is full, `push` prints `Error: cannot push onto a full stack.` The function does not return a value because its return type is `void`. It stops before changing `topIndex` or storing anything in `data`.

I chose this behavior because we were told not to use exceptions. It also stops the program from writing past the end of the array. I tested this by filling the stack with 100 values and trying to push one more. The size stayed at 100.

### 5. What happens when `pop` or `peek` is called while the stack is empty?

If `pop` is called when my stack is empty, it prints `Error: cannot pop from an empty stack.` It then returns `-1`, and `topIndex` does not change.

If `peek` is called when my stack is empty, it prints `Error: cannot peek at an empty stack.` It also returns `-1` without changing `topIndex`.

I used the same value for both errors so the behavior would be consistent. The problem with using `-1` is that someone could also store it as a real value. That is why my functions print an error message too.

### 6. What would need to change if the caller needed more than 100 slots?

The `int data[100]` array would need to be replaced with an array that can grow. The class would also need a variable to remember its current capacity. When the array became full, the class could create a larger array and copy the old values into it.

A normal push could still take O(1) time. A push that needed to grow the array would take O(n) time because every existing value would have to be copied.

### 7. What is one advantage and one disadvantage of using a linked list?

One advantage of a linked list is that the stack would not stop at 100 values. It could continue growing as long as the computer had enough memory.

One disadvantage is that every value would need a pointer connecting it to another node. This would use more memory than my array. It would also make the program more complicated because I would need to manage the pointers correctly.