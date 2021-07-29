t=int(input())
while(t):
    t=t-1
    n=int(input())
    initial_position=[]
    initial_position.append(input().split(" "))
    initial_position=initial_position[0]
    print(initial_position)
    monkeys_name=[]
    for i in range(n):
        monkeys_name.append(i+10)
    print(monkeys_name)
    latest_monkeys_name=list(monkeys_name)
    count=0
    x=6
    while(x):
        
        if(count!=0 and monkeys_name==latest_monkeys_name):
            break;
        else:
            for i in range(n):
                k=0
                count=count+0
                for j in initial_position:
                    k=k+1
                    if int(j)==int(i+1):
                        print(k)
                        break
                    
                latest_monkeys_name.append(monkeys_name[k-1])
                print(latest_monkeys_name)
            monkeys_name=list(latest_monkeys_name)
            latest_monkeys_name=[]
            print(monkeys_name)
            x=x-1





#10  11   12   13   14  15 t=0
#3    6    5   4     1   2
#14  15   10   13   12  11 t=1
#12  11   14   13   10  15 t=2
