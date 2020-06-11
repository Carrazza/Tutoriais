
courses = ["Math", "Calculus" , "POO"]


print(courses)


#pegando o tamanho de uma lista com len(lista) 

print(len(courses))

#Pegando um index com lista[0] 
print(courses[0])

#"Vale o mesmo das strings a parada do 0:3 , :3 , 2:



#adicionando coisas na lista

courses_append = list(courses) 

courses_append.append("EDA")

print(courses_append)

#adicionando coisas em lugares especificos 

courses_insert = list(courses)

courses_insert.insert(2,"Computacao Grafica")

print(courses_insert)


lista = [1,2,3]

for x in lista[1:]: #vai de um até o final
    print(x,end = " ")        

print("\n")

lista.extend([10,9,8]) #a partir desse método, pegamos uma lista e a adicionamos a outra 

print(lista)


tupla = (1,2,3,4) #é uma lista só que n pode mudar nunca

# se (a,b) = (1,2)   a=1  e b =2. Mesmo principio de tuplas 

#enumerando itens em um vetor

listinha = ["Carrazza","Beb"]

print(list(enumerate(listinha)),end= "\n") #enumerate retorna uma tupla 

print("\n")

for nome in enumerate(listinha):
    print(nome) #nota que aqui retorna uma tupla, podemos fazer a igualdade já a partir daqui 

for indice, nome in enumerate(listinha):
    print(indice, nome , sep=" x ")

#e se n quisermos um dos itens da tupla???

for indice, _ , in enumerate(listinha): #assim n pegamos a segunda parte/b da tupla
    print(indice)