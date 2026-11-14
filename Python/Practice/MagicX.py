class Demo:
    def __init__(self,A):
        self.No = A

    def __add__(self, other):
        print("Inside __add__")
        return self.No+other.No
    
    def __sub__(self, other):
        return self.No - other.No
    

    def __mul__(self, other):
        
        return self.No * other.No
    def __truediv__(self, other):

        return self.No / other.No
        

obj1 = Demo(11)         # Error
obj2 = Demo(21)

print(obj1 + obj2)
print(obj1 - obj2)
print(obj1 * obj2)
print(obj1 / obj2)