#include <stdio.h>
#include <stdlib.h>
#include "../../../Librerias/pila.h"
#include "time.h"

//lucreciadenisebazan@gmail.com


typedef struct{
int vida;
int danio;
}enemigo;


int bosque1(int ataquejug,int vidajug,int curajug, enemigo mounstruo1)
{
    int spawn[5]; // Arreglo para almacenar los puntos de vida

    int i = 5;
    printf("\n");
    printf("LOBO:                           \n");
    statsmounstruo(mounstruo1,spawn,i);
    printf("                        ,     ,\n");
    printf("                        |\\---/|\n");
    printf("                       /  , , |\n");
    printf("                  __.-'|  / \\ /\n");
    printf("         __ ___.-'        ._O| \n");
    printf("      .-'  '        :      _/  \n");
    printf("     / ,    .        .     |   \n");
    printf("    :  ;    :        :   _/    \n");
    printf("    |  |   .'     __:   /      \n");
    printf("    |  :   /'----'| \\  |      \n");
    printf("    \\  |\\  |      | /| |     \n");
    printf("     '.'| /       || \\ |      \n");
    printf("     | /|.'       '.l \\\\_    \n");
    printf("     || ||             '-'     \n");
    printf("     '-''-'                    \n");
    printf("Escuchas un ruido que viene de detras de un arbusto, y un lobo se abalanza sobre ti, si no peleas seras su proximo almuerzo...\n\n\n");


    int flag = combate(vidajug,ataquejug, curajug, mounstruo1);
    if (flag == 1)
    {
    printf("\nGanaste +500 puntos!");
    }

    return flag;
}

int bosque_2(int ataquejug,int vidajug,int curajug, enemigo mounstruo)
{
    int spawn[4]; // Arreglo para almacenar los puntos de vida
    int i = 4;
    printf("\n");
    printf("MURCIELAGO:                           \n");
    statsmounstruo(mounstruo,spawn,i);
    printf("    =/\\                 /\\=\n");
    printf("    / \\'._   (\\_/)   _.'/ \\\n");
    printf("   / .''._'--(o.o)--'_.''. \\\n");
    printf("  /.' _/ |`'=/   \\='`| \\_ `.\\\n");
    printf(" /` .' `\\;-,'\\___/',-;/` '. '\\\n");
    printf("/.-'       `\\(-V-)/`       `-.\\\n");
    printf("`            "   "            `\n");
    printf("Mientras caminabas sientes algo aletear hacia ti y un murcielago te ataca...\n\n\n");

    int flag = combate(vidajug,ataquejug, curajug, mounstruo);
    if (flag == 1)
    {
    printf("\nGanaste +200 puntos!");
    }
    return flag;
}

int bosque_3(int  ataquejug,int  vidajug,int curajug, enemigo mounstruo)
{
    int spawn[4]; // Arreglo para almacenar los puntos de vida
    int i = 4;
    printf("\n");
    printf("CONEJO:                           \n");
    statsmounstruo(mounstruo,spawn,i);
    printf("              ,\\ \n");
    printf("             \\\\\\,_ \n");
    printf("              \\` ,\\ \n");
    printf("         __,.-' =__) \n");
    printf("       .'         ) \n");
    printf("    ,_/   ,    \\/\\_ \n");
    printf("    \\_|    )_-\\ \\_-` \n");
    printf("       `-----` `--` \n");
    printf("Escuchas un ruido que viene de detras de un arbusto, y un conejo lleno de ira aparece...\n\n\n");

    int flag = combate(vidajug,ataquejug, curajug, mounstruo);
    if (flag == 1)
    {
    printf("\nGanaste +400 puntos!");
    }
    return flag;
}

