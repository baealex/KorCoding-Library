### Example 1: "안녕 세상!"

```cpp
#include "korcoding.h"

정수형을_반환하는 진입점(공백)
{
	입출력.출력("ㅎㅇ 월드!").새행();
	반환 0;
}
```

<br/>

### Example 2: "만약? 아니면!"

```cpp
#include "korcoding.h"

정수를_반환하는 진입점()
{
	정수형인 김철수의_점수;
	입출력.출력("철수의 점수를 입력하세요 : ").입력(김철수의_점수);

	만약에(김철수의_점수 > 100 또는 김철수의_점수 < 0)
	{
		입출력.출력("잘못된 점수가 입력됐습니다.").새행();
	}
	혹은(김철수의_점수 > 90)
	{
		입출력.출력("역시나 철수는 똑똑합니다.").새행();
	}
	혹은(김철수의_점수 <= 90 그리고 김철수의_점수 > 80)
	{
		입출력.출력("그래도 철수는 똑똑합니다.").새행();
	}
	혹은(김철수의_점수 <= 80 그리고 김철수의_점수 > 70)
	{
		입출력.출력("아직도 철수는 똑똑합니다.").새행();
	}
	혹은(김철수의_점수 <= 70 그리고 김철수의_점수 > 60)
	{
		입출력.출력("아직까진... 철수는 똑똑합니다.").새행();
	}
	아니면
	{
		입출력.출력("철수는 똑똑합니까?").새행();
	}
	반환 0;
}
```

<br/>

### Example 3: "함수"

```cpp
#include "korcoding.h"

진실혹은거짓 맞춰봐_내_몸무게(정수인 인자)
{
	만약(인자 == 70)
	{
		반환 진실;
	}
	아니면
	{
		반환 거짓;
	}
}

정수형을_반환하는 진입점(공백)
{
	정수형인 몸무게 = 0;
	입출력.출력("나 몸무게 몇이게? ").입력(몸무게);

	진실혹은거짓 답 = 맞춰봐_내_몸무게(몸무게);
	만약(답 == 진실)
	{
		입출력.출력("오....").새행();
	}
	아니면
	{
		입출력.출력("틀렸데요!").새행();
	}
	반환 0;
}
```

<br/>

### Example 4: "포인터와 참조"

```cpp
#include "korcoding.h"

정수를_반환하는 진입점()
{
	정수 내정수 = 7;
	정수 포인터 내정수_참조;

	내정수_참조 = 참조 내정수;
	입출력.출력("내 정수 참조의 값은 : ").출력(포인터 내정수_참조).새행();

	증가 포인터 내정수_참조;
	입출력.출력("내 정수의 값은 : ").출력(내정수).새행();

	반환 0;
}
```

<br>

### Example 5: "문자열 자르기"

```cpp
#include "korcoding.h"

정수형을_반환하는 진입점(공백)
{
	문자형인 내_정보[] = "배진오,대학생,블로거";
	문자형인 이중포인터 잘라진_내_정보 = 문자열.자르기(내_정보, ',');

	입출력.출력(잘라진_내_정보[0]).새행();
	입출력.출력(잘라진_내_정보[1]).새행();
	입출력.출력(잘라진_내_정보[2]).새행();

	반환 0;
}
```

<br>

### Example 6 : "나만의_공간"

```cpp
#include "korcoding.h"

공간 나만의_함수
{
	내부의 반환되지_않는 나의_함수(
		정수형인 포인터 인자1,
		정수형인 포인터 인자2
	) {
		입출력.출력(포인터 인자1 곱하기 포인터 인자2).개행();
	}
}

공간 나만의_변수
{
	정수형인 가 = 0;
	정수형인 나 = 5;
}

정수를_반환하는 진입점()
{
	사용할 공간 나만의_변수;

	실행
	{
		가 += 1;
		구분(가)
		{
			경우 5: 건너뜀;
			경우 8: 이어서;
			// 반대로 경우 8: 멈춤;
		}
		나만의_함수 안에 나의_함수(참조 가, 참조 나);
	}
	동안(가 < 10);
	반환 0;
}
```

<br/>

### Example 7: "객체와 가상함수"

```cpp
#include "korcoding.h"

객체인 사람{
숨김:
	정수형인 나이;
	정수형인 키;
공개:
	사람(정수형인 나이, 정수형인 키) : 나이(나이), 키(키) {}

	가상의 상수 문자를_반환하는 포인터 나이_보기()
	{
		반환 문자열.형변환(나의->나이);
	}
	정수를_반환하는 키_보기()
	{
		반환 나의->키;
	}
	반환하지_않는 나이_설정(정수형인 나이)
	{
		나의->나이 = 나이;
	}
	반환하지_않는 키_설정(정수형인 키)
	{
		나의->키 = 키;
	}
};

객체인 게임_광 : 공개 사람 {
숨김:
	정수형인 게임_렙;
공개:
	게임_광(정수형인 나이, 정수형인 키, 정수형인 레벨) : 사람(나이, 키), 게임_렙(레벨) {}

	상수 문자를_반환하는 포인터 나이_보기()
	{
		반환 "게이머의 나이는 비밀입니다!";
	}
	정수를_반환하는 키_보기()
	{
		반환 나의->게임_렙;
	}
	반환하지_않는 레벨_설정(정수형인 레벨)
	{
		나의->게임_렙 = 레벨;
	}
};

정수를_반환하는 진입점()
{
	사람 포인터 평범한_사람 = 동적 사람(25, 180);
	입출력.출력("평범한_사람의 키는 : ").출력(평범한_사람->키_보기()).개행();
	입출력.출력("평범한_사람의 나이는 : ").출력(평범한_사람->나이_보기()).개행();

	게임_광 포인터 중독자가_되었다 = 동적 게임_광(25, 180, 250);
	평범한_사람 = 중독자가_되었다;
	입출력.출력("중독자가 된 평범한_사람의 키는 : ").출력(평범한_사람->키_보기()).개행();
	입출력.출력("중독자가 된 평범한_사람의 나이는 : ").출력(평범한_사람->나이_보기()).개행();

	반환 0;
}
```