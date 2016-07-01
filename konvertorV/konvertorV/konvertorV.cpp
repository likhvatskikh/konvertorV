// konvertorV.cpp: определяет точку входа для консольного приложения.
//

#include "StdAfx.h" 
#include <iostream> 



using std::cout; 
using std::cin; 
using std::endl; 


int main() 
{ 
setlocale(LC_ALL, "Russian"); 


cout <<"\t***Конвертор валют***\n\n"; 
long long Rub, Dol, Evro, Gri, Tenge, Yan;

cout << "Введите количество рублей: "; 
cin >> Rub ; 

Dol = Rub*63.87; 
Evro = Rub*71.28;
Gri = Rub*2.85;
Tenge = Rub*0.19;
Yan = Rub*9.66;


cout << Rub << " Руб.= " <<Dol << " Долларов\n" << Rub << " Руб. = " << Evro << " Евро\n" << Rub << " Руб.= " << Gri <<" Гривен\n" << Rub << " Руб. = " << Tenge << " Тенге\n" << Rub << " Руб. = " << Yan << " Юань\n"; 
system("pause"); 
}


