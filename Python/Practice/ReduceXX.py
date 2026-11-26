from functools import reduce

CheckEven = lambda no : no % 2 ==0

Increament = lambda no : no + 1

Addition = lambda no1 , no2 : no1 + no2

def main():
    Data = [13,12,8,10,11,20]

    print("Input data is :",Data)

    Fdata = list(filter(CheckEven,Data))

    print("Filtered data is :",Fdata)

    Mdata = list(map(Increament,Fdata))

    print("Data after map :",Mdata)

    Rdata = reduce(Addition,Mdata)

    print("Data after reduction is :",Rdata)
    

if __name__ == "__main__":
    main()