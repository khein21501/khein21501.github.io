class Queue:
    def __init__(self):
        self.queue=[]
    
    def enqueue(self,item):
        self.queue.append(item)
    
    def dequeue(self):
        if len(self.queue)<1:
            return None
        return self.queue.pop(0)
    def display(self):
        print(self.queue)
    
    def size(self):
        return len(self.queue)

q = Queue()
print(q.__dict__)
q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
q.enqueue(4)
q.enqueue(5)
q.display()
print(q.size())
print('First Dequeue',q.dequeue())
print(q.queue)
print('Second Dequeue',q.dequeue())
print(q.queue)
print('Third Dequeue', q.dequeue())
print(q.queue)
print(q.size())
print('After removing an element: ')
q.display()