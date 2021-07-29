customers_count = int(input().strip())
customers = []
for _ in range(customers_count):
    customers.append(input())
customers_set=list(set(customers))
final_list=[]
for i in customers_set:
    count1=customers.count(i)
    if(count1/len(customers)*100>=5):
        final_list.append(i)
final_list=sorted(final_list)
for i in range(len(final_list)):
    print(final_list[i])
