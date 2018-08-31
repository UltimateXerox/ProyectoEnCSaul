#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>
#include <ctime>
#include <sstream>
#include <windows.h>
#include <string.h>


using namespace std;

 void gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }

 int validar_numero(char numero[]);

struct Basicos {
   int Codigo;
   char Nombre[65];
   char Descripcion[100];
   float Precio_proveedor;
   float Precio_venta;
} basicos [2];

struct Lujo {
   int Codigo;
   char Nombre[65];
   char Descripcion[100];
   float Precio_proveedor;
   float Precio_venta;
} lujo [2];

void rellenar_basico(){
        char num[40];
        int n;
        int contador=0;
        for(int i=0;i<=1;i++){
            if(basicos[i].Codigo == '\0'){
                system("cls");
                cout << "Articulo numero "<<i+1 << endl;

                //tipo caracter
                cout << "Ingresa el Nombre del articulo" << endl;
                //scanf("%[^\n]",&basicos[i].Nombre);
                cin>>basicos[i].Nombre;
                fflush(stdin);

                cout << "Ingresa la Descripcion del articulo" << endl;
                scanf("%[^\n]",&basicos[i].Descripcion);
                fflush(stdin);

                  do{
                    cout << "Ingresa el Codigo del articulo" << endl;
                    cin >> num;
                    n=validar_numero(num);
                    }while(n==0);
                basicos[i].Codigo = atoi(num);
                do{
                    cout << "Ingresa el precio del proveedor" << endl;
                    cin >> num;
                    n=validar_numero(num);
                }while(n==0);
                basicos[i].Precio_proveedor = atoi(num);

                do{
                    cout << "Ingresa el precio de venta" << endl;
                    cin >> num;
                    n=validar_numero(num);
                    }while(n==0);
                basicos[i].Precio_venta = atoi(num);

            }else{
                contador = contador + 1;
                if(contador==1){
                    cout << "El numero maximo de registros se ha completado" << endl;
                }

            }
        }
}


void rellenar_lujo(){
        char num[40];
        int n;
        int contador = 0;
        for(int i=0;i<=1;i++){
            if(lujo[i].Codigo == '\0'){
                system("cls");
                cout << "Articulo numero "<<i+1 << endl;

                //tipo caracter
                cout << "Ingresa el Nombre del articulo" << endl;

                cin>>lujo[i].Nombre;
                fflush(stdin);

                cout << "Ingresa la Descripcion del articulo" << endl;
                scanf("%[^\n]",&lujo[i].Descripcion);
                fflush(stdin);

                  do{
                    cout << "Ingresa el Codigo del articulo" << endl;
                    cin >> num;
                    n=validar_numero(num);
                    }while(n==0);
                lujo[i].Codigo = atoi(num);
                do{
                    cout << "Ingresa el precio del proveedor" << endl;
                    cin >> num;
                    n=validar_numero(num);
                }while(n==0);
                lujo[i].Precio_proveedor = atoi(num);

                do{
                    cout << "Ingresa el precio de venta" << endl;
                    cin >> num;
                    n=validar_numero(num);
                    }while(n==0);
                lujo[i].Precio_venta = atoi(num);

            }else{
               contador = contador + 1;
                if(contador==1){
                    cout << "El numero maximo de registros se ha completado" << endl;
                }
            }
        }
}

