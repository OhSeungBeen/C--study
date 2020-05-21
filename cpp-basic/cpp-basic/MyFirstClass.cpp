//#include<MyFirstClass.h>
#include "./MyFirstClass.h" //local path directory
#include <vector>
using namespace std;

MyFirstClass::MyFirstClass(void)
	: nA_public(0)
	, nA_protected(0)
	, nA_private(0)
	//������ ���� ��� ���� �ʱ�ȭ
{
	//���� �� ��� ���� �ʱ�ȭ
	// nA_public = 0;
	// nA_protected = 0;
	// nA_private = 0;
	pData = new int[100];

	// smart pointer
	pShData = make_shared<int>(100);
	cout << "MyFisrtClass:ctor" << endl;
}

MyFirstClass::MyFirstClass(int val)
{
	nA_public = val;
	nA_protected = val;
	nA_private = val;
	pData = new int[val];
	//vertor
	// int arrData[100]; ����.
	vector<int> vData(val);
	cout << "MyFisrtClass:ctor" << endl;
}

MyFirstClass::~MyFirstClass()
{	//�ڿ� ��ȯ
	if (pData != nullptr) {
		delete[] pData;
		pData = nullptr;
	}
	cout << "MyFisrtClass:dtor" << endl;
}

void MyFirstClass::SetValue(int val)
{
	nA_public = val;
	nA_protected = val;
	nA_private = val;
}

int MyFirstClass::GetValue()
{
	return nA_private;
}
