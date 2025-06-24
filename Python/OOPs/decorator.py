def fun2():
    print("Inside fun2")
    
    def fun1():
        print("Inside fun1")
    fun1()
fun2()

#``````````````````````````````````````

def decfun(f):
    def innerfun():
        print("Welcome")
    return innerfun
    
def fun():
    print("Outer function")

fun()
fun = decfun(fun)
fun()
