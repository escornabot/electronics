/*
    Teclado para Escornabot con sensores tipo MakeyMakey na placa E_KEY_BT
    pódese por calquera obxecto que conduza minimamente a corrente,
    axustando o valor umbral: maior para menos sensibilidade
    *
    Necesitamos 2 módulos Bluetooth, un Mestre e outro Escravo. 
    un HC-05 como Mestre e outro escravo que pode ser HC-05 ou HC-06
    
HC-05 como Mestre. 
    Conectaremos o modulo mediante un adaptador USB - RS-232 TTL. Axustes do terminal Baud 38400 ,NL & CR. 
   
    Comandos AT HC-05 (Pulsar reset durante o acendido, (Parpadeo lento)):
    
                Envío               -  Resposta
    test:       AT                  -  OK
    nome:       AT+NAME=<NOME>      -  OK ( preguntar é AT+NAME?, resposta o nome )
    pin         AT+PSWD="<pin>"     -  OK ( AT+PSWD="1234" o mesmo que no escravo)
    Velocidade  AT+UART=9600,0,0    -  OK ( a mesma velocidade que no escravo )
    rol:        AT+ROLE=<rol>       -  OK ( 0=escravo, 1=Mestre (precisa reinicio (pulsar reset mentras se inicia )))
    modo:       AT+CMODE=<mode>     -  OK ( 0=conexión a un enderezo especifico(Bind), 1=conectase o primeiro dispositivo que atopa e se queda ligado a el )
    amarre:     AT+BIND=<enderezo>  -  OK ( Enderezo do escravo no seguinte formato  AT+BIND=98D3,31,7028EF )
    RESET       AT+RESET            -  OK ( Reinicia gardando os datos)
    +info: https://goo.gl/YTYMmm
HC-06 escravo. 
     Conectaremos o modulo mediante un adaptador USB - RS-232 TTL. Axustes do terminal Baud 9600, sen axuste de liña ou NL & CR, NESTE CASO RESPONDE OS COMANDOS DOS HC05.
                Envío             -  Resposta
    test:       AT                -  OK
    nome:       AT+NAME<NOME>     -  OKsetname
    pin         AT+PIN<pin>       -  OKsetPIN ( AT+PIN1234 o mesmo pin que no mestre )
    Velocidade  AT+BAUD4          -  OK9600 ( 4 = 9600 baud ( a mesma velocidade que no mestre ))
    
    XDeSIG 2018 Creative Commons BY-SA4.0.
*/

// A2 Entrada tecla leste (e)
// A7 Entrada tecla oeste (o)
// A6 Entrada tecla norte (n)
// A8 Entrada tecla sur (n)

// A3 Entrada tecla executa (g)

#define led 11 //led para indicar o funcionamento

int entradas [5] = {A0, A2, A3, A4, A5};      //os pines de entrada
char teclas [5] = {'e','n','w','s','g'};  //cadea a enviar vía serie o escornabot


int umbral = 1000;   //Valor a partires do cal se detecta pulsacion ( sensibilidade)
int valor = 0;      //Variable para al macenar o valor da lectura analoxica

int contador = 0;   //Variable do contador

void setup() {
  
  Serial.begin(9600);   //activación da canle serie a 9600bps
  Serial1.begin(9600);   //activación da canle serie 1 a 9600bps

  
 // configuración dos pines de entrada
  for (contador = 0 ; contador < 6; contador ++) {
    pinMode(entradas[contador], INPUT);
  }

// configuración dos pines de saida ( leds)
    pinMode(led, OUTPUT);
  }
 
 
  void loop() {

    for (contador = 0 ; contador < 5; contador ++) {
      
      valor = analogRead(entradas[contador]);     //Collemos valor da entrada correspondente
      
      if (valor > umbral) {                       //Comprobamos se o valor supera o umbral de sensibilidade
        
        Serial1.print (teclas [contador]);         //Enviamos o comando da tecla seguido do retorno de carro
         Serial1.print ("\n");
        
        Serial.print ("Enviando: ");
          Serial.println (teclas [contador]);
        
        Serial.print ("Lectura: ");
          Serial.println (valor);
        
        digitalWrite (led, HIGH);
        delay(200);
        digitalWrite (led, LOW);
        delay(500);
      }
      delay(1); //Retardo entre lecturas
    }

  }

