import random

from pwnlib.util.fiddling import randoms
myflag=""
with open('flag','r') as f:
    myflag=f.read()

print("can you finish 1000 formulas?")
ops=['+','-','x']
for i in range(1000):
    x=random.randint(1,100)
    y=random.randint(1,100)
    op=random.choice(ops)
    myans=0
    print(f"{x} {op} {y} = ?")
    if op=='+':
        myans=x+y
    if op=='-':
        myans=x-y
    if op=='x':
        myans=x*y
    yourans=int(input())
    if yourans!=myans:
        print("Bye")
        break
print(myflag)
