#Programa 
peso = float(input('Qual é o seu peso? (KG) '))#Aqui nos colocamos o Peso em float por não ser um numero inteiro.
altura = float(input('Qual é sua altura? (m) '))#aqui adicionamos a altura em float tbm por se tratar de um numero quebrado.
imc = peso / (altura ** 2)# aqui no imc colocamos o calculo usado pelo IMC
print('O IMC dessa pessoa é de {:.1f}'.format(imc))# Aqui printamos o IMC da pessoa.

# daqui pra baixo colocamos as condições para aonde o resultado do IMC da pessoa se encaixa.

if imc <18.5: # Condição 1
    print('Você está abaixo do peso normal')
elif 18.5 <= imc < 25: # Condição 2
    print('Parabens você está na faixa de peso normal')
elif 25 <= imc <30: # Condição 3
    print('Você está em sobrepeso')
elif 30 <= imc < 40: # Condição 4
    print('Você está em obesidade, cuidado!')
elif imc >= 40: # Condição 5
    print('Você está em obesidade Mórbida, cuidado!')


