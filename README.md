# ProyectoFinal Pensamiento Computacional Orientado a Objetos
# Adid Salgado A01710023
El proyecto atiende las necesidades de las tiendas de bicicletas. Permite crear objetos de tipo "Bicicleta", "Casco" y "Lámpara". Esto es útil para  llevar un registro de los distintos tipos de artículos que las tiendas de bicicletas venden.
El programa, en esta entrega, puede crear distintos tipos de objetos, permite cambiar el valor de sus atributos y conocer el valor de estos (a través de los métodos getters y setters) e imprime los datos del objeto deseado.
El programa esta pensado para que el vendedor o administrador de la tienda sea el usuario. El usuario podrá crear objetos de las distintas clases (Bicicleta, Casco, Lampara), podrá definir los valores de sus atributos como el precio por ejemplo y podrá consultar los datos que tenga cada objeto.
:)

En este segundo avance se agrega el diagrama de clases UML y se va modificando el codigo para adaptarse al modelado. Se agregan las clases cuadro, pedal y rueda, que conforman a la clase Bicicleta. Se crea la clase Articulo que servirá como clase padre para las primeras 3 clases creadas (bicicleta, casco y lampara).

En este tercer avance implementamos las relaciones de herencia, agregacion y composicion descritas en el UML en nuestro código, se adaptó tambien el diagrama para que se ajustara al proyecto, pues me di cuenta que algunos atributos eran irrelevantes. 
Actualización Avance 3: 
Se implementa el método abstracto imprimirDatos() en la clase padre Articulo, para que cada clase pueda realizar sus acciones particulares (implementar la logica dentro de las clases hijas), en este proyecto imprimirDatos() imprime los atributos de articulo (los atributos en comun de las suclases) pero dentro de cada clase se modifica este metodo para imprimir sus atributos propios + los compartidos.

# CORRECIONES

---UML--
Se añaden los constructores en los métodos.
Se modifica el Diagrama UML anotando correctamente los parámetros de los métodos de la forma nombre:tipoDato.
Se escribe de forma apropiada la clase Articulo. Se escribe en cursiva ya que es una clase abstracta, al igual que su método abstracto imprimirDatos().
Se anota el tipo de dato que recibe el setRodada, el setMarca de Pedal.
Se modifica el UML para que sea congruente con el código (mismo nombre de variables, tipos de datos, nombres de métodos).

