myflag=""
with open('flag','r') as f:
    myflag=f.read()
print(flag)
for i in range(len(myflag)):
    print(ord(myflag[i]))
