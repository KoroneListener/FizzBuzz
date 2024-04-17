#include <stdio.h>


// Original Fizzbuzz function
void Fizzbuzz(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 15 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
}

// Upgraded ?
void Fizzbuzz2(int n) {
    int i = 1;
    switch (i % 15) {
        case 11: do { printf("%d\n",       i++);
        case 14:      printf("Fizz\n",     i++);
        case 5:       printf("%d\n",       i++);
        case 15:      printf("%d\n",       i++);
        case 4:       printf("FizzBuzz\n", i++);
        case 1:       printf("%d\n",       i++);
        case 12:      printf("%d\n",       i++);
        case 2:       printf("Fizz\n",     i++);
        case 6:       printf("%d\n",       i++);
        case 3:       printf("Buzz\n",     i++);
        case 10:      printf("Fizz\n",     i++);
        case 7:       printf("%d\n",       i++);
        case 13:      printf("%d\n",       i++);
        case 8:       printf("Fizz\n",     i++);
        case 9:       printf("Buzz\n",     i++);
                 } while(i < n);
    }
}

void Fizzbuzz3(int n) {
    const char *format[] = {
        "%d\n", "Fizz\n", "%d\n", "%d\n", "FizzBuzz\n",
        "%d\n", "%d\n", "Fizz\n", "%d\n", "Buzz\n",
        "Fizz\n", "%d\n", "%d\n", "Fizz\n", "Buzz\n"
    };

    int i = 1;
    switch (i % 15) do {
        for (int j = 0; j < 5; j++) {
            printf(format[i % 15], i);
            i++;
        }
        case 1:
        for (int j = 0; j < 10; j++) {
            printf(format[i % 15], i);
            i++;
        }
    } while (i < n);
}

int main() {
    Fizzbuzz3(100);
    return 0;
}
