t=int(input())
while(t):
    t=t-1
    n=int(input())
    ar=[]
    for i in range(n):
        ar.append(int(input()))
    arSet=set(ar)
    arSet = list(arSet)#array list of unique elements
    count=0
    
    print(arSet)
    ar.append(0)
    for i in arSet:
        count =0
        for j in range(n):
            if(i==ar[j]):
                count=count+1
                if(ar[j]==ar[j+1] or ar[j]==ar[j-1]):
                   count=count-1
                   
        print(count)
