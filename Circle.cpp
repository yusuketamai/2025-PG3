#include "Circle.h"

void Circle::Size() {
	answer = radius * radius * 3.14;
}

void Circle::Draw() {
	printf("�~�̖ʐρF%0.2f\n", answer);
}