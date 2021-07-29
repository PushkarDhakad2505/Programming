
n=int(input())
ranked=[]
ranked=list(map(int,input().split(" ")))
m=int(input())
player=[]
player=list(map(int,input().split(" ")))
ranked_set=list(set(ranked))
ranked_set=sorted(ranked_set)
last=0
for i in range(0,m):
    flag=0
    for j in range(last,len(ranked_set)):
        if(player[i]<ranked_set[j]):
            print(len(ranked_set)-j+1)
            flag=1
            last=j
            break
    if flag==0:
        print(1)
