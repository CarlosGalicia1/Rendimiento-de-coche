# Rendimiento de coche
### Contexto
Un taller necesita llevar una mejor gestion de las capacidades de sus autos, por lo cual genera clases que le permiten identificar el rendimiento del coche y modificar algunas partes del mismo para aumentar su desempeño. El objetivo de este programa es permitir al usuario crear su propio coche personalizado con valores de velocidad, manejabilidad, aceleración, despegue y frenado personalizados que van desde 0-10 para obtener un promedio del desempeño del coche y poder modificar partes del mismo como las llantas, chasis, motor, frenos o tren de transmision con el objetivo de aumentar o cambiar su rendimiento.

### Funcionalidad
El programa pregunta al usuario valores por defecto del coche como velocidad, manejabilidad, aceleración, despegue y frenado. 
Posteriormente despliega los valores introducidos y el rendimiento promedio del auto, además de dar la opcion de modificar las partes del coche.
En caso de que el usuario decida modificar el coche se despliega un menu con las partes disponibles para modificar y dependiendo de la entrada del usuario aumentan o disminuyen los atributos de rendimiento del coche.

### Consideraciones
Los valores del aumento de desempeño de las partes del coche son arbitrarias y no representan un aumento preciso basado en la realidad.

El programa fue realizado con el lenguaje de programación c++ standard.

Colocar la carpeta con las clases en la misma ubicacion que el archivo cpp.

Compilar programa en Windows con: "g++ rendimiento_de_auto.cpp -o rendimiento_de_auto.exe".

Ejecutar en Windows con: "rendimiento_de_auto.exe".

Ejecutar en Linux con: "rendimiento_de_auto.out".
