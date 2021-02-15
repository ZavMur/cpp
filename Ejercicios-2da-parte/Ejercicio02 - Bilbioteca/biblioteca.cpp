#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[139][3];

void cargarLibros() {
    // Arreglo con categoria y descripcion
	libros[0][0] = "Algoritmos"; 
    libros[0][1] = "Algoritmos y Programacion (Guia para docentes)"; 
    libros[0][2] = "Juan Carlos Lopez Garcia";
	
    libros[1][0] = "Algoritmos"; 
    libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos"; 
    libros[1][2] = "Javier Campos";

	libros[2][0] = "Algoritmos"; 
    libros[2][1] = "Breves Notas sobre Analisis de Algoritmos";
    libros[2][2] = "Jorge L. Ortega Arjona";
    

	libros[3][0] = "Algoritmos"; 
    libros[3][1] = "Fundamentos de Informatica y Programacion";
	libros[3][2] = "Gregorio Martín Quetglás, Francisco Toledo Lobo, Vicente Cerverón Lleó";

    libros[4][0] = "Algoritmos"; 
    libros[4][1] = "Temas selectos de estructuras de datos";
    libros[4][2] = "Jorge L. Ortega Arjona";
	
    libros[5][0] = "Algoritmos"; 
    libros[5][1] = "Teoria sintactico-gramatical de objetos";
    libros[5][2] = "Eugenia Bahit";

	libros[6][0] = "Base de Datos"; 
    libros[6][1] = "Apuntes de Base de Datos 1";
    libros[6][2] = "Eva Gómez Ballester, Patricio Martínez Barco, Paloma Moreda Pozo, Armando Suárez Cueto, Andrés Montoyo Guijarro, Estela Saquete Boro";

	libros[7][0] = "Base de Datos"; 
    libros[7][1] = "Base de Datos (2005)";
    libros[7][2] = "Solid Quality Learning";

	libros[8][0] = "Base de Datos"; 
    libros[8][1] = "Base de Datos (2011)";
    libros[8][2] = "Marta Elena Zorrilla Pantaleón, Rafael Duque Medina";

	libros[9][0] = "Base de Datos"; 
    libros[9][1] = "Base de Datos Avanzadas (2013)";
    libros[9][2] = "María José Aramburu Cabo , Ismael Sanz Blasco";

	libros[10][0] = "Base de Datos"; 
    libros[10][1] = "Diseno Conceptual de Bases de Datos";
    libros[10][2] = "Autor desconocido";

	libros[11][0] = "Ciencia Computacional"; 
    libros[11][1] = "Breves Notas sobre Automatas y Lenguajes";
    libros[11][2] = "Jorge L. Ortega Arjona";

	libros[12][0] = "Ciencia Computacional"; 
    libros[12][1] = "Breves Notas sobre Teoria de la Computacion";
    libros[12][2] = "Jorge L. Ortega Arjona";

	libros[13][0] = "Metodologias de desarrollo de software"; 
    libros[13][1] = "Compendio de Ingenieria del Software";
    libros[13][2] = "Juan Palacio";

	libros[14][0] = "Metodologias de desarrollo de software"; 
    libros[14][1] = "Diseno agil con TDD";
    libros[14][2] = "Carlos Ble";

	libros[15][0] = "Metodologias de desarrollo de software"; 
    libros[15][1] = "Ingenieria de Software: Una Guia para Crear Sistemas de Informacion";
    libros[15][2] = "Alejandro Peña Ayala";

	libros[16][0] = "Metodologias de desarrollo de software"; 
    libros[16][1] = "Scrum & Extreme Programming (para programadores)";
    libros[16][2] = "Eugenia Bahit";

	libros[17][0] = "Metodologias de desarrollo de software"; 
    libros[17][1] = "Scrum y XP desde las trincheras";
    libros[17][2] = "Henrik Kniberg";

	libros[18][0] = "Miscelaneos"; 
    libros[18][1] = "97 cosas que todo programador deberia saber";
    libros[18][2] = "Juan Vallejo";

	libros[19][0] = "Miscelaneos"; 
    libros[19][1] = "Docker";
    libros[19][2] = "Codigo abierto sin propietario ni autor";

	libros[20][0] = "Miscelaneos"; 
    libros[20][1] = "El camino a un mejor programador";
    libros[20][2] = "Esteban Machado Velasquez, Joaquin Caraballo Moreno, Yeray Darias Camacho";

	libros[21][0] = "Miscelaneos"; 
    libros[21][1] = "Introduccion a Docker";
    libros[21][2] = "Codigo abierto sin propietario ni autor";

	libros[22][0] = "Miscelaneos"; 
    libros[22][1] = "Programacion de videojuegos SDL";
    libros[22][2] = "Alberto García Serrano";

	libros[23][0] = "PHP"; 
    libros[23][1] = "Manual de estudio introductorio al lenguaje PHP procedural";
    libros[23][2] = "Codigo abierto sin propietario ni autor";

	libros[24][0] = "PHP"; 
    libros[24][1] = "PHP y Programacion orientada a objetos";
    libros[24][2] = "Diego Lázaro, Jairo Garcia Rincon";

	libros[25][0] = "PHP"; 
    libros[25][1] = "POO y MVC en PHP";
    libros[25][2] = "Eugenia Bahit";
	
    libros[26][0] = "PHP"; 
    libros[26][1] = "Silex, el manual oficial";
    libros[26][2] = "Fabien Potencier, Igor Wiedler, Traducido por Javier Eguiluz";
	
    libros[27][0] = "PHP"; 
    libros[27][1] = "Symfony 1.4, la guia definitiva";
    libros[27][2] = "Fabien Potencier, Igor Wiedler, Traducido por Javier Eguiluz";
    
	libros[28][0] = "PHP"; 
    libros[28][1] = "Symfony 2.4, el libro oficial";
    libros[28][2] = "Fabien Potencier, Igor Wiedler, Traducido por Javier Eguiluz";

	libros[29][0] = "Python"; 
    libros[29][1] = "Aprenda a pensar como un programador (con Python)";
    libros[29][2] = "Allen Downey, Jeffrey Elkner, Chris Meyers";

	libros[30][0] = "Python"; 
    libros[30][1] = "Doma de Serpientes para Ninos: Aprendiendo a Programar con Python";
    libros[30][2] = "Jason R. Briggs";
	
    libros[31][0] = "Python"; 
    libros[31][1] = "Inmersion en Python";
    libros[31][2] = "Mark pilgrim";
	
    libros[32][0] = "Python"; 
    libros[32][1] = "Inmersion en Python 3";
    libros[32][2] = "Mark pilgrim";
	
    libros[33][0] = "Python"; 
    libros[33][1] = "Introduccion a la programacion con Python";
    libros[33][2] = "Luis Eduardo Muñoz Guerrero, Omar Iván Trejos Buriticá";
	
    libros[34][0] = "Python"; 
    libros[34][1] = "Introduccion a Programando con Python";
    libros[34][2] = "Andres Marsal, Isabel Garcia";
	
    libros[35][0] = "Python"; 
    libros[35][1] = "Python instantaneo (1999)";
    libros[35][2] = "Guido van Rossum";
	
    libros[36][0] = "Python"; 
    libros[36][1] = "Python para ciencia e ingenieria";
    libros[36][2] = "Miguel Angel Suárez Ledo";
	
    libros[37][0] = "Python"; 
    libros[37][1] = "Python para principiantes";
    libros[37][2] = "Eugenia Bahit";
	
    libros[38][0] = "Python"; 
    libros[38][1] = "Python para todos";
    libros[38][2] = "Charles R. Severance";

    libros[39][0] = "100 libros que todo ser humano deberia leer"; 
    libros[39][1] = "Matar a un Ruiseñor";
    libros[39][2] = "Harper Lee";

    libros[40][0] = "100 libros que todo ser humano deberia leer"; 
    libros[40][1] = "Orgullo y prejuicio";
    libros[40][2] = "Jane Austen";

    libros[41][0] = "100 libros que todo ser humano deberia leer"; 
    libros[41][1] = "El Diario de Ana Frank";
    libros[41][2] = "Annelies Marie Frank";

    libros[42][0] = "100 libros que todo ser humano deberia leer"; 
    libros[42][1] = "1984";
    libros[42][2] = "George Orwel";

    libros[43][0] = "100 libros que todo ser humano deberia leer"; 
    libros[43][1] = "Harry Potter y la piedra filosofal";
    libros[43][2] = "JK. Rowling";

    libros[44][0] = "100 libros que todo ser humano deberia leer"; 
    libros[44][1] = "El Señor de los Anillos";
    libros[44][2] = "J.R.R. Tolkien";

    libros[45][0] = "100 libros que todo ser humano deberia leer"; 
    libros[45][1] = "El gran Gatsby";
    libros[45][2] = "F. Scott Fitzgerald";

    libros[46][0] = "100 libros que todo ser humano deberia leer"; 
    libros[46][1] = "La telaraña de Carlota";
    libros[46][2] = "E. B. White.";

    libros[47][0] = "100 libros que todo ser humano deberia leer"; 
    libros[47][1] = "El Hobbit";
    libros[47][2] = "J.R.R. Tolkien";

    libros[48][0] = "100 libros que todo ser humano deberia leer"; 
    libros[48][1] = " Mujercitas";
    libros[48][2] = "Louisa May Alcott";

    libros[49][0] = "100 libros que todo ser humano deberia leer"; 
    libros[49][1] = "Fahrenheit 451";
    libros[49][2] = "Ray Bradbury";

    libros[50][0] = "100 libros que todo ser humano deberia leer"; 
    libros[50][1] = "Jane Eyre";
    libros[50][2] = "Charlotte Brontë";

    libros[51][0] = "100 libros que todo ser humano deberia leer"; 
    libros[51][1] = "Lo que el viento se llevó";
    libros[51][2] = "Margaret Mitchell";

    libros[52][0] = "100 libros que todo ser humano deberia leer"; 
    libros[52][1] = "Rebelión en la granja";
    libros[52][2] = "George Orwell.";

    libros[53][0] = "100 libros que todo ser humano deberia leer"; 
    libros[53][1] = "El guardián entre el centeno";
    libros[53][2] = "JD Salinger";

    libros[54][0] = "100 libros que todo ser humano deberia leer"; 
    libros[54][1] = "Las aventuras de Huckleberry Finn";
    libros[54][2] = "Mark Twain";

    libros[55][0] = "100 libros que todo ser humano deberia leer"; 
    libros[55][1] = "La Ayuda, o «Criadas y señoras»";
    libros[55][2] = "Kathryn Stockett";

    libros[56][0] = "100 libros que todo ser humano deberia leer"; 
    libros[56][1] = "Las Cronicas de Narnia. El león, la bruja y el armario";
    libros[56][2] = "CS Lewis";

    libros[57][0] = "100 libros que todo ser humano deberia leer"; 
    libros[57][1] = "Las uvas de la ira";
    libros[57][2] = "John Steinbeck";

    libros[58][0] = "100 libros que todo ser humano deberia leer"; 
    libros[58][1] = "Los juegos del hambre";
    libros[58][2] = "Suzanne Collins";

    libros[59][0] = "100 libros que todo ser humano deberia leer"; 
    libros[59][1] = "La ladrona de libros";
    libros[59][2] = "Markus Zusak";

    libros[60][0] = "100 libros que todo ser humano deberia leer"; 
    libros[60][1] = "Cometas en el cielo";
    libros[60][2] = "Khaled Hosseini";

    libros[61][0] = "100 libros que todo ser humano deberia leer"; 
    libros[61][1] = "Señor de las Moscas";
    libros[61][2] = "William Golding";

    libros[62][0] = "100 libros que todo ser humano deberia leer"; 
    libros[62][1] = "La noche";
    libros[62][2] = "Elie Wiesel";

    libros[63][0] = "100 libros que todo ser humano deberia leer"; 
    libros[63][1] = "Hamlet";
    libros[63][2] = "William Shakespeare";

    libros[64][0] = "100 libros que todo ser humano deberia leer"; 
    libros[64][1] = "Wrinkle in Time";
    libros[64][2] = "Madeleine L’Engle";

    libros[65][0] = "100 libros que todo ser humano deberia leer"; 
    libros[65][1] = "Historia de dos ciudades";
    libros[65][2] = "Charles Dickens";

    libros[66][0] = "100 libros que todo ser humano deberia leer"; 
    libros[66][1] = "Guía del autoestopista galáctico";
    libros[66][2] = "Douglas Adams";
    
    libros[67][0] = "100 libros que todo ser humano deberia leer"; 
    libros[67][1] = "Un cuento de Navidad";
    libros[67][2] = "Charles Dickens";

    libros[68][0] = "100 libros que todo ser humano deberia leer"; 
    libros[68][1] = "De ratones y hombres";
    libros[68][2] = "John Steinbeck";

    libros[69][0] = "100 libros que todo ser humano deberia leer"; 
    libros[69][1] = "Un mundo feliz";
    libros[69][2] = "Aldous Huxley.";

    libros[70][0] = "100 libros que todo ser humano deberia leer"; 
    libros[70][1] = "El jardín secreto";
    libros[70][2] = "Frances Hodgson Burnett";

    libros[71][0] = "100 libros que todo ser humano deberia leer"; 
    libros[71][1] = "Romeo y Julieta";
    libros[71][2] = "William Shakespeare";

    libros[72][0] = "100 libros que todo ser humano deberia leer"; 
    libros[72][1] = "El cuento de la criada";
    libros[72][2] = "Margaret Atwood";

    libros[73][0] = "100 libros que todo ser humano deberia leer"; 
    libros[73][1] = "Donde el camino se corta";
    libros[73][2] = "Shel Silverstein";

    libros[74][0] = "100 libros que todo ser humano deberia leer"; 
    libros[74][1] = "El principito";
    libros[74][2] = "Antoine de Saint-Exupéry";

    libros[75][0] = "100 libros que todo ser humano deberia leer"; 
    libros[75][1] = "Ana de las Tejas Verdes";
    libros[75][2] = "LM. Montgomery";

    libros[76][0] = "100 libros que todo ser humano deberia leer"; 
    libros[76][1] = "El mensajero";
    libros[76][2] = "Lois Lowry";

    libros[77][0] = "100 libros que todo ser humano deberia leer"; 
    libros[77][1] = "Cumbres borrascosas";
    libros[77][2] = "Emily Brontë";

    libros[78][0] = "100 libros que todo ser humano deberia leer"; 
    libros[78][1] = "Macbeth";
    libros[78][2] = "William Shakespeare";

    libros[79][0] = "100 libros que todo ser humano deberia leer"; 
    libros[79][1] = "Las aventuras de Tom Sawyer";
    libros[79][2] = "Mark Twain";

    libros[80][0] = "100 libros que todo ser humano deberia leer"; 
    libros[80][1] = "El Conde de Monte Cristo";
    libros[80][2] = "Alexandre Dumas";

    libros[81][0] = "100 libros que todo ser humano deberia leer"; 
    libros[81][1] = "En el nombre del viento";
    libros[81][2] = "Patrick Rothfuss";

    libros[82][0] = "100 libros que todo ser humano deberia leer"; 
    libros[82][1] = "Frankenstein";
    libros[82][2] = "Mary Shelley";

    libros[83][0] = "100 libros que todo ser humano deberia leer"; 
    libros[83][1] = "Bajo la misma estrella";
    libros[83][2] = "John Green";

    libros[84][0] = "100 libros que todo ser humano deberia leer"; 
    libros[84][1] = "Los hombres que no amaban a las mujeres";
    libros[84][2] = "Stieg Larsson";

    libros[85][0] = "100 libros que todo ser humano deberia leer"; 
    libros[85][1] = "Al este del Edén";
    libros[85][2] = "John Steinbeck";

    libros[86][0] = "100 libros que todo ser humano deberia leer"; 
    libros[86][1] = "A sangre fría";
    libros[86][2] = "Truman Capote";

    libros[87][0] = "100 libros que todo ser humano deberia leer"; 
    libros[87][1] = "Harry Potter y las Reliquias de la Muerte";
    libros[87][2] = "JK. Rowling";
    
    libros[88][0] = "100 libros que todo ser humano deberia leer"; 
    libros[88][1] = "Un árbol crece en Brooklyn";
    libros[88][2] = "Betty Smith";

    libros[89][0] = "100 libros que todo ser humano deberia leer"; 
    libros[89][1] = "El color púrpura";
    libros[89][2] = "Alice Walker";

    libros[90][0] = "100 libros que todo ser humano deberia leer"; 
    libros[90][1] = "Trampa 22";
    libros[90][2] = "Joseph Heller";

    libros[91][0] = "100 libros que todo ser humano deberia leer"; 
    libros[91][1] = "The Stand (La danza de la muerte en hispanoamérica)";
    libros[91][2] = "Stephen King";

    libros[92][0] = "100 libros que todo ser humano deberia leer"; 
    libros[92][1] = "La colina de Watership";
    libros[92][2] = "Richard Adams";

    libros[93][0] = "100 libros que todo ser humano deberia leer"; 
    libros[93][1] = "El juego de Ender";
    libros[93][2] = "Orson Scott Card";

    libros[94][0] = "100 libros que todo ser humano deberia leer"; 
    libros[94][1] = " Las aventuras de Alicia en el País de las Maravillas";
    libros[94][2] = "Lewis Carroll";

    libros[95][0] = "100 libros que todo ser humano deberia leer"; 
    libros[95][1] = "Anna Karenina";
    libros[95][2] = "Leo Tolstoy";

    libros[96][0] = "100 libros que todo ser humano deberia leer"; 
    libros[96][1] = "Las aventuras de Sherlock Holmes";
    libros[96][2] = "Sir Arthur Conan Doyle";

    libros[97][0] = "100 libros que todo ser humano deberia leer"; 
    libros[97][1] = "Memorias de una geisha";
    libros[97][2] = "Arthur Golde";

    libros[98][0] = "100 libros que todo ser humano deberia leer"; 
    libros[98][1] = "Rebecca";
    libros[98][2] = "Daphne du Maurier";

    libros[99][0] = "100 libros que todo ser humano deberia leer"; 
    libros[99][1] = "El viejo y el mar";
    libros[99][2] = "Ernest Hemingway";
    
    libros[100][0] = "100 libros que todo ser humano deberia leer"; 
    libros[100][1] = "La princesa prometida";
    libros[100][2] = "William Goldman";

    libros[101][0] = "100 libros que todo ser humano deberia leer"; 
    libros[101][1] = "Grandes esperanzas";
    libros[101][2] = "Charles Dickens";

    libros[102][0] = "100 libros que todo ser humano deberia leer"; 
    libros[102][1] = " Juego de Tronos (Canción de Hielo y Fuego # 1)";
    libros[102][2] = "George RR Martin";

    libros[103][0] = "100 libros que todo ser humano deberia leer"; 
    libros[103][1] = "Harry Potter y el prisionero de Azkaban";
    libros[103][2] = "JK Rowling";
    
    libros[104][0] = "100 libros que todo ser humano deberia leer"; 
    libros[104][1] = "La vida de Pi";
    libros[104][2] = "Yann Martel";

    libros[105][0] = "100 libros que todo ser humano deberia leer"; 
    libros[105][1] = "Los pilares de la Tierra";
    libros[105][2] = "Ken Follett";

    libros[106][0] = "100 libros que todo ser humano deberia leer"; 
    libros[106][1] = "Charlie y la Fábrica de Chocolate";
    libros[106][2] = "Roald Dahl";

    libros[107][0] = "100 libros que todo ser humano deberia leer"; 
    libros[107][1] = "La letra escarlata";
    libros[107][2] = "Nathaniel Hawthorne";
    
    libros[108][0] = "100 libros que todo ser humano deberia leer"; 
    libros[108][1] = "Los Misérables";
    libros[108][2] = "Victor Hugo";
    
    libros[109][0] = "100 libros que todo ser humano deberia leer"; 
    libros[109][1] = "Las Crónicas de Narnia";
    libros[109][2] = "CS Lewis";
    
    libros[110][0] = "100 libros que todo ser humano deberia leer"; 
    libros[110][1] = "Drácula";
    libros[110][2] = "Bram Stoker";
    
    libros[111][0] = "100 libros que todo ser humano deberia leer"; 
    libros[111][1] = "En Llamas (Los Juegos del hambre: Segunda Parte)";
    libros[111][2] = "Suzanne Collins";
    
    libros[112][0] = "100 libros que todo ser humano deberia leer"; 
    libros[112][1] = "El Cuervo";
    libros[112][2] = "Edgar Allan Poe";
    
    libros[113][0] = "100 libros que todo ser humano deberia leer"; 
    libros[113][1] = "La vida secreta de las abejas";
    libros[113][2] = "Sue Monk Kidd";
    
    libros[114][0] = "100 libros que todo ser humano deberia leer"; 
    libros[114][1] = "Agua para elefantes";
    libros[114][2] = "Sara Gruen";
    
    libros[115][0] = "100 libros que todo ser humano deberia leer"; 
    libros[115][1] = "Harry Potter y el Príncipe Mestizo";
    libros[115][2] = "JK. Rowling";
    
    libros[116][0] = "100 libros que todo ser humano deberia leer"; 
    libros[116][1] = "La buena tierra";
    libros[116][2] = "Pearl S. Buck";
    
    libros[117][0] = "100 libros que todo ser humano deberia leer"; 
    libros[117][1] = "Cien años de soledad";
    libros[117][2] = "Gabriel García Márquez";
    
    libros[118][0] = "100 libros que todo ser humano deberia leer"; 
    libros[118][1] = "La Biblia envenenada";
    libros[118][2] = "Barbara Kingsolver";
    
    libros[119][0] = "100 libros que todo ser humano deberia leer"; 
    libros[119][1] = "La mujer del viajero en el tiempo";
    libros[119][2] = "Audrey Niffenegger";
    
    libros[120][0] = "100 libros que todo ser humano deberia leer"; 
    libros[120][1] = "Celebrando Silence: Extractos de Cinco Años de Conocimiento Semanal 1995-2000";
    libros[120][2] = "Sri Sri Ravi Shankar";
    
    libros[121][0] = "100 libros que todo ser humano deberia leer"; 
    libros[121][1] = "Una Oración por Owen Meany";
    libros[121][2] = "John Irving";
    
    libros[122][0] = "100 libros que todo ser humano deberia leer"; 
    libros[122][1] = "La vida inmortal de Henrietta Lacks";
    libros[122][2] = "Rebecca Skloot";
    
    libros[123][0] = "100 libros que todo ser humano deberia leer"; 
    libros[123][1] = "Y no quedó ninguno";
    libros[123][2] = "Agatha Christie";
    
    libros[124][0] = "100 libros que todo ser humano deberia leer"; 
    libros[124][1] = "El pajaro espino";
    libros[124][2] = "Colleen McCullough";
    
    libros[125][0] = "100 libros que todo ser humano deberia leer"; 
    libros[125][1] = "El castillo de cristal";
    libros[125][2] = "Jeannette Walls";
    
    libros[126][0] = "100 libros que todo ser humano deberia leer"; 
    libros[126][1] = "Las cosas que llevaban los hombres que lucharon";
    libros[126][2] = "Tim O’Brien";
    
    libros[127][0] = "100 libros que todo ser humano deberia leer"; 
    libros[127][1] = "El carretera";
    libros[127][2] = "Cormac McCarthy";
    
    libros[128][0] = "100 libros que todo ser humano deberia leer"; 
    libros[128][1] = "La Odisea";
    libros[128][2] = "Homero";
    
    libros[129][0] = "100 libros que todo ser humano deberia leer"; 
    libros[129][1] = "Sinsajo (Los Juegos del Hambre: Tercera parte.)";
    libros[129][2] = "Suzanne Collins";
    
    libros[130][0] = "100 libros que todo ser humano deberia leer"; 
    libros[130][1] = "Amada";
    libros[130][2] = "Toni Morrison";
    
    libros[131][0] = "100 libros que todo ser humano deberia leer"; 
    libros[131][1] = "Los hermanos Karamazov: Una novela en cuatro partes con Epílogo";
    libros[131][2] = "Fyodor Dostoyevsky";
    
    libros[132][0] = "100 libros que todo ser humano deberia leer"; 
    libros[132][1] = "Siddhartha";
    libros[132][2] = "Hermann Hesse";
    
    libros[133][0] = "100 libros que todo ser humano deberia leer"; 
    libros[133][1] = "Hijos del ancho mundo";
    libros[133][2] = "Abraham Verghese";
    
    libros[134][0] = "100 libros que todo ser humano deberia leer"; 
    libros[134][1] = "La historia de mi vida";
    libros[134][2] = "Helen Keller";
    
    libros[135][0] = "100 libros que todo ser humano deberia leer"; 
    libros[135][1] = "Forastera";
    libros[135][2] = "Diana Gabaldon";
    
    libros[136][0] = "100 libros que todo ser humano deberia leer"; 
    libros[136][1] = "Perdida";
    libros[136][2] = "Gillian Flynn";
    
    libros[137][0] = "100 libros que todo ser humano deberia leer"; 
    libros[137][1] = "La cabina magica";
    libros[137][2] = "Norton Juster";
    
    libros[138][0] = "100 libros que todo ser humano deberia leer"; 
    libros[138][1] = "Los archivos confusos de la señora Basil E. Frankweiler";
    libros[138][2] = "E.L. Konigsburg";
    
    libros[139][0] = "100 libros que todo ser humano deberia leer"; 
    libros[139][1] = "El Alquimista";
    libros[139][2] = "Palo Coello";
}


