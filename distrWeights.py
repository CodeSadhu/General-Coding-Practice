testcase = int(input())
maxN = (10**4)

if(testcase >= 1 and testcase <= 100):
    for i in range(testcase):
        n, m = [int(x) for x in input().split()[:2]]
        if (1 <= m and m <= n and n <= maxN):
            for i in range(n):
                m = [int(y) for y in input().split()[:n]]
            print(m)
