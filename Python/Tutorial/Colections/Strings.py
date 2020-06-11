# double or single quotes work # 
#input alwasy returns a str type 

#triple quotes--------------------------------------------------------------------------------------------------

triple_quotes = """Com triple quotes = oiii
break line
dnv
woooow\n"""
print(triple_quotes)

#---------------------------------------------------------------------------------------------------------------

#string normal--------------------------------------------------------------------------------------------------

message = "Hello World\n"
print(message)

#---------------------------------------------------------------------------------------------------------------

#printing index-------------------------------------------------------------------------------------------------

print("imprimindo o index[0] com string_variable[index] ---->" + message[0])


print("imprimindo de [0] até [4] com string_variable[a:b] com a e b inteiros ----> " + message[0:5] )

#O index segundo do a:b é non inclusive 
# [:n] vai 0 até n
# [n:] vai de n até o final da string

#---------------------------------------------------------------------------------------------------------------


#Lower and Upper cases------------------------------------------------------------------------------------------

print("\n\nall lower case com string_variable.lower() ---->" + message.lower())

print("all upper case com string_variable.upper() ---->" + message.upper())

#---------------------------------------------------------------------------------------------------------------


#Contando-------------------------------------------------------------------------------------------------------


print("tamano da string com string_variable.lenght() " + str(len(message)))

print("contado quantas letras 'l' tem na mensagem com string_variable.count('l') ---->" + str(message.count('l')))

print("vale pra qualquer string tipo quantos 'World' com string_variable.count('World') ---->" + str(message.count("World")))

#---------------------------------------------------------------------------------------------------------------

#find and replace ----------------------------------------------------------------------------------------------

print("\n\nprocurando palavras específicas (funciona pra várias tbm, retorna o indice em que a palavra começa. Procurando 'H' com string_variable.find('H') ----> " + str(message.find('H')))

print("\n\nreplacing a world in a string (essa função retorna uma string com a modificação, n muda a string original) com string_variable.replace('World','johnny') ----> " + message.replace('World', "johnny") )

#---------------------------------------------------------------------------------------------------------------

#formatando msgs------------------------------------------------------------------------------------------------ 

outro = "Adam Sandler"
treco = "Oi"

nova_mensagem = f"\n\n{treco} {outro}"

print(nova_mensagem)

float_number = 12.3 

print(f"{float_number:.2f}")