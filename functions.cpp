#include "functions.h"

void afisareVector(const int v[], int dim){
    int i;
    for(i=0;i<dim;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

void sortareVector(const int v[],int dim, int vSortat[]){
    int i,j,aux;
    for(i=0;i<dim;i++)
        vSortat[i]=v[i];
    for(i=0;i<dim-1;i++)
        for(j=i+1;j<dim;j++)
            if(vSortat[i]>vSortat[j]){
                aux=vSortat[i];
                vSortat[i]=vSortat[j];
                vSortat[j]=aux;
            }
}

int sumaVector(const int v[],int dim){
    int suma=0;
    for(int i=0;i<dim;i++)
        suma=suma+v[i];
    return suma;
}

int minimVector(const int v[],int dim){
    int mini=v[0];
    for(int i=1;i<dim;i++)
        if(v[i]<mini)
         mini=v[i];
    return mini;
}

int maximVector(const int v[],int dim){
    int maxi=v[0];
    for(int i=1;i<dim;i++)
        if(v[i]>maxi)
         maxi=v[i];
    return maxi;
}