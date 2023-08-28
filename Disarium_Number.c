#include <stdio.h>
#include <math.h>

int isDisarium(int num) {
    int originalNum = num;
    int sum = 0;
    int position = 1;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, position);
        num /= 10;
        position++;
    }

    return sum == originalNum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isDisarium(number)) {
        printf("%d is a Disarium number.\n", number);
    } else {
        printf("%d is not a Disarium number.\n", number);
    }

    return 0;
}
