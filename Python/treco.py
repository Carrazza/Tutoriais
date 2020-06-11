prisioneiros = [1,2,3,4,5,6,7]

i = 0
dead_metter = 1

while(1):

    if(len(prisioneiros) == 1):
        print(prisioneiros)
        break

    else:
        print(prisioneiros)

        if(dead_metter % 2 == 0):
            prisioneiros.remove(prisioneiros[i])

        else: 
            i+=1

        dead_metter += 1

        if(i >= len(prisioneiros)): i = 0


