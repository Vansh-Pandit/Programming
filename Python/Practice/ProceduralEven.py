def CheckEven(no1):
    if((no1 % 2) == 0):
        print("Its even number")
    else:
        print("Its odd number")

def main():
    value = int(input("Enter number"))
    CheckEven(value)

if __name__ == "__main__":
    main()