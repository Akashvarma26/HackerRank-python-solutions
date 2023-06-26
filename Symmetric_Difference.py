m = input()
M = set(map(int,input().split()))
n = input()
N = set(map(int,input().split()))
O = M.symmetric_difference(N)
O = sorted(O)
for i in O :
    print(i)
