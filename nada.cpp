#include <iostream>

using namespace std;
class A
{
private:
  int a;
public:
  void mostra();

};

void A::mostra() {

  cout << "Hello world!!"<<endl;
};

int main()
{
  cout<< "Hello world "<<endl;
  A a,b,c;
a.mostra();
  return 0;
}
