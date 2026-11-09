#include <stdio.h>

#include <stdio.h>

int main(void)
{
    int input;
    long sum = 0;

    scanf("%d", &input);

    if (input < 0) {
        printf("NG");
        return 0;
    }

    for (int number = 1; ; number++) {


        if (number > input) {
            break;
        }

        if (number % 3 == 0 || number % 5 == 0) {
            continue;
        }

        sum += number;
    }

    printf("%ld", sum);

    return 0;
}

