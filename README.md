# Ejercicio de Alquiler de Autos - Herencia - CPP
Se pretende crear una aplicación que permita calcular los precios de alquiler de una empresa de alquiler de vehículos.

Cada vehículo se identifica unívocamente por medio de su matrícula.

La empresa alquila distintos tipos de vehículos, tanto para transporte de personas como de carga. En la actualidad los vehículos alquilados por la empresa son: coches, microbuses, furgonetas de carga y camiones de carga.

El precio de alquiler de cualquier vehículo tiene una componente base que depende de los días de alquiler a razón de $50 por día. 

En el caso de alquiler de un coche, al precio base se le suma la cantidad de $1.5 por día.

El precio de alquiler de los microbuses es igual que el de los coches, salvo que se le añade una cantidad de $2 independientemente de los días de alquiler.

el precio de los vehículos de carga es el precio base más $20 * Peso máximo autorizado en toneladas (furgoneta es un vehículo de carga).

Además, en el caso de los camiones, es igual al precio de los vehículos de carga, sumándole un fijo de $40 independientemente de los días de alquiler.

La interacción del empleado con la aplicación deberá realizarse a través de una interfaz basada en menú.

Las operaciones que el empleado de la empresa de alquiler debe poder realizar se enumeran a continuación.

A) Agregar Vehículo.
    1. el empleado selecciona la opción
    2. la aplicación muestra una pantalla que permite introducir los datos del nuevo vehículo
    3. el empleado introduce los datos y pulsa aceptar
    4. la aplicación añade el vehículo a la lista de vehículos de la empresa
    5. se retorna al menú de opciones
B) Obtener precio de alquiler
    1. el empleado selecciona la opción "Obtener precio alquiler"
    2. la aplicación muestra una pantalla que permite introducir la matrícula del vehículo y los días que ha durado en alquiler
    3. el empleado introduce los datos y pulsa enter
    4. si no existe ningún coche con la matricula se notifica y finaliza el caso de uso
    5. la aplicación muestra el precio de alquiler
    6. se retorna al menú de opciones


