class Arithematic:
    def Addition(self,No1,No2):
        Ans = No1 + No2
        return Ans

    def Substraction(self,No1,No2):
        Ans = No1 - No2
        return Ans
    
aobj = Arithematic()

print("Enter first number")
Value1 = int(input())

print("Enter second number")
Value2 = int(input())

# Ret = Addition(aobj,No1,No2)
Ret = aobj.Addition(Value1,Value2)          
print("Addition is :",Ret)

Ret = aobj.Substraction(Value1,Value2)      
print("Substraction is :",Ret) 