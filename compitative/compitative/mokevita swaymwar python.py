n=int(input())
bride,groom=map(list,input().split(" "))
selected=0
for i in range(n):
    count=0
    j=0
    while(bride[i]!=groom[j]):
        j=j+1
        if(j==n):
            break
    if(j==n):
        break
    groom[j]='t'
    groom=groom[j:n]+groom[0:j]
    selected=selected+1
print(n-selected,end="")
