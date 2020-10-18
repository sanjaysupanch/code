def prime(n):
    if(n<2):
        return 0
    
    for i in range(2, int(n/2)):
        if((n%i)==0):
            return 0
    return 1

if __name__=="__main__":

    n=int(input("Enter number \n"))

    if(prime(n)==1):
        print("Prime number")
    else:
        print("not prime number")