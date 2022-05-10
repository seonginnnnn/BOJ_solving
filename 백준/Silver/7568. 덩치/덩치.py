a = int(input())
b = [1]*a
c=[]
for i in range(a):
    d = list(map(int,input().split()))
    c.append(d)

for i in range(a):
    for j in range(i+1,a):
        if c[i][0] > c[j][0] and c[i][1] > c[j][1]:
            b[j]+=1
        elif c[i][0] < c[j][0] and c[i][1] < c[j][1]:
            b[i]+=1
for i in range(a):
    print(b[i],end=' ')