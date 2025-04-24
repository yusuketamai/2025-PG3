#include<stdio.h>


template<typename T>

T Min(T a, T b) {
	if (a < b) {
		return (a);
	}
	else {

		return (b);
	}
}

template<>
char Min<char>(char a, char b) {

	printf("数字以外は代入できません");
	return 0;
}

int main(void) {

	printf("%d\n", Min<int>(114, 514));
	printf("%.100f\n", Min<float>(11.4f, 51.4f));
	printf("%.100lf\n", Min<double>(11.4f, 51.4f));
	printf("%c\n", Min<char>(11.4f, 51.4f));

	return 0;
}