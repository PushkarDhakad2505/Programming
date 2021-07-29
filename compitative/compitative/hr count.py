
def get(ar,n):
    l=n
    i=0
    maxi=0
    while(i<l):
        j=i
        while( i+1<l and (abs(ar[i]-ar[i+1])==1 or abs(ar[i]-ar[i+1])==0)):
            i+=1
            curlen=i-j+1
            if(maxi<curlen):
                maxi=curlen
            if(j==i):
                i+=1;
    return maxi
n=int(input())
ar=[]
for i in range(n):
    ar.append(int(input()))
print(get(ar,n))