int mazmorra_1 (int  ataquejug,int vidajug,int curajug, enemigo mounstruo)
{
  int spawn[7];
    int i;
    printf("\n");
    printf("DEMONIO:                           \n");
    statsmounstruo(mounstruo,spawn,i);
    printf("           ___                     \n");
    printf("         .';:;'.                   \n");
    printf("        /_' _' /\\   __             \n");
    printf("        ;a/ e= J/-''  '.           \n");
    printf("        \\ ~_   (  -'  ( ;_ ,.      \n");
    printf("         L~'_.    -.  \\ ./  )     \n");
    printf("         ,'-' '-._  _;  )'   (     \n");
    printf("       .' .'   _.'')  \\  \\(  |     \n");
    printf("      /  (  .-'   __\\{`', \\  |     \n");
    printf("     / .'  /  _.-'   '  ; /  |     \n");
    printf("    / /    '-._'-,     / / \\ (     \n");
    printf(" __/ (_    ,;' .-'    / /  /_'-._  \n");
    printf("`'-'` ~`  ccc.'   __.','     \\j\\L\\ \n");
    printf("                 .='/|\\7           \n");
    printf("                   ' `             \n");
    printf("Mientras explorabas las habitaciones un demonio se te abalanza...\n\n\n");


int flag = combate(vidajug,ataquejug, curajug, mounstruo);
    if (flag == 1)
    {
    printf("\nGanaste +700 puntos!");
    }
    return flag;
}

int mazmorra_2 (int  ataquejug,int vidajug,int curajug, enemigo mounstruo)
{
  int spawn[8];
    int i;
    printf("\n");
    printf("OSO:                           \n");
    statsmounstruo(mounstruo,spawn,i);
    printf("     (()__(() \n");
    printf("     /       \\ \n");
    printf("    ( /    \\  \\ \n");
    printf("     \\ o o    / \n");
    printf("     (_()_)__/ \\ \n");
    printf("    / _,==.____ \\ \n");
    printf("   (   |--|      ) \n");
    printf("   /\\_.|__|'-.__/\\_ \n");
    printf("  / (        /     \\ \n");
    printf("  \\  \\      (      / \n");
    printf("   )  '._____)    / \n");
    printf("(((____.--(((____/    \n");

    printf("Abres una puerta y encuentras a un oso comiendo miel...\n\n\n");



int flag = combate(vidajug,ataquejug, curajug, mounstruo);
    if (flag == 1)
    {
    printf("\nGanaste +800 puntos!");
    }
    return flag;
}

int mazmorra_3 (int  ataquejug,int vidajug,int curajug, enemigo mounstruo)
{
  int spawn[7];
    int i;
    printf("\n");
    printf("ABEJA GIGANTE:                           \n");
    statsmounstruo(mounstruo,spawn,i);
    printf("      .-.         .--''-. \n");
    printf("    .'   '.     /'       `.\n");
    printf("    '.     '. ,'          | \n");
    printf(" o    '.o   ,'        _.-' \n");
    printf("  \.--./'. /.:. :._:.' \n");
    printf(" .\   /'._-':#0: ':#0: ': \n");
    printf(":(#) (#) :  ':#0: ':#0: ':>#=- \n");
    printf(" ' ____ .'_.:J0:' :J0:' :' \n");
    printf("  'V  V'/ | |':' :'':' \n");
    printf("        \\  \\ \\ \n");
    printf("        '  ' ' \n");


    printf("Sin que te lo esperes una abeja gigante te choca...\n\n\n");


    int flag = combate(vidajug,ataquejug, curajug, mounstruo);
    if (flag == 1)
    {
    printf("\nGanaste +700 puntos!");
    }
    return flag;
}

int encuentroFinal (int  ataquejug,int vidajug,int curajug, enemigo mounstruo)
{
  int spawn[15];
    int i;
    printf("\n");
    printf("DRAGON:                           \n");
    statsmounstruo(mounstruo,spawn,i);
    printf(" <>=======() \n");
    printf("(/\\___   /|\\\\          ()==========<>_ \n");
    printf("      \\_/ | \\\\        //|\\   ______/ \\) \n");
    printf("        \\_|  \\\\      // | \\_/ \n");
    printf("          \|\\/|\\_   //  /\\/ \n");
    printf("           (oo)\\ \\_//  / \n");
    printf("          //_/\\_\\/ /  | \n");
    printf("         @@/  |=\\  \\  | \n");
    printf("              \\_=\\_ \\ | \n");
    printf("                \\==\\ \\|\\_ \n");
    printf("             __(\\===\\(  )\\ \n");
    printf("            (((~) __(_/   | \n");
    printf("                 (((~) \\  / \n");
    printf("                 ______/ / \n");
    printf("                 '------' \n");
    printf("Llegas al final de tu aventura, lo que te detiene de la gloria es el legendario dragon!\n\n\n");


    int flag = combate(vidajug,ataquejug, curajug, mounstruo);
    if (flag == 1)
    {
    printf("\nGanaste +1000 puntos!");
    }
    return flag;
}



