# Error Log

## Error 1

**Date:** September 14, 2026

**Exact compiler error:**

```text
/Users/aryandhere/Documents/CS210/CS210CPPRepo/03_adt_stack/Stack.cpp:15:13: error: return type of out-of-line definition of 'Stack::pop' differs from that in the declaration
```

**Cause:**

I changed `pop()` in `Stack.h` from `void` to `int`, but `Stack.cpp` still had the old `void Stack::pop()` definition. The return types did not match.

**Fix:**

I changed the definition to `int Stack::pop()`. It now returns the removed value or returns `-1` if the stack is empty.

## Error 2

**Date:** September 14, 2026

**Exact compiler error:**

```text
/Users/aryandhere/Documents/CS210/CS210CPPRepo/03_adt_stack/main.cpp:4:5: error: unknown type name 'Stack'
```

**Cause:**

I accidentally removed `#include "Stack.h"` while editing `main.cpp`. Without the header, the compiler did not recognize the `Stack` class. I also removed `<iostream>`, which caused errors for `std::cout` and `std::endl`.

**Fix:**

I added these lines back to the top of `main.cpp`:

```cpp
#include <iostream>
#include "Stack.h"
```

After adding them, the program compiled and ran correctly.