Super Trunfo de Cartas - Jogo
Descrição
Este projeto é um jogo de Super Trunfo de Cartas, onde os jogadores competem entre si, comparando atributos de cartas de países fictícios ou reais. O jogo permite que os jogadores escolham atributos (como população, PIB, área, pontos turísticos, entre outros) e determina quem vence com base nos atributos comparados.

Funcionalidade
O jogo apresenta duas cartas, cada uma representando um país fictício com atributos como:

Código da carta

Nome do país

População

Área

PIB (Produto Interno Bruto)

Pontos turísticos

PIB per capita

Densidade populacional

Os jogadores escolhem dois atributos para comparar entre as duas cartas e o jogo determina qual país "vence" com base no valor de cada atributo.

Requisitos
Linguagem: C

Ambiente de desenvolvimento: VSCode (ou outro editor de sua preferência)

Instruções de Uso
Compile o código C com um compilador adequado (como o GCC):
gcc -o super_trunfo super_trunfo.c

Execute o programa:
./super_trunfo

O jogo irá exibir as cartas com os atributos dos países e solicitará que você escolha dois atributos para comparar.

Após a comparação, o programa exibe o vencedor para cada atributo e soma os pontos de cada carta. O vencedor geral será o país com a maior soma de pontos.

Como Jogar
Escolha do Atributo: O programa apresentará uma lista de atributos disponíveis. Você escolherá um atributo para comparar entre as cartas.

Escolha de Atributos Diferentes: O programa garantirá que você escolha dois atributos diferentes para a comparação.

Comparação: O programa comparará os valores dos atributos selecionados nas duas cartas e exibirá o vencedor para cada comparação.

Resultado: O programa somará os pontos de cada atributo e determinará qual carta (país) venceu o jogo.

Estrutura do Código
O código foi estruturado de forma a:

Declarar as variáveis para armazenar os dados das cartas.

Apresentar as informações das cartas ao jogador.

Permitir a escolha de atributos para comparação.

Comparar os atributos e calcular os pontos totais.

Exibir o resultado final após a comparação dos atributos escolhidos.

Exemplo de Saída
Aqui está um exemplo de como o jogo se comporta durante uma partida:


     --CARTA 1--
Código da carta :       A01
Nome do País:           Alpha
População:              100000.00 
Área:                   10000.00 km²
PIB:                    120000.00 milhões de reais
Pontos turísticos:      14
PIB per capta:          1200.00 milhões de Reais
Densidade Populacional: 10.00 hab/km²

------------------------------------------------------
     --CARTA 2--
Código da carta :       B02
Nome do País:           Beta
População:              1000000.00 
Área:                   8000.00 km²
PIB:                    25000.00 milhões de reais
Pontos turísticos:      38
PIB per capta:          25.00 milhões de reais
Densidade Populacional: 125.00 hab/km²

------------------------------------------------------
---Bem-vindo ao jogo!---
Escolha o primeiro atributo para comparar:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - PIB per Capita
6 - Densidade Populacional
Opção: 1

Escolha o segundo atributo:
1 - População
2 - Área
3 - PIB
4 - Pontos Turísticos
5 - PIB per Capita
6 - Densidade Populacional
Opção: 2

------------------------------------------------------
Atributo População
Alpha vence🏆 população: 100000.00 
Beta          população: 1000000.00

Atributo Área
Alpha vence🏆 Área: 10000.00 
Beta        Área: 8000.00 

------------------------------------------------------
Resultado Final:
Alpha vence com a maior soma de pontos!
