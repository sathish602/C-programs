#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digits = 0, r;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Step 1: Count number of digits
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    
    }
    printf("count %d",digits);

    temp = n;

    // Step 2: Calculate Armstrong sum
    while (temp > 0) {
        r = temp % 10;
        sum = sum + pow(r, digits);
        temp = temp / 10;
    }

    // Step 3: Check result
    if (sum == n)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
