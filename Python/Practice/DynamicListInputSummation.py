def Summation(Data):
    sum = 0
    for no in Data:
        sum = sum + no
    
    return sum

def main():
    Arr = list()
    Size = 0

    print("Enter the number of elements : ")
    size = int(input())

    print("Enter the elements ")
    for i in range(size):
        no = int(input())
        Arr.append(no)
    
    Ret = Summation(Arr)

    print(Ret)
         

if __name__ == "__main__":
    main()