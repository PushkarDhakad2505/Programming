number_list=[]
num_list=[]
sum1=0
number_list.append(input().split(" "))
num_list=number_list[0]
for i in range (len(num_list)):
    sum1=sum1+int(num_list[i])
print(sum1/2)
