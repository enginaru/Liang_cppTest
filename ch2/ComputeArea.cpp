#include <iostream>

int main()
{
	double radius;
	double area;

	// Step 1: 반지름 읽기
	radius = 20;

	// Step 2: 면적 계산
	area = radius * radius * 3.14159;

	// Step 3: 면적 출력
	std::cout << "The area is ";
	std::cout << area << std::endl;

	return 0;
}
