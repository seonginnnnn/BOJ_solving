a = int(input())
b = list(map(int, input().split()))
c = int(input())
answer = 0
for i in range(a):
    if b[i] == c:
        answer+=1
        
print(answer)
    