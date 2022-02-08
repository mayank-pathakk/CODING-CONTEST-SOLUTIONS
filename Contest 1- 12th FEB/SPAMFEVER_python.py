

# for detailed explaination do post your query in the coding section of DC server

for _ in range(int(input())):
    N, D = map(int, input().split())
    x = 1
    c=0
    if D == 0:
        print(1)
    else:
        for z in range(1, D + 1, 1):
            if z <= 10:
                x = x * 2
            elif z >= 11:
                x = x * 3
            if x >= N:
                print(N)
                
                c+=1
                break
        if c==0:
            print(x)