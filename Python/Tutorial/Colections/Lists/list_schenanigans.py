lista1 = [1,2,3,4]

lista2 = lista1

lista2.append(10)

print(f"lista1 depois de um append na lista2 ={lista1}   -> holy, mudou tbm ")

#pra evitar que esse erro ocorra
#em Python, quando vc diz que duas listas são iguais, apenas taca o ponteiro da nossa variável pra onde começa a lista que tu tá dizendo ser igual, pra evitar isso tem que fazer lista_nova = list(list_antiga)

lista_antiga = [3,2,1]

lista_nova = list(lista_antiga)

lista_antiga.append(10)

print(f"\nlista_antiga = {lista_antiga}, lista nova = {lista_nova}")