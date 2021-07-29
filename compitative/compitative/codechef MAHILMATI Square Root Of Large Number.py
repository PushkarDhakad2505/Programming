t=int(input())
while(t):
    t=t-1
    n=float(input())
    d=int(input())
    
    x=pow(n,.5)
    stry=str(x)
    strx=[]
    for i in range(len(stry)):
        strx.append(stry[i])
    j=0
    for i in strx:
        j=j+1
        if(i=='.'):
            break
    if(len(strx)<j+d):
        while(len(strx)<j+d):
            strx.append('0')
        #print("0",end="")
    for i in range(0,j+d):
        print(strx[i],end="")


