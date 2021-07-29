s=input()
ar=[]
for i in s:
    ar.append(i)
flag=0
counter=[]

ar_set=[]
ar_set=list(set(ar))
for i in ar_set:
    counter.append(ar.count(i))
c=0
flag=0
initial=counter[0]
for i in counter:
    if i==initial:
        c=c+1
    elif(i==initial-1 ):
        if flag==0:
            c=c+1
            flag=1
    elif(i==initial+1):
        if flag==0:
            c=c+1
            flag=1
if(c==len(counter)):
    print("YES")
else:
    print("NO")
