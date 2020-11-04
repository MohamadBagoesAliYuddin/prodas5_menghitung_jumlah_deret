/*NAMA  : MOHAMAD BAGOES ALI YUDDIN  */
/*NIM   : 20051397048                */
/*KELAS : MI_2020B                   */

#include <iostream>
#include <conio.h>
 
using namespace std;
 
int main(){
    int a=0, b, c, jumlah=0, i, n;
     
	cout <<"======================================================="<< endl;
	cout <<"======================================================="<< endl;
	cout <<"==                                                   =="<< endl;
	cout <<"==   ------MENGHITUNG JUMLAH DERET BILANGAN-------   =="<< endl;
	cout <<"==                                                   =="<< endl;
	cout <<"======================================================="<< endl;
	cout <<"======================================================="<< endl << endl;
    cout<<"Masukkan bilangan awal : ";
    cin>>a;
    cout<<"Masukkan beda : ";
    cin>>b;
    cout<<"Masukkan jumlah sampai deret ke-n : ";
    cin>>n;
	cout <<"======================================================="<< endl;
	cout <<"======================================================="<< endl;
     
    cout<<"Deret ke-"<<n<<" : ";
    cout<<a<<",";
    jumlah=jumlah+a; 
    for(i=0; i<n-1; i++){
		c=a+b;
        a=c;
        cout<<c<<",";
        jumlah=jumlah+c;                      
    }
     
    cout <<"\nJumlah deret ke-"<<n<<" : ";
    cout <<jumlah;
    cout <<endl;
cout <<endl <<"======================================================="<< endl;
	cout <<   "======================================================="<< endl;
	cout <<   "==                                                   =="<< endl;
	cout <<   "==                                                   =="<< endl;
	cout <<   "==                                                   =="<< endl;
	cout <<   "==             MOHAMAD BAGOES ALI YUDDIN             =="<< endl;
	cout <<   "==                    20051397048                    =="<< endl;
	cout <<   "==                                                   =="<< endl;
	cout <<   "==                                                   =="<< endl;
	cout <<   "==                                         Penk_Zpk  =="<< endl;
	cout <<   "======================================================="<< endl;
	cout <<   "======================================================="<< endl;
     
    getch();
    return 0;    
}
