tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]

stack = []

for i in tokens:
	if i == '/':
		first = stack.pop()
		second = stack.pop()
		stack.append(int(second / first))
	elif i == '+':
		stack.append(stack.pop()+stack.pop())
	elif i == '*':
		stack.append(stack.pop()*stack.pop())
	elif i == '-':
		first = stack.pop()
		second = stack.pop()
		stack.append(second - first)
	else:
		stack.append(int(i))
print(stack)