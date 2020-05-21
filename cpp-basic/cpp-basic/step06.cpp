#include <iostream>
//class ���
using namespace std;
class CCalcBase
{
protected:
	int a, b, out;
public:
	CCalcBase() { a = b = out = 0; cout << "CalcBase::Ctor" << endl; }
	~CCalcBase() { cout << "CalcBase::Dtor" << endl; }
	void SetValue(int _a, int _b) { a = _a, b = _b; }
	int GetValue() { return out; }
	void plus() { out = a + b; }
	void sub() { out = a - b; }
};

class CCalcExt : public CCalcBase
{
public:
	CCalcExt() { cout << "CCalcExt::Ctor" << endl; }
	~CCalcExt() { cout << "CCalcExt::Dtor" << endl; }
	void mul() { out = a * b; }
	void div() { out = a / b; }

};

int main(void)
{
	// ������/�Ҹ��� ����
	// 1.�θ�Ŭ���� ������ ����
	// 2.�ڽ�Ŭ���� ������ ����
	// 3.�ڽ�Ŭ���� �Ҹ��� ����
	// 4.�θ�Ŭ���� �Ҹ��� ����
	CCalcExt calcExt;
	return 0;
}