#include<stdio.h>

template<typename Type>
Type Min(Type a, Type b) {
	if (a < b) {
		return static_cast<Type>(a);
	}
	else if (a > b) {
		return static_cast<Type>(b);
	}
}

template<>
char Min<char>(char a, char b) {
	printf("�����ȊO�͑���ł��܂���\n");
	return 0;
}
	

int main() {
	printf("%d\n", Min<int>(114, 514));
	printf("%f\n", Min<float>(11.4f, 51.4f));
	printf("%f\n", Min<double>(11.4, 51.4));
	printf("%c\n", Min<char>('a', 'c'));

	return 0;
}