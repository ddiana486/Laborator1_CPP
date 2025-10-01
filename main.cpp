#include "functions.h"

int main(){
    int dim, v[50],i, vSortat[50];
    cin>>dim;
    for(i=0;i<dim;i++)
        cin>>v[i];
    afisareVector(v,dim);
    sortareVector(v,dim,vSortat);
    cout<<"Suma este: "<<sumaVector(v,dim)<<endl;
    cout<<"Minimul este: "<<minimVector(v,dim)<<endl;
    cout<<"Maximul este: "<<maximVector(v,dim)<<endl;
    return 0;
}