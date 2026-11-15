CheckEven = lambda no : no % 2 ==0
Increament = lambda no : no + 1
Addition = lambda no1 , no2 : no1 + no2

def FilterX(Task ,elements):
    Result = list()
    
    for no in elements:
        Ret = Task(no)      # checkeven(no)
        if(Ret):
            Result.append(no)

    return Result

def MapX(Task , elemnts):   # increament(no)
    Result = list()
    for i in elemnts:
        Ret = Increament(i)
        Result.append(Ret)

    return Result

def ReduceX(Task , Elemens):    #Addition(no1 , no2)
    sum = 0
    for i in Elemens:
        sum = Task(sum , i)

    return sum
        

    
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