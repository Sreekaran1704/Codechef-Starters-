#Question code : STRCOMPARE
for i in range(int(input())):
    n=int(input())
    a=input()
    b=input()
    flag=False
    count=0
    for j in range(n-1,-1,-1):
        if a[j]<b[j]:
            count+=1
            flag=True
        elif a[j]>b[j]:
            flag=False
        elif a[j]==b[j]:
            if flag:
                count+=1
            continue
    print(count)
            
