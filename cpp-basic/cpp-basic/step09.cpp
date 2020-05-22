// static
#include<iostream>

//������ �����Ѵٸ�
//static�� ������ �Ǿ� �ִ�.
/*static*/int A = 0;
using namespace std;
class CABC
{
public:
	CABC() {
		cout << "CABC::ctor" << endl;
	}
	~CABC()
	{
		cout << "CABC::dtor" << endl;
	}
	static int A;
	int B = 0;
};

int CABC::A = 0;

void main() {
	//memory
	//heap - new������� �������� �޸𸮸� �Ҵ��� ��
	//stack - func/local���� �Ҵ�
	//static - global�� �������� ��

	// func / class ĸ��ȭ/����ȭ�ߴµ�
	// static�� ����ϸ� static������ �ö󰡱⶧���� open �Ǿ������.
	// ���� ��ü�� �ν��Ͻ� : �����ֱ� {} ctor/dtor�� �������� �������ȴ�.
	// static�� �����ֱⰡ process.exe �����ϰ� ���������� �̴�.
	// thread ����Ҷ�... plug-in + export pointer 

	static int A = 0;

	CABC abc;
	abc.A = 1;
	abc.B = 2;
	CABC::A = 10;

}