CheckEven = lambda no : (no % 2 == 0) 
    
def main():
    value = int(input("Enter number"))
    Ret = CheckEven(value)              # Ret = (Value % 2 == 0)

    if(Ret == True):
        print("Value is Even ")

    else:
        print("Value is odd")

if __name__ == "__main__":
    main()