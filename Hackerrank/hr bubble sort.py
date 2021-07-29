n=int(input())
ar=list(map(int,input().split()))
count=0
for i in range(n):
    for j in range(n-1):
        flag=0
        if(ar[j]>ar[j+1]):
            flag=1
            temp=ar[j+1]
            ar[j+1]=ar[j]
            ar[j]=temp
        if(flag==1):
            count+=1
print("Array is sorted in",count,"swaps.")
print("First Element:",ar[0])
print("Last Element:",ar[n-1])
