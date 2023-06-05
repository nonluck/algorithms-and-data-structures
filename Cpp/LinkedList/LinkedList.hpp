#include <iostream>
#include <string>
#include "Node.hpp"

using namespace std;
template <typename T>

class LinkedList{
    
    private:
        Node<T>* head;
        int size = 0;

    public:
        LinkedList(){
            head = nullptr;
        }

        int getSize(){
            return this->size;
        }

        void insert(T value) {
            Node<T>* newNode = new Node<T>;
            newNode->data = value;
            newNode->next = head;
            head = newNode;
            size++;
        }

        bool isEmpty(){
            return this->size == 0;
        }

        void insert(T value, int index) {
            try{
                if(index < 0){
                    throw 400;
                    }
                Node<T>* newNode = new Node<T>;
                newNode->data = value;
                if(index<=this->size-1 and index>0){
                    cout <<this->size<<endl;
                    //put in the middle
                    int counter = 0;
                    Node<T>* current = head;
                    while (counter!=index-1) {
                        current = current->next;
                        counter++;
                    }
                    newNode->next = current->next;
                    current->next = newNode;
                }else{
                    if(index==0){
                        newNode->next = head;
                        head = newNode;
                    }else{
                        Node<T>* current = head;
                        while (current->next != nullptr) {
                            current = current->next;}
                        current->next = newNode;
                    }
                }
                size++;
            }catch(int erro){
                cout << "Aconteceu um erro na inserção tipo " << erro <<"!!\n";
            }
            
            
        }

        void remove(int index){
            try{
                if(index<0 or index > this->size-1){
                    throw 400;
                }
                if(index==0){
                    head = head->next;
                    this->size--;
                }else{
                    Node<T>* current = head;
                    int count = 0;
                    while(count != index-1){
                        current = current->next;
                        count++;
                    }
                    current->next = current->next->next;
                    this->size--;
                }
            }catch(int error){
                cout << "Aconteceu na remoção o erro número "<<error<<"!!\n";
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

};