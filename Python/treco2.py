n = int(input())
closest_power_of_two = 1
factor = 0

if ((n & (n-1) == 0) and n != 0): 
    print("1")

else:

    while(closest_power_of_two*2 < n):
        closest_power_of_two *= 2

    factor = n - closest_power_of_two

    print(1+(factor*2))