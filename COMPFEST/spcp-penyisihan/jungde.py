mix=[]
mix2=[]

n = int(input())

for i in range(n):
    arr = [int(x) for x in input().split()]
    mix.append(arr)

for i in (mix):
    arr2 = list(range(i[0], i[1]+1))
    mix2.append(arr2)

last = list(set(mix2[0]+mix2[1]))

print(sum(last))