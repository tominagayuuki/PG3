#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <functional>

typedef void (*PFunc)(int*);

void callback1(int* s) {
	printf("%d�b��ɔ��\�����\n", *s);
}

void setTimeout(PFunc p, int second) {

	p(&second);

	for (int i = second; i > 0; i--) {
		printf("--%d--\n", i);
		Sleep(500);
	}

}

int main() {
	srand(time(NULL));
	int select;

	printf("start\n");
	printf("���Ȃ�1,���Ȃ�2����͂��Ă�\n");
	scanf_s("%d", &select);

	PFunc p;
	p = callback1;
	setTimeout(p, 3);

	std::function<int()> fx = []() {return rand() % 6 + 1; };

	int num = fx();
	printf("�o���ڂ́A%d\n", num);


	if (select == 1) {
		if (num == 1 || num == 3 || num == 5) {
			printf("���������̂ŁA�A�^��\n");
		}
		else {
			printf("���������̂ŁA�n�Y��\n");
		}
	}
	else if (select == 2) {
		if (num == 1 || num == 3 || num == 5) {
			printf("���������̂ŁA�n�Y��\n");
		}
		else {
			printf("���������̂ŁA�A�^��\n");
		}
	}
	else {
		printf("1��2����͂��Ă�\n");
	}

	return 0;
}
