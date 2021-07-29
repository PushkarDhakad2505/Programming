t=int(input())
name=[]
score=[]
while(t):
    t=t-1
    n,s=map(str,input().split())
    name.append(n)
    score.append(int(s))

sortedname=sorted(name)
#print(name)
#print(sortedname)
for i in range(len(name)-1):
    for j in range(len(name)-1):
        if(score[j]<score[j+1]):
            temp=name[j]
            name[j]=name[j+1]
            name[j+1]=temp

            temp=score[j]
            score[j]=score[j+1]
            score[j+1]=temp


k=0
for i in range(len(name)):
    counter=score[i:].count(score[i])
    if(counter>1):
        sortedname=sorted(name[i:counter+i])
        print(sortedname[k],score[i])
        name[i:counter+i].remove(sortedname[k])
        k+=1
    
    else:
        print("else",name[i],score[i])
