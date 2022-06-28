#Tokitsukaze and Good 01-String (Easy - Version)
for i in range(int(input())):
    size = int(input())
    inpList = input()
    inpList = [x for x in inpList]
    cnt = 0
    SumOdd = 0
    SumEven = 0
    if(inpList[0] == '0'):
        SumEven += 1
    else:
        SumOdd += 1
    for i in range(1,size):
        if(inpList[i] == '0'):
            if(inpList[i-1] == '1' and SumOdd % 2 == 1):
                cnt+=1
                inpList[i] == '1'
                SumOdd = 0
            else:
                SumEven+=1
        else:
            if(inpList[i-1] == '0' and SumEven % 2 == 1):
                cnt+=1
                inpList[i] = '0'
                SumEven = 0
            else:
                SumOdd += 1
    print(cnt)