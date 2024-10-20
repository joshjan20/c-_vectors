C++ Template Class Program

---

#### Overview:

This program demonstrates the use of **C++ templates** in creating a generic class that works with different data types. The main purpose is to show how we can use templates to write a class that performs the same logic for multiple data types, such as `float`, `int`, `double`, etc., without writing repetitive code for each data type.

In this example, the class `something<T>` accepts two inputs of a generic type `T`, and provides an `add()` function to return the sum of the two inputs.

---

### Code Explanation:

1. **Template Declaration**:
   The program uses C++ templates to create a generic class `something<T>`. The type `T` is a placeholder that can be replaced by any data type (e.g., `int`, `float`, `double`, etc.) when creating an object of the class.

   ```cpp
   template <class T>
   class something {
       // Class members
   };
   ```

2. **Class Members**:
   - `a[2]`: An array of size 2 that stores two values of type `T`.
   - `add()`: A member function that returns the sum of the two elements in the array `a[]`.
   - Constructor `something()`: The constructor prompts the user to input two values.

3. **Constructor**:
   The constructor is responsible for taking two inputs from the user and storing them in the array `a[]`.

   ```cpp
   something<T>::something(){
       cout<<"Enter"<<endl;
       cin>>a[0]>>a[1];
   }
   ```

4. **Add Function**:
   The `add()` function returns the sum of the two elements stored in the array `a[]`.

   ```cpp
   T something<T>::add() {
       return a[0] + a[1];
   }
   ```

5. **Main Function**:
   In the `main()` function, an object of the `something` class is created with `float` as the template type, and the `add()` function is called to return and display the sum of the two float numbers input by the user.

   ```cpp
   int main(){
       something<float> floatsomething;
       cout<<floatsomething.add();
   }
   ```

---

### Features:

- **Template Usage**: The class `something<T>` can work with any data type. In this example, it is demonstrated with `float`.
- **Flexible Data Types**: You can easily change the data type from `float` to `int`, `double`, or any other type without rewriting the logic.
- **Input and Output**: The program takes two values from the user and returns their sum.

---

### How to Use:

1. **Compile and Run**:
   Compile the code using a C++ compiler, such as `g++`:

   ```bash
   g++ -o myprogram program.cpp
   ```

2. **Run the Program**:

   ```bash
   ./myprogram
   ```

3. **Example Output**:
   ```
   Enter
   2.5 3.7
   6.2
   ```

   The program will prompt the user to enter two float values, and it will output their sum.

---

### Customization:

- You can replace `float` with `int`, `double`, or any other data type in the following line to change the behavior of the program for different types:

   ```cpp
   something<float> floatsomething;
   ```

   For example, to use integers:

   ```cpp
   something<int> intsomething;
   ```

---

### Takeaway:

This program is a basic demonstration of how C++ templates can be used to create generic classes that work for different data types. By utilizing templates, the program becomes more flexible and avoids repetitive code for each data type.