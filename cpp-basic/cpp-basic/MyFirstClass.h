#pragma once
#include<iostream>
#include<memory>
#include<algorithm>

// Ű���� ... Ŭ���� �̸�
class MyFirstClass
{
//ĸ��ȭ ... ����/�ܺο��� ����� �� �ִ� ����� �и� �� �� �ִ�.
public :
	MyFirstClass(); //������..ctro
	MyFirstClass(int val); // ������ �����ε�
	~MyFirstClass(); //�Ҹ���..dtor
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

