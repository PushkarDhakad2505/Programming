x=int(input())
y=int(input())
ar1=[]
ar2=[]
i=0

def deci_to_bin_x(num):
    i=0
    while(num):
        ar1.append(num%2)
        num=int(num/2)
        i=i+1
def deci_to_bin_y(num):
    i=0
    while(num):
        ar2.append(num%2)
        num=int(num/2)
        i=i+1
deci_to_bin_x(x)
deci_to_bin_y(y)
if(len(ar1)>len(ar2)):
    leading_zero2=len(ar1)-len(ar2)
    flag=0
elif(len(ar1)<len(ar2)):
    flag=1
    leading_zero1=len(ar2)-len(ar1)
else:
    flag=2
if(flag==0):
    for i  in range(leading_zero2):
        ar2.append(0)
if(flag==1):
    for i  in range(leading_zero1):
        ar1.append(0)
    leading_zero1=len(ar2)-len(ar1)
count=0
for i in range(len(ar1)):
    if(ar1[i]!=ar2[i]):
        count=count+1
print(count)