int main() {
    Pila basura;
    inicpila(&basura);
    dibujar_menu();
    enemigo mounstruolobo;
    mounstruolobo.vida=5;
    mounstruolobo.danio=2;
    enemigo mounstruoBat;
    mounstruoBat.vida=4;
    mounstruoBat.danio=3;
    enemigo mounstruoRab;
    mounstruoRab.vida=4;
    mounstruoRab.danio=4;
    int vidajug = 8;
    int ataquejug = 2;
    int curajug = 2;
    int flag = 0;
    enemigo mounstruoDem;
mounstruoDem.vida=7;
mounstruoDem.danio=5;
enemigo mounstruoOso;
mounstruoOso.vida=8;
mounstruoOso.danio=4;
enemigo mounstruoBee;
mounstruoBee.vida=7;
mounstruoBee.danio=3;
enemigo dragon;
dragon.vida = 15;
dragon.danio = 6;
int numeroAleatorio3;
numeroAleatorio3=rand()%3+1;
    int num=0;
    char iniciales[10];
    int option=0;
    srand(time(NULL));
    int numeroAleatorio;
    numeroAleatorio=rand()%3+1;
    int numeroAleatorio2;
    numeroAleatorio2=rand()%2+1;
    int numeroloot=0;
    numeroloot=rand()%5+1;
    Pila loot;
    inicpila(&loot);
    while (pilavacia(&loot))
    {
        apilar(&loot,numeroloot);
        numeroloot=rand()%5+1;
        apilar(&loot,numeroloot);
        numeroloot=rand()%5+1;
        apilar(&loot,numeroloot);
        numeroloot=rand()%5+1;
        apilar(&loot,numeroloot);
        numeroloot=rand()%5+1;
        apilar(&loot,numeroloot);
        numeroloot=rand()%5+1;
        apilar(&loot,numeroloot);
        numeroloot=rand()%5+1;
    }
    Pila aux;
    inicpila(&aux);
    char nombre_archivo[]={"archivo.bin"};
       int puntaje=0;







    if (option != 3){

        printf("Seleccione una opcion: ");
        scanf("%d", &option);
/**------------------------------------------------- OPCIONES DE JUEGO --------------------------------------------*/
        switch (option) {
            case 1:
                printf("Iniciando el juego...\n\n");
                cargar_nombre(iniciales);
                printf("Bienvenido: %s!\n\n",&iniciales);
                printf("Carga completada..........\n\n\n");
               printf("Te adentras en el bosque de Oleathe donde dicen que se encuentra la entrada a una mazmorra llena de riquezas y peligros.\n");
            if (numeroAleatorio==1)
            {
                flag = bosque1(vidajug, ataquejug, curajug, mounstruolobo);

                if (flag != 1)
                {
                    return 0;
                }

                 puntaje = puntaje + 500;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }



                printf("\n\nContinuas caminando y...");

                apilar(&aux, desapilar(&loot));

                if (numeroAleatorio2==1)
                {
                    flag = bosque_2(vidajug, ataquejug, curajug, mounstruoBat);

                    if (flag != 1)
                {
                    return 0;
                }

                 puntaje = puntaje + 200;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }


                }
                else
                {
                flag = bosque_3(vidajug, ataquejug, curajug, mounstruoRab);

                if (flag != 1)
                {
                    return 0;
                }

                 puntaje = puntaje + 400;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }


                }

                printf("Encuentras la puerta a la mazmorra y te adentras a lo desconocido...");

            }

            apilar(&aux, desapilar(&loot));

            if (numeroAleatorio==2)
            {
                flag = bosque_2(vidajug, ataquejug, curajug, mounstruoRab);

                if (flag != 1)
                {
                    return 0;
                }

                 puntaje = puntaje + 200;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }



                printf("\n\nContinuas caminando y...");

                apilar(&aux, desapilar(&loot));

                if (numeroAleatorio2 == 1)
                {
                   flag = bosque1(vidajug, ataquejug, curajug, mounstruolobo);

                    if (flag != 1)
                {
                    return 0;
                }

                 puntaje = puntaje + 500;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }


                }
                else
                {
                    flag = bosque_3(vidajug, ataquejug, curajug, mounstruoRab);

                    if (flag != 1)
                {
                    return 0;
                }

                 puntaje = puntaje + 400;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }


                }

                printf("Encuentras la puerta a la mazmorra y te adentras a lo desconocido...");

            }

            apilar(&aux, desapilar(&loot));

            if (numeroAleatorio==3)
            {
                flag = bosque_3(vidajug, ataquejug, curajug, mounstruoRab);

                if (flag != 1)
                {
                    return 0;
                }

                 puntaje = puntaje + 400;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }



                printf("\n\nContinuas caminando y...");

                apilar(&aux, desapilar(&loot));

                if (numeroAleatorio2 == 1)
                {
                    flag = bosque1(vidajug, ataquejug, curajug, mounstruolobo);

                    if (flag != 1)
                {
                    return 0;
                }

                 puntaje = puntaje + 500;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }


                }
                else
                {
                flag = bosque_2(vidajug, ataquejug, curajug, mounstruoRab);

                if (flag != 1)
                {
                    return 0;
                }

                puntaje = puntaje + 300;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }


                }

                printf("Encuentras la puerta a la mazmorra y te adentras a lo desconocido...");
            }

            apilar(&aux, desapilar(&loot));


            if (numeroAleatorio3==1)
            {
                flag = mazmorra_1(vidajug, ataquejug, curajug, mounstruoDem);

                if (flag != 1)
                {
                    return 0;
                }

                 puntaje = puntaje + 700;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }



                printf("\n\nContinuas caminando y...");

                apilar(&aux, desapilar(&loot));

                if (numeroAleatorio2==1)
                {
                    flag = mazmorra_2(vidajug, ataquejug, curajug, mounstruoOso);

                    if (flag != 1)
                {
                    return 0;
                }

                 puntaje = puntaje + 800;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }


                }
                else
                {
                flag = mazmorra_3(vidajug, ataquejug, curajug, mounstruoBee);

                if (flag != 1)
                {
                    return 0;
                }

                 puntaje = puntaje + 700;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }


                }

                printf("Mientras estas explorando un rugido te hace temblar hasta los huesos...");

            }

            apilar(&aux, desapilar(&loot));

            if (numeroAleatorio3==2)
            {
                flag = mazmorra_2(vidajug, ataquejug, curajug, mounstruoOso);

                if (flag != 1)
                {
                    return 0;
                }

                 puntaje = puntaje + 800;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }



                printf("\n\nContinuas caminando y...");

                apilar(&aux, desapilar(&loot));

                if (numeroAleatorio2 == 1)
                {
                   flag = mazmorra_1(vidajug, ataquejug, curajug, mounstruoDem);

                    if (flag != 1)
                {
                    return 0;
                }

                 puntaje = puntaje + 700;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }


                }
                else
                {
                    flag = mazmorra_3(vidajug, ataquejug, curajug, mounstruoBee);

                    if (flag != 1)
                {
                    return 0;
                }

                 puntaje = puntaje + 700;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }


                }

                printf("Mientras estas explorando un rugido te hace temblar hasta los huesos...");


            }

            apilar(&aux, desapilar(&loot));

            if (numeroAleatorio3==3)
            {
                flag = mazmorra_3(vidajug, ataquejug, curajug, mounstruoBee);

                if (flag != 1)
                {
                    return 0;
                }

                 puntaje = puntaje + 700;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }



                printf("\n\nContinuas caminando y...");

                apilar(&aux, desapilar(&loot));

                if (numeroAleatorio2 == 1)
                {
                    flag = mazmorra_1(vidajug, ataquejug, curajug, mounstruoDem);

                    if (flag != 1)
                {
                    return 0;
                }

                 puntaje = puntaje + 700;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }


                }
                else
                {
                flag = mazmorra_2(vidajug, ataquejug, curajug, mounstruoOso);

                if (flag != 1)
                {
                    return 0;
                }

                puntaje = puntaje + 800;

                if (!pilavacia(&loot))
                {
                    num = tope(&loot);
                    lootGiver(num,&ataquejug, &vidajug, &curajug);
                }


                }

                printf("Mientras estas explorando un rugido te hace temblar hasta los huesos...");
            }

            apilar(&aux, desapilar(&loot));


            flag = encuentroFinal(vidajug, ataquejug, curajug, dragon);
            if (flag == 1)
            {
                printf("Lo has logrado, derrotaste al dragon y limpiaste la mazmorra, viviras en riquezas y tesoros el resto de tu vida! FELICITACIONES!");

            }

    cargararchivo(nombre_archivo,iniciales,puntaje);
    muestraestadisticas(nombre_archivo,iniciales,puntaje);
    printf("puntos:%i",puntaje);

                break;
            case 2:
                printf("Mostrando creditos...\n");
                mostrar_creditos();
                break;
            default:
                printf("Opcion invalida. Intente nuevamente.\n");
                break;
        }

    }

    return 0;
}
/**------------------------------------------------CARGAR USUARIO-----------------------------------------------*/
void cargar_nombre(char iniciales[]){
    char confirmar;
    do
    {
        printf("Ingrese su nombre:\n\n");
        fflush(stdin);
        scanf("%s", &iniciales);

        printf("\nSu nombre es: %s\n", &iniciales);

        printf("\nEs correcto? (S/N): ");
        fflush(stdin);
        scanf("%c", &confirmar);
    }
    while (confirmar != 'S' && confirmar != 's');


}

