/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mefAscensor.h
 * Author: pedro
 *
 * Created on 14 de octubre de 2018, 22:26
 */

#ifndef MEFASCENSOR_H
#define MEFASCENSOR_H

#ifdef __cplusplus
extern "C" {
#endif
    
 #define TRUE 0
#define FALSE 1

 // Enumeracion de estados   
typedef enum {
    EN_PLANTA_BAJA,
    MODO_CONFIGURACION,
    BAJANDO,
    SUBIENDO,
    PARADO,
    YENDO_A_PLANTA_BAJA,
} fsm_state_t;

typedef char bool_t;

//Funciones públicas
void mefAscensorInit();
void mefAscensorUpdate();

//Funciones auxiliares (no van a la edu ciaa
bool_t buffer_vacio();
int leer_buffer();

//Variables globales
bool_t modoConfiguracion = FALSE;
bool_t secuenciaAperturaDePuertas = FALSE;
bool_t secuenciaCerradoDePuertas = FALSE;
fsm_state_t fsmState;
int piso_actual;
int buffer_circular[10];

#ifdef __cplusplus
}
#endif

#endif /* MEFASCENSOR_H */


