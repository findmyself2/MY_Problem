n1 = int(input())
n2 = int(input())

a = []
for i in str(n2):
    a.append(i)
    a = list(map(int, a))
   

part1 = n1 * a[2]
part2 = n1 * a[1]
part3 = n1 * a[0]
part4 = n1 * n2

print(part1)
print(part2)
print(part3)
print(part4)