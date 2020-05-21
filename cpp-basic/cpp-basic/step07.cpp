//변수 vs 배열 vs 구조체 vs 클래스
//정적/동적 메모리 할당
#include<iostream>
#include<string>

using namespace std;
int main(void) {
	//변수
	int nA = 1234;
	nA = -1234;

	//배열
	int arrA[3];
	arrA[0] = 123;
	arrA[1] = 12;
	arrA[2] = 1;

	//구조체
	struct _stInfo {
		int A = 0;
		int B = 1;
		string str = "hello";
		void setValue(int a, int b) { A = a, B = b; }
		//class 는
		//public ctor/dtor
		//public/protected/private 있지만 struct에는 없다.
	};
	_stInfo info;
	//맴버 변수에 직접적으로 접근이 가능하다.
	info.A = 1;
	info.B = 2;
	info.str = "world";
	info.setValue(1, 2);
	
	//클래스
	class CInfo {
		// 기본 접근제어자는 private이다.
		int A = 1;
		int B = 2;
	public:
		CInfo() {}; ~CInfo() {};
		void setValue(int a, int b) { A = a, B = b; }

		//구조체 맴버변수로 선언
		_stInfo info;
		void setValue(_stInfo _info) { info = _info; }
	};

	CInfo cInfo;
	//맴버 변수에 직접적으로 접근이 불가능하다.
	//함수를 이용하여 접근
	cInfo.setValue(1, 2);
	cInfo.setValue(info);

	//객체의 동적할당
	int* pData = new int[100];
	pData[0] = 1;
	pData[99] = 100;
	if (pData) { delete[] pData; pData = nullptr; }

	_stInfo* pstInfo = new _stInfo[100];
	pstInfo[0].A = 1; pstInfo[0].B = 2; pstInfo[0].str = "0-string";
	pstInfo[99].A = 100; pstInfo[99].B = 200; pstInfo[0].str = "100-string";
	if (pstInfo) { delete[] pstInfo; pstInfo = nullptr; }

	CInfo* pcInfo = new CInfo;
	pcInfo->info.A = 1; pcInfo->info.B = 2; pcInfo->setValue(1, 2);
	if (pcInfo) { delete pcInfo; pcInfo = nullptr; }

	//정적 메모리 영역의 동적 접근 - pointer
	_stInfo stInfoo[100];
	_stInfo* pstInfoo = nullptr;
	pstInfoo = &stInfoo[0];
	pstInfoo->A = 1; pstInfoo->B = 2; pstInfoo->str = "struct string";

	pstInfoo = &stInfoo[99];
	pstInfoo->A = 100; pstInfoo->B = 200; pstInfoo->str = "struct string 100";

	CInfo cInfoo;
	CInfo* pcInfoo = &cInfoo;
	pcInfoo->info.A = 1; pcInfoo->info.B = 2; pcInfoo->info.str = "class struct string";


	return 0;
}