def SquareRoot(x):
    if (x < 0):
        print("Non-Existent square root, number less than 0")
        return None
    low = 0
    high = x
    if x < 1:
        low = x
        high = 1
    mid = (low+high)/2
    error = 1e-12
    while not (abs((mid**2)-x) <= error):
        if (mid**2 >= x):
            high = mid
        elif (mid**2 <= x):
            low = mid
        mid = (low+high)/2
    return mid

print(SquareRoot(1e-9))
