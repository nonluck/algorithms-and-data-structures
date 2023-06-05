#include <iostream>
#include <string>
#include "Queue.hpp"
using namespace std;

int main(){
    Queue<int> queue;
    queue.insert(43);
    queue.insert(76);
    queue.insert(94);
    queue.insert(13);
    queue.insert(3);
    queue.insert(54);
    queue.display();
    queue.remove();
    cout << queue.getHead() << " " << queue.getTail()<< endl;
    queue.display();
    queue.remove();
    cout << queue.getHead() << " " << queue.getTail()<< endl;
    queue.display();
    



}