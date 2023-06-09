class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
    def __str__(self):
        return f"{self.data}"

class Stack:
    def __init__(self):
        self.top = None
        self.size = 0

    def __str__(self)->str:
        if(self.isEmpty()):
            return "is empty"
        else:
            aux = self.top
            string = f"{aux.data}"
            aux = aux.next
            while(aux != None):
    
                string += f"->{aux.data}"
                aux = aux.next
            return string

    def isEmpty(self):
        return self.size == 0
    
    def getTop(self):
        return self.top

    def pop(self)->None:
        
        if(self.isEmpty()):
            return
        else:
            self.top = self.top.next
            self.size-=1
            return 
        

    def push(self, new: any)->None:
        
        newNode = Node(new)
        if(self.isEmpty()):
            self.top = newNode
        else:
            newNode.next = self.top
            self.top = newNode
        self.size+=1
        return
    
