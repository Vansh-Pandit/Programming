print("----------------------------------------------------------")
print("-----------------Ticket Pricing Software------------------")
print("----------------------------------------------------------")

print("Please enter your age")
age = int(input())

if(age<=5):
    print("Free entry")
elif(age>5 and age<=18):
    print("Ticket price is 900")
elif(age>18 and age<=40):
    print("Ticket price is 1200")
else:
    print("Ticket price is 500")
