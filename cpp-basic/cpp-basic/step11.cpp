// ��� (specialization)
// casting
//��ĳ����(Upcasting) : Ŭ���� ��ü�� ��� Ŭ������ ��ȯ�ϴ°��� ��ĳ�����̶�� �Ѵ�.
//�θ� ���Ŀ��� �ڽ� ������ ����ϰڴٴ� ��.
//Ư�� ��ü�� ���� Ŭ������ ������ ���� Ŭ������ ������ ĳ���� �Ǵ� ��
//���� ��Ȯ�ϴٸ� ���������� ĳ����
//ĳ���� �Ŀ� �ڽ�Ŭ�������� ���ǵ��ִ� �޼ҵ忡�� ���� �� �� ����.

//�ٿ�ĳ����(Downcasting) : Ŭ���� ��ü�� �Ļ�Ŭ���������� ��ȯ�ϴ� ���� �ٿ�ĳ�����̶�� �Ѵ�.
//�ڽ� ���Ŀ��� �θ� ������ ����ϰڴٴ� ��.
//��ĳ���� �� ���� �ٽ� ������ ������ �ǵ����ִ� �۾�
//��������� ������ ���� ������ �־�� �Ѵ�.
//������ ���� �������� �� �˰� ����ؾ� �Ѵ�.(instanceof ������ �̿�)


#include<iostream>
using namespace std;
class CShape {
public:
	CShape() { cout << "CShape::ctor" << endl; }
	~CShape() { cout << "CShape::dtor" << endl; }
	void setCoord(int _x, int _y) { x = _x, y = _y; }
	void setColor(int _color) { color = _color; }
	int getCornerCount() {return corner_count; }
protected:
	int x = 0, y = 0;
	int color = 0;
	int corner_count = 0;
};

class Ctriangle : public CShape {
public:
	Ctriangle() { corner_count = 3;  cout << "Ctriangle::ctor" << endl; }
	~Ctriangle() { cout << "Ctriangle::dtor" << endl; }
};

class Csqure : public CShape {
public:
	Csqure() { corner_count = 4;  cout << "Ctriangle::ctor" << endl; }
	~Csqure() { cout << "Ctriangle::dtor" << endl; }
};

class A {

};
class B : public A {

};

int main(void) {

	Ctriangle tri;
	tri.setCoord(10, 10);
	tri.setColor(100);
	cout << tri.getCornerCount() << endl;

	/*Ctriangle* ptri = nullptr;
	ptri = &tri;
	ptri->setColor(100);
	ptri->setCoord(10, 10);
	cout << ptri->getCornerCount() << endl;*/
	CShape* pShape = nullptr;
	// upcasting
	pShape = &tri;
	pShape->setColor(100);
	pShape->setCoord(10, 10);
	cout << pShape->getCornerCount() << endl;

	Csqure squre;
	squre.setCoord(20, 20);
	squre.setColor(250);
	cout << squre.getCornerCount() << endl;

	//�θ�Ŭ������ ��������(������)�� ����Ͽ� �ڽ�Ŭ�������� ������ �� �ִ�.
	CShape* pShape = nullptr;
	pShape = &tri; cout << pShape->getCornerCount() << endl;
	pShape = &squre; cout << pShape->getCornerCount() << endl;

	//������ �迭�� ����ؼ� �������� �ڽ�Ŭ�����鿡 ���� �� �� �ִ�.
	CShape* pSh[2] = { nullptr, nullptr };
	pSh[0] = &tri;
	pSh[2] = &squre;
	for (int i = 0; i < 2; i++)
		cout << pSh[i]->getCornerCount() << endl;


	//casting
	//�ڷ��������� ��Ӱ��谡����.
	int iValue = 5;
	double dValue = 1.234252425;
	iValue = (int)dValue; //c/c++
	iValue = static_cast<int>(dValue);//c++
	dValue = (double)iValue;

	//class A (func 1,2,3,4)�� �ְ�
	//class B : public A func(1,2,3,4) + func(5,6,7,8)�� �ִٸ�
	//class A = cA;
	//class B = cB;

	//upcasting
	//cA = cB //func 1,2,3,4 ����� ����
	//downcasting
	//cA�� ���� cB �ν��Ͻ��������� ���� �� ����.
	//cB = cA // func 1,2,3,4,5,6,7,8 ��� ����
	A* pa = new B;
	B* pb = new B;
	pb = (B*)pa;
	return 1;
}


