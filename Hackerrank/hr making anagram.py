str1=input()
str2=input()

str11=[]
for i in str1:
    j=0
    str11.append(str1[j])
    j+=1
print(str11)

for i in str1:
    if(i not in str2):
        str11.remove(i)
        print('a')
print(str1)
