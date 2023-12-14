import math 
result=0
reste=0
b=[]
a = int(input("Hi, gimme number pls:"))
while(a < 1 or a > 255 ):
    print("err")
    a = int(input("Hi, gimme number pls:"))

for i in range(int(math.log(a,2)+1)):
    result = a/2
    reste = a%2
    print(round(a,1),":2=",round(result,2),int(reste))
    a=result
    b.append(int(reste))
b=b[::-1]
print(b)