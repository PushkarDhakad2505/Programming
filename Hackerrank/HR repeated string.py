ar=input()
n=int(input())
ar_len=len(ar)
sum=0
count_a=ar.count('a')
sum=count_a*int(n/ar_len)
remain= n%ar_len
for i in range(remain):
    if(ar[i]=='a'):
        sum+=1
print(sum)
