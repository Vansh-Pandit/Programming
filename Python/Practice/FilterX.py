def CheckEven(no):
    return no % 2 ==0

def main():
    Data = [13,12,8,10,11,20]

    print("Input data is :",Data)

    Fdata = list(filter(CheckEven,Data))

    print("Filtered data is :",Fdata)

if __name__ == "__main__":
    main()