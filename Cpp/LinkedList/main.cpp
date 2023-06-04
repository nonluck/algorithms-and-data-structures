#include <iostream>
#include "LinkedList.hpp"
using namespace std;
//DIANTE QUALQUER MOTIVO, APENAS OBJETIVO
int main(){
    LinkedList<int> intList;
    intList.insert(10);
    intList.insert(20);
    intList.insert(30);
    intList.insert(40);
    intList.display();
    intList.insert(45, 2);
    intList.display();
    intList.insert(47, -4);
    intList.remove(5);
    intList.insert(50);
    intList.insert(60);
    intList.insert(50);
    intList.insert(60,0);
    intList.insert(70);
    intList.insert(75, 38);
    intList.insert(80);
    intList.insert(90);
    intList.display();
    intList.remove(5);
    intList.display();
    intList.remove(0);
    intList.display();
    intList.remove(10);
    intList.display();
    
    cout << intList.getSize() <<endl;
   
    return 0;
}