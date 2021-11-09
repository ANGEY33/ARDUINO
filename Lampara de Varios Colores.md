# PWM ( Pulse Width Modulation).
Modulacion por ancho de pulsos.

### Problema.

Tengo un Arduino que suministra 5V a un LED.

- A mayor intensidad de corrinete (a) el LED brillara mas.

- A menor intesidad de corrinete (a) el LED brillara menos.

(ver ley de OHM).

Si subimos o bajamos el voltaje haremos lo mismo con la intensidad suponiendo que la resistencia del circuito es la misma.

Si conecto un LED con su resistencia de 220 ohmnios a un voltaje de 5V o de 3´3V?

El LED brillara mas con 5V y menos con 3´3V.

### Que es un pulso. 

Un pulso electrico es una señal de voltaje medida en el tiempo.

Los ojos humanos podemos detectar cambios hasta entorno a 12Hz a partir de 24-30Hz no somos capaces visualmente.

Los pulsos modulados crean la ilusion de voltajes intermedios entre 0 y 5V para ello usan pulsos muy cortos.

Que usaremos a traves de la funcion Analog Write(Pin,0-255); esta funcion solo funcionara en pines con PWM.

Los pines con PWm estan marcados por el simbolo ~ (la tilde de la eñe).

La funcion no pide dos cosas, por un lado (y lo primero). 

- Numero de PIN.

- Un numero entre 0 y 255

0 --> 0% de voltaje.

255 --> 100% de voltaje (5V).

int = integez. Significa que nuestra variable es un tipo de dato numerico no decimal le asigna un espacio en memoria.

Otros tipos:

- stzing = cadena de caracteres.

- bool = booleano si es verdadero (true) si es falso (false).

- chaz = unico caracter.

- float = numeros decimales.

RAW sensor values = valores del sensor sin tratar .

\t = tabulacion caracteres especiales.

 
 * Vesion 1
 
 Hemos comenzado copiando unos codigos en la pizzara de la version uno la cual seria esta en particular 
 
 [ Prueba 1](https://github.com/jjksimp/arduino/blob/main/Lampara_varios_colores.ino)
 
 
![](https://github.com/miguelamgel1107/Arduino/blob/main/IMG20211103140539.jpg)

imagen de ![(https://github.com/miguelamgel1107/Arduino/blob/main/operadores.md)