/**-------------------------------------------------INTRODUCCION-------------------------------------------------------*/
void dibujar_menu() {
    printf("                                \\****__              ____     ***********************************************                 ,;~;,     \n");
    printf("                                  |    *****\\_      --/ *\\-__ *               FOUR OF A KIND                *              _/\\          \n");
    printf("                                 /_          (_    ./ ,/----' ***********************************************              \\  )         \n");
    printf("                                    \\__         (_./  /       *                                             *       (\\\\     ())         \n");
    printf("                                       \\__           \\        *                 1. Jugar                    *       /';;,, // |         \n");
    printf("                                        _/   _     _ /        *                 2. Creditos                 * <]]]]]]]]])=m(  )__ _     \n");
    printf("                                 |    _/  __/ )\\\\\\            *                                             *      | ,).''~\\()' ''\\     \n");
    printf("                                 |\\__/   /    ^ ^             *                                             *       ~  |    ||(    );,  \n");
    printf("                                  \\___--\\                     ***********************************************          (   ,;.)\\  / ';, \n\n");
}

void mostrar_creditos(){
printf("Creadores: Damian Rodriguez Favin, Etienne Torres, Farid Zaglul\n\n");
printf("Por favor jugar en pantalla completa\n\n");
printf("Especial thanks to Valentino Penedo, Tomas Lamacchia y Nehuen Artaza com 101\n");
}

