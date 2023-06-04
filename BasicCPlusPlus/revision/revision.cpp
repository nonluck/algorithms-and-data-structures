#include <iostream>
#include <list>
#include <typeinfo>
using namespace std;

string msg;
const string hello = "Hellow nice and slow \n";
void changeVariable(){
    msg = "I'm the Daemon\n" ;
}

void Hello(){
    changeVariable();
    cout << msg << hello;
}

struct {
    int Age= 32;
    string pseudonym = "sexMachine";
} Janette;


int main(){
    cout << Janette.Age << "\n" << Janette.pseudonym << "\n";
    int num = 0b1010;
    int num2 = 0xff;
    cout << num << endl << num2 << endl;
    Hello();
    return 0;
}