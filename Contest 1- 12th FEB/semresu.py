for _ in range(int(input())):
    n=int(input())
    a=[]
    for j in range(n):
        a.append(int(input()))
    o=0
    e=0
    for i in a:
        if i%2==0:
            e+=1
        else:
            o+=1
    if e>o:
        print("EVEN")
        print(max(e, o))
        print(max(e, o) % min(e, o))
    elif o>e:
        print("ODD")
        print(max(e, o))
        print(max(e, o) % min(e, o))
    else:
        print("EQUAL")
