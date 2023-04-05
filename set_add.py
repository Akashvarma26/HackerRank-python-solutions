# Enter your code here. Read input from STDIN. Print output to STDOUT
n=input()
s=set()
for i in range(0,int(n)):
    name=input()
    s.add(name)
res=len(s)
print(res)
