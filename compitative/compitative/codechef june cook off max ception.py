t=int(input())
while(t):
    t=t-1
    n=int(input())
    ar=[]
    ar.append(input().split())
    ar=ar[0]
    bitwise_ar=[]
    flag=0
    for i in  range(len(ar)):
        sum=0
        if(flag==1):
            break
        for j in range(i,len(ar)):
            sum=sum|int(ar[j])
            bitwise_ar.append(int(sum))
        if(bitwise_ar.count(sum)>1):
            print("NO")
            flag=1
            break
        if(flag==1):
            break
    bitwise_set=list(set(bitwise_ar))
    if(len(bitwise_set)==len(bitwise_ar)):
        print("YES")

