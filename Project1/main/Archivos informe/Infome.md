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

Los resultados mostraron promedios de 79.63 cm, 49.52 cm y 20.04 cm, con errores de exactitud de 0.46%, 0.96% y 0.21% respectivamente. Estos valores indican que las mediciones del sistema son muy cercanas a las distancias reales y presentan poca variación entre mediciones, lo que demuestra un buen nivel de exactitud.
Los datos utilizados en esta prueba se encuentran en la hoja **Exactitud de distancia** del siguiente documento:

[Registro de pruebas en Google Sheets](https://docs.google.com/spreadsheets/d/1DyKpLJWUTkjiDA7z87IJXlJ0ULdZPX75TzI_sI9DBeM/edit?gid=0#gid=0)

## Prueba de materiales para distancia

Para analizar el comportamiento del sensor ultrasónico frente a distintos materiales, se realizaron 10 mediciones a una distancia de referencia de 30 cm utilizando superficies como madera, plástico, vidrio, mano, plastoformo, metal y cerámica, además de una medición de control sin objeto. El objetivo fue observar cómo el tipo de material influye en la medición de distancia del sensor.

Con los datos obtenidos se calcularon el promedio, la desviación estándar y los errores de exactitud y precisión para cada material. Los resultados muestran que la mayoría de las mediciones se mantienen cercanas a la distancia real, aunque algunos materiales presentan mayor variación debido a sus propiedades de reflexión de las ondas ultrasónicas.

Los datos utilizados en esta prueba se encuentran en la hoja **prueba de materiales para distancia** del siguiente documento:

[Registro de pruebas en Google Sheets](https://docs.google.com/spreadsheets/d/1DyKpLJWUTkjiDA7z87IJXlJ0ULdZPX75TzI_sI9DBeM/edit?gid=282925511#gid=282925511)


# 5. Resultados

# 6. Conclusiones

# 7. Recomendaciones

# 8. Anexos