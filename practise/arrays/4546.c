#include <stdbool.h>  // For using true/false
#include <stdio.h>     // For input/output functions

int main(void) {
    bool digit_seen[10] = {false}; // Array to track seen digits (0-9)
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10; // Get the last digit
        if (digit_seen[digit])
            break;     // If digit already seen, exit the loop
        digit_seen[digit] = true; // Mark digit as seen
        n /= 10;        // Remove last digit
    }

    if (n > 0)
        printf("Repeated digit\n");
    else
        printf("No repeated digit\n");

    return 0;
}
