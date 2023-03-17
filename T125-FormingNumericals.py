n=int(input())
for i in range(1,2*n):
    for j in range(1,2*n):
        if(abs(n-i)>abs(n-j)):
            print(abs(n-i)+1,end=" ")
        else:
            print(abs(n-j)+1,end=" ")
    print()
