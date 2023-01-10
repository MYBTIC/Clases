#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}

int main(){
	
	for(int j=1;j<=4;j++){
		for(int i=0;i<101;i++){
			gotoxy(i,7);
			printf("|");
			gotoxy(103,7);
			printf(" %d %%", i/2);
			Sleep(50);
			}
		for(int i=100;i>=0;i--){
			gotoxy(i,7);
			printf(" ");
			gotoxy(103,7);
			printf(" %d %%",i/2);
			Sleep(50);
			}
		gotoxy(50,8);
		printf("%d %%",25*j);
		}
}
