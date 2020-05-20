// namespace 
// 객체 선언과 초기화
#include<iostream>
#include<vector>

/*반환 타입  함수 이름  매개변수
  int       main       void */
int main(void) {
    //int - 객체
    //int result - 객체 변수 선언
    //int result = 0 - 객체 변수 인스턴스화 후 대입연산자 초기화
    int result = 0;
    // int abc - 객체 변수 인스턴스화 시 객체 초기화
    int abc(0);

    //int - 객체, 자료를 4bytes 담을 수 있습니다.
    int size_int = sizeof(int); // 4
    int size_double = sizeof(double); // 8

    // std - standard lib
    // std - namespace { cout }
    std::cout << "size_int = " << size_int << std::endl;
    std::vector<int> vAbc;

    using namespace std;
    // opencv keyword ... min이 있고
    // std    keyword ... min이 있을경우 중복되므로 using namespace보다는 :: 사 용

    int result = 0;
    return result;
}