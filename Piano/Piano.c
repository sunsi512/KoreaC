#include <stdio.h>
#include <Windows.h>		// 윈도우에서 제공하는 기능을 사용
#include <conio.h>			// 키보드 입력 감지 
#include <mmsystem.h>		// 소리
#pragma comment(lib, "winmm.lib")			// 라이브러리 추가 (C파일을 추가

int main() {
	char key_in;
	int _do = 260, _re = 290, _mi = 330, _pa = 340, _sol = 380, _ra = 430, _si = 490, _do2 = 510;
	
	// 소리테스트
	Beep(_do, 200);
	Sleep(90);
	Beep(_re, 200);
	Sleep(90);
	Beep(_mi, 200);
	Sleep(90);
	Beep(_pa, 200);
	Sleep(90);
	Beep(_sol, 200);
	Sleep(90);
	Beep(_ra, 200);
	Sleep(90);
	Beep(_si, 200);
	Sleep(90);
	Beep(_do2, 200);
	Sleep(90);


	// 피아노
	// 1 : 조건이 맞다
	while (1) {
		if (_kbhit) {		// 키보드가 눌리면
			key_in = _getch();		// 키보드에 눌린 값을 대입
			// a : 도, s : 레, d : 미, f : 파, j : 솔, K : 라, L : 시, ; : 높은도
			switch (key_in) {
			case 'a':
				printf("도");
				Beep(_do, 200);
				Sleep(90);		
				break;
			case 's':
				printf("레");
				Beep(_re, 200);
				Sleep(90);	
				break;
			case 'd':
				printf("미");
				Beep(_mi, 200);
				Sleep(90);
				break;
			case 'f':
				printf("파");
				Beep(_pa, 200);
				Sleep(90);
				break;
			case 'j':
				printf("솔");
				Beep(_sol, 200);
				Sleep(90);			
				break;
			case 'k':
				printf("라");
				Beep(_ra, 200);
				Sleep(90);			
				break;
			case 'l':
				printf("시");
				Beep(_si, 200);
				Sleep(90);			
				break;
			case 59:
				printf("높은도");
				Beep(_do2, 200);
				Sleep(90);
				break;
			}
		}
	}

	return 0;
}