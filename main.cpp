#include <iostream>

int main()
{
	const int myPrecious = 10;

	// int* p = &myPrecious; �� �ȵȴ�
	// �������� �� �� �ֱ� ����

	const int* p = &myPrecious;

	// ������ ���� �����Ű�� ���� �ȵȴ�. ����̴ϱ�
	// ex) *p = 1; (x)
	// ������, ����Ű�� ���� �����ϴ�
}