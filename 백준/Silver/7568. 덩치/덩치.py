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
   

#다른분들 코드방법
#S = [list(map(int, input().split())) for i in range(N)] 이렇게 하면 N번을 반복하여 리스트 안에 list(map())을 이용하면 append를 안써주어도 될 것 같다.
#for x1, y1 in S: 이렇게 작성하면 c[][]안에 값을 안넣어줘도 x1, y1에 값이 순서대로 들어간다.
