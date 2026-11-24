class Base:
    def fun(self):
        print("Inside base fun")

class Derived(Base):
    def fun(self):
        print("Inside Drived fun")

dobj = Derived()


dobj.fun()