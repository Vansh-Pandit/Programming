def CheckEven(no):
    return ((no % 2) == 0)
    
def main():
    value = int(input("Enter number"))
    Ret = CheckEven(value)

    if(Ret == True):
        print("Value is Even ")

    else:
        print("Value is odd")

if __name__ == "__main__":
    main()