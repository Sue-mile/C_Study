8. 기본 구성

        #include <stdio.h>

        int main(void)
        {
            // 실행할 문장
            return 0;
        } 
    
    |구성요소|설명|
    |---|---|
    |선행처리 지시어|#include 처럼 컴파일 전에 처리되는 문장|
    |함수|특정 기능을 수행하는 코드 블록|
    |main함수|프로그램 실행 시작점|
    |문장|실제로 실행되는 명령|
    |주석|코드 설명, 실행되지 않음|

---
9. 에러와 경고
- 에러 :  
프로그램을 컴파일/실행 할 수 없게 만드는 오류다.

        #include<stdio.h>
        ina main(void)
        {
            printf("I am Sue :3 \n")
            return 0;
        }
    이 코드에는 printf() 문장 끝에 semicollon(;) 이 없어, 실행할 수 없고 에러가 뜬다.

- 경고 :  
컴파일은 가능하지만 문제가 생길 수 있음을 알려주는 메세지다.  
무시가 가능하지만 이후 실행 오휴나 논리 오류 등으로 이어질 수 있다.
---

10. 자료형 개념  
자료형이랑 컴퓨터에서 값을 표현하는 방법을 정의한 것이다.

- 어떤 종류의 값을 저장할 수 있는가
- 값을 저장하기 위해 메모리를 얼마나 사용하는가
- 그 값으로 어떤 연산을 수행할 수 있는가

예를들어 int는 정수를 저장하고, double 은 실수를 저장한다.

    int age = 33;
    double height = 170.4;
---

11. 자료형의 종류

C 언어의 자료형은 크게 세가지로 나눌 수 있다.
1. 기본형 :  
정수형, 실수령, 문자형이 존재한다.

|분류|자료형명|
|---|---|
|정수형|int, short int, long int, long long int 등|
|실수형|float, doube, long double 등|
|문자형|char|

정수형과 문자형은 실수형과는 달리 signed, unsigned 를 붙일 수 있다.

    signed int a;
    unsigned int b;
    singed char c;
    unsigned char d;

2. 열거형 :  
나열된 단어를 정수 값처럼 사용하는 자료형이다.  
이전, C#언어 공부하면서 배운 enum 과 같다.

        enum day {SUN, MON, TUE, WED, THU, FRI, SAT };
    기보적으로 0 부터 시작되며, array[0] 이랑 비슷한 느낌이라 볼 수 있다.  
    즉, SUN = 0, MON = 1, TUE = 2, ... , SAT = 6 이 되겠다.

    특벌한 방식도 있다. 

        enum fruit {APPLE, PEAR, MANGO = 4,GRAPE};
    이 경우에는 APPLE = 0, PEAR - 1, MANGI = 4, GRAPE = 5 가 된다.

    이걸 좀 더 예를 들자면, 

        #include<stdio.h>
        int main(void)
        {
            enum day {SUN, MON, TUE, WED, THU,FRI, SAT};
            enum fruit {APPLE, PEAR, MANGO = 4, GRAPE};

            printf("TUE의 값 = %d\n", TUE);
            printf("PEAR의 값 = %d\n", PEAR);
            printf("GRAPE의 값 = %d\n",GRAPE);

            return 0;
        }

    TUE의 값 = 2  
    PEAR의 값 = 1  
    GRAPE의 값 = 5

3. 파생형 :  
기본형을 바탕으로 만들어지는 자료형이다.

대표적으로는 배열형, 구조체형, 공용체형, 포인터형 이 존재한다.  
이중 구조체과 오니터는 C 언어에서 매우 중요하며 특히 자료구조를 공부할 때 포인터와 구조체를 많이 사용하게 된다.

---

일단은... 피곤하니 오늘 공부는 여기까지...  
이어서.

12. 기본 자료형

|분류|자료형|설명|
|---|---|---|
|정수형|short, int, long, long long|정수 저장|
|문자형|char|문자 1개 저장|
|실수형|float, double, long double|소수점이 있는 수 저장|

이 의미는  
1. 어떤 값을 저장할 수 있는가
2. 메모리를 얼마나 사용하는가
3. 어떤 연산을 할 수 있는가  
이다.
