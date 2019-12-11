// generation d'un fichier DMACS pour resoudre le probleme d'un graphe 4-colorable
// tp logique 2019/2020
// HAMZA younes : github.com/younes-h
// IKHLEF Ali   : github.com/151ali
#include<iostream>
using namespace std;
// les  couleurs sont sont 1, 2, 3, 4
// les sommets sont 1, 2, 3, 4 ... 8, 9
// la variable est C(i)(j) designe que le sommet i a la couleur j 
// k = 4*(i-1)+j pour numeroter les variables

int c2number(int i,int j){
return 4*(i-1)+j;
}
int main(){
	cout << "c DMACS fichier pour resoudre -> coloriage de graphe" <<endl;
	cout << "p cnf 36 396"<<endl; //180 

/**
 * ================================================================
 * chaque sommet doit avoir une et une seule couleur
 * ================================================================
*/
for(int j=1;j<=4;j++){        // les quatres couleurs
    for(int i=1;i<=9;i++){    // tout les sommets //---> c != j
        for(int k=1;k<=4;k++){// les autres couleurs sauf couleur j
            if(k == j) continue;
            cout <<"-"<<c2number(i,j)<<" -"<<c2number(i,c)<<" 0"<<endl;
            cout <<"-"<<c2number(i,j)<<" -"<<c2number(i,c)<<" 0"<<endl;
            cout <<"-"<<c2number(i,j)<<" -"<<c2number(i,c)<<" 0"<<endl;
        }
    }
}
/**
 * ================================================================
 * deux sommets adjacents ne doivent pas avoir la meme couleur 
 * ================================================================
*/ 

// pour sommet 1 :
for(int j=1;j<=4;j++){
	cout <<"-"<<c2number(1,j)<<" -"<<c2number(2,j)<<" 0"<<endl;
	cout <<"-"<<c2number(1,j)<<" -"<<c2number(3,j)<<" 0"<<endl;
	cout <<"-"<<c2number(1,j)<<" -"<<c2number(5,j)<<" 0"<<endl;
	cout <<"-"<<c2number(1,j)<<" -"<<c2number(9,j)<<" 0"<<endl;
}
// pour sommet 2:
for(int j=1;j<=4;j++){ 
        cout <<"-"<<c2number(2,j)<<" -"<<c2number(3,j)<<" 0"<<endl;
        cout <<"-"<<c2number(2,j)<<" -"<<c2number(4,j)<<" 0"<<endl;
        cout <<"-"<<c2number(2,j)<<" -"<<c2number(5,j)<<" 0"<<endl;
        cout <<"-"<<c2number(2,j)<<" -"<<c2number(6,j)<<" 0"<<endl;
	cout <<"-"<<c2number(2,j)<<" -"<<c2number(7,j)<<" 0"<<endl;
}
// pour sommet 3 :
for(int j=1;j<=4;j++){ 
        cout <<"-"<<c2number(3,j)<<" -"<<c2number(4,j)<<" 0"<<endl;
        cout <<"-"<<c2number(3,j)<<" -"<<c2number(6,j)<<" 0"<<endl;
        cout <<"-"<<c2number(3,j)<<" -"<<c2number(7,j)<<" 0"<<endl;
}
// pour sommet 4 :
for(int j=1;j<=4;j++){ 
        cout <<"-"<<c2number(4,j)<<" -"<<c2number(6,j)<<" 0"<<endl;
        cout <<"-"<<c2number(4,j)<<" -"<<c2number(8,j)<<" 0"<<endl;
}
// pour sommet 5 :
for(int j=1;j<=4;j++){ 
        cout <<"-"<<c2number(5,j)<<" -"<<c2number(7,j)<<" 0"<<endl;
}
// pour sommet 6 :
for(int j=1;j<=4;j++){ 
        cout <<"-"<<c2number(6,j)<<" -"<<c2number(7,j)<<" 0"<<endl;
}
// pour sommet 7 :
for(int j=1;j<=4;j++){ 
        cout <<"-"<<c2number(7,j)<<" -"<<c2number(9,j)<<" 0"<<endl;
        cout <<"-"<<c2number(7,j)<<" -"<<c2number(8,j)<<" 0"<<endl;
}
}