/**------------------------------------------------ PRIMERA PELEA ------------------------------------------------------*/
void statsmounstruo (enemigo mounstruo,int spawn[],int i)
{
    for (i = 0; i < 1; i++) {
        spawn[i] = 1; // Cada cuadrado representa un punto de vida
    } for (i = 0; i < 1; i++) {
        if (spawn[i] == 1) {
            printf("[%i HP] ",mounstruo.vida); // Representar un punto de vida activo con un cuadrado lleno
            printf("[%i DM]\n",mounstruo.danio);
        } else {
            printf("[%i]\n"); // Representar un punto de vida inactivo con un cuadrado vac�o
        }
}
}





int combate (int ataquejug,int vidajug,int curajug, enemigo mounstruo1)
{
    int flag = 0;
   int jugadorHp = vidajug;
   int jugadorAtq = ataquejug;
   int enemigoHp = mounstruo1.vida;
   int enemigoAtq = mounstruo1.danio;
   int curaCant = curajug;
   srand(time(NULL));
   int numeroAleatorio;
   char opcion;

   while(jugadorHp > 0 && enemigoHp > 0)
{
    printf("\n\n-- Tu turno --\n\n");
    printf("vida del jugador: %i -------- vida del enemigo: %i\n", jugadorHp, enemigoHp);
    printf("Presiona a para atacar y h para curarte ");
    fflush(stdin);
    scanf("%c", &opcion);

if (opcion == 'a')
{
    numeroAleatorio = rand() % 10 + 1;
   if (numeroAleatorio >= 3)
   {
       enemigoHp -= jugadorAtq;
       printf("\nAtacas y haces %i!\n", jugadorAtq);
   }
   else
   {
       printf("\nquiziste atacar, pero le erraste...\n");
   }
}
else
{
    if (jugadorHp < 10)
    {
    jugadorHp += curaCant;
    printf("\nJugador se curo %i!\n", curaCant);
    }

}

if (enemigoHp > 0)
        {
            numeroAleatorio = rand() % 10 + 1;
            printf("\n\n-- Turno del enemigo --\n\n");

            if (numeroAleatorio > 5)
            {
                jugadorHp -= enemigoAtq;
                printf("El enemigo ataca y hace %i!\n", enemigoAtq);
            }
            else
            {
                printf("El enemigo quizo atacar, pero le erro...\n");
            }
        }
        else
        {
            printf("Ganaste!");
            flag++;
        }
    if (jugadorHp <=0 && enemigoHp > 0)
    {
        system("cls");
        printf("Has perdido...");
        return 0;
    }


    }
return flag;
}



