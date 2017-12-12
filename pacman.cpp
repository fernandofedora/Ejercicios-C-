#include <windows.h>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#define ARRIBA     72    
#define IZQUIERDA  75
#define DERECHA    77
#define ABAJO      80
#define ESC        27
#define ENTER      13

int backcolor=0;
int dir = 0;
int x=39,y=22;
int anteriorpx,anteriorpy;
char tecla;

long int puntos = -5;
int vidas = 3;

void setCColor( int color)
{
        static HANDLE hConsole;

        hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

        SetConsoleTextAttribute( hConsole, color | (backcolor * 0x10 + 0x100) );
}

int color[7] = {
      0x009,
      0x00E,
      0x00C,
      0x002,
      0x00B,
      0x005,
      0x00F

     };

void gotoxy(int x, int y) 
{
    HANDLE hCon;
    COORD dwPos;

    dwPos.X = x;
    dwPos.Y = y;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hCon,dwPos);
}

char mapa[50][100] = {
     "                                                      ",
     "                  AXXXXXXXXXXXXXXXXXXXB AXXXXXXXXXXXXXXXXXXXB",
     "                  Y___________________Y Y___________________Y",
     "                  Y_AXXXXXB_AXXXXXXXB_Y Y_AXXXXXXXB_AXXXXXB_Y",
     "                  Y_Y     Y_Y       Y_Y Y_Y       Y_Y     Y_Y",
     "                  Y_DXXXXXC_DXXXXXXXC_DXC_DXXXXXXXC_DXXXXXC_Y",
     "                  Y________|_________|___|_________|________Y",
     "                  Y_AXXXXXB_AXB_AXXXXXXXXXXXXXB_AXB_AXXXXXB_Y",
     "                  Y_DXXXXXC_Y Y_DXXXXB   AXXXXC_Y Y_DXXXXXC_Y",
     "                  Y_________Y Y______Y   Y______Y Y_________Y",
     "                  DXXXXXXXB_Y DXXXXB_Y   Y_AXXXXC Y_AXXXXXXXC",
     "                          Y_Y AXXXXC_DXXXC_DXXXXB Y_Y        ",
     "                          Y_Y Y_________________Y Y_Y        ",
     "                  XXXXXXXXC_DXC_AXXXXXX XXXXXXB_DXC_DXXXXXXXX",
     "                  _________|____Y      *      Y____|_________",
     "                  XXXXXXXXB_AXB_DXXXXXXXXXXXXXC_AXB_AXXXXXXXX",
     "                          Y_Y Y_________________Y Y_Y        ",
     "                          Y_Y Y_AXXXXXXXXXXXXXB_Y Y_Y        ",
     "                  AXXXXXXXC_DXC_DXXXXB   AXXXXC_DXC_DXXXXXXXB",
     "                  Y________|_________Y   Y_________|________Y",
     "                  Y_AXXXXXB_AXXXXXXB_Y   Y_AXXXXXXB_AXXXXXB_Y",
     "                  Y_DXXXB Y_DXXXXXXC_DXXXC_DXXXXXXC_Y AXXXC_Y",
     "                  Y_____Y Y_________|_____|_________Y Y_____Y",
     "                  DXXXB_Y Y_AXB_AXXXXXXXXXXXXXB_AXB_Y Y_AXXXC",
     "                  AXXXC_DXC_Y Y_DXXXXB   AXXXXC_Y Y_DXC_DXXXB",
     "                  Y_________Y Y______Y   Y______Y Y_________Y",
     "                  Y_AXXXXXXXC DXXXXB_Y   Y_AXXXXC DXXXXXXXB_Y",
     "                  Y_DXXXXXXXXXXXXXXC_DXXXC_DXXXXXXXXXXXXXXC_Y",
     "                  Y_________________|_____|_________________Y",
     "                  DXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXC",
};


void pintar_mapa()
{
     for(int i = 0 ; i < 78 ; i++){
         for(int j = 0 ; j < 30 ; j++){
               gotoxy(i,j);

               if(mapa[j][i] == 'X') {setCColor(color[0]);printf("%c",205);}
               if(mapa[j][i] == '_') {setCColor(color[1]); printf("%c",250);}
               else if(mapa[j][i] == 'Y') {setCColor(color[0]);printf("%c",186);}
               else if(mapa[j][i] == 'A') {setCColor(color[0]);printf("%c",201);}
               else if(mapa[j][i] == 'B') {setCColor(color[0]);printf("%c",187);}
               else if(mapa[j][i] == 'C') {setCColor(color[0]);printf("%c",188);}
               else if(mapa[j][i] == 'D') {setCColor(color[0]);printf("%c",200);}


         }
     }
}


void pacman(int x , int y){
     setCColor(color[1]);
     gotoxy(x,y); printf("%c",2);
}

void borrar_pacman(int x, int y){
     gotoxy(x,y); printf(" ");
     if(mapa[y][x] == '_'){ mapa[y][x] = ' '; puntos += 5;}
}
void teclear(){
    if(kbhit()){
      tecla = getch();
      switch(tecla){
      case ARRIBA:
         dir = 0;
         break;

      case ABAJO:
         dir = 1;
         break;

      case DERECHA:
         dir = 2;
         break;

      case IZQUIERDA:
         dir = 3;
         break;

      }

   }

}

