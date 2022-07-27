#Enter a number through keyboard and find the content of the each byte block.
dnum = int(input("Enter Decimal Number: "))
i = 0
bnum = []
while dnum!=0:                      #converting decimal to binary
    rem = dnum%2
    bnum.insert(i, rem)
    i = i+1
    dnum = int(dnum/2)

for i in range(len(bnum), 32):      #making the binary 32 bit
    bnum.insert(i, 0)
bnum.reverse()


strs1 = ""
for i in range(8):
    strs1 += str(bnum[i])           #taking the first 8 elements in a string
print("The content of B1 is ",int(strs1,2))

strs2 = ""
for i in range(8, 16):
    strs2 += str(bnum[i])           #taking the second 8 elements in a string
print("The content of B2 is ",int(strs2,2))

strs3 = ""
for i in range(16, 24):
    strs3 += str(bnum[i])           #taking the second last 8 elements in a string
print("The content of B3 is ",int(strs3,2))

strs4 = ""
for i in range(24, 32):
    strs4 += str(bnum[i])           #taking the last 8 elements in a string
print("The content of B4 is ",int(strs4,2))