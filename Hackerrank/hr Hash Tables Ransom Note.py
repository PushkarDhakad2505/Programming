len_mag,len_note=map(int,input().split(" "))
mag=list(map(str,input().split(" ")))
note=list(map(str,input().split(" ")))
word=0

if len_mag < len_note:
    print("No")
else:
    for i in note:
        if i in mag:
            mag.remove(i)
            word+=1
        else:
            print("No")
            break
    if(word==len_note):
        print("Yes")
