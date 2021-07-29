a=input()
b=input()
ar=[]
br=[]
for i in a:
    ar.append(i)
for i in b:
    br.append(i)


for i in a:
    if i not in b:
        ar.remove(i)


for i in b:
    if i not in a:
        br.remove(i)
sum=0
set_ar=list(set(ar))
for i in range(len(set_ar)):
    count_a=ar.count(set_ar[i])
    
    count_b=br.count(set_ar[i])

    sum=sum+abs(count_a-count_b)
 
print(len(a)-len(ar)+len(b)-len(br)+sum)


