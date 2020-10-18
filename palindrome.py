def palindrome(n):
    n = str(n)
    l = len(n)
    
    for i in range(0,l):
        if(n[i] != n[l-i-1]):
            return 0
    return 1


if __name__=="__main__":
    n= input("Enter string\n")

    if(palindrome(n)==1):
        print("It's a palindrome")
    else:
        print("Not a palindrome")