class fantasma{
      int fdir;
      int _x, _y;
      int col;
public:
      fantasma(int x , int y , int color);
      void dibujar_fantasma() const;
      void borrar_fantasma() const;
      void mover_fantasma();
      void choque_pacman();
};
fantasma::fantasma(int x , int y, int color){
      _x = x;
      _y = y;
      col = color;
      fdir = rand()%4;
}
void fantasma::dibujar_fantasma() const{

     setCColor(color[col]);
     gotoxy(_x,_y); printf("%c",6);
}
void fantasma::borrar_fantasma() const{

     gotoxy(_x,_y); printf(" ");
}
void fantasma::choque_pacman(){
     if(y == _y && x == _x || (fdir == 0 && dir == 1 || fdir == 1 && dir == 0
     ||fdir == 2 && dir == 3 || fdir == 3 && dir == 2 )&&(_y == anteriorpy && _x == anteriorpx)){


      x = 39;
      y = 22;
      dir = 4;
      vidas--;

     }


}

void fantasma::mover_fantasma(){
     borrar_fantasma();
     choque_pacman();
     int bolx=_x,boly=_y;

     if(mapa[_y][_x] == '|'){
             fdir = rand()%4;
     }
     if(mapa[_y][_x] == '*'){
             fdir = 0;
     }

     if(fdir == 2){
          if(mapa[_y][_x+1] != 'X' && mapa[_y][_x+1] != 'A' && mapa[_y][_x+1] != 'Y' &&
          mapa[_y][_x+1] != 'B' && mapa[_y][_x+1] != 'C' && mapa[_y][_x+1] != 'D')         _x++;
          else fdir = rand()%4;
     }
     if(fdir == 3){
          if(mapa[_y][_x-1] != 'X' && mapa[_y][_x-1] != 'A' && mapa[_y][_x-1] != 'Y' &&
          mapa[_y][_x-1] != 'B' && mapa[_y][_x-1] != 'C' && mapa[_y][_x-1] != 'D')          _x--;
          else fdir = rand()%4;
     }
     if(fdir == 0){
          if(mapa[_y-1][_x] != 'X' && mapa[_y-1][_x] != 'A' && mapa[_y-1][_x] != 'Y' &&
          mapa[_y-1][_x] != 'B' && mapa[_y-1][_x] != 'C' && mapa[_y-1][_x] != 'D')           _y--;
          else fdir = rand()%4;
     }
     if(fdir == 1){
          if(mapa[_y+1][_x] != 'X' && mapa[_y+1][_x] != 'A' && mapa[_y+1][_x] != 'Y' &&
      mapa[_y+1][_x] != 'B' && mapa[_y+1][_x] != 'C' && mapa[_y+1][_x] != 'D')                _y++;
          else fdir = rand()%4;
     }

     if(mapa[boly][bolx] == '_') {setCColor(color[1]); gotoxy(bolx,boly);printf("%c",250);}

     // rutina atajo
     if(_x <= 17) _x = 61;
        else if(_x >= 62) _x = 18;
     dibujar_fantasma();
}


void marcador(){

   gotoxy(5,4); printf("PUNTOS");
   gotoxy(5,6); printf("    ");
   setCColor(color[6]);
   gotoxy(5,6); printf("%ld",puntos);

   setCColor(color[1]);
   gotoxy(5,25); printf("VIDAS");
   for(int i = 0 ; i <= vidas ; i++){
       gotoxy(5,i+27);printf(" ");

   }
   for(int i = 0 ; i < vidas ; i++){
       gotoxy(5,i+27);printf("%c",2);

   }
   setCColor(color[2]);
   gotoxy(70,27);printf("%c",169);


}

int main(){



   fantasma A(41,14,2);
   fantasma B(43,14,3);
   fantasma C(40,14,4);
   fantasma D(39,14,5);
   pintar_mapa();

   while(vidas > 0 && puntos < 1950){
      marcador();
      borrar_pacman(x,y);
      anteriorpx = x; anteriorpy = y;


      teclear();

      if(dir == 0 && mapa[y-1][x] != 'X' && mapa[y-1][x] != 'A' && mapa[y-1][x] != 'Y' &&
      mapa[y-1][x] != 'B' && mapa[y-1][x] != 'C' && mapa[y-1][x] != 'D')                       y--;


      else if(dir == 1 && mapa[y+1][x] != 'X' && mapa[y+1][x] != 'A' && mapa[y+1][x] != 'Y' &&
      mapa[y+1][x] != 'B' && mapa[y+1][x] != 'C' && mapa[y+1][x] != 'D')                       y++;


      pacman(x,y);
      Sleep(55);
      borrar_pacman(x,y);

      B.choque_pacman();
      C.choque_pacman();
      D.choque_pacman();
      A.choque_pacman();

      anteriorpx = x; anteriorpy = y;
      teclear();


      if(dir == 2 && mapa[y][x+1] != 'X' && mapa[y][x+1] != 'A' && mapa[y][x+1] != 'Y' &&
      mapa[y][x+1] != 'B' && mapa[y][x+1] != 'C' && mapa[y][x+1] != 'D')                       x++;


      else if(dir == 3 && mapa[y][x-1] != 'X' && mapa[y][x-1] != 'A' && mapa[y][x-1] != 'Y' &&
      mapa[y][x-1] != 'B' && mapa[y][x-1] != 'C' && mapa[y][x-1] != 'D')                         x--;

      A.mover_fantasma();
      B.mover_fantasma();
      C.mover_fantasma();
      D.mover_fantasma();
      pacman(x,y);
      Sleep(55);

     
      if(x < 17) {
        borrar_pacman(x,y);
        x = 61;
      }
      else if(x > 62){
        borrar_pacman(x,y);
        x= 18;
      }



   }



   for(int i = 0 ; i <= vidas ; i++){
       gotoxy(5,i+27);printf(" ");

   }

   system("pause>NULL");
   return 0;

}

