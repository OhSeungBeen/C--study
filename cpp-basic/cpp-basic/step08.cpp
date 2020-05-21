//call by value
//call by reference
//call by adress
//deafault function
//method overroding
#include<iostream>
#include<vector>
using namespace std;
struct _stinfo
{
	int a;
};
//a-1,b-2 --> a-2,b-1
int swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	return 1;
}


int swap(int* pa, int* pb) {
	if(pa == nullptr) return -1;
	if(pb == nullptr) return -1;
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
	return 1;
}

int swap_ref(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
	return 1;
}

int Judge(std::vector<_stinfo>& vInfo)
{
	vInfo[0].a = 1;
	return 1;
}

//defalut function
int deafault_func(int a, int b, int c = 1) {
	return 1;
}

//method overroding
int deafault_func(int a, int b, int c, int d = 1) {
	return 1;
}

int main(void) {
	int a = 10, b = 20;
	std::vector<_stinfo> vInfo;

	//call by value
	swap(a, b);
	cout << "a = " << a << " b = " << b << endl;

	//call by reference
	swap_ref(a, b);
	cout << "a = " << a << " b = " << b << endl;
	Judge(vInfo);


	//call by address
	swap(&a, &b);
	cout << "a = " << a << " b = " << b << endl;

	deafault_func(1, 0);
	deafault_func(1, 2, 3, 4);
	return 1;
}