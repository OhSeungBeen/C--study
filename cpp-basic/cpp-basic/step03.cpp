// 자료형의 크기
// 문자열 출력과 입력
// 예제 (구구단 출력, 히스토그램)
#include<iostream>
#include<string>

// namesapce 선언
using namespace std;

int main(void) {
	int result(0);
	int int_size(0);
	short short_size(0xffff);
	double double_size(0.0f);
	char char_size(0xff);

	// cout 사용
	std::cout << "int_size(" << sizeof(int_size) << ") = " << int_size << endl;
	cout << "short_size(" << sizeof(short_size) << ") = " << short_size << endl;
	cout << "double_size(" << sizeof(double_size) << ") = " << double_size << endl;
	cout << "char_size(" << sizeof(char_size) << ") = " << char_size << endl;

	// string 사용
	// to_string()
	// int -> string parse
	string str;
	str += "int_size(";
	str += to_string(sizeof(int_size));
	str += ") = ";
	str += to_string(int_size);
	cout << str << endl;

	// 구구단 출력
	for (int i = 1; i <= 9; i++) {
		string line = "";
		for (int j = 1; j <= 9; j++) {
			line += to_string(j);
			line += "*";
			line += to_string(i);
			line += "=";
			line += to_string(j * i);
			line += "\t";
		}
		cout << line << endl;
	}

	// 입력 구구단(무한 출력)
	// -1, -1 입력시 프로그램종료
	/*while (1) {
		int in_a = 0;
		int in_b = 0;
		cout << "입력 구구단 a =  ";
		cin >> in_a;
		cout << "입력구구단 b = ";
		cin >> in_b;

		if (in_a == -1 && in_b == -1)
			return result;

		cout << "입력 구구단 a = " << in_a << "b = " << in_b << endl;
		for (int k = 1; k <= in_b; k++) {
			cout << in_a << " * " << k << " = " << in_a * k << endl;
		}
	}*/

	// 알파벳 히스토그램 출력
	// A-65, 0x41
	// B-90, 0x5A
	// a-97, 0x61
	// z-122, 0x7A
	cout << "영문 문자열을 입력하세요." << endl;
	string strAlpha;
	cin >> strAlpha;
	int alphabet[1000] = { 0, };
	for (int i = 0; i < strAlpha.size(); i++)
		alphabet[strAlpha[i]]++;
	for (char c = 'A'; c <= 'z'; c++) {
		if (alphabet[c] == 0)continue;
		cout << c << "=" << alphabet[c] << endl;
	}

	return result;
}