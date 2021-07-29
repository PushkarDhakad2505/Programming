n=int(input())
bride=input()
groom=input()
for i in bride:
    if i in groom:
        groom=groom.replace(i,'',1)
    else:
        break
print(groom)
print(len(groom))
