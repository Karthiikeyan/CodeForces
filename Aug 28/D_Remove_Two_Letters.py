
def solve():
    n = int(input())
    s = input().strip()
    st = set()
    cnt = 0
    for i in range(0,n-2):
        if s[i] == s[i+2]:
            cnt += 1
    
    print(n - cnt - 1)

t = int(input())
while t:
    solve()
    t-=1