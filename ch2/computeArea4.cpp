#include <iostream>

using namespace std;

int main()
{
	const double PI = 3.14159;

	// Step 1: 반지름 읽기
	double radius = 20;

	// Step 2: 면적 계산
	double area = radius * radius * PI;

	// Step 3: 면적 출력
	cout << "The area is ";
	cout << area << std::endl;


	return 0;
}
