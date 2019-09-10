#include <iostream>
using namespace std;

class Exp{
  int sum = 1;
  int B;
  int E;
public:
  Exp(){
    B = 1;
    E = 1;
  }
  Exp(int c){
    B = c;
    E = 1;
  }
  Exp(int a, int b){
    B = a;
    E = b;
  }

  int getValue(){
    int i = 0;
    while(i != E){
      sum = B* sum;
      i++;
    }
    return sum;
  }
  int getBase(){
    return B;
  }
  int getExp(){
    return E;
  }
  int equals(Exp X){
    if(sum == X.sum)
      return 1;
    else
      return 0;
  }
};

int main(){

  Exp a(3,2);
  Exp b(9);
  Exp c;

  cout << a.getValue() <<" "<<b.getValue() << " "<<c.getValue()<<endl;
  cout <<"a's Base " << a.getBase() << ", Exp " << a.getExp() <<endl;

  if(a.equals(b))
    cout << "same" << endl;
  else
    cout << "not same" << endl;
}
