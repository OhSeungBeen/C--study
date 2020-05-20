// C++
#include<iostream>
// C++ 장점
/* 1. "c"의 확장성... c를 포함해야 합니다.
       c - 장점/단점 ... 단점 ... static
   2. c++ 캡슐화 ... 외부의 접근을 막는 기능을 가지고 있음.
      c의 static 기능을 포함해야 하는 기능으로 보안상 결점을 내포
   3. c++ 코드를 재사용 할 수 있게 해줍니다.
      class CABC {} ... 캡슐화 객체 -> 다른 곳에서도 사용이 가능
   4. c 언어 대비 type의 validation(유효성)

   C++ 설계
   :: 캡슐화 / 상속성 / 다형성
   class CABC
   {
   public : void sum(int a, int b); // 외부 접근가능
   protected : void sum(int a, int b); //상속관계 접근가능
   private : void sum(int a, int b); // 나만 접근가능
   }

   class CXXX : public CABC {
   public : void sum(int a, int b); // 외부 접근가능
   protected : void sum(int a, int b); //상속관계 접근가능
   public : void sub(int a, int b);
   public : void sub(double a, double b);
   }

   // 다형성
   CABC *pABC = new CXXX;
   CABC *PABC = new CABC
   // Parent Class를 Interface화 시켜서 설계를 하면
   // 자식(파생) 클래스를 자유롭게 선택적으로 사용 할 수 있습니다.
*/


int sum(int a, int b) { return a + b; }
int main() {
    std::cout << "Hello world!\n";
    std::cout << "a=1, b=2 -->" << sum(1, 2) << std::endl;
}