t=int(input())
while(t):
    t=t-1
    n=int(input())
    ar=input()
    ar_set=list(set(ar))
    counter=0
    for i in range(len(ar_set)):
        count=ar.count(ar_set[i])
        if count%2!=0:
            print("NO")
            break
        else:
            counter+=1
    if counter==len(ar_set):
        print("YES")
