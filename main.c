#include <stdio.h>
#include <stdlib.h>

#define N 5
int calcoloMassimo(int vettoreEta[], int dimensioneVettore);
int calcoloMinimo(int vettoreEta[], int dimensioneVettore);
float calcoloMedia(int vettoreEta[], int dimensioneVettore);
int calcoloPdR(int vettoreEta[], int dimensioneVettore);

int main(int argc, char** argv) {
    int vettoreEta[N];
    int i,massimo,minimo,PdR;
    float media;
    
    printf("Inserisci l'eta' di %d persone\n", N);
    
    for(i=0;i<N;i++) {
        printf("Inserisci l'eta' della %da persona: ", i+1);
        scanf("%d", &(vettoreEta[i]));
    }
    
    massimo = calcoloMassimo(vettoreEta, N);
    minimo = calcoloMinimo(vettoreEta, N);
    media = calcoloMedia(vettoreEta, N);
    PdR = calcoloPdR(vettoreEta, N);
    
    printf("\nL'eta' massima e': %d", massimo);
    printf("\nL'eta' minima e': %d", minimo);
    printf("\nL'eta' media e': %f", media);
    printf("\nI potenziali Presidenti della Repubblica sono: %d", PdR);
    return (EXIT_SUCCESS);
}

int calcoloMassimo(int vettoreEta[], int dimensioneVettore) {
    int massimo;
    int i;
    
    for(i=0;i<dimensioneVettore;i++) {
        if(vettoreEta[i]>massimo) {
            massimo = vettoreEta[i];
        }
    }
    
    return massimo;
}

int calcoloMinimo(int vettoreEta[], int dimensioneVettore) {
    int minimo;
    int i;
    
    for(i=0;i<dimensioneVettore;i++) {
        if(vettoreEta[i]<minimo) {
            minimo = vettoreEta[i];
        }
    }
    
    return minimo;
}

float calcoloMedia(int vettoreEta[], int dimensioneVettore) {
    float media = 0;
    int i;
    
    for(i=0;i<dimensioneVettore;i++) {
        media += vettoreEta[i];
    }
    
    media /= N;
    
    return media;
}

int calcoloPdR(int vettoreEta[], int dimensioneVettore) {
    int PdR = 0;
    int etaPdR = 50;
    int i;
    
    for(i=0;i<dimensioneVettore;i++) {
        if(vettoreEta[i]>etaPdR) {
            PdR += 1;
        }
    }
    
    return PdR;
}