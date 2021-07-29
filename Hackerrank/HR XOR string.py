a=input()
b=input()
res=[]
for i in range(len(a)):
    if(a[i]==b[i]):
       res.append(0)
    else:
        res.append(1)
for i in range(len(a)):
    print(res[i],end="")
