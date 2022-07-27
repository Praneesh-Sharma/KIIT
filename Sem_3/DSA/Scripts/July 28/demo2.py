#If the content of each byte block is given then you have to find the number entered.
def DecToBin(d):        #function to convert decimal to binary
    b = 0
    m = 1
    while d>0:
        b = b + ((d%2)*m)
        m = m*10
        d = int(d/2)
    return b

def ListExpansion(a):       #function to make the binary as 8 bit
    a.reverse()
    for i in range(len(a), 8):
        a.insert(i, 0)
    a.reverse()
    return a

int1 = int(input("Enter content of block1: "))
int2 = int(input("Enter content of block2: "))
int3 = int(input("Enter content of block3: "))
int4 = int(input("Enter content of block4: "))

dnum1 = [int(x) for x in str(DecToBin(int1))]       #making a list of the binary number
dnum2 = [int(x) for x in str(DecToBin(int2))]       #making a list of the binary numbe
dnum3 = [int(x) for x in str(DecToBin(int3))]       #making a list of the binary numbe
dnum4 = [int(x) for x in str(DecToBin(int4))]       #making a list of the binary numbe

ListExpansion(dnum1)
ListExpansion(dnum2)
ListExpansion(dnum3)
ListExpansion(dnum4)

dnum1.extend(dnum2)     #adding all the lists into one
dnum1.extend(dnum3)     #adding all the lists into one
dnum1.extend(dnum4)     #adding all the lists into one

strs = ""
for i in dnum1:
    strs += str(i)      #converting list to string
strs.lstrip('0')        #removing extra 0s from left

print("The number is: ", int(strs,2))