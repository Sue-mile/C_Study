# C Programming Study Note

### C 언어의 개요
1. 프로그래밍 언어란,  
컴퓨터가 어떤 작업을 수행하도록 명령어를 작성하는 과정이다.  
컴퓨터는 사람이 사용하는 자연어를 직접 이해하지 못하기에 사람이 원하는 작업을 컴퓨터가 처리할 수 있는 형태의 언어로 작성해야 한다.

즉, 프로그래밍은  
사람의 문제 해결 절차 -> 프로그래밍 언어로 표현 -> 컴퓨터의 실행  
순으로 이해할 수 있다.

예를 들어 두 수를 더하는 프로그램을 만든다면 사람은 단순하게 "두 수를 더해라" 라고 생각하지만 컴퓨터에게는 이와 같은 작업이 필요하다.  
1. 두 값을 입력 받는다.
2. 두 값을 더한다.
3. 결과를 출력한다.

---
2. 프로그래밍 언어  
프로그램을 작성하기 위해 사용하는 언어다.

컴퓨터는 최종적으로 기계어를 실행하지만, 사람이 이를 직접 기계어로 프로그램을 작성하는 것을 매우 어렵다. 따라서 사람이 이해하기 쉬운 고급 언어를 사용하고, 컴파일러 혹은 인터프리터가 이를 컴퓨터가 이해할 수 있는 형태로 변환한다.

1. 프로그래밍 언어의 세대  

    |구분|설명|예시|
    |---|---|---|
    |제 1세대 언어|컴퓨터가 직접 이해하는 기계어|010101...|
    |제 2세대 언어|기계어를 기호로 표현한 어샘블리어|ADD AX, 0010H 등|
    |제 3세대 언어|사람이 이해하기 쉬운 고급언어|C, C++, Java, Python 등|

---

3. C언어의 탄생과 특징  

    1. C언어는 1972년 Bell 연구소의 Dennis Ritchie 가 개발한 프로그래밍 언어다.  
    원래 시스템 프로그래밍을 목적으로 만들어졌다. 특히 UNIX 운영체제를 다양한 컴퓨터에 이식하기 위해 사용되었다.  
    기존에는 UNIX 커널이 어셈블리어로 작성돼 특정 컴퓨터에 의존적이었으나 C언어로 UNIX를 다시 작성하면서 여러 컴퓨터 환경에 UNIX를 이식할 수 있게 됐다.
    2. 1972년도에 C언어가 처음으로 개발되고, 이후 1999년도에 C99, 2011년도에는 C11,  
    2017년도에는 C17 그리고 2023년도에는 C23으로 개발되어왔다.

    3. 특징
    - 범용 고급언어 : 운영페제, 임베디드 시스템, 게임, 컴파일러, 각종 응용프로그램과 자료주고 및 알고리즘 학습 등 여러 분야에서 사용된다.

    - 시스템 프로그래밍에 적합 : 운영체제, 장치 드라이버, 임베이드 시스템처럼 하드웨어 제어가 필요한 분야에서 많이 사용된다.

    - 빠른 실행 속도
    - 높은 이식성 : 윈도우, 리눅스, 맥OS, 임베이드 시스템 등 여러 환경에서 사용이 가능하다.
    - 간결한 문법(쉽다는 의미가 아니니 주의!)  
    이 있다.
    ---

4. 프로그램 개발 단계
    1. 프로그램의 목적 정의 :  
    무억을 해야하는지 정한다. 즉, 이 단계에서는 유저의 요구사랑, 시스템 분석, 기능 정의가 필요 및 중요하다.
    2. 프로그램 설계 :  
    어떤 데이터를 사용할지, 기능이 필요한지, 어떤 순서로 처리할 것인지 보다 상세한 내용이 필요로 하다.
    3. 소스 코드 작성 :  
    .c 확장차 파일에 맞춰서 소스 코드 작성 및 파일을 만든다.

    4. 컴파일 / 링크 :  
    프로그래밍은 바로 실행되는 것이 아닌, 컴파일과 링크 저장 과정을 거쳐서 실행 파일이 된다.  
    소스파일(.c ) -> 컴파일 > 목적파일(.obj) > 링크 -> 실행파일(.exe)
    5. 프로그램 실행 :  
    .exe 파일의 실행을 의미한다.
    6. 테스트 및 디버깅 :  
    프로그램이 정상 작동하는지 확인한다.  
    오류가 있다면 원인을 찾아 수정하고, 이를 디버깅이라 부른다.
    7. 유지보수 :  
    말 그래도 유지 보수 하거나 새로운 기능 추가하는 단계다. 게임으로 치면 버그 수정 혹은 DLC 추가 되는 것과 비슷하다.

---
5. C프로그램을 실행 파일로 만드는 과정
    1. 코딩 :  
    각 언어의 문법에 맞게 소스 코드를 작성하는 단계다.  

            #include  <stdio.h>
            int main(void)
            {
                printf("Hello World\n");
                return 0;
            }

    2. 컴파일 :  
    사람이 직접 작성한 소스 코드를 컴퓨터가 이해할 수 있는 목적 파일로 변환하는 과정이다.

            sample.c
            -> Compile -> sample.obj
        이 과정에서는 주로 문법 오류가 검사된다.

    3. 링크 :  
    여러 목적 파일과 라이브러리를 연결해서 최종 실행 파일을 만드는 과정이다.
    예를들어,  
            
            sample.c
            sub.c
            sub.h
            
        이라는 파일들이 있다는 가정하에  
            
            sample.obj
            sub.obj
            
        각각의 컴파일되면 목적파일이 만들어진다.

        이 목적 파일들과 필요한 라이브러리를 연결하면 실행 파일이 만들어진다.
            
            sample.obj + sub.obj + library
            -> sample.exe

    4. 실행 파일 생성 :  
    컴파일과 링크가 끝나면 실행파일이 만들어지는데, Windows 에서는 보통 SampleApp.exe 와 같은 형태로 만들어진다.

