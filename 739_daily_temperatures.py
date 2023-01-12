temperatures = [73,74,75,71,69,72,76,73]

stack = []
output = [0]*len(temperatures)

for i in range(len(temperatures)):
	while stack and stack[-1][0] < temperatures[i]:
		stT, stI = stack.pop()
		output[stI] = i-stI
	stack.append([temperatures[i], i])

print(output)