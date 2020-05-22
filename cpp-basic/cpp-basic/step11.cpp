// 상속 (specialization)
// casting
//업캐스팅(Upcasting) : 클래스 객체를 기반 클래스로 변환하는것을 업캐스팅이라고 한다.
//부모 형식에서 자식 형식을 사용하겠다는 것.
//특정 객체가 하위 클래스의 형에서 상위 클래스의 형으로 캐스팅 되는 것
//형만 정확하다면 묵시적으로 캐스팅
//캐스팅 후에 자식클래스에만 정의되있는 메소드에는 접근 할 수 없다.

//다운캐스팅(Downcasting) : 클래스 객체를 파생클래스형으로 변환하는 것을 다운캐스팅이라고 한다.
//자식 형식에서 부모 형식을 사용하겠다는 것.
//업캐스팅 한 것을 다시 원래의 형으로 되돌려주는 작업
//명시적으로 원래의 형을 지정해 주어야 한다.
//원래의 형이 무엇인지 잘 알고 사용해야 한다.(instanceof 연산자 이용)


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

	//부모클래스의 참조변수(포인터)를 사용하여 자식클래스들을 접근할 수 있다.
	CShape* pShape = nullptr;
	pShape = &tri; cout << pShape->getCornerCount() << endl;
	pShape = &squre; cout << pShape->getCornerCount() << endl;

	//포인터 배열을 사용해서 여러가지 자식클래스들에 접근 할 수 있다.
	CShape* pSh[2] = { nullptr, nullptr };
	pSh[0] = &tri;
	pSh[2] = &squre;
	for (int i = 0; i < 2; i++)
		cout << pSh[i]->getCornerCount() << endl;


	//casting
	//자료형끼리는 상속관계가없다.
	int iValue = 5;
	double dValue = 1.234252425;
	iValue = (int)dValue; //c/c++
	iValue = static_cast<int>(dValue);//c++
	dValue = (double)iValue;

	//class A (func 1,2,3,4)가 있고
	//class B : public A func(1,2,3,4) + func(5,6,7,8)가 있다면
	//class A = cA;
	//class B = cB;

	//upcasting
	//cA = cB //func 1,2,3,4 만사용 가능
	//downcasting
	//cA에 실제 cB 인스턴스가없으면 담을 수 없다.
	//cB = cA // func 1,2,3,4,5,6,7,8 사용 가능
	A* pa = new B;
	B* pb = new B;
	pb = (B*)pa;
	return 1;
}