---

6. 도구

|도구|역할|
|---|---|
|소스 코드 편집기|코드작성 도구|
|컴파일러|소스코드를 목적 파일로 변환|
|링커|목적 파일과 라이브러리 연결|
|디버깅 도구|오류 수정|

이런 도구들이 하나로 묶여있는 프로그램을 우리는 IDE 라고 한다.  
대표적으로는 Visual Studio Code, Dev-C++, Eclipse 등이 있다.

---
### 여기까지가 C언어에 대한 간단한 소개였다면, 본적격으로 프로그래밍을 작업 해보자.

7. 첫 번째 C프로그래밍

        #include <stdio.h>
        int main(void)
        {
            printf("Hello World"\n);
            return 0;
        }
    
    해석 :  

        #include<stdio.h>
    표준 입출력 기능을 사용하기 위한 Header file 이다.
    **printf()함수** 를 사용하기 위해서는 반드시 필요하다.

        int main(void)
    main() 함수는 C 프로그램이 시작되는 지점이다.  
    C 프로그램은 실행되면 가장 먼저 main()함수부터 실행된다.  
    int 는 main 함수가 정수형 값을 반환한다는 뜻이다.  
    void 는 main 함수가 전달받는 *인지가 없다는 뜻이다.  

    * 프로그래밍에서 '인자(Argument)'는 함수가 일을 하기 위해 밖에서 받아오는 '재료' 또는 '정보'라고 생각하면 된다.

            {
                
            }
    중괄호는 함수의 시작과 끝을 나타낸다.  
    이 안의 내용이 함수의 본문이다.


        printf(""Hello World\n);
    printf()는 화면에 문자열을 출력하는 함수다.  
    문자열은 " "안에 작성한다.  
    \n 줄바꿈을 의미한다.

        return 0;
    main()함수가 정상적으로 끝난다는 의미로 운영체제에서의 0을 반환한다.

---
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


---
17. 상수
상수란, 늘 항상 고정된 수를 의미하고 C언어에서는 항상 고정된 값을 가지는 자료 이다.

예를 들어보자.  
내 이름은 Sue 이다. 그러면 이 Sue 라는 이름은 고정된 값인 것이다.

- 정수형 상수

|구분|예|특징|
|---|---|---|
|10진수|12,-45|일반정수|
|8진수|012|0으로 시작|
|16진수|0x0c|0x또는 0X로 시작|
|unsigned|10u|부호 없는 정수|
|long|12345L|long형 정수|
  

- 실수형 상수

|구분|예|
|---|---|
|소수 형식|3.14, -12.345|
|지수 형식|1.2e3, 5e-2|
|float형|3.14f|
|long double형|3.14L|

---

18. 문자 상수와 문자열 상수
문자 상수는 ' '를 사용한다.
    
        'A'

문자열 상수는 " "를 사용한다.

        "A"
        "SUE"
        "KOREA"
문자와 문자열은 다르다.

'A' -> 문자 1개를 의미하고 ACKII 코드로 65를 의미한다.
"A" -> 문자열, 문자 그 자체인 A 를 의미한다. 또한 \0이 자동으로 포함된다.

그러면 이 다음에는 \0 을 의미하는 Escape 문자 에 대해 알아보자.

---
19. Escape 문자

\ 를 사용해, 특수한 문자를 표현하는 방법이다.

|Escape 문자 | 의미|
|---|---|
|\n|줄 바꿈|
|\t|수평 탭|
|\0||널 문자|
|\'|작은 따옴표|
|\"|큰 따옴표|
|\\|| 백슬래시|

    #include <stdio.h>

    int main (void)
    {
        printf("Hello\nWorld\n");
        printf("Name\tAge\n");
        printf("Sue\t33\n");
        printf("큰 따옴표 : \"Hello\"\n");
        printf("백슬래시 : \\\n");

        return 0;
    }

---
20. 변수
값을 저장하기 위한 메모리 공간이다.
상수와는 달리 프로그램 실행 중 값이 바뀔 수 있다.

        int age = 33;
        age = 34;

    특징 :  
    1. 이름이 있다.
    2. 자료형이다.
    3. 값을 저장할 수 있다.
    4. 사용하기 전, 선언해야 한다.

    형식은  
    자료형 변수명;

        int a;
        double b;
        char ch

        int x, y, z;
    이런 식으로 한번에 여러개를 사용할 수도 있다.

---

21. 변수 선언과 초기화
변수를 선언하면서 처음 값을 넣는 것을 초기화 라고 한다.

        int age = 33;
        double height = 170.4;
        char grade = 'A';
    초기화하지 않은 지역변수인 age, height 그리고 grade 에는 쓰레기값이 들어 있을 수 있다.  
    따라서 변수는 가능한 한 처음부터 값(33, 170.4, A)을 넣어주는 것이 좋다.

        #include<stdio.h>

        int main(void)
        {
            int a = 3+2;
            double b = a / 4.0;

            printf("a = %e\n",a);
            printf("b = %f\n",b);

            return 0 ;
        }
    출력값은  

        a = 5
        b = 1.250000
    4.0은 실수이므로 계산의 결과고 실수로 나온다.  
    이 말은, 정수 +(-,*,/,%) 실수 로 계산하면 그 결과는 반드시 실수로 나오게 된다.

---

22. 전역변수와 지역변수  
변수는 선언한 위치에 따라 전역변수와 지역변수로 나눌 수 있다.

        #include <stdio.h>

        int num;    // 전역변수

        int main(void)
        {
            int i;  // 지역변수
            return 0;
        }

        void sub(void)
        {
            int i;  // sub 함수의 지역변수
        }

    |구분|설명|
    |---|---|
    |전역변수|함수 밖에서 선언된 변수|
    |지역변수|함수 안에서 선언된 변수|

    main() 함수 안의 i 와 sub() 함수 안의 i는 이름이 같아도 서로 다른 변수다.
