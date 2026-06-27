<<<<<<< HEAD
=======
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

>>>>>>> c36d50cd821f9dba0938f2bf82571905f671706e
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
<<<<<<< HEAD

---
13. 정수형과 signed/unsigned

정수형은 말 그대로 정수(integer)를 저장하는 자료형이다.

    int age = 33;
    long long money = 10000000;
정수형은 크게 signed 와 unsigned 로 나눌 수 있는데, 

|signed|unsigned|
|---|---|
|signed|양수, 음수, 0 저장 가능|
|unsigned|0과 양수만 저장 가능|

으로 정수형은 signed 가 기본값이다.

    int a = -10;            // 0포함, 모든 정수 저장
    unsigned int b = 10;    // 0과 양수만 저장



정수형의 범위는 <limits.h>에 정의된 값을 통해 확인할 수 있다.

    #include<stdio.h>
    #include<limits.h>

    int main(void)
    {
        printf("int 최소값 = %d\n", INT_MIN);
        printf("int 최대값 = %d\n", INT_MAX);
        return 0;
    }

---

14. 문자형 char
문자를 저장하는 자료형이다.

        char ch = 'A';
    문자는 ' '로 표현하며,  
    C언어에서 문자는 ASCII 코드 값으로 저장된다.

        #include<stdio.h>
        int main(void)
        {
            char ch = 'A';

            printf("문자 = %c\n", ch);
            printf("ACKII 코드 = %d\n", ch);
            return 0;
        }
    문자 = A  
    ASCII 코드 = 65  
    가 출력된다.

    즉 'A'는 문자처럼 보이면서도 내부적으로는 숫자 65로 저장된다.

---

15. 실수형 자료형 flaoting
소수점이 있는 수를 저장한다.

|자료형|설명|
|---|---|
|float|작은 범위의 실수|
|double|일반적으로 가장 많이 사용하는 실수형|
|long double|더 큰 범위의 실수령|

C언어에서 실수 상수는 기본적으로 double 로 처리된다.  
float 로 사용하려면 뒤에 f를 붙인다. 이는 c#의 문법과 같다.

    double a = 3.14;
    float b = 3.14f;

실수형의 범위는 <float.h>에 정의된 값을 통해 확인할 수 있다.

    #include <stdio.h>
    #include <float.h>

    int main(void)
    {
        printf("double 최소값 = %e\n", DBL_MIN);
        printf("double 최대값 = %e\n", DBL_MAX);

        return 0;
    }
---

16. 열거형 enum
열거형은 이름에 정수 값을 붙여 사용하는 자료형이다.
기본적으로는 0부터 시작한다.

        enum day{SUN, MON, TUE, WED, THU, FRI, SAT};
    각 값은
    
        SUN = 0
        MON = 1
        TUE = 2
        WED = 3
        THU = 4
        FRI = 5
        SAT = 6
    을 기본으로 중간에 값을 직접 지정할 수도 있다.

        enum = fruit {APPLE, PEAR, MANGO = 4, GRAPE};
    이 경우에는

        APPLE = 0
        PEAR = 1
        MANGO = 4
        GRAPE = 5

    열거형은 특히 위에서 한번 설명했던 내용이며, 관련예시를 다시 보자면, 
        
        #include<stdio.h>
        int main(void)
        {
            enum day {SUN, MON, TUE, WED, THU, FRI, SAT};
            enum = fruit {APPLE, PEAR, MANGO = 4, GRAPE};

            printf("TUE = %d\n", TUE);
            printf("PEAR = %d\n", PEAR);
            printf("GRAPE = %d\n", GRAPE);

            return 0;
        }
=======
>>>>>>> c36d50cd821f9dba0938f2bf82571905f671706e
