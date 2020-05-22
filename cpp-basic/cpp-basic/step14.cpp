//template
//�Լ��� Ŭ������ ���������� �ٽ� �ۼ����� �ʾƵ�, �����ڷ����� ����� �� �ֵ��� �ϰ� ����� ���� Ʋ
//�Լ� ���ø�, Ŭ���� ���ø����ִ�.
#include<iostream>

template<class T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	// int, float, double�� ����ڷ����� �־� ����� �� �ִ�.
	int a = 10, b = 20;
	std::cout << "a" << a << "b" << b << std::endl;
	swap(a, b);
}