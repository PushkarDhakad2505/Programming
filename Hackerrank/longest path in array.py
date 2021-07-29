

def findLongestFromACell(i, j, mat, table): 
	if (i<0 or i>= n or j<0 or j>= m): 
		return 0
	if (table[i][j] != -1): 
		return table[i][j] 
	right, left, up, down = -1, -1, -1, -1
	if (j<m-1 and ((mat[i][j] +1) == mat[i][j + 1])): 
		right = 1 + findLongestFromACell(i, j + 1, mat, table) 
	if (j>0 and (mat[i][j] +1 == mat[i][j-1])): 
		left = 1 + findLongestFromACell(i, j-1, mat, table) 
	if (i>0 and (mat[i][j] +1 == mat[i-1][j])): 
		up = 1 + findLongestFromACell(i-1, j, mat, table) 
	if (i<n-1 and (mat[i][j] +1 == mat[i + 1][j])): 
		down = 1 + findLongestFromACell(i + 1, j, mat, table) 
	table[i][j] = max(right, max(left, max(up, max(down, 1)))) 
	return table[i][j] 
def finLongestOverAll(mat): 
	result = 1
	table =[[-1 for j in range(m)]for i in range(n)] 
	for i in range(n): 
		for j in range(m): 
			if (table[i][j] == -1): 
				findLongestFromACell(i, j, mat, table) 
			result = max(result, table[i][j]); 
	return result
rows, cols = map(int, input('rows cols: ').split())
n = rows
m=cols
data = map(int, input('data: ').split())
mat = [*map(list, zip(*[data] * cols))]
print(finLongestOverAll(mat)) 
