//static ������ �����(��ü���� �ڿ��� ����)
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
int Person::value = 0; // ���� ��� ������ ���� �� �ʱ�ȭ

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

	// �������� ���� ������ �ڿ��� �߸��� �� �ִ�.
	Person::value = -100000;

	PersonA.Up(); cout << "value = " << Person::value << endl;
	PersonB.Down(); cout << "value = " << Person::value << endl;

	PersonA.Up(); cout << "value = " << Person::value << endl;
	PersonB.Down(); cout << "value = " << Person::value << endl;

	PersonA.Up(); cout << "value = " << Person::value << endl;
	PersonB.Down(); cout << "value = " << Person::value << endl;

	return 1;
}