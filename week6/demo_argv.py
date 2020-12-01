import sys


fff = []
for name in dir(sys):
    if "__" in name:
        pass
    else:
        fff.append(name)

print(dir(sys))
print("="*50)
print(fff)
print("="*50)
print(sys.version)

