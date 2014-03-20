def fact(n):
    j = 0
    while n!=0:
        n/=5
        j+=n
    print str(j) 
k=input()
for i in range(k):
    fact(input())
