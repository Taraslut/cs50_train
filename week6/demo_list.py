# tuple, list, dictionary, set

tt = [12, 'Name', 34.5]
print(id(tt))
print(tt)
print(len(tt))

print(tt[0])
print(tt[1])

for i in range(len(tt)): # C--
    print(i, tt[i], sep='=>', end=", ")

print("\n", "="*40)

for i in tt: # Python
    print(i)

tt.append('Mykola')
tt[0] = 125

print("\n", len(tt))
for i in range(len(tt)): # C--
    print(i, tt[i], sep='=>', end=", ")

print(id(tt))

