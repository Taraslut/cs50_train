dd = dict()

dd['T'] = 12
dd["M"] = 24
dd['Z'] = 125

print(dd)

print(dd.keys())
print(dd.values())

if 'T' in dd:
    print("T", dd['T'])

# print(dd['s']) << = Error
del dd['M']
print(dd)

dd1 = {1:3, 45:5}
print(dd1)
