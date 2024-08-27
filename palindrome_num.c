#include <stdio.h>
#include <stdbool.h>  // Include this header to use bool

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) { //checking for the exceptions
        return false;
    }
    int reverse = 0;
    while (x > reverse) {
        reverse = reverse * 10 + x % 10; //chceking all the digits in the number
        x /= 10;
    }
    return x == reverse || x == reverse / 10;
}

int main() {
    int num = 121; //sample input
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}
