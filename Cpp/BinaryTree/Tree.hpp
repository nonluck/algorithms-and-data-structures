#include <iostream>
#include "Node.hpp"
template <typename T>

class BinaryTree{
    private:
        Node<T>* root;
        int size = 0;
    public:
        void insert(T value){
            Node<T>* newNode = new Node<T>;
            newNode->data = value;
            if(this->size == 0){
                root = newNode;
            }else{
                
            }
        }

};
