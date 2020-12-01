from oop_1 import Person

class Student(Person):

    def __init__(self, name=None, age=None):
        if not name and not age:
            super().__init__()
        else:
            super().__init__(name, age)
        print(f'{self.__class__.__name__}')
        self.clazz = input("Enter clazz>")

    def study(self):
        return f"I am studing in {self.clazz}"

    def __str__(self):
        return super().__str__() + f', cazz={self.clazz}'


print("oop_2", __name__)
p= Person()
r = Student(name="Johne", age=12)

print(f'p={p}')
print(p.name)
print(p.age)

print(f'r={r}')
print(r.name)
print(r.age)
print(r.clazz)