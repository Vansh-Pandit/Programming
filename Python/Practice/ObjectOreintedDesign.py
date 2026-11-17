class Arithematic:

    def __init__(self,a,b):
        self.No1 = a
        self.No2 = b

    def Addition(self):
        Ans = self.No1 + self.No2
        return Ans

    def Substraction(self):
        Ans = self.No1 - self.No2
        return Ans
    

print("Enter first number")
Value1 = int(input())

print("Enter second number")
Value2 = int(input())

aobj = Arithematic(Value1,Value2)

Ret = aobj.Addition()          
print("Addition is :",Ret)

Ret = aobj.Substraction()      
print("Substraction is :",Ret) 