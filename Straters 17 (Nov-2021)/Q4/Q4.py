for i in range(int(input())):
    n,m=map(int,input().split())
    a=[input() for i in range(n)]
    a.sort(key=lambda i:i.count('1'))
    ones=invs=0
    for i in "".join(a):
        if i=='1':
            ones+=1
        else:
            invs+=ones
    print(invs)