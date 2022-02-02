# JOYSTICK

---
[Clase Joystick David Prieto](https://github.com/d-prieto/arduinoCourse/blob/main/Clase_de_Joystick.md)
---

El modulo tiene varias salidas:

GND. -> Ground, toma tierra, 0V de potencial eléctrico.

5V -> Voltaje de 5V. Esto hay que conectarlo a los 5 voltios de potencia para que pueda ser leído correctamente.

VRx -> Este es el Voltaje Regulado en el eje X horizontal. Hay que conectarlo a un pin analógico para que pueda leerse.

VRy -> Este es el Voltaje Regulado en el eje Y vertical. Hay que conectarlo a un pin de lectura analógica para que pueda leerse.

SW -> Switch. Este es el botón. Al estar ya integrado se puede conectar directamente a un pin digital sin tener que incluir la resistencia. Sin embargo este es un botón PULL UP en vez de un botón PULL DOWN (que es lo que hemos realizado en el resto del curso). Esto significa que cuando está sin pulsar leerá 1 (o HIGH) y cuando esté pulsado leerá 0 (o LOW).**

[Este es el codigo](https://github.com/ANGEY33/Arduino/blob/main/Joystick.ino)




![imajen](https://github.com/ANGEY33/Arduino/blob/main/Captura%20de%20pantalla%20de%202022-02-02%2009-37-40.png)



