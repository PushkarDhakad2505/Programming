t=int(input())
while(t):
    t=t-1
    n=int(input())
    ar=input()
    sum1=0
    sum2=0
    j=0
    
    if(n%2==0):
        for i in range(n+2):
            
            if j%2==0:
                sum1=sum1+int(ar[j])
            else:
                sum2=sum2+int(ar[j])
            j=j+1
        #print(sum1)
        #print(sum2)
    else:
        for i in range(n+1):
            if j%2==0:
                sum1=sum1+int(ar[j])
            else:
                sum2=sum2+int(ar[j])
            j=j+1
        #print(sum1)
        #print(sum2)
    k=0
    #print(j)
    if(n%2==0):
        for i in range(j-1,(n+1)*2-1):
            if(sum1>sum2+(2*n-j)/2):
                k=i
                break
            elif(sum2>sum1+(2*n-j)/2):
                k=i
                break
            else:
                if(j%2==0):
                    sum1=sum1+int(ar[j])
                else:
                    sum2=sum2+int(ar[j])
                    k=i
        print(k)
    else:
        for i in range(j,(n+1)*2-1):
            
            if(sum1>sum2+(2*n-j)/2):
                k=i
                break
            elif(sum2>sum1+(2*n-j)/2):
                k=i
                break
            else:
                if(j%2==0):
                    sum1=sum1+int(ar[j])
                else:
                    sum2=sum2+int(ar[j])
                k=i
        print(k)
        

