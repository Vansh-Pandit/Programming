from MarvellousLibrary import FilterX, MapX, ReduceX

CheckEven = lambda no : no % 2 == 0
Increament = lambda no : no + 1
Addition = lambda no1 , no2 : no1 + no2
    
def main():
    Data = [13,12,8,10,11,20]

    print("Input data is :",Data)

    Fdata = list(FilterX(CheckEven,Data))

    print("Filtered data is :",Fdata)

    Mdata = list(MapX(Increament,Fdata))

    print("Data after map :",Mdata)

    Rdata = ReduceX(Addition,Mdata)

    print("Data after reduction is :",Rdata)
    

if __name__ == "__main__":
    main()