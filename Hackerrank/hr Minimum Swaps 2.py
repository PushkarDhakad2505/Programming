n=int(input())
ar=list(map(int,input().split(" ")))
count=0
for i in range(1,n+1):
    if ar[i-1]==i:
        count=count+1
print(n-count-1)
