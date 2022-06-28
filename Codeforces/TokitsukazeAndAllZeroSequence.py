for i in range(int(input())):
    len = int(input())
    l = list(map(int, input().split()))
    from collections import Counter
    occur = Counter(l)
    if(0 in occur):
        print(len - occur[0])
    else:
        cnt = 0
        for j in occur:
            if(occur[j] > 1):
                cnt = 1;
        if(cnt == 1):
            print(len)
        else:print(len+1)