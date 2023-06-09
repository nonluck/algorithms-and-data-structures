from Stack import Stack

if  __name__ == "__main__":
    stack = Stack()
    print(stack)
    stack.push(43)
    stack.push(65)
    stack.push(12)
    stack.push(3)
    stack.push(6)
    stack.push(172)
    stack.push(93)
    stack.push(75)
    stack.push(52)
    print(stack)
    stack.pop()
    stack.pop()
    print(stack)
    print(stack.getTop())