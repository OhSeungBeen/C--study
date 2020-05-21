// 계산기 프로그램 만들기
#include <iostream>
using namespace std;
class CalcTool
{
public:
	CalcTool()
	{
		a = 0, b = 0, result = 0;
		cout << "ctor" << endl;
	}
	~CalcTool() { cout << "dtor" << endl; }

	//입력
	void setValue(int l, int r) { a = l, b = r; }
	//계산
	void mul() { result = a * b; }
	void plus() { result = a + b; }
	void sub() { result = a - b; }
	void div() { result = a / b; }
	//출력
	int getvalue() { return result; }
private:
	//입력 맴버변수
	int a, b;
	//출력 맴버변수
	int result;
};

int main(void)
{
	if (0)
	{
		//계산기 클래스를 만드시오.
		//입력 a, b
		int a = 0, b = 0;
		cout << "a="; cin >> a;
		cout << "b="; cin >> b;
		//연산자 +, -, *, /
		//*
		int out = 0;
		out = a * b;
		//출력 result
		cout << "out=" << out << endl;

	}

	CalcTool tool;
	int a = 0, b = 0;
	cout << "a="; cin >> a;
	cout << "b="; cin >> b;

	tool.setValue(a, b);
	tool.mul();
	cout << "out[*]=" << tool.getvalue() << endl;

	tool.div();
	cout << "out[/]=" << tool.getvalue() << endl;

	tool.sub();
	cout << "out[-]=" << tool.getvalue() << endl;

	tool.plus();
	cout << "out[+]=" << tool.getvalue() << endl;


	return 1;
}