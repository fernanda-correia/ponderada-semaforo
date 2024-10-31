### Funcionamento do Código

Link do vídeo de funcionamento: https://youtube.com/shorts/j5N-eauN61o?feature=share

### Detalhamento da Montagem

A protoboard é alimentada por um Arduino UNO conectado à porta do computador. O terminal negativo (GND) do Arduino é conectado a protoboard por um jumper, que alimenta uma coluna de entradas responsáveis pela conexão negativa dos resistores (todos com resistência de 33 Ohms), e os jumpers que se conectam ao terminal cátodo (-) dos LEDs. Os terminais ânodos (+) dos LEDs, por sua vez, são alimentados por jumpers fêmea-macho, que recebem corrente de jumpers macho-macho conectados nas portas positivas 8, 9 e 11. Dessa forma, a corrente passa por um fluxo que permite ligar e desligar os LEDs conforme especificados no código 'semaforo.ino'.

### Tabela de componentes utilizados

|Componente |Quantidade |Valor/ Modelo |
|-|-|-|
|Jumper macho-macho | 4 | -|
|Jumper macho-fêmea | 6 | -|
|Arduino | 1 | Arduino UNO|
|Resistor | 3 | 33Ω  5% (1/4W) |
|LED | 3 | - |
|Suporte de MDF | 1 |- |


### Tabela de Avaliação entre Pares

#### Avaliador: Fernanda Correia Nascimento
#### Avaliado: Felipe Elgenneni

|Critério|	Contempla (Pontos)|	Contempla Parcialmente (Pontos)	|Não Contempla (Pontos)	|Observações do Avaliador|
|-|-|-|-|-|
|Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores	|Até 3	|Até 1,5	|0 | Ótima montagem física, as cores dos fios auxilia bastante no entendimento do fluxo do circuito, que funciona exatamente como esperado. Nota: 3 |	
|Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo	|Até 3	|Até 1,5	|0 | Temporização adequada, seguindo todos os valores estabelecidos e criando um loop de funcionamento. Nota: 3 |	
|Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) |	Até 3|	Até 1,5 |	0 | Ótima estruturação do código, com comentários relevantes e variáveis que auxiliam no entendimento. Nota: 3 |	
|Ir além: Implementou um componente de extra, fez com millis() ao invés do delay() e/ou usou ponteiros no código |	Até 1 |	Até 0,5 |	0 | Foi implementada uma função de mudança de ritmo das fases do semáforo conforme ajustes no potenciometro. Nota: 1 |	
| | | | |Pontuação Total: 10|
