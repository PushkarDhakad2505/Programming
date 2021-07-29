t=int(input())
while(t):
    t=t-1
    n=int(input())
    num3=n//3
    num5=n//5
    num15=n//15
    if(n%15==0):
        num15=num15-1
    elif(n%5==0):
        num5=num5-1
    elif(n%3==0):
        num3=num3-1
    sum3=(num3/2)*(2*3+(num3-1)*3)
    sum5=(num5/2)*(2*5+(num5-1)*5)
    sum15=(num15/2)*(2*15+(num15-1)*15)

    print(int(sum3+sum5-sum15))
    

