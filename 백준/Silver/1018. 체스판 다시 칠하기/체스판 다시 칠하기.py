a, b = map(int, input().split())
_map = []
c = 10000
for i in range(a):
    _map.append(input())
    
for i in range(a - 7):
    for j in range(b - 7):
        q1 = 0
        q2 = 0
        for k in range(i, i + 8):
            for l in range(j, j + 8):
                if (k + l) % 2 == 0:
                    if _map[k][l] == 'W':
                        q1 += 1
                    if _map[k][l] == 'B':
                        q2 += 1
                else:
                    if _map[k][l] == 'B':
                        q1 += 1
                    if _map[k][l] == 'W':
                        q2 += 1
        
        c = min(c,min(q1,q2))
print(c)
        


                    
        