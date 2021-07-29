t=int(input())
while(t):
    t=t-1
    s=input()
    ar=[]
    for i in s:
        ar.append(i)

    arr=[]
    for i in s:
        arr.append(i)        
    for i in range(1,len(s)):
        if ar[i]==ar[i-1]:
            arr.remove(ar[i])
    print(len(ar)-len(arr))

    
