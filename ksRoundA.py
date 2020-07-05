testCase = int(input())
for j in range(testCase):
    if (testCase >= 1 and testCase <= 100):
        # n = int(input())
        # budget = int(input())
        n, budget = [int(x) for x in input().split()[:2]]
        if (n >= 1 and n <= (10 ** 5)):
            costs = [int(x) for x in input().split()[:n]]
            # for i in range(0, n):
            #     element = int(input())
            #     costs.append(element)
            costs.sort()
            temp = []
            for i in range(0, n):
                if (costs[i] <= budget):
                    if (sum(temp) <= budget):
                        if (sum(temp) + costs[i] <= budget):
                            temp.append(costs[i])
            print("Case #{}: {}".format(j+1, len(temp)))
