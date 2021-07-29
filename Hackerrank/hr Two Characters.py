count1={
    'a':0,
    'b':0,
    'c':0,
    'd':0,
    'e':0,
    'f':0,
    'g':0,
    'h':0,
    'i':0,
    'j':0,
    'k':0,
    'l':0,
    'm':0,
    'n':0,
    'o':0,
    'p':0,
    'q':0,
    'r':0,
    's':0,
    't':0,
    'u':0,
    'v':0,
    'w':0,
    'x':0,
    'y':0,
    'z':0
    }
num=int(input())
st=input()
for i in range(num):
    count1[st[i]]=st.count(st[i])
ar_set=[]
for i in st:
    ar_set.append(i)
ar_set=list(set(ar_set))
maxi=0
if(len(ar_set)>1):   
    for i in count1:
        if(i=='z'):
            break
        if(maxi<=count1[i]+count1[chr(ord(i)+1)]):
            maxi=count1[i]+count1[chr(ord(i)+1)]
print(maxi)

