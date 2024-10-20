# C++ Program with `std::vector` Operations

This C++ program demonstrates basic operations using the `std::vector` container from the C++ Standard Library. It covers initializing a vector, populating it with values, resizing, copying, and other common vector manipulations.

## Features

The program highlights the following operations with vectors:

1. **Initialization**: Creates a vector of integers with a size of 10.
2. **Populating the Vector**: Fills the vector with values, multiplying the index by 10.
3. **Resizing**: Changes the size of the vector from 10 to 15.
4. **Copying**: Demonstrates how to copy the contents of one vector to another.
5. **Push Back** (Commented out): An example of how to append elements to the vector using `push_back()`. (Currently commented out)

## Code Overview

Here is a breakdown of the key sections of the code:

### 1. Initializing and Filling the Vector
```cpp
vector<int> vk(10); // Vector of size 10
for (int i = 0; i < vk.size(); i++) {
    vk[i] = i * 10; // Filling the vector with values: 0, 10, 20, ..., 90
}
```

This part initializes a vector `vk` of size 10 and populates it with values such that `vk[i] = i * 10`.

### 2. Resizing the Vector
```cpp
vk.resize(15); // Resizes the vector to hold 15 elements
for (int i = 0; i < vk.size(); i++) {
    cout << vk[i] << endl; // Prints the resized vector
}
```

This code resizes the vector `vk` from 10 elements to 15. It prints out the values in the resized vector. Note that the additional elements will have default values of `0`.

### 3. Copying the Vector
```cpp
vector<int> vk1 = vk; // Copies the content of vk to vk1
```

This creates a new vector `vk1` which is a copy of `vk`, including its size and elements.

### 4. Push Back Example (Commented Out)
```cpp
// v.push_back(-1); // This is an example of how to append new elements to the vector
```

This code, currently commented out, shows how to append a new element to the vector using `push_back()`.

## Compilation and Execution

To compile and run the program:

1. **Compilation**: Use the following command to compile the code:
   ```bash
   g++ -o vector_operations vector_operations.cpp
   ```
2. **Execution**: Run the compiled program using:
   ```bash
   ./vector_operations
   ```

## Sample Output

```
hey
0
10
20
30
40
50
60
70
80
90
0
0
0
0
0
```

## Future Enhancements

- **Push Back Example**: Uncomment and demonstrate the use of `push_back()` for dynamic resizing.
- **Exception Handling**: Add error checking for operations such as accessing out-of-bounds elements.
- **Additional Vector Operations**: Explore other vector methods like `insert()`, `erase()`, `clear()`, and `swap()`.

## Takeaway

This program provides a simple introduction to using `std::vector` in C++. Vectors are one of the most commonly used containers in C++ due to their dynamic size and ease of use, and this example covers the basics needed to start working with them effectively.

