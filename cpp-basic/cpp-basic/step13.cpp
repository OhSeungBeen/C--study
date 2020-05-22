//interface
//virtual function
#include<iostream>
using namespace std;
class IcameraInterface {
public:
	IcameraInterface() {
		cout << "Icamera::ctor" << endl;
	}
	// c++�� ����
	// �޸𸮸� �����Ҵ��ؼ� upcasting�� �ٷ��� ����� ���
	// interface�Ҹ��ڿ� virtual Ű���带 �ٿ��� �Ѵ�.
	// ������ ������ �ڽ�Ŭ������ �Ҹ��ڴ� ������� �ʴ´�.
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
	//interface�� upcasting�� �����ϴ�.
	IcameraInterface* pCamera = new CApple;
	pCamera->play();
	pCamera->snap();
	pCamera->record();

	if (pCamera != nullptr) {
		delete pCamera;
		pCamera = nullptr;
	}

	//�Լ��� ���弼��.
	//samsung/apple camerinterface* �� �Ű������� �޾�
	//�Լ������� camera �ɹ��Լ��� Play/Snap/Record�� ȣ���ϼ���.
	// ex code)
	// �Ｚ�� �����޸� �Ҵ�
	// Selfi(�Ｚ��)
	// �Ｚ�� �޸� ����
	// ���ò� �����޸� �Ҵ�
	// Selfi(���ò�)
	// ���ò� �޸� ����

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
