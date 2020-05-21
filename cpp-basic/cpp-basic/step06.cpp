#include <iostream>
//class 상속
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
	// 생성자/소멸자 순서
	// 1.부모클래스 생성자 실행
	// 2.자식클래스 생성자 실행
	// 3.자식클래스 소멸자 실행
	// 4.부모클래스 소멸자 실행
	CCalcExt calcExt;
	return 0;
}