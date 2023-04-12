def dtob(num):
    if num>1:
        dtob(num//2)
    print(num%2,end='')
n=int(input(""))
dtob(n)
