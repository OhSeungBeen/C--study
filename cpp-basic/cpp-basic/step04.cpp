// class
// class 하나의 틀을 제공합니다. (int)
// class 기본적인 기능은 확대 재생산 가능한 설계
// class Memory alloc/release를 해줘야 합니다.
// -> RAII 자원을 사용하면 반환을 시켜줘야 합니다.
// class EnCasulation 되었다는 장점이 있습니다.
// class 상속을 지원합니다.
// class 다형성을 지원합니다.
// class 객체 배열을 지원(int)
#include<iostream>
#include "./MyFirstClass.h"
using namespace std;

int main(void) {
	int result(0);
	int nA(0);
	int nAB;
	int nABC;
	nA = 0;
	nAB = nA;

	{
		MyFirstClass classA;
		MyFirstClass classAB;
		//MyFirstClass classABC;

		//public .... int/double
		classA.nA_public = 0;

		int ka = classA.nA_public;
		cout << "class public = " << classA.nA_public << endl;
		//private .... class only
		classA.SetValue(100);
		int ka_private = classA.GetValue();
		cout << "class private = " << classA.GetValue() << endl;
		//classA.set();
		//classAB = classA;
	}
}