for _ in range(int(input())):
    P,C,M=map(int,input().split())
    if (P+C+M)<100:
        print("NO")
    else:
        print("YES")
        if (P+C+M)>=260:
            print("TIER 1 IIT")
        elif 230<=(P+C+M)<=259:
            print("TIER 2 IIT")
        elif 210<=(P+C+M)<=229:
            print("TIER 1 NIT")
        elif 170<=(P+C+M)<=209:
            print("TIER 2 NIT")
        elif 140<=(P+C+M)<=169:
            print("IIIT")
        elif 100<=(P+C+M)<=139:
            print("GFTI")