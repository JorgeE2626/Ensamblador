
int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int btnDown = 9;
int btnUP = 10;
int contador = 0;
int resultado; 
// Definición de las entradas EstadoA y EstadoB
int pinEstadoA = 11; // Definir el pin para EstadoA
int pinEstadoB = 12; // Definir el pin para EstadoB

void setup()
{
  for (int x = 2; x <= 8; x++) {
    pinMode(x, OUTPUT);
  }
  
  pinMode(btnDown, INPUT);
  pinMode(btnUP, INPUT);
  
  pinMode(pinEstadoA, INPUT); // Configurar EstadoA como entrada
  pinMode(pinEstadoB, INPUT); // Configurar EstadoB como entrada

  // Inicializar display apagado
  for (int x = 2; x <= 8; x++) {
    digitalWrite(x, LOW);
  }
}

void loop()
{
  // Leer el valor de los botones
  int valorbtnup = digitalRead(btnUP);
  if (valorbtnup == HIGH) {
    contador++;
    delay(200);
  }

  int valorbtndown = digitalRead(btnDown);
  if (valorbtndown == HIGH) {
    contador--;
    delay(200);
  }

  // Limitar el contador entre 0 y 15
  if (contador > 15) {
    contador = 0;
  }
  if (contador < 0) {
    contador = 15;
  }

  // Leer los estados de las entradas A y B
  int EstadoA = digitalRead(pinEstadoA);
  int EstadoB = digitalRead(pinEstadoB);

  // Aquí se realizarían las operaciones según el contador
  if (contador == 0) { 
  // Suma
  if (EstadoA ^ EstadoB) {
    resultado += 1;  
    delay(100);  
  } 
  if (EstadoA && EstadoB) {
    resultado += 2;  
    delay(100);  
  }

}

  if (contador == 1) { 
    // Resta
      if (EstadoA ^ EstadoB) {
        resultado -= 1;
        delay(100); 
      } 
      
      if (!EstadoA && EstadoB) {
        resultado -= -1;
        delay(100); 
      }else{
        resultado -=0;
        delay(100); 
      }
  }

  if (contador == 2) {
    // Multiplicación
    if (EstadoA && EstadoB) {
      resultado *=1; 
      delay(100); // Asignar un resultado ejemplo
    }else{
      resultado =0;
      delay(100); 
    }
  }

  if (contador == 3) {
    // División
    if (EstadoA && EstadoB) {
      resultado /= 1; 
      delay(100); 
    } else if (!EstadoA && !EstadoB) {
      resultado /= 0;
      delay(100); 
    } else if (EstadoA && !EstadoB) {
      resultado = 16; 
    } if (!EstadoA && EstadoB) {
         resultado = 17; 
       }
  }

  // Mostrar en el display según resultado
  switch (resultado) {
    case 0: // 0
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, LOW);
      delay(1000);
      break;

    case 1: // 1
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, LOW);
      break;

    case 2: // 2
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, LOW);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, HIGH);
      break;

    case 3: // 3
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, HIGH);
      break;

    case 4: // 4
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      break;

    case 5: // 5
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      break;

    case 6: // 6
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      break;

    case 7: // 7
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, LOW);
      break;

    case 8: // 8
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      break;

    case 9: // 9
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      break;

    case 10: // A
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      break;

    case 11: // B
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      break;

    case 12: // C
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, LOW);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, LOW);
      break;

    case 13: // D
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, HIGH);
      digitalWrite(pinC, HIGH);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, HIGH);
      break;

    case 14: // E
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, LOW);
      digitalWrite(pinD, HIGH);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      break;

    case 15: // F
      digitalWrite(pinA, HIGH);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, LOW);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, HIGH);
      digitalWrite(pinF, HIGH);
      digitalWrite(pinG, HIGH);
      break;


      case 16: // invalido
       digitalWrite(pinB, HIGH); // Segmento B
       digitalWrite(pinC, HIGH); // Segmento C
       digitalWrite(pinE, HIGH); // Segmento E
      digitalWrite(pinF, HIGH); // Segmento F
      break;

      case 17: // infinito
     digitalWrite(pinA, HIGH);  // Segmento A
     digitalWrite(pinB, HIGH);  // Segmento B
      digitalWrite(pinC, LOW);   // Segmento C
     digitalWrite(pinD, HIGH);  // Segmento D
     digitalWrite(pinE, HIGH);  // Segmento E
      digitalWrite(pinF, LOW);   // Segmento F
      digitalWrite(pinG, HIGH);  // Segmento G
      break;

      case-1:

      // Mostrar "menos" (solo el segmento G encendido)
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, LOW);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
     digitalWrite(pinF, LOW);
     digitalWrite(pinG, HIGH); // Segmento G (horizontal medio) encendido

      delay(1000);  // Espera 1 segundo antes de cambiar

     // Mostrar "1" (segmentos B y C encendidos)
      digitalWrite(pinA, LOW);
     digitalWrite(pinB, HIGH);
     digitalWrite(pinC, HIGH);
     digitalWrite(pinD, LOW);
     digitalWrite(pinE, LOW);
     digitalWrite(pinF, LOW);
     digitalWrite(pinG, LOW);
     break;

      

     default:
      // Apaga el display en caso de error
      digitalWrite(pinA, LOW);
      digitalWrite(pinB, LOW);
      digitalWrite(pinC, LOW);
      digitalWrite(pinD, LOW);
      digitalWrite(pinE, LOW);
      digitalWrite(pinF, LOW);
      digitalWrite(pinG, LOW);
      break;
  }
}