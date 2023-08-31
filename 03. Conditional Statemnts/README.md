# Conditional Statements in C Programming

Conditional statements play a crucial role in C programming, enabling decision-making based on specific conditions. Here's a breakdown of the key concepts:

## Types of Conditional Statements

### If Statement
The `if` statement allows you to execute a block of code if a certain condition is true. It follows the format:
```c
if (condition) {
    // Code to execute if condition is true
}
```

### Example of simple If Statements 
```
#include <stdio.h>

int main() {
    int num = 10;
    
    if (num > 0) {
        printf("The number is positive.\n");
    }
    
    return 0;
}

```

### If-Else Statement
The `if-else` statement extends the `if` statement to include code for both true and false conditions. Example:
```c
if (condition) {
    // Code to execute if condition is true
} else {
    // Code to execute if condition is false
}
```

### Examples of If Else Statemnets 
```
#include <stdio.h>

int main() {
    int num = 7;
    
    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    
    return 0;
}

```

### Nested If Statement
You can nest `if` statements to handle more complex conditions. Example:
```c
if (condition1) {
    if (condition2) {
        // Code to execute if both conditions are true
    }
}
```

### Examples of Nested If Statements Statemnets 
```
#include <stdio.h>

int main() {
    int num = 12;
    
    if (num > 0) {
        if (num % 2 == 0) {
            printf("The number is positive and even.\n");
        } else {
            printf("The number is positive and odd.\n");
        }
    } else {
        printf("The number is not positive.\n");
    }
    
    return 0;
}

```


### Else-If Ladder
The `else-if` ladder allows you to test multiple conditions in sequence and execute the code block associated with the first true condition. Example:
```c
if (condition1) {
    // Code to execute if condition1 is true
} else if (condition2) {
    // Code to execute if condition2 is true
} else {
    // Code to execute if none of the conditions are true
}
```

## Ternary Operator
The ternary operator, also known as the conditional operator, provides a concise way to make decisions based on conditions. It takes three operands: a comparison condition, a result if true, and a result if false. Its syntax is condition ? value_if_true : value_if_false. This operator replaces longer if-else statements, enhancing code readability and efficiency.  It follows the format:
```c
variable = (condition) ? expression_if_true : expression_if_false;
```

## Examples

```c
#include <stdio.h>

int main() {
    int num = 10;
    
    if (num > 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is non-positive.\n");
    }
    
    int score = 85;
    
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }
    
    int x = 5;
    int y = (x > 0) ? 10 : 20;
    printf("y = %d\n", y);
    
    return 0;
}
```

### Examples of Ternary operatory 
#### 1.Maximum of Two Numbers 
In this example, the ternary operator is used to determine the maximum of two numbers (a and b).

```C
int a = 10, b = 20;
int max = (a > b) ? a : b;

```

#### 2.Check Even or Odd
This example uses the ternary operator to check whether a given number is even or odd.
```C
int num = 15;
char* result = (num % 2 == 0) ? "Even" : "Odd";

```

#### 3.Absolute Value:
The ternary operator is utilized to calculate the absolute value of an integer x.
```C
int x = -8;
int absX = (x >= 0) ? x : -x;

```

### Switch Statements and Break
Switch statements allow selecting one of many code blocks to execute based on the value of a variable. The `break` statement is crucial within switch cases to terminate execution and prevent fall-through behavior. Fall-through occurs when multiple cases are executed sequentially after the first matching case. Break ensures only the intended case is executed, enhancing predictability.

### Examples of Switch Statements 
#### 1.Day of the Week:
This example demonstrates a switch statement to print the corresponding day of the week based on the value of day.
```C
int day = 3;
switch (day) {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    // ... (cases for other days)
    default:
        printf("Invalid day");
}

```
#### 2.Grade Classification:
The switch statement here categorizes grades into different classifications.
```C
char grade = 'B';
switch (grade) {
    case 'A':
    case 'B':
        printf("Good");
        break;
    case 'C':
        printf("Average");
        break;
    // ... (cases for other grades)
    default:
        printf("Fail");
}

```
#### 3.Menu Selection:
This example uses a switch statement to execute different actions based on a menu selection.
```C
int choice = 2;
switch (choice) {
    case 1:
        printf("Option 1 selected");
        break;
    case 2:
        printf("Option 2 selected");
        break;
    // ... (cases for other options)
    default:
        printf("Invalid choice");
}

```


### Switch Case Properties
- Each case in a switch statement should be unique and non-overlapping.
- The default case is optional and executes if no other case matches.
- Cases are evaluated using strict equality (`==`), not relational operators.
- A switch statement can only work with integral types like `int` and `char`.

### Nested Switch Statements
Nested switch statements involve using a switch statement within another. This approach can be used for complex decision-making scenarios. However, it's essential to use proper indentation and maintain readability to avoid confusion.

These concepts are fundamental in C programming and enable effective decision-making and code structuring.

