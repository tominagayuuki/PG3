#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <functional>

typedef void (*PFunc)(int*);

void callback1(int* s) {
	printf("%d秒後に発表される\n", *s);
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
	printf("半なら1,丁なら2を入力してね\n");
	scanf_s("%d", &select);

	PFunc p;
	p = callback1;
	setTimeout(p, 3);

	std::function<int()> fx = []() {return rand() % 6 + 1; };

	int num = fx();
	printf("出た目は、%d\n", num);


	if (select == 1) {
		if (num == 1 || num == 3 || num == 5) {
			printf("半だったので、アタリ\n");
		}
		else {
			printf("丁だったので、ハズレ\n");
		}
	}
	else if (select == 2) {
		if (num == 1 || num == 3 || num == 5) {
			printf("半だったので、ハズレ\n");
		}
		else {
			printf("丁だったので、アタリ\n");
		}
	}
	else {
		printf("1か2を入力してね\n");
	}

	return 0;
}
