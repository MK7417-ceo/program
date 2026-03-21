def fun():
    print("This is a function")


def evenOdd(x):
    if (x % 2 == 0):
        return ("Even")
    else:
        return "odd"


# call the function when the script is executed directly
if __name__ == "__main__":
    fun()
    print(evenOdd(16))
    print(evenOdd(7))
    input("Press Enter to exit...")
    # keyword Arguents
def student(fname, lname):
    print(fname, lname)

student(fname='Geeks', lname='Practice')
student(lname='Practice', fname='Geeks')    
# default arguments
def myFun(x,y=50):
    print("x:", x)
    print("y:", y)
myFun(10)
myFun(10, 20)
# Possitional arguments
def nameAge(name, age):
    print("Hi, i am ", name)
    print("My age is ", age)
print("Psitiional arguments")
print("case-1")
nameAge("Geeks", 20)
print("\ncase-2")
nameAge(20, "Geeks")
# Arbitray Arguments
def myf(*args,**kwargs):
    print("Non-keyword arguments (*args):")
    for arg in args:
        print(arg)
    print("\nKeyword arguments (**kwargs):")
    for key, value in kwargs.items():
        print(f"{key}=={value}")
# Function call with both types of arguments
myf('Hello', 'World', first='Alice', mid ='for', last ='Bob')
