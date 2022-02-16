for _ in range(int(input())):
    n=int(input())
    l=list(map(str,input().split()))
    c=l.count('C')
    w=l.count('W')
    u=l.count('U')
    print(c*4+w*-1)
    print(c,w,u)