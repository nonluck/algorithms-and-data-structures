#include <iostream>
#include "LinkedList.hpp"
using namespace std;
//DIANTE QUALQUER MOTIVO, APENAS OBJETIVO
int main(){
    LinkedList<int> intList;
    intList.insert(10);
    intList.insert(20);
    intList.insert(40);
    intList.display();
    intList.insert(45, 2);
    intList.display();
  
    intList.remove(2);
    intList.insert(50);
    intList.insert(60,0);
    intList.insert(70);
    intList.insert(75, 38);
    intList.insert(80);
    intList.remove(5);
    intList.remove(0);
    intList.display();
    intList.insert(105, 6);
    intList.display();
    intList.insert(15, 5);
    intList.display();
    cout << intList.getSize() <<endl;
   
    return 0;
}