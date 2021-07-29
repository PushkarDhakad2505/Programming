s=input()
upper=int((pow(len(s),.5)))+1
lower=int ((pow(len(s),.5)))
print(upper,lower)
k=0
for i in range(upper):
    for j in  range(lower):
        print(s[k],end="")
        k=k+1
    print(" ",end="")
