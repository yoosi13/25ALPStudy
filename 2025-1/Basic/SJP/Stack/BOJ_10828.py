import sys
input = sys.stdin.readline
stack = []
for _ in range(int(input())):
    O = [*input().split()]
    if O[0] == 'push':
        stack.append(O[1])
    elif O[0] == 'pop':
        if len(stack)!=0:
            sys.stdout.write(stack.pop() + '\n')
        else:
            sys.stdout.write('-1' + '\n')
    elif O[0] == 'size':
        sys.stdout.write(str(len(stack)) + '\n')
    elif O[0] == 'empty':
        if len(stack) == 0:
            sys.stdout.write('1' + '\n')
        else:
            sys.stdout.write('0' + '\n')
    elif O[0] == 'top':
        if len(stack) != 0:
            sys.stdout.write(stack[-1] + '\n')
        else:
            sys.stdout.write('-1' + '\n')
