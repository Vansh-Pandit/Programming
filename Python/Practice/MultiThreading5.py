
# 2 4 6 8 = 20
def SumEven(no):
    Sum = 0
    for i in range(2,no,2):
        Sum = Sum + i

    print("SUmmation of Even is :",Sum)

# 1 3 5 7 9 = 25
def SumOdd(no):
    Sum = 0
    for i in range(1,no,2):
        Sum = Sum + i

    print("Summation of odd is :",Sum)

def main():
    SumEven(100000000)
    SumOdd(100000000)

if __name__ == "__main__":
    main()