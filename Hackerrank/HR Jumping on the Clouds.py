n=int(input())
ar=[]
ar.append(input().split(" "))
ar=ar[0]
ar.append(1)
ar.append(1)
count=0
j=0
for i in range(0,n):
    if(j>=n):
        break
    if(ar[j+2]=='0'):
        j+=1
    count=count+1
    j+=1
    #print(j)
print(count-1)
