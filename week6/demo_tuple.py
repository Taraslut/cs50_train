# tuple, list, dictionary, set

tt = (12, 'Name', 34.5)
print(id(tt))
print(tt)
print(len(tt))

print(tt[0])
print(tt[1])

for i in range(len(tt)):
    print(i, tt[i], sep='=>', end=", ")

print("\n", "="*40)

for i in tt:
    print(i)

tt = 125, *tt[1:]
print(tt)
print(id(tt))