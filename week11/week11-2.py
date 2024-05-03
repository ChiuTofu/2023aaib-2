BOUND = 100
table = [True] * BOUND
ans = 0
for i in range(2,BOUND):
  if table[i] == True:
    #print(i,end=' ')
    ans += 1
    for i in range(i+i, BOUND, i):
      table[k] = False
print('質數有:', ans,'個')
