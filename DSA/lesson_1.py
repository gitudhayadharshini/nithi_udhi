# stack
def create_stack():
    stack= []
    return stack
def check_empty(stack):
    return len(stack)==0
def push(stack,item):
    stack.append(item)
    print (item)
def pop(stack):
    return stack.pop()

stack=create_stack()
push(stack,int(1))
push(stack,int(4))
push(stack,int(3))
pop(stack)
print(str(stack))
