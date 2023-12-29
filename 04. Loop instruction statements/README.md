

## Types of Loops in C

### 1. For Loop
The for loop is used for a specific number of iterations. It consists of an initialization, condition, and increment/decrement.

```c
for (int i = 0; i < 5; i++) {
    // Code to be executed
}
```

### i. Examples For Loop
1. Printing numbers from 1 to 5 using a for loop:
   ```c
   for (int i = 1; i <= 5; i++) {
       printf("%d ", i);
   }
   ```

2. Calculating the factorial of a number using a for loop:
   ```c
   int n = 5;
   int factorial = 1;
   for (int i = 1; i <= n; i++) {
       factorial *= i;
   }
   printf("Factorial of %d is %d", n, factorial);
   ```

3. Looping through an array and printing its elements:
   ```c
   int numbers[] = {10, 20, 30, 40, 50};
   for (int i = 0; i < 5; i++) {
       printf("%d ", numbers[i]);
   }
   ```



### 2. While Loop
The while loop continues as long as a given condition is true.

```c
while (condition) {
    // Code to be executed
}
```

### ii. Examples of While Loop
1. Printing even numbers from 2 to 10 using a while loop:
   ```c
   int num = 2;
   while (num <= 10) {
       printf("%d ", num);
       num += 2;
   }
   ```

2. Finding the first power of 2 greater than 100 using a while loop:
   ```c
   int power = 1;
   while (power <= 100) {
       power *= 2;
   }
   printf("The first power of 2 greater than 100 is %d", power);
   ```

3. Input validation using a while loop:
   ```c
   int number;
   while (1) {
       printf("Enter a positive number: ");
       scanf("%d", &number);
       if (number > 0) {
           break;
       }
   }
   ```



### 3. Do-While Loop
The do-while loop is similar to the while loop, but it guarantees at least one execution.

```c
do {
    // Code to be executed
} while (condition);
```

### iii.Examples of  Do While Loop
1. Calculating the sum of numbers from 1 to 5 using a do-while loop:
   ```c
   int sum = 0;
   int i = 1;
   do {
       sum += i;
       i++;
   } while (i <= 5);
   printf("Sum is %d", sum);
   ```

2. Menu-driven program using a do-while loop:
   ```c
   int choice;
   do {
       printf("1. Option 1\n2. Option 2\n3. Exit\nEnter your choice: ");
       scanf("%d", &choice);
       switch (choice) {
           case 1:
               // Perform Option 1
               break;
           case 2:
               // Perform Option 2
               break;
       }
   } while (choice != 3);
   ```

3. Input validation for a positive number using a do-while loop:
   ```c
   int num;
   do {
       printf("Enter a positive number: ");
       scanf("%d", &num);
   } while (num <= 0);
   ```



## Nested Loops
Nested loops are loops within loops. They are used for tasks requiring repeated operations on multiple levels, like matrix manipulation.

```c
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        // Code to be executed
    }
}
```
### iv. Examples of Nested Loop
Nested loops are used for various tasks like printing patterns. Here's an example:

```c
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        printf("(%d, %d) ", i, j);
    }
    printf("\n");
}
```

## Break and Continue Statements
- **Break**: Used to exit a loop prematurely.
  
  ```c
  for (int i = 0; i < 5; i++) {
      if (i == 3) {
          break; // Exits the loop when i is 3
      }
  }
  ```

### Examples of Break Statements 
The `break` statement in C is used to exit a loop prematurely. Here are three examples of how it can be used:

1. **Exiting a For Loop:** In this example, the `break` statement is used to exit a `for` loop when a specific condition is met.

   ```c
   for (int i = 1; i <= 10; i++) {
       if (i == 5) {
           break; // Exit the loop when i is 5
       }
       printf("%d ", i);
   }
   ```

   This loop will print numbers from 1 to 4 because it breaks out when `i` becomes 5.

2. **Exiting a While Loop:** In a `while` loop, `break` can be used to exit the loop based on a certain condition.

   ```c
   int num = 2;
   while (num <= 10) {
       printf("%d ", num);
       if (num == 5) {
           break; // Exit the loop when num is 5
       }
       num++;
   }
   ```

   This loop will print numbers from 2 to 5 and then exit because of the `break` statement.

3. **Exiting an Infinite Loop:** `break` is commonly used to exit infinite loops, like those used in menu-driven programs.

   ```c
   while (1) {
       int choice;
       printf("1. Option 1\n2. Option 2\n3. Exit\nEnter your choice: ");
       scanf("%d", &choice);
       
       switch (choice) {
           case 1:
               // Perform Option 1
               break;
           case 2:
               // Perform Option 2
               break;
           case 3:
               // Exit the loop when the user chooses to exit
               break;
           default:
               printf("Invalid choice!\n");
       }
   }
   ```

   The `break` statements here allow the user to exit the loop by choosing option 3.

These examples illustrate how the `break` statement can be used to control the flow of loops in C and exit them under specific conditions.

- **Continue**: Skips the current iteration and continues with the next iteration of the loop.

  ```c
  for (int i = 0; i < 5; i++) {
      if (i == 3) {
          continue; // Skips iteration when i is 3
      }
  }
  ```
  
The `continue` statement in C is used to skip the current iteration of a loop and continue with the next iteration. Here are three examples of how it can be used:

1. **Skipping Even Numbers:** In this example, the `continue` statement is used within a `for` loop to skip even numbers and print only the odd ones.

   ```c
   for (int i = 1; i <= 10; i++) {
       if (i % 2 == 0) {
           continue; // Skip even numbers
       }
       printf("%d ", i);
   }
   ```

   This loop will print odd numbers from 1 to 9, skipping even numbers.

2. **Processing a List, Skipping Specific Values:** In this scenario, a `for` loop iterates through an array and uses `continue` to skip specific values (e.g., skip processing negative numbers).

   ```c
   int numbers[] = {10, -5, 20, -8, 15};
   for (int i = 0; i < 5; i++) {
       if (numbers[i] < 0) {
           continue; // Skip negative numbers
       }
       printf("%d ", numbers[i]);
   }
   ```

   This loop will print only the positive numbers from the array.

3. **Menu-Driven Program with Validation:** In this example, a `while` loop is used in a menu-driven program, and `continue` helps handle invalid choices by skipping to the next iteration.

   ```c
   while (1) {
       int choice;
       printf("1. Option 1\n2. Option 2\n3. Exit\nEnter your choice: ");
       scanf("%d", &choice);
       
       switch (choice) {
           case 1:
               // Perform Option 1
               break;
           case 2:
               // Perform Option 2
               break;
           case 3:
               // Exit the loop when the user chooses to exit
               break;
           default:
               printf("Invalid choice! Try again.\n");
               continue; // Skip to the next iteration
       }
   }
   ```

   The `continue` statement is used to handle invalid menu choices and prompt the user again.


