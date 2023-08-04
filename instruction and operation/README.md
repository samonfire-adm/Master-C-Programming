# C Language : Instructions and Operators 

## Instruction in C

- An instruction in C refers to a single operation or statement that the computer can understand and execute.
- C is a procedural programming language, where instructions are executed in a sequence to perform specific tasks.

## Types of Instructions

1. **Declaration Instruction**:
   - Used to declare variables with their data types.
   - Example:
     ```c
     int age;
     float height;
     ```

2. **Assignment Instruction**:
   - Used to assign values to variables.
   - Example:
     ```c
     age = 25;
     height = 5.8;
     ```

3. **Control Instruction**:
   - Used to control the flow of program execution.
   - Examples:
     - `if` statement:
       ```c
       if (age >= 18) {
           printf("You are an adult.\n");
       }
       ```
     - `while` loop:
       ```c
       while (count < 10) {
           printf("%d ", count);
           count++;
       }
       ```

4. **Function Call Instruction**:
   - Used to call functions and execute their code.
   - Example:
     ```c
     printf("Hello, World!\n");
     ```

## Type Conversion in C

- Type conversion, also known as type casting, is the process of converting one data type to another.
- Implicit type conversion (coercion) occurs automatically by the compiler.
- Explicit type conversion (casting) is done explicitly by the programmer.

**Implicit Type Conversion Example**:
```c
int num = 10;
float result = num + 3.14;
```

**Explicit Type Conversion Example**:
```c
float num1 = 5.5;
int num2 = (int)num1;
```

## Operator Precedence and Associativity

- Operator precedence determines the order of evaluation of operators in an expression.
- Operator associativity resolves the order when multiple operators have the same precedence.

Example:
```c
int result = 10 + 20 * 2; // Here, multiplication (*) has higher precedence than addition (+).
```

Table of Operator Precedence and Associativity:
```
Highest Precedence         Associativity
----------------------------------------
() [ ] -> .                Left to Right
++ -- ! ~ + -              Right to Left
* / %                      Left to Right
+ -                        Left to Right
<< >>                      Left to Right
< <= > >=                  Left to Right
== !=                      Left to Right
&                          Left to Right
^                          Left to Right
|                          Left to Right
&&                         Left to Right
||                         Left to Right
? :                        Right to Left
= += -= *= /= %= <<= >>=   Right to Left
,                          Left to Right
```

## Control Instructions

Control instructions are used to alter the flow of program execution based on conditions.

### Types of Control Instructions

1. **Selection Control**:
   - `if`, `else if`, `else`: Used to make decisions based on conditions.
   - Example:
     ```c
     if (score >= 90) {
         printf("Grade: A\n");
     } else if (score >= 80) {
         printf("Grade: B\n");
     } else {
         printf("Grade: C\n");
     }
     ```

2. **Loop Control**:
   - `while`, `for`, `do-while`: Used to repeat a block of code until a condition is met.
   - Example:
     ```c
     int i = 0;
     while (i < 5) {
         printf("%d ", i);
         i++;
     }
     ```

3. **Jump Control**:
   - `break`, `continue`, `return`: Used to change the normal flow of program execution.
   - Example:
     ```c
     for (int i = 1; i <= 10; i++) {
         if (i == 5) {
             break; // Exit the loop when i is 5.
         }
         printf("%d ", i);
     }
     ```

## Operators in C

Operators are symbols that perform operations on variables or values.

### Types of Operators

1. **Arithmetic Operators**:
   - `+`, `-`, `*`, `/`, `%`
   - Example:
     ```c
     int sum = num1 + num2;
     ```

2. **Relational Operators**:
   - `==`, `!=`, `<`, `>`, `<=`, `>=`
   - Example:
     ```c
     if (x > y) {
         printf("x is greater than y.\n");
     }
     ```

3. **Logical Operators**:
   - `&&`, `||`, `!`
   - Example:
     ```c
     if (score >= 60 && score <= 100) {
         printf("You passed the exam.\n");
     }
     ```

4. **Assignment Operators**:
   - `=`, `+=`, `-=`, `*=`, `/=`, `%=`
   - Example:
     ```c
     int count = 0;
     count += 1; // Equivalent to count = count + 1;
     ```

5. **Increment and Decrement Operators**:
   - `++`, `--`
   - Example:
     ```c
     int x = 5;
     x++; // Equivalent to x = x + 1;
     ```

6. **Bitwise Operators**:
   - `&`, `|`, `^`, `~`, `<<`, `>>`
   - Example:
     ```c
     int result = a & b;
     ```

7. **Conditional Operator (Ternary Operator)**:
   - `condition ? expression1 : expression2`
   - Example:
     ```c
     int max = (num1 > num2) ? num1 : num2;
     ```

## Conclusion

Understanding instructions, type conversion, operator precedence, associativity, and control instructions are crucial for writing efficient and correct C programs. Practice and experimentation will help you master these concepts and become a proficient C programmer.

**Date: 2023-08-04**