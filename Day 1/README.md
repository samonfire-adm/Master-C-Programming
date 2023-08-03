# Day 1: C Programming Language Notes

## Introduction

- C is a popular programming language known for its simplicity and versatility.
- It is widely used in system programming, embedded systems, and application development.
- Learning C is a stepping stone to understanding other programming languages.

## Getting Started

### Creating a C File and Hello World Program

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

- The above code is a simple "Hello, World!" program in C.
- It displays the message "Hello, World!" on the screen.
- To create a C file, use a text editor like Notepad (Windows) or code editor like Visual Studio Code.
- Save the file with the .c extension, e.g., hello.c.

### Running C Programs

- On Windows:
  - Open Command Prompt (cmd).
  - Navigate to the file's directory using the `cd` command.
  - Compile the program using `gcc`: `gcc hello.c -o hello.exe`.
  - Run the program: `hello.exe`.

- On Mac:
  - Open Terminal.
  - Navigate to the file's directory using the `cd` command.
  - Compile the program using `gcc`: `gcc hello.c -o hello`.
  - Run the program: `./hello`.

## Variables in C

- Variables are used to store data in a C program.
- They must be declared with a specific data type before use.

### Naming Convention

- Variables should start with a letter (a-z, A-Z) or an underscore (_).
- Followed by letters, digits (0-9), or underscores.
- Avoid using reserved keywords as variable names.

## Data Types in C

- Data types define the type of data that a variable can hold.

### Classification Based on Memory Space

1. **Primitive Data Types**:
   - int: Integer data type, typically 4 bytes on most systems.
   - char: Character data type, 1 byte in size.
   - float: Floating-point data type, typically 4 bytes.
   - double: Double-precision floating-point data type, usually 8 bytes.

2. **Derived Data Types**:
   - Arrays: Collection of elements of the same data type.
   - Structures: Grouping of different data types under one name.
   - Pointers: Stores memory addresses of other variables.

## Keywords in C

- Keywords are reserved words with predefined meanings in C.
- They cannot be used as variable names.

### Common Keywords

- `int`, `char`, `float`, `double`: Data type keywords.
- `if`, `else`, `while`, `for`: Control flow keywords.
- `switch`, `break`, `continue`: Switch and loop control keywords.
- `return`: Used to exit functions.

## Constants in C

- Constants are fixed values that cannot be modified during program execution.
- Two types: Numeric Constants (e.g., 10, 3.14) and Character Constants (e.g., 'A', '\n').

## Format Specifiers in C

- Format specifiers are used with `printf` and `scanf` functions to specify data type and format.

### Format Specifiers in C

- Format specifiers are used with `printf` and `scanf` functions to format the input and output of data.
- They start with the percent sign `%` followed by a character that represents the data type.

### Commonly Used Format Specifiers

- `%d`: Used for integers (signed decimal).
- `%u`: Used for unsigned integers.
- `%f`: Used for floating-point numbers (float).
- `%lf`: Used for double precision floating-point numbers.
- `%c`: Used for characters.
- `%s`: Used for strings (character arrays).

### Examples of Format Specifiers

```c
#include <stdio.h>

int main() {
    int age = 25;
    float height = 5.8;
    char grade = 'A';
    char name[] = "John Doe";

    printf("Age: %d\n", age);
    printf("Height: %f\n", height);
    printf("Grade: %c\n", grade);
    printf("Name: %s\n", name);

    return 0;
}
```

In the above example, different format specifiers are used to display the variables `age`, `height`, `grade`, and `name` with appropriate formatting.

### Format Specifiers with Precision (Floating-Point Numbers)

```c
#include <stdio.h>

int main() {
    float pi = 3.1415926535;

    printf("Value of pi with 2 decimal places: %.2f\n", pi);
    printf("Value of pi with 4 decimal places: %.4f\n", pi);

    return 0;
}
```

In the example above, the precision of floating-point numbers is controlled using the `.2f` and `.4f` format specifiers.

Format specifiers are essential in C programming for proper input and output formatting. Using the correct format specifiers is crucial to avoid unexpected results and errors.

## Taking Input in C

- Input can be taken in C using the `scanf` function.

### scanf Function in C

- The `scanf` function in C is used to read input from the user.
- It allows the program to accept data from the user during runtime.
- `scanf` stands for "scan formatted" and works similarly to `printf` with format specifiers.

### Syntax of scanf

```c
#include <stdio.h>

int main() {
    // Declare variables to store the input
    int num;
    char character;
    
    // Input using scanf
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("Enter a character: ");
    scanf(" %c", &character); // Notice the space before %c to consume any previous newline character.
    
    // Output the input values
    printf("You entered: %d and %c\n", num, character);

    return 0;
}
```

In the above example, the `scanf` function is used to read an integer and a character input from the user. The format specifiers `%d` and `%c` are used to specify the expected data types of the input.



## Comments in C

- Single-line comments start with `//` and are used to add explanatory notes to the code.

## Multi-line Comments in C

- Multi-line comments, also known as block comments, are used to add comments that span multiple lines in the C code.
- They are helpful for providing detailed explanations, documenting code, or temporarily disabling a block of code.
- Multi-line comments are not executed by the compiler or interpreter; they are purely for human readability.

### Syntax of Multi-line Comments

```c
/* This is a multi-line comment.
   It can span multiple lines.
   The code inside the comment is ignored by the compiler.
*/
```

### Example of Multi-line Comment

```c
#include <stdio.h>

int main() {
    /* This is a multi-line comment.
       We are demonstrating its usage here.
       It can extend over several lines.
    */

    printf("Hello, World!\n");

    return 0;
}
```

In the example above, the multi-line comment starting with `/*` and ending with `*/` is used to provide additional information about the code inside the `main()` function. The comment is purely for human understanding and will not affect the output of the program.

## Single-line Comments (Recap)

Just as a quick recap, single-line comments in C start with `//` and extend until the end of the line. They are used for brief explanations or notes on a single line of code.

### Example of Single-line Comment

```c
#include <stdio.h>

int main() {
    // This is a single-line comment. It explains the following code.
    printf("Hello, World!\n");

    return 0; // Another comment explaining the return statement.
}
```

In the example above, single-line comments are used to provide explanations for the `printf` statement and the `return` statement.

Using comments appropriately in your code helps improve code maintainability and makes it easier for others to understand your code. Remember that comments are essential for conveying the purpose and logic of your program.



## Compilation of Code

- Compilation is the process of translating human-readable C code into machine-readable binary code.
- The compiler checks for syntax errors and generates an executable file.

Remember to practice and experiment with C programming to reinforce your understanding. Happy coding!

