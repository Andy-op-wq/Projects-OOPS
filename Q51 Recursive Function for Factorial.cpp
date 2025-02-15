/* Problem: Write a recursive function factorial(int n) that
 computes the factorial of a number. Call this function from main() 
 and test it with different inputs.  */
 #include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)  // Base case: factorial of 0 or 1 is 1
        return 1;
    else
        return n * factorial(n - 1);  // Recursive case
}

int main() {
    int num;

    // Test the function with different inputs
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}

