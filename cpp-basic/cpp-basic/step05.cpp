// ���� ���α׷� �����
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

	//�Է�
	void setValue(int l, int r) { a = l, b = r; }
	//���
	void mul() { result = a * b; }
	void plus() { result = a + b; }
	void sub() { result = a - b; }
	void div() { result = a / b; }
	//���
	int getvalue() { return result; }
private:
	//�Է� �ɹ�����
	int a, b;
	//��� �ɹ�����
	int result;
};

int main(void)
{
	if (0)
	{
		//���� Ŭ������ ����ÿ�.
		//�Է� a, b
		int a = 0, b = 0;
		cout << "a="; cin >> a;
		cout << "b="; cin >> b;
		//������ +, -, *, /
		//*
		int out = 0;
		out = a * b;
		//��� result
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