#ifndef DADOS_H_INCLUDED
#define DADOS_H_INCLUDED

void dibujardado(int posx,int posy,int num);
void dibujarcuadrado(int posx,int posy);

void dibujarcuadrado(int posx,int posy){
int x,y,conty=0,contx=1;

rlutil::setColor(3);
rlutil::locate(posx,posy);

cout<<(char)218;
for(x=0;x<9;x++){
    cout<<(char)196;
}
cout<<(char)191;

for(y=1;y<7;y++){
    conty++;
    rlutil::locate(posx,posy+y);
    cout<<(char)179;
    if(y==6){
    rlutil::locate(posx,y+posy);
    cout<<(char)192;
    }
}

for(x=1;x<10;x++){
    contx++;
    rlutil::locate(x+posx,conty+posy);
    cout<<(char)196;
    if(x==10){
        cout<<(char)217;
    }
}

for(y=1;y<7;y++){
    rlutil::locate(contx+posx,y+posy);
    cout<<(char)179;
    if(y==6){
    rlutil::locate(contx+posx,y+posy);
    cout<<(char)217;
    }
}
}

void dibujardado(int posx,int posy,int num){

    rlutil::setColor(4);
    switch(num){
case 1:
    dibujarcuadrado(posx,posy);

    rlutil::locate(5+posx,3+posy);
    cout<<(char)254;
break;

case 2:
    dibujarcuadrado(posx,posy);

    rlutil::locate(2+posx,4+posy);
    cout<<(char)220;

    rlutil::locate(8+posx,2+posy);
    cout<<(char)223;
break;

case 3:
    dibujarcuadrado(posx,posy);

    rlutil::locate(5+posx,3+posy);
    cout<<(char)254;

    rlutil::locate(2+posx,4+posy);
    cout<<(char)220;

    rlutil::locate(8+posx,2+posy);
    cout<<(char)223;

break;

case 4:
    dibujarcuadrado(posx,posy);

    rlutil::locate(2+posx,2+posy);
    cout<<(char)223;

    rlutil::locate(8+posx,2+posy);
    cout<<(char)223;

    rlutil::locate(2+posx,4+posy);
    cout<<(char)220;

    rlutil::locate(8+posx,4+posy);
    cout<<(char)220;
break;

case 5:
    dibujarcuadrado(posx,posy);

    rlutil::locate(2+posx,2+posy);
    cout<<(char)223;

    rlutil::locate(8+posx,2+posy);
    cout<<(char)223;

    rlutil::locate(2+posx,4+posy);
    cout<<(char)220;

    rlutil::locate(8+posx,4+posy);
    cout<<(char)220;

    rlutil::locate(5+posx,3+posy);
    cout<<(char)254;
break;

case 6:
    dibujarcuadrado(posx,posy);

    rlutil::locate(2+posx,2+posy);
    cout<<(char)223;

    rlutil::locate(8+posx,2+posy);
    cout<<(char)223;

    rlutil::locate(2+posx,4+posy);
    cout<<(char)220;

    rlutil::locate(8+posx,4+posy);
    cout<<(char)220;

    rlutil::locate(5+posx,2+posy);
    cout<<(char)223;

    rlutil::locate(5+posx,4+posy);
    cout<<(char)220;
break;

}
rlutil::locate(1,10+posy);
rlutil::setColor(15);
cout<<" "<<endl;

}



#endif // DADOS_H_INCLUDED
