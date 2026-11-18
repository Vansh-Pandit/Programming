class Demo:
    # Class Variables
    Value1 = 10
    Value2 = 20

    def __init__(self):
        self.No1 = 11
        self.No2 = 21

    #instance method
    def fun(self):
        print("Inside Instance method named as Fun")
        print(self.No1)
        print(self.No2)
        print(self.Value1)
        print(self.Value2)

dobj = Demo()
dobj.fun()