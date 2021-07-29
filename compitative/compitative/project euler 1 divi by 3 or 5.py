
t=int(input())
while(t):
    t=t-1
    n=int(input())

    def fun(n):
        num=n
        count=0
        remain=0
        while(num):
            remain=remain*10+(num%10)
            num=int(num/10)
            count+=1
        print(remain)
        sum3="3"
        sum6=""
        sum8=""
        if(count>2):
            for i in range(3,count):
                sum3=sum3+"3"
            for i in range(4,count):
                sum6=sum6+"6"
            if count>2:
                sum8="8"
            sum="2"+sum3+"1"+sum6+sum8
            sum=int(sum)
        else:
            for i in  range(n):
                if i%3==0 or i%5==0:
                    sum=sum+i
            return sum
    fun(n)
    
