#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
using namespace std;
#include "rlutil.h"
#include "funcionesgenerala.h"
#include "dados.h"

int main(){
    rlutil::hidecursor();

    int rmenu,i;

    rmenu=menu();


    switch(rmenu){
    case 1: unjugador(rmenu); break;
    case 2: dosjugadores(); break;
    case 3: cout<<"no hay no existe, saludos :) <3"<<endl;
    case 4: rlutil::anykey(); return 0; break;
    }

    cout<<" "<<endl;
}


