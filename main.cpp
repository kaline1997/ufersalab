#include "estruturas.cpp"

int main(){
    
    dataItem *G = Grafo((char*) "cidades.csv",(char*) "coordenada.csv");
    float D[] = {0.05,0.1,0.15,0.20,0.25};
 
   neighborhood S;
    for(int i = 0; i < 5; i++){
    
    
    S = matriz_adj(G,D[i]);
    printf("\n De acordo com a distancia minima D = %.3f, a cidade com mais vizinhos está"
    "\nna posição [%i] %s com %i vizinhos\n",D[i], S.pos,G[S.pos].city.cidade, S.Qnbr);

    if(S.posvoid == -1){
        printf("\nNão existe cidade sem vizinhos com base na distancia minima %.3f\n", D[i]);
    }
    
    else if(S.posvoid != -1){
        printf("\nA cidade que não possui vizinhos com base na distancia minima %.3f está"
    "\nna posição [%i] %s", D[i], S.posvoid, G[S.posvoid].city.cidade);
        }
    
    }

    return 0;
}