num=int(input())
str=input()

def chk_cond():
    length=0
    digi_chk=0
    low_chk=0
    high_chk=0
    spc_chk=0
    for i in str:
        if(ord(i)>47 and ord(i)<58):
            digi_chk=1
            break
    for i in str:
        if(ord(i)>96 and ord(i)<123):
            low_chk=1
            break
    for i in str:
        if(ord(i)>64 and ord(i)<91):
            high_chk=1
            break
    for i in str:
        if(ord(i)>32 and ord(i)<44 or i=='@' or i=='-'):
            spc_chk=1
            break

        
    if(digi_chk==0):
        length+=1
    if(low_chk==0):
        length+=1
    if(high_chk==0):
        length+=1
    if(spc_chk==0):
        length+=1
    if(len(str)+length<6):
        return 6-len(str) 
    return length
print(chk_cond())
    
        
