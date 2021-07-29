t=int(input())
while(t):
    t=t-1
    n=int(input())
    ar=[]
    br=[]
    ar=list(map(int,input().split()))
    br=list(map(int,input().split()))
    count=0
    arset=list(set(ar))
    brset=list(set(br))
    nar=[]
    nbr=[]
    flag=0
    arset.sort()
    brset.sort()
    ar.sort()
    br.sort()
    cost=0
    for j in range(len(ar)):
        if(ar[j]!=br[j]) and (ar.count(ar[j])!=br.count(ar[j])):
            nar.append(ar[j])
        if(ar[j]!=br[j]) and (ar.count(br[j])!=br.count(br[j])):    
            nbr.append(br[j])
    #print(nar)
    #print(nbr)
    for i in range(n):
        if (ar.count(ar[i])+br.count(ar[i]))%2!=0:
            print("-1")
            break
        elif (ar.count(br[i])+br.count(br[i]))%2!=0:
            print("-1")
            break
        elif (ar.count(ar[i])-br.count(ar[i]))==0:
            count=count+1
            if(count==n):
                print("0")
                break 
        else:
            cost=0
            
            for i in range(0,len(nar),2):
                if(nar[i]<nbr[(len(nar)-1)-i]):
                    flag=1
                    cost=cost+nar[i]
                else:
                    flag=1
                    cost=cost+nbr[(len(nar)-1)-i]
    if(flag==1):
        print(cost)
               






            
