#include <stdio.h>

int main()
{
    int x=0;
    do
    {
        printf("Tabla de Champions 2019\n");
        printf("Elige una etapa de la tabla: \n");
        printf("1- Octavos de final\n");
        printf("2- Cuartos de final\n");
        printf("3- Semifinal\n");
        printf("4- Final\n");
        printf("5- Ganador\n");
        printf("6- Salir");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                printf("\n\n");
                printf("Octavos de Final");
                printf("1- SCHALKE 04 VS M.CITY\n");
                printf("2- ATLETICO VS JUVENTUS\n");
                printf("3- M.UNITED VS PARIS\n");
                printf("4- TOTTENHAM Vs B.DORTMUND \n");
                printf("5- LYON VS BARCELONA\n");
                printf("6- Roma VS OPORTO\n");
                printf("7- AJAX VS REAL MADRID\n");
                printf("8- LIVERPOOL VS BAYREN\n");
                printf("\n\n");
                break;
            case 2:
                printf("\n\n");
                printf("Cuartos de Final\n");
                printf("1- TOTTENHAM VS MAN.CITY\n");
                printf("2- AJAX VS JUVENTUS \n");
                printf("3- MAN.UNITED VS BARCELONA\n");
                printf("4- LIVERPOOL VS PORTO\n");
                printf("\n\n");
                break;
            case 3:
                printf("\n\n");
                printf("Semifina\n");
                printf("1- TOTTENHAM VS AJAX\n");
                printf("2- FC BARCELONA VS LIVERPOOL\n");
                printf("\n\n");
                break;
            case 4:
                printf("\n\n");
                printf("Final \n");
                printf("1- TOTTENHAM VS LIVERPOOL \n");
                printf("\n\n");
                break;
            case 5:
                printf("Ganador \n");
                printf("LIVERPOOL \n");
                printf("\n\n");
                break;
                default:
                printf("Hasta luego, el programa ha acabado\n");
                printf("\n\n");
        }
        
    }while(x<=5&&x>0);
    return 0;
}
