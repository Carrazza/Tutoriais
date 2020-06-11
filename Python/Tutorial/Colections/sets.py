#O set não é ordenado e cada item é único, não pode ser adicionado duas vezes. Não existem índices em sets 

exemplo_set = {1,2,3,4,4,4,4,4,4,4,4,4,4,4,10}


exemplo_set.add(5) #os invés de append é add 


#não necessariamente vai imprimir na ordem dentro de um laço for, ênfase na palavra n necessariamente  

print(exemplo_set)

no_for = [(i) for i in exemplo_set]

print(no_for)

print(1 in exemplo_set) #faz isso muito mais rápido que listas 