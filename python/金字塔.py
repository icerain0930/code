num = int(input("請輸入層數"))
num=num+1
for i in range(num,0,-1):
    for j in range(0,num-i):
        print("*")
    print(" ")
