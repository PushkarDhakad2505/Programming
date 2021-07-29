n=int(input())
k=n
prev=0
ar=sorted(list(map(int,input().split())))
for i in ar:
    if i*k>prev:
        prev=i*k
    k-=1
print(prev)
print(ar)