int main(int argc, char const *argv[])
{
    cargarLibros();

    srand (time(NULL));
    
    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        int opcion;
        cout<< "Escriba 1 para buscar por Libro o escriba 2 para buscar por Autor: ";
        cin>> opcion;

        if (opcion == 1)
        {
            cout << "Ingrese la descripcion del libro que busca: ";
            cin >> buscar;

            // busqueda
            for (int i = 0; i < 139; i++)
            {
                string libro = libros[i][1];
                string autor = libros[i][2];
                string libroEnminuscula = libro;
                string autorEnminuscula = autor;
                // transformamos a minuscula los string buscar y libro
                transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
                transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

                transform(autorEnminuscula.begin(),  autorEnminuscula.end(),  autorEnminuscula.begin(), ::tolower);
                transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

                if (libroEnminuscula.find(buscar) != string::npos) {
                    cout << "Libro encontrado: " << libro << endl;

                    cout << "Tambien te sugerimos estos libros: " << endl;

                    int sugerencia1 = rand() % 138 + 1;
                    int sugerencia2 = rand() % 138 + 1;
                    int sugerencia3 = rand() % 138 + 1;

                    cout << " Sugerencia 1: " << libros[sugerencia1][1] << endl;
                    cout << " Sugerencia 2: " << libros[sugerencia2][1] << endl;
                    cout << " Sugerencia 3: " << libros[sugerencia3][1] << endl;

                    salir = true;
                    break;
                }
            }
        }
        

        if (opcion == 2)
        {
            cout << "Ingrese el Autor del libro que busca: ";
            cin >> buscar;

            // busqueda
            for (int i = 0; i < 139; i++)
            {
                string libro = libros[i][2];
                string autor = libros[i][2];
                string libroEnminuscula = libro;
                string autorEnminuscula = autor;
                // transformamos a minuscula los string buscar y libro
                transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
                transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

                transform(autorEnminuscula.begin(),  autorEnminuscula.end(),  autorEnminuscula.begin(), ::tolower);
                transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);


                if (autorEnminuscula.find(buscar) != string::npos) {
                    cout << "Libro encontrado: " << libro << endl;

                    cout << "Tambien te sugerimos estos autores: " << endl;

                    int sugerencia1 = rand() % 138 + 1;
                    int sugerencia2 = rand() % 138 + 1;
                    int sugerencia3 = rand() % 138 + 1;

                    cout << " Sugerencia 1: " << libros[sugerencia1][2] << endl;
                    cout << " Sugerencia 2: " << libros[sugerencia2][2] << endl;
                    cout << " Sugerencia 3: " << libros[sugerencia3][2] << endl;

                    salir = true;
                    break;
                }
            }
        }
        

        if (salir == false) 
        {
            char continuar = 'n';

            while(true) {
                system("cls");
                cout << "No se encontro el libro que busca. Desea continuar? s/n ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S') {
                    break;
                } else if (continuar == 'n' || continuar == 'N') {
                    salir = true;
                    break;
                }
            }
        }
    }

    return 0;


}
