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