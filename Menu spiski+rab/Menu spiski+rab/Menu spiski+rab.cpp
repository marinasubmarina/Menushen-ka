// Menu spiski+rab.cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <fstream>
using namespace std;

void pe4alno (){
	cout << endl<< "    ** Функция временно не работает. Приносим свои извенения. **"<< endl;
}

struct spis{
	spis *next;
	string data;
	spis *prev;
	int id;
};

class link{
	int idclass;
spis *first;
spis *last;
spis *Tekushiy;
	int Schetchik;
public:
	link(): first(NULL), last(NULL){}
	int GetSchetchik(){ //функция возвращает значение счетчика
	return Schetchik;}
	void Dob(string n, int i){
	spis *Tekushiy = first;
	spis *newlink = new spis;
	if (first==NULL){ //добавлене первого элемента
	Schetchik = 0;
	first=newlink;
	last=newlink;
	newlink->next=first;
	newlink->prev=first;
	newlink->data=n;
	newlink->id=Schetchik;
	Schetchik++;
	}
	}

	void Dobvcentr (string n){
	spis*Tekushiy = first;
	spis *newlink = new spis;
	spis *temporary= new spis; //?
		if(first == NULL)
		{
			Schetchik=0;
			newlink->data=n;
			newlink->id=Schetchik;
			newlink->prev=first;
			first=newlink;
			last=newlink;
			Schetchik++;
		}
		else { int kolvo_elem=0;
			while (Tekushiy)
			{kolvo_elem++;
			Tekushiy=Tekushiy->next;}
		Tekushiy=first;
		Tekushiy=last;
		int nujniy_elem;
		if (kolvo_elem%2==1)
			{nujniy_elem=nujniy_elem/2;}
		else 
			{nujniy_elem= (nujniy_elem-1)/2;}

		int list=0;
		while (list<nujniy_elem+1){
			if (list==nujniy_elem){
			newlink->data=n;
			newlink->id=Schetchik;
			Schetchik++;
			newlink->next=Tekushiy->next;
			newlink->prev=Tekushiy;
			Tekushiy->next=newlink;	}
		list++;
		Tekushiy=Tekushiy->next;		
		}
	}
}

	void Prosmotrs1(){
	spis *Tekushiy=first;
	do {
	cout<<Tekushiy->data << " " << Tekushiy->id<<endl;
	Tekushiy=Tekushiy->next;	}
	while (Tekushiy!=NULL);
	}
int Kol(){	
	return idclass;}

void Udal(){
	if (Tekushiy>0) Tekushiy--;
		if (first!=NULL)
		{spis *Tekushiy=first;
		first=first->next;
		delete Tekushiy;
		}
}

void UdalVse(){
	while(first!=0){Udal();}}

void addnum(string Str, int Num){
	spis *Tekushiy = first;
	spis *added = new spis;
	if (Tekushiy=NULL)
	{	first=added;}
	else {
		while (Tekushiy->next != NULL)
		{Tekushiy=Tekushiy->next;}
		Tekushiy->next=added;}
	added->next=NULL;
	added->data=Str;
	added->id=Num;
}

void Mkol(int a)
{idclass=a;}

void loadfile(){ // открыть (загрузить) файл
this->UdalVse();
ifstream out ("binaryfile.bin", ios::binary);
int kol;
out>>kol;
this->Mkol(kol);
while (!out.eof()){
string Str;
int cur;
out>>Str;
out>>cur;
this->addnum(Str,cur);
}
out.close();
}

void savefile(){ //сохранить файл
ofstream to ("binaryfile.bin", ios::binary);
to<<this->Kol();
spis *Tekushiy=first;
while (Tekushiy){
to<<Tekushiy->data<<' ';
to<<Tekushiy->id;
Tekushiy=Tekushiy->next;
}
to.close();
}
};

	

