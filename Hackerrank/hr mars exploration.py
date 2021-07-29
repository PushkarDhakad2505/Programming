st=input()
length=0
for i in range(0,len(st),3):
    if st[i]!='S' :
        length+=1


for i in range(1,len(st),3):
    if st[i]!='O' :
        length+=1

for i in range(2,len(st),3):
    if st[i]!='S' :
        length+=1        
print(length)
