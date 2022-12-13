#include<stdio.h>

int wage(int time,int m);

int main() {
	int time = 3;
	int money = 100;
	int hourlyWage;

	hourlyWage = wage(time, money);


	printf("%dŠÔ–Ú‚Ì‹‹‚Í%d‰~\n", time, hourlyWage);

	
	return 0;
}

int wage(int time,int m) {
	if (time <= 1) {
		return (m);
	}
	return (wage(time - 1, m) * 2 - 50);

}