no = 11         # Global Variable

def Display():
    a = 21      # Local Variable
    print("From Display :",no)
    print("From Display Value of a is :",a)

def Demo():
    print("From Demo Value of a is :",a)        # Error
    print("From demo :",no)

Display()
Demo()