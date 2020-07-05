cases = int(input())

for i in range (cases):
    count = 0
    if(cases>0 and cases<101):
        bungalows, budget = [int(x) for x in input().split()[:2]]

        if(bungalows>0 and bungalows<10**5+1):
            costs = [int(x) for x in input().split()[:bungalows]]
            costs.sort()
            for cost in costs:
                if(budget>=cost):
                    count+=1
                    budget-=cost
                else:
                    continue
    print(count," can be bought For case ",i+1)