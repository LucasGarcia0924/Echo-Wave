# Echo-Wave
<img src="https://github.com/LucasGarcia0924/Echo-Wave/blob/main/Imagenes/Banner.png?raw=true" alt="image" width="2000" height="auto">
Banner 

## Descripción 
Dispositivo capaz de clonar señales RF de 433mhz, siendo controlado desde una App Movil

Proyecto final asignatura de Taller de Electrónica 2024-1

Universidad Nacional de Colombia
### Integrantes
* Lucas Garcia Alvarez
* Julian Gustin Moreno
* Kevin Castellanos Peña
* Santiago Navarro

## Introducción
El proyecto EchoWave se creó con la idea de facilitar la clonación de señales RF de controles remotos de distintos tipos, utilizando materiales de bajo costo para crear un dispositivo capaz de replicar y usar dichas señales. 

## La problemática
En la actualidad, el uso de controles remotos para dispositivos que emiten señales RF, como televisores, luces y otros equipos, se ha vuelto parte de las actividades cotidianas. Sin embargo, los usuarios enfrentan varios inconvenientes:

- Limitaciones de compatibilidad: Muchas veces los usuarios necesitan múltiples controles remotos, cada uno con una función específica, lo que resulta incómodo y poco eficiente.
- Falta de flexibilidad: Las tecnologías existentes no permiten la clonación o replicación de señales de RF de manera sencilla, lo que genera frustración entre los usuarios que requieren soluciones rápidas y accesibles.
- Riesgos de seguridad: Clonar señales RF sin los adecuados controles de seguridad puede conllevar riesgos, lo que hace que los usuarios se sientan inseguros al intentar utilizar tecnologías más flexibles.
Estas problemáticas crean la necesidad de desarrollar soluciones más accesibles y económicas que permitan clonar y utilizar señales RF de manera segura y eficiente, facilitando así las acciones cotidianas de los usuarios.

El proyecto EchoWave busca solucionar esta problemática mediante la creación de un dispositivo de bajo costo, flexible y eficiente, que permita la clonación y uso de señales de RF de manera segura, mejorando la experiencia del usuario y reduciendo la cantidad de controles remotos necesarios para interactuar con múltiples dispositivos.
## La solución planteada (los módulos usados)
La solución se diseña a partir de tecnologías simples, de fácil acceso y fabricación, enfocados en parte a que sea algo accesible para todo el mundo, por lo que a partir de esto y demás requisitos descritos a continuacion, se eligen los siguientes componentes:
- Chip ESP32
- Batería Recargable IN18650
- Modulo MHCD 42
- Transceptor HC-12
- Servomotor SG90
- Zumbador
- Case en Impresion 3D y Corte Laser
## El funcionamiento del proyecto desde el punto de vista del usuario

El EchoWave funciona como un control remoto universal, que mediante una aplicación, clona señales RF, como las de un control de televisor, controles para puertas de garaje o portones, y otros dispositivos similares  
Su uso consta tan solo de descargar la aplicación, clonar señales, cargar el dispositivo mediante el cable incluido y bloquear las señales con el pulsador en la parte superior del case.

## Recomendaciones y conclusiones
### Conclusiones:
En este proyecto se logró avanzar en le creación de una herramienta capaz de simplificar las tarjetas de acceso y controles a distancia de forma compacta, sin embargo, se enfocó el proyecto a las señales de radiofrecuencia, donde por medio de un transceptor recibe estas señales. Dentro del proyecto se utilizaron componentes con presupuesto reducido, confirmando que en el mercado se consiguen dispositivos de bajo precio y con las características que permiten manejar las diferentes señales y comunicaciones que se implementan aquí. Se plantea en un futuro implementarle la opción de usarse a bluetooth y hacer el uso de este desde una app del celular, dado que, quitando al tranceptor el cual es controlado desde la app diseñada por Slavko Zdravevski se implementó un grupo de pulsadores sencillos para que inicie su funcionamiento, por lo que lo ideal sería integrar todos estos comandos dentro de la app y así eliminar los pulsadores de la PCB.

### Recomendaciones para trabajos futuros:
Visualizamos que puede ser muy útil, buscar diferentes antecedentes de proyectos similares, componentes capaces de llevar a cabo la tarea y evaluar cuál lenguaje de programación ha de usarse.
Si se quiere hacer un trabajo en grupo, debe existir muy buena comunicación, de forma continua y clara entre todos, para que no se se tengan retrasos en el proceso, facilitando la corrección de errores y permitiendo un continuo ciclo de ideas y retroalimentación, para que el proyecto fluya correctamente.
Se deben tener en cuenta los posibles obstáculos que se pueden presentar durante el proceso, como puede ser el mal funcionamiento de un componente, o el fallo del código; para ello es necesario saber que otras alternativas existen, para corregir el error que se produzca al realizar el proyecto.
