t=int(input())
while(t):
    t=t-1;
    n=int(input())
    ar=list(map(str ,input().split(" ")))
    chk=input()
    for i in range(0,len(chk)):
        flag=0
        for j in range(len(ar)):
            
            if(chk[0:i+1]==ar[j][0:i+1]):
                print(ar[j],end=" ")
                flag=1
        if(flag==0):
            print(0,end="")
        print()
