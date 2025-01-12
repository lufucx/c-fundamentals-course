/**
 * @file main.c
 * @author Prof. Dr. David Buzatto
 * @brief Modelo para desenvolvimento de exercícios criativos usando a engine
 * de jogos Raylib (https://www.raylib.com/).
 * 
 * @copyright Copyright (c) 2024
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <raylib.h>

int main( void ) {

    /*-----------------------------------------------------
     * A lógica inicial do seu programa deve vir aqui:
     *     - declaração de variáveis;
     *     - entrada de dados;
     *     - processamentos adicionais.
     ----------------------------------------------------*/
    

    // ativa a suavização (antialiasing)
    SetConfigFlags( FLAG_MSAA_4X_HINT );

    // cria uma janela de 800 pixels de largura por 600 de altura
    InitWindow( 600, 600, "Olhinho" );

    // configura a quantidade de quatros por segundo da engine
    SetTargetFPS( 60 );    

    // enquanto não é sinalizado que a janela deve ser fechada
    while ( !WindowShouldClose() ) {

        // inicia o processo de desenho
        BeginDrawing();

        // limpa a tela usando uma cor
        ClearBackground( WHITE );

        /*----------------------------------------------------------------------
         * A lógica do seu desenho deve vir aqui.
         ---------------------------------------------------------------------*/

        int xcDoOlho = GetScreenWidth() / 2;
        int ycDoOlho = GetScreenHeight() / 2;
        int raioOlho = 50;

        int raioIris = (int) (raioOlho * 0.5);
        int xcIris = xcDoOlho + raioIris * 0.7;
        int ycIris = ycDoOlho;

        int raioPupila = (int) (raioIris * 0.5);
        int xcPupila = xcIris;
        int ycPupila = ycIris;

        DrawCircleLines(xcDoOlho, ycDoOlho, raioOlho, BLACK );
        DrawCircle(xcIris, ycIris, raioIris, BLUE );
        DrawCircle(xcPupila, ycPupila, raioPupila, BLACK );

        /*----------------------------------------------------------------------
         * A lógica do seu desenho deve terminar na linha acima.
         ---------------------------------------------------------------------*/

        // termina o desenho
        EndDrawing();

    }

    // fecha a janela
    CloseWindow();
    return 0;

}