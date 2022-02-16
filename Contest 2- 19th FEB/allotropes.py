for _ in range(int(input())):
    a=int(input())
    copy=a
    if a%2==0:
        print("SORRY")
    else:
        x=a//2+1
        b=copy-x
        cnt=1
        for i in range(1,x+1,1):
            for j in range(x-1,i-1,-1):
                print(" ",end=" ")
            for j in range(1,2*i,1):
                if cnt%2==0:
                    print("*",end=" ")
                else:
                    print("&",end=" ")
                cnt+=1
            print()
        for i in range(b,0,-1):
            for j in range(b,i-1,-1):
                print(" ",end=" ")
            for j in range(1,2*i,1):
                if cnt%2==0:
                    print("*",end=" ")
                else:
                    print("&",end=" ")
                cnt+=1
            print()

