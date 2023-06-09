from Queue import Queue

if __name__ == "__main__":
    queue = Queue()
    queue.enqueue(54)
    queue.enqueue(23)
    queue.enqueue(12)
    queue.enqueue(7)
    queue.enqueue(565)
    queue.enqueue(32)
    print(queue)
    queue.dequeue()
    print(queue)
    queue.dequeue()
    print(queue)
    queue.dequeue()
    print(queue)