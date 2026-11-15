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
        Ret = Task(i)
        Result.append(Ret)

    return Result

def ReduceX(Task , Elemens):    #Addition(no1 , no2)
    sum = 0
    for i in Elemens:
        sum = Task(sum , i)

    return sum
        
