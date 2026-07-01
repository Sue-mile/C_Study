#include <stdio.h>
int main(void) {
    int i = 1, j = 2;
    {
        int i = 3;
        {
            int i = 4;
        }
        printf("%d\n", i);
    }
    printf("%d\n", i);

}// 시험 문제를 푸는데 내가 푼 문제가 답이 맞는지 알고 싶어서 적었다.
// Just wanted to check if my answer was correct.

//내가 적은 결과 : i : 3, i : 1
//Your results are correct.
// 오 맞췄다!

