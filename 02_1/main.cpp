#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>

//int add(int a, int b) {
//	return a + b;
//}
//int sub(int a, int b) {
//	return a - b;
//}


int answer;
int correct;
typedef void (*PFunc)(int*);

void callback1(int* s) {

	printf("数字は%dなので、",correct);
	if (answer == 1) {
		if (correct == 1 || correct == 3 || correct == 5) {
			printf("正解です");
		}
		else {
			printf("はずれです");
		}
	}
	else {
		if (correct == 2 || correct == 4 || correct == 6) {
			printf("正解です");
		}
		else {
			printf("はずれです");
		}
	}

	
}

void setTimeout(PFunc p, int second) {
	
	correct = rand() % 6 + 1;
	Sleep(second*1000);
	
	p(&second);
}





int main() {
	srand(time(NULL));
	printf("start\n");

	printf("半なら1,丁なら2を入力してね\n");
	scanf_s("%d",&answer);

	PFunc p;
	p = callback1;
	if (answer == 1|| answer == 2) {
		setTimeout(p, 3);
	}
	else {
		printf("1か2を入力してね\n");
	}


	return 0;
}