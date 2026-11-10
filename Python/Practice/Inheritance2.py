class Base:
    def __init__(self):
        print("Inside base constructor")

class Derived(Base):
    def __init__(self):
        print("Inside Derived constructor")

bobj = Base()