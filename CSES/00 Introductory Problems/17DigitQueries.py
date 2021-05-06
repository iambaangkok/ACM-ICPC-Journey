import math

nQueries = int(input())
for i in range(0,nQueries):
    digit = int(input())
    preDigit = digit

    length = 1
    while digit > 9 * pow(10,length-1) * length:
        digit -= 9 * pow(10,length-1) * length
        length += 1

    remainningNumber, digit = divmod(digit-1, length)
    print(str(pow(10,length-1) + remainningNumber)[digit])