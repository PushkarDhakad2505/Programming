given=[]
for i in range(3):         
    a =[]     
    a=list(map(int,input().split(" "))) 
    given.append(a) 
print(given)


mini=100000
total = [
            [[8, 1, 6], [3, 5, 7], [4, 9, 2]],
            [[6, 1, 8], [7, 5, 3], [2, 9, 4]],
            [[4, 9, 2], [3, 5, 7], [8, 1, 6]],
            [[2, 9, 4], [7, 5, 3], [6, 1, 8]], 
            [[8, 3, 4], [1, 5, 9], [6, 7, 2]],
            [[4, 3, 8], [9, 5, 1], [2, 7, 6]], 
            [[6, 7, 2], [1, 5, 9], [8, 3, 4]], 
            [[2, 7, 6], [9, 5, 1], [4, 3, 8]],
        ]

cost=0
for i in range(0,8):
    for j in range(0,3):
        for k in range(0,3):
            cost=cost+abs(total[i][j][k]-given[j][k])
    #print("cost",cost)
    if(cost<mini):
        mini=cost
    cost=0
print(mini)
