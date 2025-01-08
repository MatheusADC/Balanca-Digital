# Descrição
O dispositivo visa a medição da massa de objetos através do uso de um sensor de distância, de molas e do microcontrolador de prototipação Arduino.

# Contexto Histórico
A balança está presente em quase todos os povos da humanidade, sendo que o seu primeiro registro histórico foi há sete mil anos no Egito Antigo (Figura 1), no formato de dois pratos fixados a uma haste horizontal equilibrada por um ponto de apoio fixo, essa balança desempenhava um papel importante no comércio e até na religião desse povo (Figura 2).

<br>

<div align="center">
  <img src="https://github.com/user-attachments/assets/b1bccb36-ca49-4102-8262-aab6a006f6ef" alt="Hieróglifos">
</div>

<br>

Não somente povos antigos, mas até na atualidade a balança de pratos representa um equilíbrio para diversas civilizações, mostrado por exemplo no símbolo da justiça.

# Molas
## Categorias de Molas

Consoante Robert L. Norton (2013, p.788) os tipos de molas, quando decompostas em relação à sua geometria material, totalizam 18 subdivisões, sendo algumas dessas representadas dentro de um mesmo grupo devido à sua semelhança estrutural. 

Nesse sentido, vale analisar de forma pormenorizada cada grupo de molas com o fito de evidenciar à que melhor se adequa ao projeto em questão, tanto de forma posicional - tamanho do componente no tocante à balança - quanto na medição da deflexão, sendo esse conceito entendido como o desvio da mola da sua posição original quando em contato com uma força.

## Molas Helicoidais de Compressão

As molas helicoidais de compressão (Figura 3) são a variedade mais utilizada no mundo pois oferecem uma gama de arranjos. Posto isso, são molas que possuem um alto grau de deflexão, podendo, dessarte, serem utilizadas como válvulas em motores veiculares. A partir disso, são encontradas nas seguintes arrumações:

- **Padrão**: possui algumas propriedades fixas, como a constante de mola, o diâmetro das espiras e o passo (distância axial entre espiras).
Passo Variável: como o próprio nome informa, a distância axial entre as espiras é variável, bem como a constante elástica. Sendo assim, quando a mola é submetida a uma força, as espiras que possuem uma menor constante elástica se retraem primeiro.

- **Cônicas**: tais molas são mais resistentes à deflexão, uma vez que, em geral,  são detentoras de uma constante elástica crescente e não linear em que as espiras com menor diâmetro - aquelas da porção superior da mola quando essa é posicionada como um cone tradicional - se retraem por último, pois possuem maior constante elástica (L. NORTON, 2013, p.788).

- **Barril**: é entendida como uma vertente da mola cônica haja vista que é a junção de duas molas cônicas justapostas ligadas pela sua seção de base. É empregada, basicamente, para mitigar a vibração que possa interagir com toda a estrutura.
Ampulheta: assim como as molas do tipo barril, é formada por molas cônicas justapostas só que pelo seu ápice. A sua função fundamental é análoga às molas do tipo barril.

<br>

<div align="center">
  <img src="https://github.com/user-attachments/assets/554b4bb0-efdc-4cd1-a0dd-5339a6b96801" alt="Tipos de molas">
</div>

<br>

# Lei de Hooke 

O conjunto da mola atrelada à massa do objeto a ser “pesado” forma um Sistema Massa - Mola em que em algum momento a variação da distensão da mola (oscilação) cessa para ocorrer a medição, o qual utiliza a Lei de Hooke para associar de maneira linear, vide gráfico da Figura 4, a força empregada à deformação da mola. O comportamento linear da mola é condizente com a variação diretamente proporcional entre a força e a deformação. Tal princípio recebe o nome do cientista inglês Robert Hooke e pode ser definido pela fórmula a seguir:

Onde F é a força, a qual será de compressão ou extensão a depender da categoria da mola, já K é a constante elástica da mola que é dependente do material constituinte da mola, das suas dimensões e do seu formato Desse modo, quanto maior a constante elástica maior a rigidez, isto é, a resistência a força para ocorrer a deformação (HALLIDAY; RESNICK, 2012, p. 154). Finalmente, x é a deformação resultante da mola quando exercida a força elástica.

<br>

<div align="center">
  <img src="https://github.com/user-attachments/assets/3e0de02c-1867-44eb-81c1-5438521a9f5a" alt="Fórmula: F = K . -x">
