#include <iostream>
#include <string>
#include "Node.hpp"
using namespace std;
template <typename T>

class Queue{
    private:
        Node<T>* head;
        Node<T>* tail;
        int size = 0;
    public:
        Queue(){
            head = nullptr;
            tail = nullptr;
        }
        int getSize(){
            return this->size;
        }

        bool isEmpty(){
            return this->size == 0;
        }

        T getTail(){
            return tail->data;
        }

        T getHead(){
            return head->data;
        }

        void insert(T value){
            Node<T>* newNode = new Node<T>;
            newNode->data = value;
            if(this->isEmpty()){
                head = newNode ;
                tail = head;
                size++;
            }else{
                newNode->next = head;
                head = newNode;
                size++;
            }
        }

        void display(){
            Node<T>* current = head;
            while (current != nullptr) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }


        void remove(){
          
            try{
                if(this->isEmpty()){
                    throw 400;
                }
                if(this->size == 1){
                    head = nullptr;
                    size--;
    
                }else{
                    Node<T>* current = head;
                    for(int i = 0; i < this->size-2;i++){
                        current = current->next;
                    }
                    current->next = nullptr;
                    tail=current;
                    size--;
                }
                

            }catch(int error){
                cout << "aconteceu o erro " << error << endl;
            }
    
        }
    
};
