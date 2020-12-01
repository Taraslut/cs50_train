# constructor, destructor

class Person:
    def __init__(self, name="Roman", age=12):
        print(f'{self.__class__.__name__} Person')
        self.name = name
        self.age = age

    def __del__(self):
        print("Destry", self.name)

    def __str__(self):
        return f'{self.__class__.__name__} with name={self.name}, age={self.age}'

print("oop_1", __name__)

if __name__ == "__main__":

    person = Person('Ivan', 56)
    person.clazz = 6


    print(person.name)
    print(person.age)
    print(person.clazz)

    person = Person('Z', 12)
    print(person.name)
    print(person.age)

    person = Person()
    print(person.name)
    print(person.age)

    person = Person(age=30)
    print(person.name)
    print(person.age)