</div>

<br>

O sinal de menos resulta do sentido da Força elástica, uma vez que ela é restauradora e quando o resultado for negativo quer dizer que o sentido é contrário ao movimento de compressão ou extensão.

<br>

<div align="center">
  <img src="https://github.com/user-attachments/assets/9a25b42a-d095-4383-a28f-1223751b8a78" alt="Gráfico FxΔx">
</div>

<br>

# Componentes Eletroeletrônicos
## Arduino
O Arduino surgiu em 2005 pelo italiano e Designer de Interação Massimo Banzi, com o intuito de ser uma plataforma de prototipagem eletrônica na linguagem de C + +. Conforme Kushner (2011), essa plataforma tem como peculiaridade ser de baixo custo, open source e livre de royalties permitindo a utilização de componentes auxiliares com muita facilidade, visto que a arrumação da pinagem da placa e a integração de elementos como os jumpers e uma protoboard é extremamente intuitivo e de fácil integração.

Com a necessidade de diferentes tamanhos, capacidade de processamento e portas de acesso à placa via software, irrompeu-se a necessidade de uma variedade de tipos de placas para o Arduino, sendo os modelos mais comuns Mega, Uno e Nano, como ilustrado na (Figura 5). Com esse avanço, o Arduino garantiu uma gama de aplicações ao se tratar do monitoramento remoto, da automação e da Internet das Coisas, assim atribuindo o limite apenas à criatividade do usuário/criador.

<br>

<div align="center">
  <img src="https://github.com/user-attachments/assets/f8fc82f6-15bc-4de2-ba8b-4f57fbe850eb" alt="Tipos de Arduino">
</div>

<br>

Sobre a relação entre os componentes internos da placa e ao ambiente físico, é proporcionado por sensores conectados diretamente nos pinos ou por uma ligação via jumper que converte a energia de algum estímulo ambiental em sinais elétricos e lógicos à placa, podendo ser desligados a qualquer momento ao integrar botões de acionamento ou interruptores encaixados em uma placa de ensaio. 

O processo de estímulo-resposta é intermediado por um microcontrolador da placa do Arduino (Figura 6), os quais são responsáveis por armazenar o código estruturado e gerenciar a sua aplicação para outras peças anexadas ao sistema (BABOS, 2022). Os mais utilizados são os produzidos pela empresa ATmel, com o produto se chamando ATmega.

<br>

<div align="center">
  <img src="https://github.com/user-attachments/assets/402d9147-94f1-471b-b787-e87210d80f8f" alt="microcontrolador ATmega">
</div>

<br>

## Sensor de distância

Sensores de distância do qual a plataforma do Arduino utiliza comumente faz uso da tecnologia presente em sonar de localização ultrassônica, que se baseia em emitir uma onda e calcular o tempo de resposta da própria (MACEDO, 2013, p.2). 

No caso do sensor (Figura 7), existe um pino trigger o qual emite ondas de alta frequência com o seu feixe em formato de cone, da mesma maneira o sensor é imbuído de outro pino denominado de eco do qual recebe essas ondas novamente. 

Além dessa propriedade de enviar e receber, o componente eletrônico deve converter a informação da distância em pulsos elétricos para o microcontrolador, que por sua vez converte a mesma informação para os demais itens do sistema.

<br>

<div align="center">
  <img src="https://github.com/user-attachments/assets/d724fdc5-c497-40c5-b261-cc0c7cdb67f5" alt="Sensor HCSR04">
</div>

<br>

Para a elaboração do projeto, será utilizado o sensor HC-SR04, que irá encontrar a distância por meio da fórmula da Velocidade Média:
```
Vm = ∆S/∆t
```
Porém, a fórmula geral será modificada para ser compatível com o fenômeno físico do eco exercido pelo sensor. Será medida a distância da onda que percorrerá, com uma velocidade média fixa, o trajeto de ida e a reflexão do objeto (volta), portanto, a fórmula sofrerá o reajuste ao ter a distância multiplicada por 2:

```
Vm = (2 x d)/∆t
```

# Tela de Cristal Líquido

A Tela de Cristal Líquido (do inglês, Liquid-Crystal Display), é a peça integrante da balança que atua como um periférico de saída de informação, conforme representado na Figura 8. 

Nessa lógica, ela é responsável por apresentar de forma visual mensagens alfanuméricas predefinidas, como a impressão da massa do objeto, no caso da balança digital. Em relação a isso, a mensagem é evidenciada pela luz de fundo (Backlight), sendo que essa pode variar do verde até o azul. 

