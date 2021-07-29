import calendar
month,day,year=map(int,input().split(" "))
a=int(calendar.weekday(year,month,day))
if a==0:
    print("MONDAY")
elif a==1:
    print("TUESDAY")
elif a==2:
    print("WEDNESDAY")
elif a==3:
    print("THURSDAY")
elif a==4:
    print("FRIDAY")
elif a==5:
    print("SATURDAY")
else:
    print("SUNDAY")
