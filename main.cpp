#include <iostream>

using namespace std;
class Keisan{
         public:
         int a;
         int b;
         int add();
         int sub();
         int str();
         double div();
     };

     int Keisan::add()
     {
         return a + b;
     }

     int Keisan::sub()
     {
         return a - b;
     }

     int Keisan::str()
     {
         return a * b;
     }

     double Keisan::div()
     {
         return (double) a / b;
     }

     

int main(){
    
    Keisan k;
    k.a = 4;
    k.b = 3;
    cout << k.a << "+" << k.b << "=" << k.add() << endl;

    cout << k.a << "-" << k.b << "=" << k.sub() << endl;

    cout << k.a << "*" << k.b << "=" << k.str() << endl;

    cout << k.a << "/" << k.b << "=" << k.div() << endl;

    return 0;

    }