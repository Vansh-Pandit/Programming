import multiprocessing
import os
import time

def SumCube(no):
    print("Process is running with Pid :",os.getpid())

    sum = 0
    
    for i in range(1,no+1):
        sum = sum + (i ** 3)
    return sum

def main():

    data = [10000000,20000000,30000000,40000000,50000000]
    Result = []
    start_time = time.perf_counter()

    pobj = multiprocessing.Pool()

    Result = pobj.map(SumCube,data)

    pobj.close()
    pobj.join()

    end_time = time.perf_counter()

    print("Result is : ")
    print(Result) 
    print(f"Time required is {end_time - start_time:.4f} seconds")      

if __name__ == "__main__":
    main()