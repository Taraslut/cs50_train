import random

ll = [] # list()
for i in range(20):
    ll.append(random.randint(0, 100))
print(ll)

# it works for tuple, list, str
print(ll[0:3])
print(ll[:3])
print(ll[:])
print(ll[0:5:2])
print(ll[3::-1])
print(ll[-1])
print(ll[:-1])

ss = "Hello world!"
print(ss)
print(ss[::2])
print(ss[::-1])
