//function/class template
#include<iostream>
#include<vector>
#include<string>
using namespace std;

//function template
template<class T1, class T2, class T3>
T3 mySawp(T1& a, T2& b) {
	T1 temp = a;
	a = b;
	b = temp;
	return temp;
}

//class template
template<class T1, class T2, class T3>
class Calc {
public:
	Calc() {
		a = 0; b = 0; c = 0;
		cout << "Calc::Ctor" << endl;
	} //ctor
	~Calc() {
		cout << "Calc::Dtor" << endl;
	} //detor
	void setValue(T1 _a, T2 _b) {
		a = _a;
		b = _b;
	} //input
	void calc() {
		c = a + b;
	} //calculation
	T3 getValue() {
		return c;
	} //output
private:
	T1 a;
	T2 b;
	T3 c;
};

//1~10까지 랜던 입력(int or double or short)을 받아
//내부적으로 오름차순을 합니다.
//비교함수 매개 변수 자료형을 tempalte으로 받아 비교합니다.
//input fuction : inpuit() {cin>> a}
//calc fuction : sorting
//output print() : 1, 2, 3, 4, 5 ,6 ,7 ,8 ,9 ,10
template <class T>
class CInObj
{
	std::vector<T> data;
	int count;
public:
	CInObj()
	{
		count = 0;
	}
	~CInObj() {}
	//input
	void add(T in) { data.push_back(in); }
	//algorithm
	void bigger(T& a, T& b)
	{
		T temp = a;
		if (a > b) { a = b;  b = temp; }
	}
	void sort()
	{
		for (int c = 0; c < data.size(); c++)
		{
			for (int i = 0; i < data.size() - 1; i++)
			{
				bigger(data[i], data[i + 1]);
			}
		}

	}
	//output
	void print()
	{
		for (int i = 0; i < data.size(); i++)
		{
			cout << data[i] << "\t" << endl;
		}
	}
};

int main(void) {
	int a = 10;
	int b = 20;
	cout << "a:" << a << " b:" << b << endl;
	mySawp<int , int, int>(a, b);
	cout << "a:" << a << " b:" << b << endl;

	int i = 10;
	double j = 20.123;
	double k = 0.0;
	Calc<int, double, double> c1;

	c1.setValue(i, j);
	c1.calc();
	k = c1.getValue();
	cout << "i:" << a << " j:" << b << " k:" << k << endl;

	CInObj<int> obj;
	for (int i = 0; i < 10; i++)
	{
		string str;
		cout << "input[int]="; cin >> str;
		obj.add(std::stoi(str));
	}
	obj.sort();
	obj.print();

	return 0;
}