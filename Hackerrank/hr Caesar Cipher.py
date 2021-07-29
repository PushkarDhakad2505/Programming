n=int(input())
stt=input()
rot=int(input())
rot=rot%26
st=[]
for i in range(len(stt)):
    st.append(stt[i])
for i in range(len(st)):
    if(ord(st[i])>=65 and ord(st[i])<=90) or (ord(st[i])>=97 and ord(st[i])<=122):
        
        if(ord(st[i])>=65 and ord(st[i])<=90):#upper
            
            if(ord(st[i])+rot>90):
                st[i]=chr(ord(st[i])+rot-26)
            else:
                st[i]=chr(ord(st[i])+rot)
        else:#lower
            if(ord(st[i])+rot>122):
                st[i]=chr(ord(st[i])+rot-26)
            else:
                st[i]=chr(ord(st[i])+rot)
    else:
        continue
for i in st:
    print(i,end="")
