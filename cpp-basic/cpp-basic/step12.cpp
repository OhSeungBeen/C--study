//interface
//virtual function
#include<iostream>
using namespace std;
class IcameraInterface {
public:
	IcameraInterface() {
		cout << "Icamera::ctor" << endl;
	}
	~IcameraInterface() {
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

class CSmusung : public IcameraInterface {
public:
	CSmusung() { cout << "CSmusung::ctor" << endl; }
	~CSmusung() { cout << "CSmusung::dtor" << endl; }
	void play() override { cout << "CSmusung::play" << endl; }
	void snap() override { cout << "CSmusung::snap" << endl; }
	void record() override { cout << "CSmusung::record" << endl; }
};

int main(void) {
	CApple appleCamera;
	appleCamera.play();
	appleCamera.snap();
	appleCamera.record();

	CSmusung sumsung;
	sumsung.play();
	sumsung.snap();
	sumsung.record();

	//interface도 upcasting이 가능하다.
	IcameraInterface* pCamera = nullptr;
	pCamera = &appleCamera;
	pCamera->play();
	pCamera->snap();
	pCamera->record();

	pCamera = &sumsung;
	pCamera->play();
	pCamera->snap();
	pCamera->record();
	
	return 1;
}