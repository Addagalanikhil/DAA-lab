#include <stdio.h>
#include <math.h>

int countDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + countDigits(n / 10);
}

int sumOfPowers(int n, int power) {
    if (n == 0) {
        return 0;
    }
    return pow(n % 10, power) + sumOfPowers(n / 10, power);
}

int isArmstrong(int n) {
    int power = countDigits(n);
    return n == sumOfPowers(n, power);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is not an Armstrong number.\n", n);
    }
    return 0;
}

