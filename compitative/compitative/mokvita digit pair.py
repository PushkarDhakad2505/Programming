n=int(input())
ar=[]
ar.append(input().split(" "))
ar=ar[0]
ar_mini=[]
two_digi_ar=[]
two_digi_ar_odd=[]
two_digi_ar_even=[]
sum1=0
for i in range(len(ar)):
    x=int(ar[i])
    maxi=0
    mini=x
    while(x):
        num=int(x%10)
        x=int(x/10)
        if(num>maxi):
            maxi=num
        if(num<mini):
            mini=num
    two_digi_ar.append(int(((11*maxi+7*mini)%100)))
for i in range(len(two_digi_ar)):
    if two_digi_ar[i]<10:
        two_digi_ar[i]=0
    two_digi_ar[i]=int(two_digi_ar[i]/10)
    if(i%2==0):
        two_digi_ar_even.append(two_digi_ar[i])
    else:
        two_digi_ar_odd.append(two_digi_ar[i])



two_digi_ar_even_set=list(set(two_digi_ar_even))
two_digi_ar_odd_set=list(set(two_digi_ar_odd))

for i in range(len(two_digi_ar_even_set)):
    sum1=sum1+two_digi_ar_even.count(two_digi_ar_even_set[i])-1
for i in range(len(two_digi_ar_odd_set)):
    sum1=sum1+two_digi_ar_odd.count(two_digi_ar_odd_set[i])-1

print(sum1)
