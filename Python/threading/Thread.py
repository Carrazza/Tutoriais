import time 
import threading


start = time.perf_counter()


#Quando tem coisas caras de fazer, IO tipo abrir files e mxer network 
#usar threadiing 

def do_something():
    
    print("Sleeping 1 second...")

    time.sleep(1)
    
    pass

do_something()

end = time.perf_counter()

print(f'Finished in {round(end-start,2)} second(s) ')