# LOVE-O-METER

# Introducción

Este es un progrmama que mide la temperatura y enciende LEDs

# LOOP 

int sensor Val = analog Read (sensorPin)

Esta linea lee el voltaje que tiene el pin sensorPin (en este caso a 0) y lo mapea a valores entre 0 y 1023.
0 Significa 0V o GND y 1023 signifiuca 5V.
