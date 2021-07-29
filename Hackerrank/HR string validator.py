s=input()
flag1=0
flag2=0
flag3=0
flag4=0
flag5=0
for i in s:
    if i.isalnum():
        flag1=1
    if i.isalpha():
        flag2=1
    if i.isdigit():
        flag3=1
    if i.islower():
        flag4=1
    if i.isupper():
        flag5=1
        
if(flag1):
    print("True")
else:
    print("Flase")

if(flag2):
    print("True")
else:
    print("Flase")

if(flag3):
    print("True")
else:
    print("Flase")

if(flag4):
    print("True")
else:
    print("Flase")

if(flag5):
    print("True")
else:
    print("Flase")
