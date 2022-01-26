# CERROJO DE PUERTA

---
INGREDIENTES.
---
- 1 Boton.
- 3 LEDs, 1.rojo, 1.verde y 1.amarillo.
- 1 Resistencia de 10 kiloohomnios.
- 3 Resistencias de 220 ohmnios.
- 1 Resistencia de 1 megohmnios.
- 1 Condensador de 100uF.
- 1 Piezo.
- 1 Servomotor.

---
ERRORES.
---
No 

Cuando el piezo está fijado a una superficie sólida que pueda vibrar,como una mesa,el Arduino puede notar la intensidad de un golpe sobre la mesa.

Con esta informacion puedes comprobar si un número de golpes entra dentro de un número aceptable,en el codigo puedes comprobar el numero de golpes y ver si coinciden con tu configuración.

El boton te permite detener el motor. Algunos LEDs te indicarán el estado: un LED rojo indicará que una caja está cerrada con llave,un LED verde indicará que la caja no está cerrada con llave, y un LED amarillo te indicará si se ha recibido un golpe correcto en la puerta.

También voy a escribir mi propia función que me indicará si un golpe ha sido demasiado fuerte o demasiado suave.
Las funciones aceptan argumentos y devuelven valores, en este caso le he subministrado a una función el volumen de un golpe.

[Este es el codigo](https://github.com/ANGEY33/Arduino/blob/main/cerrojo_de_puerta.ino)
