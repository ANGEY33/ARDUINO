# PWM ( Pulse Width Modulation)
Modulacion por ancho de pulsos.

### Problema

Tengo un Arduino que suministra 5V a un LED.

- A mayor intensidad de corrinete (a) el LED brillara mas.

- A menor intesidad de corrinete (a) el LED brillara menos.

(ver ley de OHM)

Si subimos o bajamos el voltaje haremos lo mismo con la intensidad suponiendo que la resistencia del circuito es la misma.

Si conecto un LED con su resistencia de 220 ohmnios a un voltaje de 5V o de 3´3V?

El LED brillara mas con 5V y menos con 3´3V.

### Que es un pulso 

Un pulso electrico es una señal de voltaje medida en el tiempo.

Los ojos humanos podemos detectar cambios hasta entorno a 12Hz a partir de 24-30Hz no somos capaces visualmente.

Los pulsos modulados crean la ilusion de voltajes intermedios entre 0 y 5V para ello usan pulsos muy cortos.

Que usaremos a traves de la funcion Analog Write(Pin,0-255); esta funcion solo funcionara en pines con PWM

Los pines con PWm estan marcados por el simbolo ~ ( la tilde de la eñe)

La funcion no pide dos cosas, por un lado (y lo primero) 

- Numero de PIN

- Un numero entre 0 y 255

0 --> 0% de voltaje

255 --> 100% de voltaje (5V)