void cargararchivo(char nombre_archivo[],char iniciales[], int puntaje){

FILE *archi;
archi=fopen(nombre_archivo,"ab");

if(archi!=NULL){

    fwrite(&iniciales,sizeof(char),1,archi);
    fwrite(&puntaje,sizeof(int),1,archi);

    fclose(archi);
}

}

void mostrarestadistica(char iniciales[],int puntaje)
{
    puts("\n---------------------------------------");
    printf("\nNombre: %s",iniciales);
    printf("\n Puntaje: %i",puntaje);
    puts("\n---------------------------------------");
}


void muestraestadisticas(char nombre_archivo[],char iniciales[],int puntaje)
{
    FILE *archi;
    archi=fopen(nombre_archivo, "rb");
    int i=0;

    if (archi!=NULL)
    {
        while(!feof(archi))
        {
            fread(&iniciales,sizeof(char),1,archi);
            fread(&puntaje,sizeof(int),1,archi);
            if(!feof(archi))
            {
                printf("\nestadistica numero %d",i++);
                mostrarestadistica(&iniciales,puntaje);
            }
        }
        fclose(archi);
    }
}


void lootGiver (int num, int * ataquejug,int * vidajug,int * curajug)
{
    if (num == 1)
    {
        printf("Encontraste una espada (+1 de ataque)");
        *ataquejug = *ataquejug + 1;
    }
    if (num == 2)
    {
        printf("Encontraste una nueva armadura (+2 de vida)");
        *vidajug = *vidajug + 2;
    }
    if (num == 3)
    {
        printf("Encontraste mejores pociones de curacion (+2 de curacion)");
        *curajug = *curajug + 2;
    }
    if (num == 4)
    {
        printf("Encontraste una buena espada (+2 de ataque)");
        *ataquejug = *ataquejug + 2;
    }

    if (num == 5)
    {
        printf("Encontraste mejores pociones de curacion (+4 de curacion)");
        *curajug = *curajug + 4;
    }
}
