// C++
#include<iostream>
// C++ ����
/* 1. "c"�� Ȯ�强... c�� �����ؾ� �մϴ�.
       c - ����/���� ... ���� ... static
   2. c++ ĸ��ȭ ... �ܺ��� ������ ���� ����� ������ ����.
      c�� static ����� �����ؾ� �ϴ� ������� ���Ȼ� ������ ����
   3. c++ �ڵ带 ���� �� �� �ְ� ���ݴϴ�.
      class CABC {} ... ĸ��ȭ ��ü -> �ٸ� �������� ����� ����
   4. c ��� ��� type�� validation(��ȿ��)

   C++ ����
   :: ĸ��ȭ / ��Ӽ� / ������
   class CABC
   {
   public : void sum(int a, int b); // �ܺ� ���ٰ���
   protected : void sum(int a, int b); //��Ӱ��� ���ٰ���
   private : void sum(int a, int b); // ���� ���ٰ���
   }

   class CXXX : public CABC {
   public : void sum(int a, int b); // �ܺ� ���ٰ���
   protected : void sum(int a, int b); //��Ӱ��� ���ٰ���
   public : void sub(int a, int b);
   public : void sub(double a, double b);
   }

   // ������
   CABC *pABC = new CXXX;
   CABC *PABC = new CABC
   // Parent Class�� Interfaceȭ ���Ѽ� ���踦 �ϸ�
   // �ڽ�(�Ļ�) Ŭ������ �����Ӱ� ���������� ��� �� �� �ֽ��ϴ�.
*/


int sum(int a, int b) { return a + b; }
int main() {
    std::cout << "Hello world!\n";
    std::cout << "a=1, b=2 -->" << sum(1, 2) << std::endl;
}