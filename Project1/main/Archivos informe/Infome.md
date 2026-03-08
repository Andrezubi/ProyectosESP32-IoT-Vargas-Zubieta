# Universidad Católica Boliviana Cochabamba
## Departamento de Ingeniería y Ciencias Exactas
## [SIS-234] Internet De Las Cosas
### Carrera de Ingeniería de Sistemas

---

# Informe sobre:
## Integración de sensores y actuadores en un objeto inteligente

### Evaluación de la Materia Internet de las Cosas

**Autores:**

- Vargas Prado Ariana Nicole  
- Zubieta Sempertegui Andres Ignacio  

---

Cochabamba - Bolivia  
Marzo 2026 

# 1. Requerimientos Funcionales y No Funcionales
## Requerimientos Funcionales

- El microcontrolador debe procesar la señal enviada por el sensor ultrasónico y convertirla en una medición de distancia expresada en centímetros.

- El sistema debe realizar mediciones de distancia de forma continua mientras el dispositivo esté encendido.

- El sistema debe clasificar la distancia detectada en diferentes rangos definidos por el sistema.

  Ejemplo de rangos:
  - Distancia menor a 40 cm  
  - Distancia entre 40 cm y 80 cm  
  - Distancia mayor o igual a 80 cm

- El sistema debe activar un LED rojo en modo parpadeo cuando la distancia detectada sea menor a 40 cm.

- El sistema debe activar un LED amarillo o naranja en modo parpadeo lento cuando la distancia detectada esté entre 40 cm y 80 cm.

- El sistema debe encender un LED verde de forma constante cuando la distancia detectada sea mayor o igual a 80 cm. 

## Requerimientos No Funcionales

- El sistema debe reaccionar a cambios en la distancia en un tiempo menor a 1 segundo.

- El sistema debe medir la distancia con un margen de error respecto a la distancia real.

- El código debe estar dividido en funciones o módulos que permitan modificar o ampliar el sistema fácilmente.

- El sistema debe permitir modificaciones futuras como agregar nuevos actuadores o sensores.

# 2. Diseño del Sistema

## 2.1 Diagrama de circuito
![Diagrama](Imagenes/diagrama_circuito.jpeg)
## 2.2 Diagrama de arquitectura del sistema
![Diagrama](Imagenes/Diagrama_de_arquitectura.png)
## 2.3 Diagramas estructurales y de comportamiento
### 2.3.1 Diagrama de secuencia
![Diagrama](Imagenes/diagrama_secuencia.jpeg)
### 2.3.1 Diagramas de uml
![Diagrama](Imagenes/diagrama_uml.jpeg)

# 3. Implementación

## 3.1 Código fuente documentado

# 4. Pruebas y Validaciones
## Prueba de exactitud de distancia

Para evaluar la exactitud del sistema se realizaron 20 mediciones a tres distancias de referencia: 80 cm, 50 cm y 20 cm utilizando el sensor ultrasónico. Con los datos obtenidos se calcularon el promedio, la desviación estándar y el porcentaje de error, con el objetivo de comparar las mediciones del sistema con las distancias reales.

Los datos utilizados en esta prueba se encuentran en la hoja:

[Exactitud de distancia](https://docs.google.com/spreadsheets/d/1DyKpLJWUTkjiDA7z87IJXlJ0ULdZPX75TzI_sI9DBeM/edit?gid=0#gid=0)

## Prueba de materiales para distancia

Para analizar el comportamiento del sensor ultrasónico frente a distintos materiales, se realizaron 10 mediciones a una distancia de referencia de 30 cm utilizando superficies como madera, plástico, vidrio, mano, plastoformo, metal y cerámica, además de una medición de control sin objeto. El objetivo fue observar cómo el tipo de material influye en la medición de distancia del sensor.

Con los datos obtenidos se calcularon el promedio, la desviación estándar y los errores de exactitud y precisión para cada material. 

Los datos utilizados en esta prueba se encuentran en la hoja:

[prueba de materiales para distancia](https://docs.google.com/spreadsheets/d/1DyKpLJWUTkjiDA7z87IJXlJ0ULdZPX75TzI_sI9DBeM/edit?gid=282925511#gid=282925511)

## Prueba de distancias mínimas y máximas del sensor

Para evaluar el rango de funcionamiento del sensor ultrasónico se realizaron mediciones en distancias cercanas al límite máximo y mínimo de detección. En el caso de las distancias máximas se tomaron mediciones entre 270 cm y 310 cm, mientras que para las distancias mínimas se realizaron pruebas entre 10 cm y 0 cm, registrando varias mediciones para cada punto.

Los datos utilizados en esta prueba se encuentran en la hoja:

[prueba de distancias minimas y maximas sensor](https://docs.google.com/spreadsheets/d/1DyKpLJWUTkjiDA7z87IJXlJ0ULdZPX75TzI_sI9DBeM/edit?gid=2038861534#gid=2038861534)

# 5. Resultados 
## Prueba de exactitud de distancia

Los resultados obtenidos muestran que el sistema logró medir distancias cercanas a los valores reales de 80 cm, 50 cm y 20 cm. Los promedios obtenidos fueron 79.63 cm, 49.52 cm y 20.04 cm respectivamente. Además, los errores de exactitud registrados fueron 0.46%, 0.96% y 0.21%, lo que indica una alta precisión en las mediciones realizadas por el sensor ultrasónico.

## Prueba de materiales para distancia

Las pruebas realizadas con diferentes materiales a una distancia de 30 cm mostraron que la mayoría de las mediciones se mantuvieron cercanas al valor real. Sin embargo, algunos materiales como la mano y la cerámica presentaron una mayor variación en las mediciones debido a las características de reflexión de las ondas ultrasónicas.

## Prueba de distancias mínimas y máximas del sensor

Durante las pruebas realizadas en los rangos de distancia máxima y mínima se observó que el sensor puede medir correctamente distancias cercanas a 270 cm, 280 cm y 290 cm, con errores de exactitud bajos. Sin embargo, al acercarse a los límites extremos del sensor, especialmente en distancias muy pequeñas o superiores a 300 cm, el sensor presenta dificultades para detectar el objeto o aumenta el error de medición.

# 6. Conclusiones

- Los resultados obtenidos muestran que el sistema logró medir distancias cercanas a los valores reales de 80 cm, 50 cm y 20 cm. Los promedios obtenidos fueron 79.63 cm, 49.52 cm y 20.04 cm respectivamente. Además, los errores de exactitud registrados fueron 0.46%, 0.96% y 0.21%, lo que indica una alta precisión en las mediciones realizadas por el sensor ultrasónico.

- El sensor ultrasónico puede medir distancias correctamente con diferentes tipos de materiales, aunque el tipo de superficie influye en la estabilidad de la medición. Materiales con superficies irregulares o con menor capacidad de reflexión pueden generar ligeras variaciones en los resultados.

- El sensor ultrasónico tiene un rango de funcionamiento efectivo limitado. Dentro de ese rango el sistema mantiene mediciones relativamente precisas, pero al superar los límites de operación la detección del objeto se vuelve inestable o inexistente. 

# 7. Recomendaciones

# 8. Anexos
