def main():
    Ans = 0

    try:
        print("Enter first number")
        No1 = int(input())

        print("Enter Second number")
        No2 = int(input())

        
        Ans = No1/No2

        print("Dicision is Succesfull")

    except Exception as eobj:
        print("Execption occured :",eobj)

    print("Division is : ",Ans)


if __name__ == "__main__":
    main()