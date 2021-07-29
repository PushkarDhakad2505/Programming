t=int(input())
while(t):
    t=t-1;
    n=int(input())
    arStr=[]
    arInt=[]
    for i in range(n):
        arStr.append(input())
        arInt.append(input())
    arBoth=[]
    for i in range(n):
        arBoth.append(arStr[i]+arInt[i])
    arSetBoth=set(arBoth)
    print(arBoth)
    print(arSetBoth)
    arrayUniqueBoth=list(arSetBoth)
    print(arrayUniqueBoth)
    countFull=[]
    for i in range(len(arrayUniqueBoth)):
        countFull.append(arBoth.count(arrayUniqueBoth[i]))
    print(countFull)
    
