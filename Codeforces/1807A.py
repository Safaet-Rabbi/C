# t=int(input())
# while t>0:
#     n=int(input())
#     dig=list(map(int,input().split()))
#     min=dig[0]
#     for i in range(1,n):
#         if dig[i]<min:
#             min=dig[i]

#     for i in range(n):
#         if dig[i]==min:
#             dig[i]+=1
#             break


#     product=1
#     for i in range(n):
#         product*=dig[i]
#         print(product)
#         t-=1

t = int(input())

while t > 0:
    n = int(input())
    dig = list(map(int, input().split()))

    minimum = dig[0]
    for i in range(1, n):
        if dig[i] < minimum:
            minimum = dig[i]

    for i in range(n):
        if dig[i] == minimum:
            dig[i] += 1
            break

    product = 1
    for i in range(n):
        product *= dig[i]

    print(product)
    t -= 1
