#include "functions.h"

int main(){
    int dim, v[50],i, vSortat[50];
    cin>>dim;
    for(i=0;i<dim;i++)
        cin>>v[i];
    afisareVector(v,dim);
    sortareVector(v,dim,vSortat);
    sumaVector(v,dim);
    minimVector(v,dim);
    maximVector(v,dim);
    return 0;
}