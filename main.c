#include <stdio.h>

int main(void)
{
    int input;
    long sum = 0;

    scanf("%d", &input);

    // 負の数が入力された場合はNGを表示する
    if (input < 0) {
        printf("NG");
        return 0;
    }

    // 1から入力された数まで順番に調べる
    for (int number = 1; ; number++) {

        // 入力された数を超えたら繰り返しを終了する
        if (number > input) {
            break;
        }

        // 3または5の倍数は合計に加えず飛ばす
        if (number % 3 == 0 || number % 5 == 0) {
            continue;
        }

        // 条件に当てはまる数だけを合計する
        sum += number;
    }

    printf("%ld", sum);

    return 0;
}


