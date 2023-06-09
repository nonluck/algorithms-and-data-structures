noneVerify = lambda node : "None" if node == None else f"{node.data}"

class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        self.back = None
    def __str__(self):
        return f"back:{noneVerify(self.back)}| data: {self.data} | next: {noneVerify(self.next)}"
    
        
class Queue:
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0

    def __str__(self)->str:
        if(self.size == 0):
            return "is empty"
        else:
            aux = self.tail
            string = f"{aux.data}"
            aux = aux.next
            while(aux != None):
    
                string += f"->{aux.data}"
                print(aux)
                aux = aux.next
            return string


    def enqueue(self, newData)->None:
        newNode = Node(newData)
        if(self.size == 0):
            self.head = newNode
            self.tail = newNode
        else:
            self.tail.back = newNode
            newNode.next = self.tail
            self.tail = newNode
            
        self.size += 1

    def dequeue(self)->None:
        if(self.size==0):
            return 
        else:
            self.head = self.head.back
            self.head.next = None
        self.size-=1