---
23. 선행처리기  
컴파일 이전에 먼저 처리되는 지시어로, 선행처리의 지시어는 #으로 시작된다.  

대표적인 선행처리 지시어는

    #include    // 헤더 파일 포함
    #define     // 메크로 정의
    #undef      // 메크로 정의 해체
    #if, #else, #elseif     // 조건부 컴파일

이것의 특징으로는
1. #으로 시작한다.
2. 컴파일 전에 처리된다.
3. 문장 끝에 세미콜론을 붙이지 않는다.

와 같은 특징이있다.

---
24. #include  
헤더파일을 포함할 때 사용된다.

표준 헤더파일은 < > 를 사용한다.

    #include <stdio.h>
    #include <limits.h>
    #include <float.h>


사용자 정의 헤더 파일은 " " 를 사용한다.
    
    #include "myheader.h"

stdio.h는 printf() 같은 표준 입출력 함수를 사용하기 위해 반드시 필요하다.

---
25. #define  
메크로를 정의할 때 사용된다.
메크로는 컴파일 전에 지정한 값으로 치환된다.

        #define PI 3.141592
    
    예시

        #include <stdio.h>
        #define PI 3.141592

        int main(void)
        {
            double radius = 10.0;
            double area = PI * radius * radius;

            printf("원의 넓이 = %f\n", area);

            return 0;
        }
    PI 는 컴파일 전에 3.141592 로 바뀐다.

---

앞으로는 가독성 을 높이고 복습 할 때 빠르게 찾을 수 있도록 파일 구분 해주기 그룹번호 등등 좀 더 세부적으로 나눠서 등록해야 할 것 같다.

## 정리 예정

# 입출력 함수과 연산자

1. 함수와 표준 입출력
- 함수란,  
특정 작업을 수행하도록 작성된 코드 블록이다.

        입력 데이터
        -> 함수가 처리
        -> 처리 결과

C 프로그램의 시작점인 main() 도 함수다.

    int main (void)
    {
        return 0;
    }   // { } 사이의 내용 공간을 코드들이 모여잇는 블록이라고 해서  
    코드 블록이라 한다.

---
### 표준 입출력
프로그램이 사용자와 데이터를 주고 받는 기본적인 방법이다.

|구분|의미|대표함수|
|---|---|---|
|표준입력|키도브 등에서 데이터를 입력|scanf(), getchar()|
|표준출력|화면에 데이터 출력|printf(), putchar(), puts()|

