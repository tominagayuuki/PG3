#include"stdio.h"

int calc(int a, int b) {
	return a + b;
}

float calc(float c, float d) {
	return c + d + 10;
}

int main() {
	int x = 114;
	int y = 514;
	printf("%d\n", calc(x, y));

	float l = 3.64f;
	float m = 3.64f;
	printf("%f\n", calc(l, m));
}