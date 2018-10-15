/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: pedro
 *
 * Created on 14 de octubre de 2018, 22:25
 */

#include <stdio.h>
#include <stdlib.h>
#include "mefAscensor.h"

/*
 * 
 */
int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

//Implementacion de mefAscensorUpdate

void mefAscensorUpdate()
{
    //declaracion de variables locales
    bool_t flgConfig;
    bool_t flgParado;
    bool_t flgEn_planta_baja;
    bool_t flgSubiendo;
    bool_t flgBajando;
    bool_t flgYendo_a_planta_baja;
    
    // Seleccion de estados
    
    switch(fsmState)
    {
        case EN_PLANTA_BAJA:
        
            break;
        
        
        case MODO_CONFIGURACION:
        
            break;
            
        case BAJANDO:
        
            break;
            
        case SUBIENDO:
            break;
            
        
        case PARADO:
            break;
            
            
        case YENDO_A_PLANTA_BAJA:
            break;
            
        default:
            return ;
        
               
    }
    
}


