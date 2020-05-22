//interface
//virtual function
#include<iostream>
using namespace std;
class IcameraInterface {
public:
	IcameraInterface() {
		cout << "Icamera::ctor" << endl;
	}
	// c++의 결함
	// 메모리를 동적할당해서 upcasting을 바로해 사용할 경우
	// interface소멸자에 virtual 키워드를 붙여야 한다.
	// 붙이지 않으면 자식클래스의 소멸자는 실행되지 않는다.
	virtual ~IcameraInterface() {
		cout << "Icamera::dtor" << endl;
	}
	//void play() { cout << "IcameraInterface::play::" << endl; }
	//void snap() { cout << "IcameraInterface::snap" << endl; }
	//void record() { cout << "IcameraInterface::record" << endl; }
	virtual void play() = 0;
	virtual void snap() = 0;
	virtual void record() = 0;
};

class CApple : public IcameraInterface {
public:
	CApple() { cout << "CApple::ctor" << endl; }
	~CApple() { cout << "CApple::dtor" << endl; }
	void play() override { cout << "CApple::play" << endl; }
	void snap() override { cout << "CApple::snap" << endl; }
	void record() override { cout << "CApple::record" << endl; }
};

class CSmasung : public IcameraInterface {
public:
	CSmasung() { cout << "CSmasung::ctor" << endl; }
	~CSmasung() { cout << "CSmasung::dtor" << endl; }
	void play() override { cout << "CSmasung::play" << endl; }
	void snap() override { cout << "CSmasung::snap" << endl; }
	void record() override { cout << "CSmasung::record" << endl; }
};

void selfi(IcameraInterface* ic) {

	if (ic == nullptr) return;

	ic->play();
	ic->snap();
	ic->record();

}


int main(void) {
	//interface도 upcasting이 가능하다.
	IcameraInterface* pCamera = new CApple;
	pCamera->play();
	pCamera->snap();
	pCamera->record();

	if (pCamera != nullptr) {
		delete pCamera;
		pCamera = nullptr;
	}

	//함수를 만드세요.
	//samsung/apple camerinterface* 를 매개변수로 받아
	//함수내에서 camera 맴버함수인 Play/Snap/Record를 호출하세요.
	// ex code)
	// 삼성꺼 동적메모리 할당
	// Selfi(삼성꺼)
	// 삼성꺼 메모리 해제
	// 애플꺼 동적메모리 할당
	// Selfi(애플꺼)
	// 애플꺼 메모리 해제

	string camera;
	IcameraInterface* ic = nullptr;
	while (1) {
		cin >> camera;
		if (camera == "apple") {
			ic = new CApple;
		}
		else if (camera == "samsung") {
			ic = new CSmasung;
		}
		selfi(ic);
		if (ic != nullptr) {
			delete ic;
			ic = nullptr;
		}
	}



	return 1;
}
