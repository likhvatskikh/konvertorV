// konvertorV.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "StdAfx.h" 
#include <iostream> 



using std::cout; 
using std::cin; 
using std::endl; 


int main() 
{ 
setlocale(LC_ALL, "Russian"); 


cout <<"\t***��������� �����***\n\n"; 
long long Rub, Dol, Evro, Gri, Tenge, Yan;

cout << "������� ���������� ������: "; 
cin >> Rub ; 

Dol = Rub*63.87; 
Evro = Rub*71.28;
Gri = Rub*2.85;
Tenge = Rub*0.19;
Yan = Rub*9.66;


cout << Rub << " ���.= " <<Dol << " ��������\n" << Rub << " ���. = " << Evro << " ����\n" << Rub << " ���.= " << Gri <<" ������\n" << Rub << " ���. = " << Tenge << " �����\n" << Rub << " ���. = " << Yan << " ����\n"; 
system("pause"); 
}


