class conta: 

    def __init__(self,nome,saldo,codigo ): #sempre recebe o self como parâmetro
        self.nome = nome 
        self.saldo = saldo
        self.codigo = codigo

    
    def depositar(self,money):
        self.saldo += money

    def __str__(self):
        return(f"nome = {self.nome}, saldo = {self.saldo}, código = {self.codigo}\n")

conta_exemplo = conta("José",100,3468)

conta_exemplo.depositar(100)

print(conta_exemplo)