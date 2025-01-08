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