입출력 함수를 사용하려면 다음 헤더파일(#include <stdio.h>)이 필요하다.  

---

2. printf() 함수
- 여러 자료를 정해진 형식으로 출력하는 함수다.

        printf ("출력 내용");
        printf("출력 양식", 값);

        예를 들어,
        int age = 33;
        printf("나이 = %d\n", age);

        라고 한다면 출력되는 값은  
        나이 = 33  
        이라고 할 것이다.



주요 출력 변환 기호  
%d - 부호 있는 10진 정수
%u - 부호 없는 10진 정수
%o - 8진수
%x - 16진수
%c - 문자 하나
%s - 문자열
%f - 실수
%e - 지수 형식 실수
%g - 소수 또는 지수 중 간결한 형식

printf() 예시  
    
    #include <stdio.h>
    
    int main (void)
    {
        char grade = 'A';
        int score = 95;
        double average = 87.5;

        printf("grade = %c\n", grade);
        printf("score = %d\n", score);
        printf("average = %.1f\n", average);

        return 0 ;
    }

    라고 했을 때 출력되는 값은,  
    grade = A
    score = 95
    average = 87.5
    
    여기서 %.1f; 는 소수점 이하 한 자리까지 출력한다는 뜻이된다.

#### 진법을 바꿔 출력하게 되면,  

    printf("%d\n",125); // 10진수
    printf("%o\n",125); // 8진수
    printf("%x\n",125); // 16진수 소문자
    printf("%X\n",125); // 16진수 대문자

    출력되는 값은  
    125
    175
    7d
    7D

    가 된다.

#### 문자와 문자열 출력

    printf("%c\n", 'A');
    printf("%s\n", "Sue");

    출력 값는  
    A
    Sue
    가 되며,


    문자열은 널 문자 \0 를 만나면 출력이 끝나게 된다.

    printf("%s\n", "ab\0dc");
    출력되는 값은  
    ab
    가 된다.

문자열에서는 이렇게 잘려 나오는 이유가 있다.  
그 이유는 C 언어에서 문자열의 끝에는 널 문자인 \0 이 들어가는데, 예를 들어, 

    char name[] = "Sue";
    라고 했을 때, 메모리에는
    'S', 'u', 'e', '\0' 과 같이 저장된다.

    따라서 printf() 에서 %s를 사용하면 문자열을 처음부터 출력하다가 \0 을 만나는 순간 출력을 끝내게 된다.

    그래서 
    printf("%s\n", "ab\0dc"); 
    에서 출려되는 값이
    ab 가 되는 것이다.

---

3. 실수 출력
- 실수는 흔히 %f, %e, %E, %g 등을 사용해서 출력할 수 있다.

        #include <stdio.h>

        int main (void)
        {
            double value = 123,45678;

            printf("%f\n", value);  // 일반적인 소수 형식
            printf("%e\n", value);  // 소문자 e를 사용하는 지수 형식
            printf("%E\n", value);  //  대문자 E를 사용하는 지수 형식
            printf("%g\n", value);  // 소수 형식과 지수 형식 중 간결한 방식

            return 0;
        }
        
        으로 출력되는 값은

        123.45678
        1.234568+02
        1.234568E+02
        123.457

---

4. 출력 폭과 정밀도
printf() 에서는 출력할 공간의 너비와 소수점 아래 자릿수를 지정할 수 있다.
        
        
        printf("%5d\n", 12);   // %5d는 총 5칸의 공간을 확보해라 라는 뜻이다.

        출력되는 값은
           12 // 이 말은 즉, 앞의 빈공간 3개와 12가 차지하는 두개의 공간 총 5개의 공간이라는 말이다.

        그러면 소수점 사래 자릭수의 경우,

        printf("%.2f\n", 3.141592);
        출력되는 값은 3.14 이며, 
        %.2f 는 소수점 아래 두 자리까지 출력한다는 뜻이다.

        
        이 둘을 함께 이용하는 방법도 있다.

        printf("%8.2f\n", 3.141592);

        이 말은 즉, 
        전체 출력의 폭은 8칸이고 소수점 이하 자리수는 2자리 라는 뜻이 되겠다.

---

5. 왼쪽 정렬과 부호 출력
- printf() 의 출력 형식 앞에 플래스를 사용할 수 있다.

1. 왼쪽 정렬

        printf("-5d|\n", 12);
        답은 
        12---| 이렇게 나온다.

        양수 부호 출력도 가능한다.
        printf("+d\n", 12);
        +12
        로 해서, + 기호도 함께 출력할 수 있다.

---

6. scanf() 함수
- 사용자가 입력한 값을 변수에 저장하는 함수다.

        scanf("입력 양식", &변수);
        를 기본 형식으로, 

        int age;
        scanf("$d", &age);
        사용자가 33을 입력하면 변수 age 에는 33이 저장된다.

그러면 scanf() 에서 &를 사용하는 이유
- 일반 변수에 값을 입력받을 때는 변수 이름 앞에 &를 붙인다.

        scanf("%d", &age);
        여기서 &age 는 변수 age 의 메모리 주소를 의미한다.

        scanf()는 입력받은 값을 변수에 직접 저장해야 하므로, 값이 들어갈 메모리 위치를 전달받아야 한다.

    이 말은 즉,  
    age -> 변수에 저장된 값 을 의미하고. 
    &age -> 변수 age가 위치한 메모리의 주소 를 의미한다.

- scanf()의 입력 변환기호

|자료형|변환기호|
|---|---|
|char|%c|
|int|%d|
|unsigned int|%u|
|float|%d|
|double|%lf|
|문자열|$s|

여기서의 중요한 차이는 printf() 에서 double 출력은 $f. 
scanf() 에서의 double 입력은 %lf 이다.

---
7. 예제 모음


        #include<stdio.h>
        
        int main(void)
        {
            int age;

            printf("플레이어의 나이를 입력하세요 : ");
            scanf("%d", &age);

            printf("플레이어의 나이 = %d\n", age);

            return 0;
        }

        이때 플레이어가 33이라는 숫자를 입력하면  
        
        입력한 나이 = 33

        이라는 값을 출력한다.

---

    #include <stdio.h>

    int main(void)
    {
        int a;
        int b;

        printf("두 정수를 입력하세요 : ");
        scanf("$d $d", &a, &b);

        printf("a = %d\n", a);
        printf("b = %d\n", b);

        return 0;
    }

    입력한 값 : 10 30
    출력되는 값 : a = 10    b = 30

---

    #include<stdio.h>
    
    int main(void)
    {
        float f;
        double d;

        scanf("%f %lf", &f, &d);

        printf("float = %f\n", f);
        printf("double = $lf\n", d);

        return 0;
    }

    입력한 값 : 12.5 3.1415
    출력되는 값 : float = 12.500000 double = 3.141500

---

    #include <stdio.h>

    int main(void)
    {
        char ch;

        scanf("%c", &ch);
        printf("입력한 문자 = %c\n", ch);
        return 0;
    }

    입력한 문자 : A
    출력되는 값 : 입력한 문자 = A

---

    #include<stdio.h>

    int main(void)
    {
        char name[100];

        scanf("%s", name);
        printf("입력한 문자열 = %s\n", name);

        return 0;
    }

위에서 언급한 적은 아직 없겠지만, 이건 배열을 이용한 것이라 보면 된다.  
배열 Array 가 100개 있다고 했을 때, 적용하는 숫자는 0부터 99까지 총 100개의 배열이 있는 것이고, 위에 나온 예시로는 char 로 저장된 name의 배열의 갯수는 100개 라는 뜻이다.  

Suemile 을 예를 들어보자 S 는 name[0] 을 나타내는 말이고, u 는 name[1] 을 나타내는 말이다. 그리고 문자열의 마지막에는 반드시 \0 인 null value 가 들거아야 하고 이는 name[7] 을 나타내는 것이 되겠다.

따라, Suemile 의 문자열의 길이는 7이 되며, \0 까지 포함하면 name[0] 부터 name[7] 까지 총 8개의 배열 원소를 사용한다. 

---
8. scanf("%s")와 공백
- scanf("%s")는 공백을 만나면 입력을 끝낸다.

        char subject[100];
        scanf("%s", subject);

        입력 : Computer Science
        출력 : Computer

        Science 는 저장되지 않는다.
        이럴 경우에는 공백을 포함한 한 줄 전체를 입력받을 수 있는 fgets() 함수를 사용하는 것이 적절하다.


        char subject[100];
        fgets(subject, sizeof(subject), stdin);


        그렇다면 왜 그런가 하고 알아보니  
        %s 자체가 공백이 아닌 문자들의 연속 하나를 읽도록 정해진 형식 지정자 이기 때문이다.

        그래서 위의 예시였던 Suemile 에서도 마지막에 \0 널 문자를 끝으로 마무리 지어진 것이었다. C

        ** C 의 문자열은 반드시 마지막에 \0이 있어야 한다는 규칙이 있다.

    이런 것들을 알아가는 재미가 솔솔하다 흐흐

---
9. getchar() 함수
- 문자 하나를 입력받는 함수다.

        #include<stdio.h>

        int main(void)
        {
            char ch;

            ch = getchar();
            printf("입력한 문자 = %c\n", ch);
            return 0;
        }

        입력 값 : A
        출력 값 : 입력한 문자 = A
---
10. putchar() 함수
- 문자 하나를 출력한다.

        #include<stdio.h>

        int main(void)
        {
            char ch = 'A';

            putchar(ch);
            putchar('\n');
        
            return 0;
        }

        출력 값 : A

---
11. getchar()과 putchar() 함께 사용

        #include<stdio.h>

        int main (void)
        {
            char ch;

            printf("문자 하나를 입력하세요 : ");
            putchar(ch);
            putchar('\n');

            return 0;
        }

        입력 값 : K
        출력 값 : 입력한 문자 = K

---

12. puts() 함수
- 문자열을 출력하는 함수다.

        puts("Hello");

        puts() 함수는 문자열을 출력한 뒤에 자동으로 줄을 바꿔주는 함수다.

        printf("Hello\n");
        puts("Hello");
        이 두 코드가 같은 형식이라 보면 될 듯 싶다.

---
13. gets() 대신 fgets() 사용
- 과거에는 gets() 함수를 이용해 문자열을 입력받았으나, 입력 길이를 제한하지 못한다는 단점이 있었다.  
따라서 현대의 C 언어에서는 gets()를 사용하지 않고 fgets()함수를 사용하게 됐다.

        #include<stdio.h>

        int main(void)
        {
            char text[100];
            fgets(text, sizeof(text), stdin);
            printf("$s", text);
            return 0;
        }
        여기서의 sizeof(text) 는 배열 전체의 크기를 바이트(byte) 단위로 계산한다는 뜻이기에 배열 범위가 넘어가는 입력을 방지할 수 있게 해준다.

        추가로 입력 중 Enter를 누르면, 공간이 충분한 경우 fgets()는 줄바꿈 문자 '\n'도 배열에 저장한다.

        예를 들어 Hello 입력 후 Enter를 누르면:

        text[0] = 'H'
        text[1] = 'e'
        text[2] = 'l'
        text[3] = 'l'
        text[4] = 'o'
        text[5] = '\n'
        text[6] = '\0'

---

### 입출력 함수와 연산자 
- 연산자는 값을 계산하거나 비교하는 작업을 지시하는 기호다.

        a + b
        여기서 a, b 는 피연산자
             + 는 연산자 이다.
        
    C언어의 주요 연산자는 다음과 같다.

    1. 산술연산자 - + - / * ++ --
    2. 관계연산자 - <> <=> == !=
    3. 논리연산자 - '&&
    4. 대입연산자 - = += -= *= /= %=
    5. 조건연산자 - ?:
    6. 비트연산자 - '&
    7. 기타연산자 - sizeof, 형변환

---

1. 산술연산자
- 수학적인 계산을 수행한다.

    |연산자|의미|
    |---|---|
    |+|더하기|
    |-|빼기|
    |*|곱하기|
    |/|나누기|
    |%|나누고 남은 나머지|


        int a = 10;
        int b = 3;

        printf("%d\n", a + b);  // 결과 : 13
        printf("%d\n", a - b);  // 결과 : 7
        printf("%d\n", a * b);  // 결과 : 30
        printf("%d\n", a / b);  // 결과 : 3
        printf("%d\n", a % b);  // 결과 : 1


2. 정수 나눗셈
- 정수리끼는 나누면 결과도 정수다.

        printf("%d\n", 3/2); // 출력 값 : 1
        실제 계산되는 값은 1.5 이지만, 정수 나눗셈에서는 소수점 이하를 버린다.
        따라서 출력되는 값은 1이 된다.

        만약 실수 결과를 얻고 싶다고 한다면, 피연산자 중 적어도 하나가 실수여야 한다.

        printf("%f", 3.0/2.0);  // 출력 값 : 1.500000

        추가로 나눗셈 에서 나누는 수는 0이 될 수 없다.

        int result = 10/0;
        이라는 코드는 정상적인 계산이 불가능하다.

        따라서 입력값으로 나눗셈을 할 때는 0인지 아닌지부터 확인해야 한다.

        if (b !=0)
        {
            printf(%d\n, b);

            return 0;
        }

---
3. 나머지 연산자
- 이미 잘 알고 있지만 나누고 난 나머지를 구하는 공식이다.

        printf ("%d\n", 5 % 3);
        출력 값 : 2

        나머지 연산자는 정수에서만 사용할 수 있으며 대표적인 활용으로는 짝수와 홀수의 판별이다.

        if (number %2 == 0)
        {
            printf("짝수\n");
        }
        else
        {
            printf("홀수\n");
        }
---

4. 증감 연산자 (증가 연산자와 감소 연산자)
- ++ 는 값을 1씩 증가시키고, -- 는 값을 1씩 감소시킨다.

        int a = 10;
        a++;
        출력 값 : 11

        int b = 10;
        a--;
        출력 값 : 9

---
5. 전위 연산과 후위 연산
- 전위증가

        int a = 10;
        int b = ++a;
        
        이에 따른 실행 순서는
        a 를 11로 먼저 증가 시키고, 그 증가한 값 11을 b에 저장하는 것이다.
        출력 값 : a = 11
                b = 11

- 후위증가

        int a = 10;
        int b = a++;

        실행순서는
        기존 값 10을 b에 저잘하고
        a를 11 로 증가시킨다.
        출력 값 : a = 11
                b = 10

        이에 대해 다시 정리하자면 
        ++a → 먼저 증가한 뒤 사용
        a++ → 기존 값을 사용한 뒤 증가 한다는 의미이고
        반대로 감소 연산자도 같은 원리다.

        --a → 먼저 감소한 뒤 사용
        a-- → 기존 값을 사용한 뒤 감소 한다.

    하지만 이런 증감 연산자에서도 피해야 하는 부분이 있다.  
    예를 들어, 한 문장 안에서 같은 변수를 여러 번 증/감소 시키는 코드는 피하는 것이 좋다.

        a = ++x * X--;
        이런 코드는 C언어 에서 평가 순서 문제로 안전하지 않으므로 작성하지 않는 편이 옳다.
---

6. 관계연산자
- 쉽게 말해 두 값을 비교하는 연산자다.

|연산자|의미|
|---|---|
|==|두 값이 서로 같다.|
|!=|두 값은 서로 같지 않다.|
|< >|크거나 작다|
|<=|작거나 같다|
|>=|크거나 같다|

C 언어에서는 이런 관계 연산의 결과는 보통 다음과 같다.

참 은 1, 거짓은 0

        #include<stdio.h>

        int main(void)
        {
            int a = 4;

            printf("%d\n", a > 2);
            printf("%d\n", a < 2);
            printf("%d\n", a == 4);

            return 0;
        }
        출력 값 : 1, 0, 1

여기서 또 중요한 부분은 대입 연산자와 비교연산자는 생긴게 비슷하니 잘 구분해야 한다. :)



