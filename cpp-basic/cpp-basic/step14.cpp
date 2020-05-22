//template
//함수나 클래스를 개별적으로 다시 작성하지 않아도, 여러자로형을 사용할 수 있도록 하게 만들어 놓은 틀
//함수 템플릿, 클래스 템플릿이있다.
#include<iostream>

template<class T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

int main() {
	// int, float, double등 모든자료형을 넣어 사용할 수 있다.
	int a = 10, b = 20;
	std::cout << "a" << a << "b" << b << std::endl;
	swap(a, b);
}