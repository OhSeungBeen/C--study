// namespace 
// ��ü ����� �ʱ�ȭ
#include<iostream>
#include<vector>

/*��ȯ Ÿ��  �Լ� �̸�  �Ű�����
  int       main       void */
int main(void) {
    //int - ��ü
    //int result - ��ü ���� ����
    //int result = 0 - ��ü ���� �ν��Ͻ�ȭ �� ���Կ����� �ʱ�ȭ
    int result = 0;
    // int abc - ��ü ���� �ν��Ͻ�ȭ �� ��ü �ʱ�ȭ
    int abc(0);

    //int - ��ü, �ڷḦ 4bytes ���� �� �ֽ��ϴ�.
    int size_int = sizeof(int); // 4
    int size_double = sizeof(double); // 8

    // std - standard lib
    // std - namespace { cout }
    std::cout << "size_int = " << size_int << std::endl;
    std::vector<int> vAbc;

    using namespace std;
    // opencv keyword ... min�� �ְ�
    // std    keyword ... min�� ������� �ߺ��ǹǷ� using namespace���ٴ� :: �� ��

    int result = 0;
    return result;
}