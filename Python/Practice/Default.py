def area(radius, PI = 3.14):
    Ans = PI * radius * radius
    return Ans

def main():
    Ret = area(10.5)
    print("Area of circle is : ",Ret)
    
    Ret = area(10.5, 7.12)
    print("Area of circle is : ",Ret)
        
if __name__ == "__main__":
    main()