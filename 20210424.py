# 2021年 4月24日 ABC
N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

count = []
diff = 0

# 指定された範囲のリストの取得と比較がわからない
for i in range(N):
    if A[i] == B[i]:
        diff = 1 
    for j in range(A[i],B[i]):
        count += [j]
dup = [x for x in set(count) if count.count(x) > 1]

print(count)

if diff == 1:
    print(0)
else:
    print(len(dup))
# --------------------------------
# A問題回答
# A,B,C = map(int, input().split())
# print("Yes" if (A**2+B**2) < C**2 else "No")