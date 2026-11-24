def area(radius, PI):
    Ans = PI * radius * radius
    return Ans

def main():
    Ret = area(10.5,3.14)
    print("Area of circle is : ",Ret)

    Ret = area(13.6,7.12)
    print("Area of circle is : ",Ret)

if __name__ == "__main__":
    main()