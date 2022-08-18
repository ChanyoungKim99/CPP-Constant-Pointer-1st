#include <iostream>

int main()
{
	const int myPrecious = 10;

	// int* p = &myPrecious; 는 안된다
	// 역참조를 할 수 있기 때문

	const int* p = &myPrecious;

	// 여전히 값을 변경시키는 것은 안된다. 상수이니까
	// ex) *p = 1; (x)
	// 하지만, 가리키는 것은 가능하다
}