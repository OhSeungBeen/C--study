// static
#include<iostream>

//전역에 생성한다면
//static이 생략이 되어 있다.
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
	//heap - new명령으로 동적으로 메모리를 할당할 때
	//stack - func/local변수 할당
	//static - global로 선언을할 때

	// func / class 캡슐화/은닉화했는데
	// static을 사용하면 static영역에 올라가기때문에 open 되어버린다.
	// 변수 객체의 인스턴스 : 생명주기 {} ctor/dtor을 만났을때 해제가된다.
	// static은 생명주기가 process.exe 시작하고 끝날때까지 이다.
	// thread 사용할때... plug-in + export pointer 

	static int A = 0;

	CABC abc;
	abc.A = 1;
	abc.B = 2;
	CABC::A = 10;

}