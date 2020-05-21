#pragma once
#include<iostream>
#include<memory>
#include<algorithm>

// 키워드 ... 클래스 이름
class MyFirstClass
{
//캡슐화 ... 내부/외부에서 사용할 수 있는 기능을 분리 할 수 있다.
public :
	MyFirstClass(); //생성자..ctro
	MyFirstClass(int val); // 생성자 오버로딩
	~MyFirstClass(); //소멸자..dtor
	void SetValue(int val);
	int GetValue();
	int nA_public = 0;
protected:
	int nA_protected = 0;
private:
	int nA_private = 0;
	int* pData = nullptr;
	
	// smart pointer
	std::shared_ptr<int> pShData = nullptr;
};

