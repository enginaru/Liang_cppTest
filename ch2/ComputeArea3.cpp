#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	// Step 1: 반지름 읽기
	double radius;
	cout << "Enter a radius: ";
	cin >> radius;

	// Step 2: 면적 계산
	double area = radius * radius * 3.14159;

	// Steo 3: 면적 출력
	cout << "The area is " << area << endl;



	return 0;
}
