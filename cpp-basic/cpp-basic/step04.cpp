// class
// class �ϳ��� Ʋ�� �����մϴ�. (int)
// class �⺻���� ����� Ȯ�� ����� ������ ����
// class Memory alloc/release�� ����� �մϴ�.
// -> RAII �ڿ��� ����ϸ� ��ȯ�� ������� �մϴ�.
// class EnCasulation �Ǿ��ٴ� ������ �ֽ��ϴ�.
// class ����� �����մϴ�.
// class �������� �����մϴ�.
// class ��ü �迭�� ����(int)
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