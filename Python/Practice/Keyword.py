def area(radius, PI):
    Ans = PI * radius * radius
    return Ans

def main():
    Ret = area(PI=3.14, radius=10.5)
    print("Area of circle is : ",Ret)

if __name__ == "__main__":
    main()