---
7. 논리 연산자
- 여러 조건들을 결합하거나 반전시킨다.

|연산자|의미|
|---|---|
|&&|AND, 모두 참일 때 참|
|&#124;&#124;|' OR, 하나 이상 참이면 참|
|!|NOT, 참과 거짓 반전|
|||


1. AND 논리 연산자
- 두 조건이 모두 참일 때 실행된다.

        int age = 25;
        if (age >20 && age < 30)
        {
            printf("아직 20대 입니다.\n");
        }

2. OR 논리 연산자
- &#124;&#124; 는 두 조건 중 하나 이상이 참이면 참이다.

        char grade = 'A';
        if (grade == 'A' &#124;&#124; grade == 'B')
        {
            printf("좋은 성적이다.\n");
        }
        여기서 의 조건은 grade A 거나 B 일때 라는 의미고 이미 A 라고 주어졌을 때를 의미한다.

3. NOT 논리 연산자
- ! 는 참과 거짓을 리버스 시킨다.

        int value = 0;

        printf("%d\n", !value);
        출력 값 : 1
        value 가 0 이므로, !가 적용되서 참이 된다.

---

8. 단축 평가
- 논리 연산 중 결과가 이미 결정되면 뒤의 조건은 실행하지 않는다.

그 첫번째가 AND 단축 평가 이다.
        
        a != 0 && b / a > 2
        a != 0이 거짓이면 전체 AND 조건은 무조건 거짓이다.
        따라서 뒤의 b/a > 2는 실행되지 않는다.
        이것은 0으로 나누는 오류를 피하는데 있어 사용할 수 있다.

두번째 OR 단축 평가

        a == 0 || b / a > 2
        a == 0이 참이 전체 OR조건은 이미 참이다.
        따라서 뒤의 식은 실행하지 않는다.

### 아직 이해가 안되는 부분이 있으니, 다시 봐야할 듯 싶다.

---

9. 조건 연산자
- 조건에 따라 두 값 중 하나를 선택한다.

        형식
        조건 ? 참일 때 값 : 거짓일 때 값

        int max = (a > b) ? a : b;
        이 말은
        a > b가 참이면 max 에 a 를 저장
               거짓이면 max 에 b 를 저장 한다는 의미다.

        이는 if else 문과 같은 의미다.

        if (a > b)
        {
            max = a;
        }
        else 
        {
            max = b;
        }
        조건 연산자는 간단한 값 선택에 적합하지만, 복합한 처리는 if 문을 사용하는 편이 가독성이 높다.
---

10. 대입 연산자
- 오른쪽 값을 왼쪽 변수에 저장한다.

        int a;
        a = 10;
        결과 값 : a = 10;

    1. 복합 대입 연산자
    - 계산과 대입을 함께 수행한다.

    |표현|같은 의미|
    |---|---|
    |a += 3|a  = a + 3|
    |a -= 3|a = a - 3|
    |a *= 3|a = a * 3|
    |a /= 3|a = a / 3|
    |a %= 3|a = a % 3|

        int score = 10;
        score +5;
        출력 값 : score += 15

---
11. 비트 연산자
- 정수값을 2진수 단위로 계산한다.

|연산자|의미|
|---|---|
|&|비트 AND|
|'|비트 OR|
|^|비트 XOR|
|~|비트 NOT|
|<<, >>|왼쪽, 오른쪽 비트 이동|

예를 들자면  
5 = 0101  
3 = 0011

    
1. 비트 AND
- 두 비트가 모두 1일 때만 1이 된다.

        0101
        0011
        ----
        0001

        따라서 : 
        5 & 3
        결과 값 : 1

2. 비트 OR
- 두 비트 중 하나 이상이 1이면 1이 된다.

        0101
        0011
        ----
        0111

        따라서 : 
        5 | 3
        결과 값 : 7

3. 비트 XOR
- 두 비트가 서로 다르면 1이 된다.

        0101
        0011
        ----
        0110

        따라서 : 
        5 ^ 3
        결과 값 : 
        6

4. 논리 연산자와 비트 연산자 구분

&& : AND 논리연산자  
& : AND 비트 연산자

|| : OR 논리 연산자  
| : OR 비트 연산자

이 말은 즉, 조건을 판단할 때는 일반적으로 &&, || 를 사용하고,  
정수의 각 비트를 계산할 때는 &,| 를 사용한다.

5. 비트 이동 연산자

- 왼쪽 이동

 5 << 1
 5의 2인수는 00000101 이다.  
 이를 왼쪽으로 한 칸 이동하게 되면, 00001010 이 된다.

 그에 따른 결과로는 10이 나올 것이며,  
 양수에서 왼쪽으로 한 칸 이동하는 것은 일반적으로 2를 곱한 것과 비슷한다.

 - 오른쪽 이동

 10 >> 1
 10의 2인수는 00001010 이며, 오른쪽으로 한 칸 이동시, 00000101 이 된다.  
 결과는 5가 나오게 된다.

 ---
 12. sizeof 연산자
 - 자료형이나 변수가 사용하는 메모리 크기를 바이트 단위로 구한다.

        #include<stdio.h>

        int main (void)
        {
            int number;
            double value;

            printf("int 크기 = %zu\n", sizeof(int));
            printf("number 크기 = %zu\n", sizeof(number));
            printf("double 크기 = %zu\n", sizeof(double));
            printf("value 크기 = %zu\n", sizeof(value));

            return 0;
        }
        출력 예시 값 : 
        int 크기 = 4
        number 크기 = 4
        double 크기 = 8
        value 크기 = 8

        이는 환경에 따라 자료형 크기는 달라질 수 있다.

---
13. 형변환
- 값을 다른 자료형으로 바꾸는 것이다.

형식 :  
(자료형) 값

        (double)a
        정수 a를 계산 과정에서 double 로 변환한다.

- 형변환이 필요한 이유

        #include <stdio.h> 
        int main(void) 
        { 
            int a = 3; 
            int b = 4; 
            double result; 
            
            result = a / b;
            printf("%f\n", result); 
            
            return 0; 
        }
        a와 b가 모두 정수이므로 a/b 는 정수 나눗셈이다.

        3/4 = 0
        그 이후 0이 double 변수에 저장되고 출력되는 값은 
        0.000000 이다.

        실수 나눗셈을 하려면 다음과 같이 형변환해야한다.

        result = (double)a/b;
        계산하게 되면
        3.0 / 4.0 = 0.75
        출력 값 : 
        0.750000

---
### 연산자 우선순위
1. 괄호 () 
2. 단항 연산자 !, ++, --, sizeof, 형변환 
3. 곱셈·나눗셈·나머지 *, /, % 
4. 덧셈·뺄셈 +, - 
5. 비트 이동 <<, >> 
6. 대소 비교 <, <=, >, >= 
7. 같음 비교 ==, != 
8. 비트 AND & 
9. 비트 XOR ^ 
10. 비트 OR | 
11. 논리 AND && 
12. 논리 OR || 
13. 조건 연산자 ?: 
14. 대입 연산자 =, += 등

        int result = 3 + 1 * 5 / 2;

        *와 /가 +보다 우선순위가 높다.

        또한 *와 /는 우선순위가 같으므로 왼쪽부터 계산한다.

        1 * 5 = 5
        5 / 2 = 2
        3 + 2 = 5

        결과 값 : 
        result = 5
---

14. 선택 제어문
- 조건에 따라 실행할 코드를 선택한다.  
대표적으로는 if 문과 switch 문이 있다.

if 문은 보통 else if 와 else 와 같이 사용하는데, 우선 if 문부터 봐보자.

1. if 문
- 조건이 참 일때만 특정 코드를 실행한다.

        형식 :  
        if(조건)
        {
            실행문;
        }

예시
        
        int score = 80;
        if(score >=60)
        {
            printf(""합격입니다.\n);
        }

----
        #include <stdio.h>

        int main (void)
        {
            int a;
            int b;

            scanf("$d $d", &a, &b);

            if (a < b)
            {
                int temp = a;
                a = b;
                b = temp;
            }

            printf("max = %d\n", a);
            printf("min = %d\n", b);

            return 0;
        }

        입력 값 : 10 20
        처리방법 : a < b가 참이면 temp = 10이 되고, a = 20 그리고 b = 10이 된다.

        출력 값 : max = 20
        min = 10

2. if -else 문
- 조건이 참일 때와 거짓일 때 서로 다른 코드를 실행한다.

        if(조건)
        {
            참일 때 실행;
        }
        else
        {
            거짓일 때 실행;
        }


        예시 : 
        #include <stdio.h> 
        int main(void) 
        {
            int number;
            scanf("%d", &number);
            
            if (number % 2 == 0) 
            { 
                printf("짝수입니다.\n"); 
            } 
            else 
            {
                printf("홀수입니다.\n");
            } 
            
            return 0;
        }
        입력 값 : 7
        출력 값 : 홀수입니다.

3. 중첩 if문
- if 문 안에 또 다른 if 문을 작성할 수 있다.

        #include <stdio.h> 
        int main(void) 
        { 
            int number; 
            scanf("%d", &number); 
            
            if (number >= 0) 
            { 
                if (number == 0) 
                { 
                    printf("0입니다.\n"); 
                } 
                else 
                { 
                    printf("양수입니다.\n"); 
                } 
            } 
            else 
            { 
                printf("음수입니다.\n"); 
            } 
            return 0; 
        }
        입력 값 : 10
        출력 값 : 양수입니다.
        이유는 number >= 0 이면 참이고
        number == 0 이면 거짓이기 때문이다.

4. else if문
- 여러 조건 중 하나를 선택할 때 사용한다.

        형식 : 
        if (조건1) 
        { 
            실행문1; 
        } 
        else if (조건2) 
        { 
            실행문2;
        } 
        else if (조건3) 
        { 
            실행문3; 
        } 
        else 
        {
            그 밖의 경우;
        }
        
        위에서부터 조건을 검사하며, 처음 참이 된 블록 하나만 실행한다.

---
5. switch문
- 하나의 값에 따라 여러 경우 중 하나를 선택한다.

        형식 : 
        switch (value)
        {
            case value1:
                실행문;
                break;

            case value2:
                실행문;
                break;

            default:
                실행문;
        }

    ---

        #include <stdio.h> 
        int main(void) 
        {
            int menu; 
            printf("메뉴를 선택하세요: "); 
            scanf("%d", &menu); 
             
            switch (menu) 
            { 
                case 1: 
                    printf("게임 시작\n"); 
                    break; 
                
                case 2: 
                    printf("설정\n"); 
                    break; 
                    
                case 3: 
                    printf("게임 종료\n"); break; 
                    
                default: 
                    printf("잘못된 메뉴입니다.\n"); 
            }
            return 0;
        }
        입력 값 : 2
        출력 값 : 설정

---
6. switch 문의 break
- switch문을 종료한다.
        
        case 1: 
            printf("게임 시작\n"); 
            break; 
        에서 break 가 없으면 다음 case 의 코드까지 실행된다.

        switch (number)
        {
            case 1:
                printf("one\n");

            case 2:
                printf("two\n");
                break;
        }
        number 가 1이라는 가정하에, 
        출력 값 : one
                two
            우리는 이러한 출력을 fall-through 라고 한다.

        이것을 의도한 것이 아니라면 각 case 마지막에는 break 를 넣어줘야 한다.

---
7. if와 switch 비교

|if문|switch문|
|---|---|
|범위 조건 표현 가능|특정 값 비교에 적합|
|복잡한 논리식 가능|여서 고정값 분기에 편리|
|<, >, && 사용가능|정수, 문자, 열거형 값 사용|


---

8. 반복문
- 같은 코드를 여러번 실행한다.

1. while 문

        #include <stdio.h> 
        int main(void) 
        { 
            int i = 1; 
            int sum = 0; 
            while (i <= 10) 
            { 
                sum += i; i++;
            } 
            printf("1부터 10까지의 합 = %d\n", sum);
            
            return 0;
        }
        실행 과정 :

        sum = 0 + 1
        sum = 1 + 2
        sum = 3 + 3
        ...
        sum = 45 + 10

        출력 값 :

        1부터 10까지의 합 = 55

        만약 반복문 안에서 i++ 를 뺏다면 i 가 무한으로 반복된다.
        Unity 공부하면서 수도 없이 본 무한 생성을 떠올리면 되겠다... ㅠ

2. 무한 반복
- 조건이 항상 참이면 반복문은 끝나지 않는다.

- do while문
    - 반복할 문장을 먼저 실행한 뒤 조건을 검사한다.


            do 
            {
                반복할 문장;
            } while (조건);

            그렇다면 while 과 do while 문의 차이는 뭘까?

        1. while문
        
                while(condition)
                {
                    실행문;
                }
            일 때 조건을 먼저 검사한다.
            조건이 처음부터 시작이라면 한 번도 실행하지 않는다.

                while (1)
                {
                    printf("반복\n");
                }

                각 입력 후 조건 검사하고 마지막으로 0을 입력하면서 반복문이 종료된다.

                생각해보니 이 부분은 C#이랑 조금 다른 것 같다.
                C#에서는 true 로 적었는데 말이지 ㅎㅎ

        2. do while문

                do
                {
                    실행문;
                } while (condition);

                조건이 거짓일 지라도 
                실행문을 먼저 실행한다.

                #include <stdio.h>

                int main(void)
                {
                    int number;

                    do
                    {
                        printf("0을 입력하면 종료: ");
                        scanf("%d", &number);

                        printf("입력값 = %d\n", number);

                    } while (number != 0);

                    return 0;
                }

                입력 값 :
                5
                3
                0

                각 입력 후 조건 검사하고 마지막으로 0을 입력하면서 반복문이 종료된다.

3. for문
- for 문은 반복 횟수가 분명할 때 사용한다.

        #include <stdio.h>

        int main(void)
        {
            int i;

            for (i = 1; i <= 5; i++)
            {
                printf("%d\n", i);
            }

            return 0;
        }

        출력 값:
        1
        2
        3
        4
        5

        그러면 이걸 이용해서 다른 예문을 적용해보자.

        #include <stdio.h> 
        int main(void) 
        { 
            int i; 
            int sum = 0; 
            for (i = 1; i <= 10; i++) 
            { 
                sum += i; 
            } 
            printf("합계 = %d\n", sum); 
            return 0; 
        }

        출력 값 : 
        합계 = 55

4. 중첩 반복문

        #include <stdio.h>
        int main(void)
        {
            int i;
            int j;
            for (i = 1; i <= 3; i++)
            {
                for (j = 1; j <= 3; j++)
                { 
                    printf("i = %d, j = %d\n", i, j);
                }
            }
            return 0;
        }
        바깥에 있는 반복문이 한번 실행 될 때마다 안쪽에 있는 반복문이 실행된다.
        그렇게 실행되는 총 횟수는 
        3 * 3 = 9회가 된다.

5. break문
- 현재 실행중인 반복문이나 switch문을 즉시 종료한다.

        #include <stdio.h>
        int main(void) 
        { 
            int number; 
            int sum = 0; 
            while (1) 
            { 
                printf("숫자를 입력하세요. 0이면 종료: "); 
                scanf("%d", &number); 
                if (number == 0) 
                { 
                    break; 
                } 
                sum += number; 
            } 
            printf("합계 = %d\n", sum); 
            return 0; 
        }

        입력 값 :
        10
        20
        30
        0

        출력 값:
        합계 = 60

        number == 0이면 break가 실행되어 while문을 종료한다.

6. continue 문
- 현재 반복의 남은 코드를 건너뛰고 다음 반복으로 이동한다.

        #include <stdio.h>

        int main(void)
        {
            int i;

            for (i = 1; i <= 10; i++)
            {
                if (i % 2 == 0)
                {
                    continue;
                }

                printf("%d\n", i);
            }

            return 0;
        }

        짝수이면 continue를 실행해 printf()를 건너뛴다.

        출력:

        1
        3
        5
        7
        9

    - break문과 continue의 문의 차리를 알아보자.

    1. break 문은 반복문 전체를 종료하고
    2. continue 문은 현재 반복되는 구문만 건너뛰고 다음 반복을 진행한다.

    예를들어  

        if (number == 0)
        {
            break;
        }

        0이면 반복을 완전히 종료한다.

        if (number < 0)
        {
            continue;
        }

        음수인 이번 입력만 건너뛰고 다음 반복을 진행한다.

        활용 예제
        
        #include <stdio.h>
        {
            int number;

            do
            {
                printf("앙수를 입력하세요. 0이면 종료 : ");
                scanf("%d", &number);

                if (number < 0)
                {
                    printf("음수는 처리하지 않습니다.\n");
                    continue;
                }

                printf("입력한 수 = %d\n", number);
            }
            while (number !=0)
            return 0;
        }

        입력 값 : 
        5
        -3
        7
        0

        출력 값 : 
        정상 출력
        음수 안내 후 다음 반복
        정상 출력
        출력 후 조건 검사에서 종료

---

