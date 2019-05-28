#include<iostream>
#include<cmath>
#include<complex>

using namespace std;

const int MATRIZ_LENGTH = 4;


int main(){
    int f[MATRIZ_LENGTH][MATRIZ_LENGTH][2];

    //matriz de 1
    for (int i = 0; i < MATRIZ_LENGTH; i++) {
        for (int j = 0; j < MATRIZ_LENGTH; j++) {
            for (int k = 0; k < 2; k++) {
                f[i][j][k] = 1;
            }
        }
    }

    //mostrando matriz de 1
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 2; k++) {
                cout << f[i][j][k] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;

    //matriz F
    for(int i=0; i < MATRIZ_LENGTH; i++){
            for(int j=0; j < MATRIZ_LENGTH; j++){
                if(i==0 || j==0){
                    f[i][j][0]=1;
                    f[i][j][1]=0; //negativa da parte real, que vai ser a parte imaginária nas outras posições
                } else
                {
                    f[i][j][0]=cos((2*M_PI*i*j)/MATRIZ_LENGTH); //guardando o vetor na parte real
                    f[i][j][1]=-sin((2*M_PI*i*j)/MATRIZ_LENGTH); //guardando o vetor na parte imaginária / i é a nossa linha / j é a nossa coluna
                }
        }
    }

    //imprimindo matriz F
    //imprimindo matriz F
    for (int i = 0; i < 5; i++) {
        for (int j=0; j<5; j++ ) {
            cout<<f[i][j][0]<<"+("<<f[i][j][1]<<") ";
        }
        cout << endl;
    }

    return 0;
}