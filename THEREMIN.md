# Theremin.

Utilicaremos un fototransitor y unpiezoelectrico.

Construiremos un theremin que funciona con luz.

Un theremin es un instrumento que produce sonido con los movimientos de las manos del musico alrededor del instrumento.

El theremin detecta donde estan las manos del musico en relacion a dos antenas, leyendo la transformacion capacitiva en las antenas.

Una antena controla la frecuencia del sonido y la otra controla el volumen.

Arduino no puede replicar exactamente los sonidos de este instruemnto, es posible emularlos usando la fincion tone().
La figura1 representa la diferencia entre los pulsos emitidos por analogWrite() y tone(), permite que un transductor se mueva hacia delante y hacia atras a diferentes velocidades.

la funcion de setup se ejecuta una sola vez

### Theremin

Primero he creado una variable para almacenar el valor analogRead() de fotoelectrica. Luego he creado variables para los valores minimos y maximos.
He configurado el valor de sensorLow a 1023 y el valor de sensorHigh a 0.

Luego he creado una constante ledPin, he usado el LED integrado conectado a la clavija 13.

En el setup(), cambie el pinMode() de ledPin a OUTPUT.

Para calibrar lo minimos y maximos del sensor he usado while() para ejecutar un bucle de 5 segundos. (los bucles while se ejecutan hasta que una cindicion se haya cumplido)
Tambien he usado millis() para comprobar el tiempo acual. (informa de cuanto tiempo lleva ejecutandose)

En el loop() he puesto el valor en A0 y lo he almacenado en el varible sensorValue.

He creado una variable llamada pitch, el valor de pitch sera mapeado por sensorValue. Use sensorLow y sensorHigh como limites de los valores.

Luego use la funcion tone() para tocar un sonido.
Luego use un delay() durente durante 10 milisegundos.

Este es el codigo: https://github.com/ANGEY33/Arduino/blob/main/THEREMIN.ino

### Variacion 1

Boton por hardware

En esta variante he implementado un boton para controlar cundo quiera que suene.

El codigo es el mismo

### Variacion 2

Boton por software

Este es el codigo: https://github.com/ANGEY33/Arduino/blob/main/theremin_variable2.ino

