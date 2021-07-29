n,total=map(int,input().split(" "))
price=[]
price=list(map(int,input().split(" ")))
sum=0
toys=0
pri=sorted(price)
for i in range(len(price)):
    sum=sum+int(pri[i])
    toys+=1
    if(sum>total):
        toys-=1
        break

print(toys)