int _tmain(int argc, _TCHAR* argv[])
{ 
	setlocale(LC_ALL,"russian");

	string s; link *tes=new link;

int const k=6;
int selected_item=0;
m:
string menu []={"Работа с файлами","Просмотр","Добавление элементов","Удаление элементов","Редактирование","Выход"};

int const podmenu1=3;
int selected_item1=0;
string  menu1 []={ " Загрузить из файла ", " Сохранить в файл ", " Возврат в главное меню"};


int const podmenu2=2;
int selected_item2=0;
string  menu2 []={ " Просмотр всего списка ", " Возврат в главное меню"};

int const podmenu3=4;
int selected_item3=0;
string  menu3 []={" Добавление элемента в середину списка"," Добавление элемента в конец списка"," Добавление элемента по ключу"," Возврат в главное меню"};

int const podmenu4=4;
int selected_item4=0;
string  menu4 []={" Удаление элемента в начале списка"," Удаление элемента в конце списка"," Удаление элемента по ключу", " Возврат в главное меню"};


int const podmenu5=3;
int selected_item5=0;
string  menu5 []={" Изменение записи ", " Перемещение элемента ", " Возврат в главное меню"};

int const ex=2;
int selected_item6=0;
string Exit[]={"Да","Нет"};

char sure;
while(true) {
			system("cls");
			cout <<endl;
for(int i=0;i<k;i++){
		if (i==selected_item){	cout<<" > ";}		else {cout<<"   ";}
		if(i==k-1)
			cout<<" 0. "<<menu[i];
		else cout<<" "<<i+1<<". "<<menu[i]<<endl;
		} 
		

switch(getch()) {
case 72://вверх
	selected_item --;
	if (selected_item<0){
		selected_item=k-1;
	}
	break;
	case 80://вниз
		if (selected_item==k-1){
		selected_item=-1;
		}
		selected_item++;
	break;
	case 27:
			while(true) {
			system("cls");
			cout<<endl<<"   Вы уверены, что хотите выйти?"<<endl<<endl;;
for(int i=0;i<ex;i++){
		if (i==selected_item6){	cout<<" > ";}else {	cout<<"   ";}
		if(i==ex-1)
			cout<<" 2. "<<Exit[i];
		else cout<<" "<<i+1<<". "<<Exit[i]<<endl;
		} 
		

switch(getch()) {
case 72://вверх
	selected_item6 --;
	if (selected_item6<0){
		selected_item6=ex-1;
	}
	break;
	case 80://вниз
		if (selected_item6==ex-1){
		selected_item6=-1;
		}
		selected_item6++;
	break;
	
	case 27:
		
		goto m;
break;


	case 13://Enter
		switch(selected_item6) {
		case 0:
			exit(0);
			break;
		case 1:
			goto m;
			break;
	break;
	}
	break;
	
	case 49:
		exit(0);
		break;
	case 50:
		goto m;
		break;
	
} }
break;
	case 13://Enter 
	switch(selected_item) {
	case 0: //первое подменю
				
		while(true) {
			system("cls");
			cout<< endl<<"   Меню. Работа с файлами"<<endl<<endl;
for(int i=0;i<podmenu1;i++){
		if (i==selected_item1){
		cout<<" > ";
		}
		else {
		cout<<"   ";
		}
		
		if(i==podmenu1-1){
			cout<<" 0. "<<menu1[i];}
		else cout<<" "<<i+1<<". "<<menu1[i]<<endl; 
}
		switch(getch()) {
			case 72://вверх
	selected_item1 --;
	if (selected_item1<0){
		selected_item1=podmenu1-1;
	}
	break;
	
	case 80://вниз
		if (selected_item1==podmenu1-1){
		selected_item1=-1;
		}
		selected_item1++;
		
	break;
	case 27:
		
		goto m;
		break;
	case 13:
		switch(selected_item1) { //по стрелкам
		case 0:
			tes->loadfile();
			break;
			/*system("cls");
						cout << "  Подменю. Загрузка "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. Вернуться в меню."<<endl;
						switch (getch()){
						case 13: goto m;} */
		case 1:
			tes->savefile();
			break;
			/*system("cls");
						cout << "  Подменю. Сохранение "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. Вернуться в меню."<<endl;
						switch (getch()){
						case 13: goto m;}*/
		case 2:
			goto m;
		
	}
	break;
	//по номерам
			case 49://1 
		selected_item1=0;
		break;
	case 50://2
		selected_item1=1;
		break; 
		
	case 48:
		selected_item1=2;
		
			goto m;	
		} }

m2:
	case 1://подменю номер 2
		while(true) {
			system("cls");
			cout<< endl<< "  Меню. Просмотр"<<endl<<endl;
			
			for(int i=0;i<podmenu2;i++){
		if (i==selected_item2){
		cout<<" > ";}		else {cout<<"   ";}
		
		if(i==podmenu2-1){	cout<<" 0. "<<menu2[i];}
		else cout<<" "<<i+1<<". "<<menu2[i]<<endl; 
}
		switch(getch()) {
			case 72://вверх
	selected_item2 --;
	if (selected_item2<0){
		selected_item2=podmenu2-1;
	}
	break;
	
	case 80://вниз
		if (selected_item2==podmenu2-1){
		selected_item2=-1;
		}
		selected_item2++;
		
	break;
	case 27:
		goto m;
		break;
		
	case 13:
		switch(selected_item2) {
		case 0:
			system("cls");
			cout << "  Подменю. Просмотр всего списка. "<< endl<< endl; 
			
			cout<< endl<<endl;
			tes->Prosmotrs1();
			break;

			cout << endl<<" >   1. Вернуться в меню."<<endl;
			switch (getch()){
			case 13: goto m;}

		case 1:
				goto m;	break;
	}
	break;
			case 49://1
		selected_item2=0;
		break;
		
	case 48:
		selected_item2=1;
		
					
		} }
		break; 

m3:
	case 2://подменю номер 3
			while(true) {
			system("cls");
			cout<< endl<<"   Меню. Добавление элементов"<<endl<<endl;
for(int i=0;i<podmenu3;i++){
		if (i==selected_item3){
		cout<<" > ";
		}
		else {
		cout<<"   ";
		}
		
		if(i==podmenu3-1){
			cout<<" 0. "<<menu3[i];}
		else cout<<" "<<i+1<<". "<<menu3[i]<<endl; 
}
		switch(getch()) {
			case 72://вверх
	selected_item3 --;
	if (selected_item3<0){
		selected_item3=podmenu3-1;
	}
	break;
	
	case 80://вниз
		if (selected_item3==podmenu3-1){
		selected_item3=-1;
		}
		selected_item3++;
		
	break;
	case 27:
		
		goto m;
		break;
	case 13: // entr
		switch(selected_item3) {
		case 0:
			system("cls");
						cout << "  Подменю. Добавление элемента в середину списка. "<< endl<< endl; 
						cin>>s;
						cout<<endl;
						tes->Dobvcentr(s);
						cout<<endl<<endl;
						goto m3;
						
		case 1:
			system("cls");
						cout << "  Подменю. Добавление элемента в конец списка. "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. Вернуться в меню."<<endl;
						switch (getch()){
						case 13: goto m;}
		case 2:
			system("cls");
						cout << "  Подменю. Добавление элемента в начало списка. "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. Вернуться в меню."<<endl;
						switch (getch()){
						case 13: goto m;}
		case 3:
			
			goto m;
	break;
	}
	break;
	case 49://1
		selected_item3=0;
		break;
	case 50://2
		selected_item3=1;
		break; 
	case 51:
		selected_item3=2;
		break;
		
	case 48:
		selected_item3=3;
		
		goto m;
				
		} }
		break; 




	case 3://подменю номер 4
			while(true) {
			system("cls");
			cout<< endl<<"   Меню. Удаление"<<endl<<endl;
for(int i=0;i<podmenu4;i++){
		if (i==selected_item4){cout<<" > ";}		else {	cout<<"   ";	}
		
		if(i==podmenu4-1){
			cout<<" 0. "<<menu4[i];}
		else cout<<" "<<i+1<<". "<<menu4[i]<<endl; 
}
		switch(getch()) {
			case 72://вверх
	selected_item4 --;
	if (selected_item4<0){
		selected_item4=podmenu4-1;
	}
	break;
	
	case 80://вниз
		if (selected_item4==podmenu4-1){
		selected_item4=-1;
		}

		selected_item4++;
		
	break;
		case 27:
		goto m;
		break;
	case 13:
		switch(selected_item4) {
		case 0:
			system("cls");
						cout << "  Подменю. Удаление элемента в начале списка. "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. Вернуться в меню."<<endl;
						switch (getch()){
						case 13: goto m;}
		case 1:
			system("cls");
						cout << "  Подменю. Удаление элемента в конце списка. "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. Вернуться в меню."<<endl;
						switch (getch()){
						case 13: goto m;}

		case 2:
			system("cls");
						cout << "  Подменю. Удаление элемента по ключу. "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. Вернуться в меню."<<endl;
						switch (getch()){
						case 13: goto m;}
						case 3: goto m; break;
	break;
	}
	break;
	case 49://1
		selected_item4=0;
		break;
	case 50://2
		selected_item4=1;
		break; 
		
	case 48:
		selected_item4=2;
			goto m;
		} }
		break; 

	case 4://подменю номер 5
			while(true) {
			system("cls");
			cout<< endl<< "   Меню. Редактирование"<<endl<<endl;
for(int i=0;i<podmenu5;i++){
		if (i==selected_item5){	cout<<" > ";}		else {cout<<"   ";}
		
		if(i==podmenu5-1){
			cout<<" 0. "<<menu5[i];}
		else cout<<" "<<i+1<<". "<<menu5[i]<<endl; 
}
		switch(getch()) {
			case 72://вверх
	selected_item5 --;
	if (selected_item5<0){
		selected_item5=podmenu5-1;
	}
	break;
	
	case 80://вниз
		if (selected_item5==podmenu5-1){
		selected_item5=-1;
		}
		selected_item5++;
		
	break;
		case 27:
			goto m;
		break;
	case 13:
		switch(selected_item5) {
		case 0:
			system("cls");
						cout << "  Подменю. Изменение элемента. "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. Вернуться в меню."<<endl;
						switch (getch()){
						case 13: goto m;}
		case 1:
			system("cls");
						cout << "  Подменю. Перемещене элементов. "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. Вернуться в меню."<<endl;
						switch (getch()){
						case 13: goto m;}
		case 2:		goto m;
	break;
	}
	break;
	case 49://1
		selected_item5=0;
		break;
	case 50://2
		selected_item5=1;
		break; 
		
	case 48:
		selected_item5=2;
		
		goto m;
				
		} }
		break; 
	case 5://выход
		
		while(true) {
			system("cls");
			cout<<endl<<"   Вы уверены, что хотите выйти?"<<endl<<endl;
for(int i=0;i<ex;i++){
		if (i==selected_item6){	cout<<" > ";}		else {cout<<"   ";	}
		if(i==ex-1)
			cout<<" 2. "<<Exit[i];
		else cout<<" "<<i+1<<". "<<Exit[i]<<endl;
		} 
		

switch(getch()) {
case 72://вверх
	selected_item6 --;
	if (selected_item6<0){
		selected_item6=ex-1;
	}
	break;
	case 80://вниз
		if (selected_item6==ex-1){
		selected_item6=-1;
		}
		selected_item6++;
	break;
	case 27:
		
		goto m;
break;
	case 13://Enter
		switch(selected_item6) {
		case 0:
			exit(0);
			break;
		case 1:
			goto m;
			break;
	break;
	}
	break;
	
	case 49:
		exit(0);
		break;
	case 50:
		goto m;
		break;
	
} } }
	case 49://1
		selected_item=0;
		break;
	case 50://2
		selected_item=1;
	break;
	case 51://3
		selected_item=2;
		break;
	case 52://4
		selected_item=3;
		break;
	case 53://5
		selected_item=4;
		break;
	case 48://
		//system("cls");
		selected_item=5;
		
				while(true) {
			system("cls");
			cout<<endl<<"   Вы уверены, что хотите выйти?"<<endl<<endl;
for(int i=0;i<ex;i++){
		if (i==selected_item6){		cout<<" > ";}	else {	cout<<"   ";	}
		if(i==ex-1)
			cout<<" 2. "<<Exit[i];
		else cout<<" "<<i+1<<". "<<Exit[i]<<endl;
		} 
		

switch(getch()) {
case 72://вверх
	selected_item6 --;
	if (selected_item6<0){
		selected_item6=ex-1;
	}
	break;
	case 80://вниз
		if (selected_item6==ex-1){
		selected_item6=-1;
		}
		selected_item6++;
	break;
	case 27:
		
		goto m;
break;
	case 13://Enter
		switch(selected_item6) {
		case 0:
			exit(0);
			break;
		case 1:
			goto m;
			break;
	break;
	}
	break;
	
	case 49:
		exit(0);
		break;
	case 50:
		goto m;
		break;
	
} } }

}}  



