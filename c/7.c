/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main()
{
    // 이곳에 코드를 작성해주세요!
    int year, mon;

    scanf("%d", &year);
    scanf("%d", &mon);

    if (mon == 2)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            printf("29");
        }
        else
        {
            printf("28");
        }
    }
    else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)
    {
        printf("30");
    }
    else
    {
        printf("31");
    }
    return 0;
}