age=2
if age>=18:
    print("You are eligible to vote.")

else:    print("You are not eligible to vote.")

#short hand if else
marks=45
r = "pass" if marks >= 40 else "fail"
print (f"result: {r}")

# elif statement
if age<=12:
    print("child")
elif age<+19:
    print("teenager")
elif age <=35:
    print("young adult")
else:
    print("adult")

#nested if ..else statement
is_member =True
if age >= 60:
    if is_member:
        print("30% senior discount!")
    else:
        print("10% senior discount!")
else:
    print("No senior discount.")


# Assign a value based on a condition using a ternary operator
age = 25
s = "Adult" if age >= 18 else "Minor"
print(s)

# match case statement
number =2 
match number:
    case 1:
        print("one")
    case 2:
        print("two")
    case 3:
        print("three")
    case _:
        print("other number")


# Loop in pyth
n= 4 
for i in range(0,n):
    print(i)

li = ["geeks", "for", "geeks"]
for i in li:
    print(i)

tup = (1,2,3,4,5)
for i in tup:
    print(i)

s = "hello"
for i in s:
    print(i)

d= dict({'x':123,'y':354})
for x in d:
    print("%s %d" % (x, d[x]))

set1 ={10,30,20}
for x in set1:
    print(x)

    while():
     print("infinite loop")  
     