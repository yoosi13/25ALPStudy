text = input()
count = [0] * 26
for i in range(len(text)):
    count[ord(text[i]) - 97] += 1
for i in count:
    print(i, end = ' ')
