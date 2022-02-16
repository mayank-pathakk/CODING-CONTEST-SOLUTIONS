for _ in range(int(input())):
    n=int(input())
    k=list(map(int,input().split()))
    a,b=0,0
    for i in range(0,n,2):
        a+=k[i]
    for i in range(1,n,2):
        b+=k[i]
    print(a-b)