<br>

<div align="center">
  <img src="https://github.com/user-attachments/assets/6cc39166-6c42-4425-8e61-a9a3f5f28004" alt="Display LCD">
</div>

<br>

O número de informações apresentadas ao usuário varia de acordo com as dimensões da tela, a exemplo um display de 16 linhas por duas colunas consegue exibir, no máximo, 32 caracteres concomitantemente (BABOS, 2020, p.122).

Para mais, o LCD realiza a comunicação com a placa do Arduino por intermédio do módulo I2C (Inter-Integrated Circuit), segundo a Figura 9. Em vista disso, tal componente permite a integração entre um equipamento periférico - no caso o LCD - e o microcontrolador da placa do Arduino. Em consonância com isso, o módulo possui uma arrumação de 4 pinos, sendo que dois deles são o VCC (Coletor Comum de Voltagem, em tradução livre) que se liga ao pino de tensão de 5V da placa Arduino e o GND (terra) que se conecta ao GND da placa Arduino e estabelece a diferença de potencial e o sentido da corrente elétrica. 

Em sequência, em conformidade com o site arduino.cc (2021) - principal divulgador da plataforma Arduino e da IDE correspondente - os outros 2 pinos são o SCL (Serial Clock Pin) que tem como função essencial a geração de sincronização do sistema por parte do microcontrolador e o SDA (Serial Data Pin), o qual é o executor, de fato, do envio e do recebimento de dados.

<br>

<div align="center">
  <img src="https://github.com/user-attachments/assets/44054137-2f3a-4c7b-8f8b-cc3628ae9e38" alt="Módulo I2C">
</div>

<br>

# Simulação Virtual - TinkerCad 3D
De forma adicional, cabe tornar claro que a correta utilização do LCD e por consequência do Módulo I2C não prescinde do emprego de uma biblioteca, sendo uma das mais populares a <LiquidCrystal_I2C.h>. Por último, tais bibliotecas tornam possível a promoção das funções de C + + relacionadas às ações desejadas.

O projeto a ser executado de forma holística tem como égide metodológica a abordagem descritiva-explicativa do processo por meio da indicação dos itens eletroeletrônicos e mecânico (com ênfase particular na mola) a serem manipulados em consonância com a linguagem da programação apropriada para a utilização do Arduino.

Para tal propósito, primeiramente será confeccionado uma prototipação da balança digital no Web Software de modelagem Tinkercad, sendo essa ferramenta responsável por exemplificar e tornar mais visível a aplicação digital da placa Arduino com os demais componentes, com a finalidade de evidenciar as ligações e relações entre os elementos integrantes do sistema, conforme as ilustrações a seguir.

<br>

<div align="center">
  <img src="https://github.com/user-attachments/assets/edd9a7d1-1b7c-4716-89c6-b849b4c5c7a9" alt="Vistas - TinkerCad3D">
</div>

<br>

Inicialmente, será empregado como invólucro uma caixa de madeira MDF de base quadrada, 30x30x20cm, com 4 molas helicoidais de compressão parafusadas e correlacionadas em uma associação em paralelo. Conjuntamente, uma tampa de alumínio de dimensões 25x25 cm atuará como suporte ao objeto que terá a sua força aplicada medida. 
De forma complementar, foi determinado o sensor de distância anexado que, de acordo com os dados do próprio fabricante, tem precisão que varia de 2 cm a 400 cm. Em sucessão, a placa Arduino escolhida para o projeto foi o modelo UNO R3 estritamente pelas proporções constituídas.

Para terminar, pretende-se conseguir medir objetos com intervalo de peso de 250g até 2,250 Kg de forma assertiva.
Para fins de simplificação da modelagem 3D e para evitar a poluição visual da representação foram omitidos os jumpers do projeto.
Toda a sequência de desenvolvimento será distribuída nas seguintes fases:

a) formular a criação do algoritmo/código base manipulado no processo;

b) averiguar a melhor forma de dispor as peças auxiliares no que se refere à sua interação tanto com a placa Arduino quanto com os diálogos inter componentes;

c) estabelecer e delimitar os parâmetros de funcionamento do aparato;

d) analisar o desempenho do mecanismo, de tal forma a realizar a retificação de possíveis falhas de montagem ou de ordenamento da codificação.

