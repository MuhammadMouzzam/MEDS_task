from math import ceil

def factorial(num):
    fact = 1
    for i in range(2, num+1): fact *= i
    return fact

def Exponential(x):
    result = 0
    for i in range(int(x)+100): result += ((x**i)/factorial(i))
    return result

print(Exponential(65))
