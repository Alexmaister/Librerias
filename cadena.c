/*Libreria <cadena.h>
libreria de funciones de tratamiento de cadenas
 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*cabecera: char* leercad()
descripcion: funcion que devolvera un puntero a una cadena leida desde teclado
caracter a caracter hasta encontrar un espacio en blanco
salidas:puntero a char
postcondiciones: se devolvera asociado al nombre un puntero a char
*/
char * leercad();


/*cabecera: char * leercadB()
descripcion: funcion que devolvera una cadena leida desde teclado , hasta que se introduzca el caracter de fin de linea
salida: un puntero a char
postcondiciones: se devolvera asociado al nombre un puntero al primer caracter de la cadena leida de teclado
*/
char * leercadB();
int main()
{

    char *pcadena,*cadena;
	pcadena=leercad();
	printf("%s",pcadena);
    cadena=leercadB();
    printf("%s",cadena);



    return 0;
}

/*cabecera: char* leercad()
descripcion: funcion que devolvera un puntero a una cadena leida desde teclado
caracter a caracter hasta encontrar un espacio en blanco
salidas:puntero a char
postcondiciones: se devolvera asociado al nombre un puntero a char
*/
char * leercad()
{

    char *pcadena,tecla;
    register unsigned short int contador=0;
    pcadena=(char*)calloc(1,sizeof(char*));
    if(pcadena!=NULL)
    {
        while((tecla=getch())!=' ')
        {

            *(pcadena+contador)=tecla;
            contador++;
            pcadena=(char*)realloc(pcadena,sizeof(pcadena)+1);

        }
        *(pcadena+contador)='\0';
        
    }


    return pcadena;
}


/*cabecera: char * leercadB()
descripcion: funcion que devolvera una cadena leida desde teclado , hasta que se introduzca el caracter de fin de linea
salida: un puntero a char
postcondiciones: se devolvera asociado al nombre un puntero al primer caracter de la cadena leida de teclado
*/
char * leercadB()
{

    char *pcadena,tecla;
    register unsigned short int contador=0;
    pcadena=(char*)calloc(1,sizeof(char*));
    if(pcadena!=NULL)
    {
        while((tecla=getch())!='.'){

            *(pcadena+contador)=tecla;
            contador++;
            pcadena=(char*)realloc(pcadena,sizeof(pcadena)+1);

        }
        *(pcadena+contador)='\0';
        
    }


    return pcadena;
}
