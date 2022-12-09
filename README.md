<div align="center">	
<img src="https://user-images.githubusercontent.com/70967912/206793699-7bf8e280-3e46-4058-bb7c-ae2a7412086d.jpeg" width="600px"/>

</div>


# Varal automatico
Projeto de um Varal Automatizado Com Arduino

Um projeto Simples e basico, para fins educativos e para apresentação ao publico, no Sacaiff, evento do Instituto Federal Fluminense de Padua



<h1>Materiais para o circuito:</h1>

1 Fonte 12V para alimentaçao do arduino e ponte H,
2 Motores do tipo DC de 5v,
1 Modulo L298N (Ponte H), para controle dos motores,
2 Sensores de fim de curso,
12 Fios tipo jumper,
1 Sensor de Chuva. 

Para montar o circuito e indicado saber o funcionamento do Modulo L298N, ou ler o datasheet do modulo:

DataSheet do modulo: https://files.comunidades.net/mutcom/Driver_Motor_ponteH__L298N.pdf 

Montagem do Circuito completa, pinos e etc.





<img src="https://user-images.githubusercontent.com/70967912/206793990-b1f00f74-0535-4375-ac20-9f319cbbddc4.jpeg" width="450px"/>



 <h1>Funcionamento Do Codigo</h1>

<h5>O codigo basicamente consiste em se caso o Sensor de Chuva estiver detectando o valor menor doque 800, ele ira retrair o varal, caso contrario ira continuar em sua posiçao inicial (No sol), ou tambem se no caso, chover e logo apos o sensor ficar seco, automaticamente ira ser enviado um sinal maior doque 800 para o pino analogico do arduino, dando a se entender que os motores terao que colocar a roupa para o sol novamente e para que haja a parada correta dos motores na sombra e no sol teremos 2 botoes de fim de curso, 1 em cada extremidade do varal, onde algo ira clicar e automaticamente havera a parada dos motores.</h5>


<h1>Agradecimentos</h1>

<h5>Gostariamos de agradecer a todo apoio que nosso orientador Gabriel Solino professor do Instituto Federal nos deu, e tambem ao nosso segundo coorientador Pedrinho e tambem gostariamos de agradecer aos outros professores pelo apoio para que nosso projeto funcionasse e tambem aos nossos amigos pelas motivações e apoio moral.</h5>


