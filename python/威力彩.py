import random
list1 = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38] #random
list2 = [] #player
random.shuffle(list1)#random list
b = random.randint(1,8)

print("請輸入1~38,6個")
for i in range (0,6):
    pa = int(input())
    list2.append(pa)
pb = int(input("請輸入1~8"))
#印出當期跟自己的號碼
print(list1[0:6])
print(b)
print(list2)
print(pb)
#算相同幾個
count = 0
for i in range (0,6):
    for j in range (0,6):
        if(list1[i] == list2[j]):
            count+=1
if(b == pb):
    bcount = 1
else :
    bcount = 0
            
#中什麼獎
if(count == 6):
    print("頭獎")
elif(count == 5 and bcount == 1):
    print("二獎")
elif(count == 5):
    print("三獎")
elif(count == 4 and bcount == 1):
    print("四獎")
elif(count == 4):
    print("五獎")
elif(count == 3 and bcount == 1):
    print("六獎")
elif(count == 2 and bcount == 1):
    print("七獎")
elif(count == 3):
    print("普獎")
else :
    print("沒中獎")
    
