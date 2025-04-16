# Template Instantiation Example

This project demonstrates the use of C++ templates with explicit and implicit instantiations. It includes examples of handling signed and unsigned types using `if constexpr` and `switch` statements.

## Features

- Demonstrates template instantiation for various types (`int`, `char`, `short`, `long`, `unsigned int`, etc.).
- Handles signed and unsigned types separately using `if constexpr` and `std::is_signed`.
- Includes explicit template instantiations for better control over the generated code.
- Uses `switch` statements to handle specific values for each type.

## Requirements

- **C++17 or later**: The project uses `if constexpr`, which requires C++17.
- **CMake**: To build the project.
- **Compiler**: Any modern C++ compiler that supports C++17, such as:
  - GCC 7.1 or later
  - Clang 5.0 or later
  - MSVC 2017 or later
  - Intel `icpx` compiler

## Build Instructions

1. Clone the repository or download the source files.
2. Create a build directory:
   ```bash
   mkdir build
   cd build
   ```
3. Run CMake to configure the project:
   ```bash
   cmake ..
   ```
4. Build the project:
   ```bash
   cmake --build .
   ```
5. Run the executable:
   ```bash
   ./template_instantiation_example
   ```

## Testing

The project includes a basic test setup using CMake's testing framework.

1. Run the tests:
   ```bash
   ctest
   ```
2. Example output:
   ```
   Test project /path/to/build
       Start 1: RunTemplateInstantiationExample
   1/1 Test #1: RunTemplateInstantiationExample ..........   Passed    0.01 sec

   100% tests passed, 0 tests failed out of 1
   ```

## Example Output

When you run the program, it will output messages for various template instantiations. Example:

```
Value is 0
Value is 1
Value is 2
Value is 10
Value is 20
Value is 50
Value is 100
Value is -1
Value is -10
Value is -100
Value is something else: a
Value is something else: b
Value is something else: z
Value is something else: x
Value is -10
Value is something else: 32767
Value is something else: 100000
Value is something else: -100000
Value is 0
Value is something else: 4294967295
Value is 255 (maximum for unsigned char)
Value is 0
Value is something else: 65535
Value is 0
Value is something else: 1000000
Value is something else: 4294967295
```

## File Structure

- `template_instantiation_example.cpp`: The main source file containing the template function and examples.
- `CMakeLists.txt`: The CMake configuration file for building the project.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.

## Contributing

Contributions are welcome! Feel free to open issues or submit pull requests.

## Contact

For any questions or feedback, please contact the project maintainer.

