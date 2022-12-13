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

	printf("”š‚Í%d‚È‚Ì‚ÅA",correct);
	if (answer == 1) {
		if (correct == 1 || correct == 3 || correct == 5) {
			printf("³‰ğ‚Å‚·");
		}
		else {
			printf("‚Í‚¸‚ê‚Å‚·");
		}
	}
	else {
		if (correct == 2 || correct == 4 || correct == 6) {
			printf("³‰ğ‚Å‚·");
		}
		else {
			printf("‚Í‚¸‚ê‚Å‚·");
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

	printf("”¼‚È‚ç1,’š‚È‚ç2‚ğ“ü—Í‚µ‚Ä‚Ë\n");
	scanf_s("%d",&answer);

	PFunc p;
	p = callback1;
	if (answer == 1|| answer == 2) {
		setTimeout(p, 3);
	}
	else {
		printf("1‚©2‚ğ“ü—Í‚µ‚Ä‚Ë\n");
	}


	return 0;
}