void mostrar(){
    system("cls");

    if(basicos[1].Codigo == '\0'){
        cout << " No hay articulos basicos registrados"<<endl;
        cout << " "<<endl;
      }else{
        cout << "---------------------Articulos Basicos---------------------" << endl;
        for(int i=0;i<=1;i++){
                float precio_total = basicos[i].Precio_venta + (basicos[i].Precio_proveedor * 0.20 );
                cout << " "<<endl;
                cout << "Codigo del artculo : "<<basicos[i].Codigo << endl;
                cout << "Nombre del artculo : "<<basicos[i].Nombre << endl;
                cout << "Descripcion del artculo : "<<basicos[i].Descripcion << endl;
                cout << "precio de venta : "<< precio_total << endl;
                cout << " "<<endl;
            }
      }
      if(lujo[1].Codigo == '\0'){
        cout << " No hay articulos de lujo registrados"<<endl;
        cout << " "<<endl;
      }else{
         cout << "---------------------Articulos de Lujo ----------------------" << endl;
         for(int i=0;i<=1;i++){
                float precio_total = basicos[i].Precio_venta + (basicos[i].Precio_proveedor * 0.35 );
                cout << " "<<endl;
                cout << "Codigo del articulo : "<< lujo[i].Codigo << endl;
                cout << "Nombre del articulo : "<< lujo[i].Nombre << endl;
                cout << "Descripcion del articulo : "<<lujo[i].Descripcion << endl;
                cout << "precio de venta : "<< precio_total << endl;
                cout << " "<<endl;
        }
      }
}

int main()
{
    int repetir;
    int opcion;
    system("COLOR 0E");
      gotoxy(1,7);
      printf("******************************************************************************");
      gotoxy(5,10);
      printf("**********     *      ******           *           *   **          *");
      gotoxy(5,11);
      printf("    *          *      *               * *         *    * *        * *");
      gotoxy(5,12);
      printf("    *          *      *              *   *       *     *  *      *   *");
      gotoxy(5,13);
      printf("    *          *      ******        *     *     *      *   *    *******");
      gotoxy(5,14);
      printf("    *          *      *            *       *   *       *  *    *       *");
      gotoxy(5,15);
      printf("    *          *      *           *         * *        * *    *         *");
      gotoxy(5,16);
      printf("    *          *      ******     *           *         **    *           *");
      gotoxy(5,20);
      printf("    *     *     * *");
      gotoxy(5,21);
      printf("    *    *     *  *");
      gotoxy(5,22);
      printf("    *   *         *");
      gotoxy(5,23);
      printf("    *  *          *");
      gotoxy(5,24);
      printf("    * *           *");
      gotoxy(5,25);
      printf("    **      *   *****");

      gotoxy(25,30);
      system("PAUSE");
      system("cls");

    do{



   time_t current_time;
   struct tm * time_info;
   char timeString[9];
   time(&current_time);
   time_info = localtime(&current_time);
   cout<< "                                                      Hora Actual : ";
   strftime(timeString, sizeof(timeString), "%H:%M:%S", time_info);

   puts(timeString);

    cout << " " << endl;
    cout << "                               Bienvenido a Market 2.0!" << endl;
    cout << " " << endl;
    cout << "Seleccione un opcion de los siguiente:" << endl;
     cout << " " << endl;
    cout << "1.-Articulos Basicos" << endl;
    cout << "2.-Articulos de Lujo" << endl;
    cout << "3.-Mostrar Articulos" << endl;
    cout << "4.-Salir" << endl;
    cin >> opcion;
    switch(opcion){
        case 1:
           rellenar_basico();
           system("PAUSE");
           system("cls");
            break;
        case 2:
            rellenar_lujo();
            system("PAUSE");
            system("cls");
            break;
        case 3:
            mostrar();
            system("PAUSE");
            system("cls");
            break;
        case 4:

            system("PAUSE");
            return 0;
            break;
        defalut:
            cout << "No es valida esa opcion porfavor pruebe con otra opcion" << endl;
            system("PAUSE");
            system("cls");
            break;
}
    cout << "Desea volver al menu principal,1 = si , 2 = no" << endl;
            system("cls");
    }while(repetir!=2);
    return 0;
}

//funcion
int validar_numero(char numero[]){

    int i;
    for(i=0;i<strlen(numero);i++){
        if(!isdigit(numero[i])){
            printf("El campo debe ser numerico \n");
            system("PAUSE");
            system("cls");
            return 0;
        }
    }
    return 1;
}
