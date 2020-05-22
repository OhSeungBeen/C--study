//static 변수의 장단점(객체간의 자원을 공유)
//game up&down
#include <iostream>
using namespace std;
class Person
{
public:
	Person() {};
	~Person() {};
	void Up() { value += 10; }
	void Down() { value -= 10; }
public:
	static int value;
};
int Person::value = 0; // 정적 멤버 변수의 정의 및 초기화

int main(void)
{
	Person PersonA, PersonB;
	cout << "value = " << Person::value << endl;

	PersonA.Up(); cout << "value = " << Person::value << endl;
	PersonB.Down(); cout << "value = " << Person::value << endl;

	PersonA.Up(); cout << "value = " << Person::value << endl;
	PersonB.Down(); cout << "value = " << Person::value << endl;

	PersonA.Up(); cout << "value = " << Person::value << endl;
	PersonB.Down(); cout << "value = " << Person::value << endl;

	// 누군가에 의해 공유된 자원이 잘못될 수 있다.
	Person::value = -100000;

	PersonA.Up(); cout << "value = " << Person::value << endl;
	PersonB.Down(); cout << "value = " << Person::value << endl;

	PersonA.Up(); cout << "value = " << Person::value << endl;
	PersonB.Down(); cout << "value = " << Person::value << endl;

	PersonA.Up(); cout << "value = " << Person::value << endl;
	PersonB.Down(); cout << "value = " << Person::value << endl;

	return 1;
}