
# Operaciones

IF (varaible y valor) Si(True)No(True).

Output - Stiven actic¡vate.

Temperatura (15ºC - 80ºC).

Sensor Value 0 - 1024.

Se puede ordenar infinitas veces.

- Leer Pinao -> Analog Read -> 0 -1023 (8 bytes).

- Transforma los valores y, de regalo, las pintas en pantalla.

Digital Write es una función que nos pide un número de pin y el valor HIGH (1) o LOW (0).

- Si el valor es HIGH, la placa suministrara 5 voltios en ese pin.

- Si el valor es LOW (o 0), la placa suministrara 0 voltios en ese pin.

- Si hay 5V, se activaran los circuitos * si es 0 voltios no se activaran.

* Depende del hardware y como esté conectado.

}else if (temperature >= baselineTemp +2 && temperatuere < baselinetemp +4){

digitalWrite (2, HIGH);

digitalWrite (3, LOW);

digitalWrite (4, LOW);

}else if (temperature >= baselineTemp +4 && temperatuere < baselinetemp +6){

digitalWrite (2, HIGH);

digitalWrite (3, HIGH);

digitalWrite (4, LOW);

}else if (temperature >= baselineTemp >= baselineTemp +6){

digitalWrite (2, HIGH);

digitalWrite (3, HIGH);

digitalWrite (4, HIGH);

# Ejercicio

Vamos a conectsr 2 botones y 2 LEDs 

Haremos diferentes programas con diferencias comportamientos.

Para poner un boton necesitamos poner una resistencia de 10000 (ohmnios), estas son las que tienen cuerpo beige y una linea naranja.

Pin _____ Pulsasdor __ GND


5V _____ Resistencia 10k ohmnios

Esquema de botón "Por defecto de arriba" o "Pulled - HIGH"

Conectaremos 2 botónes. Uno al pin 2 y otro pin 3. Para poner un LED necesitamos una resistencia de 220 ohmnios las de cuerpo azul.

Hay que tener en cuenta la polaridad del LED. La pata mas corta va hacia el GND (o 0V) y la larga hacia el voltaje.

PIN -->---///---GND

   LED 220
   
Da igual si la resistencia va detras p delante de LED. Contraemos 2 LEDs, uno al pin 4 y otro al pin 5.


Al principio no funcionaba, por que si pones tilde no funciona

https://github.com/ANGEY33/Arduino/blob/main/1basico_ino.ino

# Ejercicio 1

Encender los 2 LEDs solo si pulsamos los 2 botones.

![imagen](https://user-images.githubusercontent.com/90753298/140055897-070f5dfd-bc74-4f35-a1bc-83daf181efa8.png)


Este es el código:

https://github.com/ANGEY33/Arduino/blob/main/Operadores1.ino.ino

# Ejercicio 2 

Encender los 2 LEDs si pulsamos cualquiera de los botones si no apagamos




