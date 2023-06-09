noneVerify = lambda node : "None" if node == None else f"{node.data}"

class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

    def __str__(self)->str:
        return f"back:{noneVerify(self.left)}| data: {self.data} | next: {noneVerify(self.right)}"
    

class BinaryTree:
    def __init__(self):
        self.root = None

    def insert(self):
        pass

    def search(self):
        pass

    def remove(self):
        pass

    def get_min_value(self):
        pass

    def traverse_inorder(self):
        pass

    def traverse_postorder(self):
        pass

    def traverse_preorder(self):
        pass
