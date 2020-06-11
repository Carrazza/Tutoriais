lista = [1,2,3,4]

print(len(lista))

lista2 = []

for i in lista:
    lista2.append(i+1)

print(lista2)


#agora com list comprehension 

# Estrutura: [(oq vc quer fazer com o iterador) for i in lista]
exemplo = [(i+1) for i in lista]

# Estrutura: [(oq vc quer fazer com o iterador) for i in lista if condiçao]
exemplo2 = [(i) for i in lista if i > 2]

print(exemplo)
print(exemplo2)