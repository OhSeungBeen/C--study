// �ڷ����� ũ��
// ���ڿ� ��°� �Է�
// ���� (������ ���, ������׷�)
#include<iostream>
#include<string>

// namesapce ����
using namespace std;

int main(void) {
	int result(0);
	int int_size(0);
	short short_size(0xffff);
	double double_size(0.0f);
	char char_size(0xff);

	// cout ���
	std::cout << "int_size(" << sizeof(int_size) << ") = " << int_size << endl;
	cout << "short_size(" << sizeof(short_size) << ") = " << short_size << endl;
	cout << "double_size(" << sizeof(double_size) << ") = " << double_size << endl;
	cout << "char_size(" << sizeof(char_size) << ") = " << char_size << endl;

	// string ���
	// to_string()
	// int -> string parse
	string str;
	str += "int_size(";
	str += to_string(sizeof(int_size));
	str += ") = ";
	str += to_string(int_size);
	cout << str << endl;

	// ������ ���
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

	// �Է� ������(���� ���)
	// -1, -1 �Է½� ���α׷�����
	/*while (1) {
		int in_a = 0;
		int in_b = 0;
		cout << "�Է� ������ a =  ";
		cin >> in_a;
		cout << "�Է±����� b = ";
		cin >> in_b;

		if (in_a == -1 && in_b == -1)
			return result;

		cout << "�Է� ������ a = " << in_a << "b = " << in_b << endl;
		for (int k = 1; k <= in_b; k++) {
			cout << in_a << " * " << k << " = " << in_a * k << endl;
		}
	}*/

	// ���ĺ� ������׷� ���
	// A-65, 0x41
	// B-90, 0x5A
	// a-97, 0x61
	// z-122, 0x7A
	cout << "���� ���ڿ��� �Է��ϼ���." << endl;
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