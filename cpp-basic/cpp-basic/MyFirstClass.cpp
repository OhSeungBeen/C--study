//#include<MyFirstClass.h>
#include "./MyFirstClass.h" //local path directory
#include <vector>
using namespace std;

MyFirstClass::MyFirstClass(void)
	: nA_public(0)
	, nA_protected(0)
	, nA_private(0)
	//생성과 동시 멤버 변수 초기화
{
	//생성 후 멤버 변수 초기화
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
	// int arrData[100]; 같다.
	vector<int> vData(val);
	cout << "MyFisrtClass:ctor" << endl;
}

MyFirstClass::~MyFirstClass()
{	//자원 반환
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
