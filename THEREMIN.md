# Theremin.

Utilicaremos un fototransitor y unpiezoelectrico.

Construiremos un theremin que funciona con luz.

Un theremin es un instrumento que produce sonido con los movimientos de las manos del musico alrededor del instrumento.

El theremin detecta donde estan las manos del musico en relacion a dos antenas, leyendo la transformacion capacitiva en las antenas.

Una antena controla la frecuencia del sonido y la otra controla el volumen.

Arduino no puede replicar exactamente los sonidos de este instruemnto, es posible emularlos usando la fincion tone().
La figura1 representa la diferencia entre los pulsos emitidos por analogWrite() y tone(), permite que un transductor se mueva hacia delante y hacia atras a diferentes velocidades.

Este es el codigo: https://github.com/ANGEY33/Arduino/blob/main/THEREMIN.ino
