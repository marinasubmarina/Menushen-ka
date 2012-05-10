// Menu_final.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <cstdlib>
#include <stdio.h>
#include <fstream>
#include <assert.h>
using namespace std;

struct Node{
	Node *next;
	string data;
	int id;
	Node *prev;//предыдущий
};
class Gloss{
	Node *first;
	Node *last;
	int num;
public:
	Gloss():first(NULL){}
	void Add(string n/*, int i*/){
		Node *current = first;
		Node *newlink = new Node;
		if (first==NULL){//если первый добавляем
			num=0;
			first=newlink;
			newlink->next=NULL;
			newlink->prev=NULL;
			newlink->data=n;
			newlink->id=num;
			num++;
		}else{
			while (current->next!=NULL) {//идем до последнего
				current=current->next;
			}
			current->next=newlink;//последний теперь указывает на новый
			first->prev=newlink;
			newlink->next=NULL;
			newlink->prev=current;
			newlink->data=n;
			newlink->id=num;
			num++;
		}
	}
	void addcenter (string n){
	Node *current = first;
	Node *newlink = new Node;
	Node *temporary= new Node;
		if(first == NULL)
		{
			num=0;
			newlink->data=n;
			newlink->id=num;
			newlink->next=NULL;
			newlink->prev=NULL;
			first=newlink;
			num++;
		}
		else{
			int number_of_elements=0;
			while (current)//идем до конца 
			{
				number_of_elements++;
				current=current->next;
			}
			current=first;
			int needed_el;
			if (number_of_elements%2 ==1)
			{
				needed_el=number_of_elements/2;
			}
			else 
			{
				needed_el=(number_of_elements-1)/2;
			}
			int shet=0;
			while(shet<needed_el+1)
			{
				if (shet == needed_el)
				{
					newlink->data=n;
					newlink->id=num;
					num++;
					newlink->next=current->next;
					newlink->prev=current;
					current->next=newlink;
				}
				shet++;
				current=current->next;
				//current->prev=newlink;
			}
		}
}
	void Showfromfirst(){
		Node *current = first;
		do {
			cout<<current->data<<"   "<<current->id<<endl;
			current=current->next;
		} while (current!=NULL);
	}
	void PrintToFile(){
		ofstream out;

		out.open("New List.bin");
		Node *current = first;
	do{
		//out<<current->id<<" "«current->data<<"\n";
		out<<current->data<<"\n";
		current=current->next;
	} while (current!=NULL);
	out.close();
	}

        void ExtractFromFile(Gloss *name){
			ifstream fin;
			string str;
			string paststring="ololo";

			fin.open("New List.bin",ios::in);
			assert (!fin.fail( ));

		while (!fin.eof( )){
				fin >> str;
				if(str != paststring){
			name->Add(str);
			paststring=str;
			}
		}
		fin.close( );
		//assert(!fin.fail( ));
	}

	void Del(){
	 //if (num>0) num--;
        while (first!= NULL){

    Node *current=first;
    first=first->next;
    delete current;
    }
		first=NULL;
}
};

void pe4alno (){
	cout << endl<< "    ** Функция временно не работает. Приносим свои извенения. **"<< endl;
}


int _tmain(int argc, _TCHAR* argv[])
{ 
	setlocale(LC_ALL,"russian");
	Gloss *tes=new Gloss;
int const k=6;
int selected_item=0;
string stroka;
m:
string menu []={"Работа с файлами","Просмотр","Добавление элементов","Удаление элементов","Редактирование","Выход"};

int const podmenu1=3;
int selected_item1=0;
string  menu1 []={ " Загрузить из файла ", " Сохранить в файл ", " Возврат в главное меню"};

int const podmenu2=2;
int selected_item2=0;
string  menu2 []={ " Просмотр списка ", " Возврат в главное меню"};

int const podmenu3=2;
int selected_item3=0;
string  menu3 []={" Добавление элемента в середину списка"," Возврат в главное меню"};

int const podmenu4=2;
int selected_item4=0;
string  menu4 []={" Удаление элемента  из середины списка", " Возврат в главное меню"};


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
	
	case 27: //эскейп
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
		m1:		
		while(true) {
			system("cls");
			cout<< endl<<"   Меню. Работа с файлами"<<endl<<endl;
for(int i=0;i<podmenu1;i++){
		if (i==selected_item1){		cout<<" > ";		}
		else {		cout<<"   ";		}
		
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
			system("cls");
						cout << "  Подменю. Загрузка "<< endl<< endl; 
						tes->Del();
							tes->ExtractFromFile(tes);
						cout << endl<<" >   1. Вернуться в меню."<<endl;
						switch (getch()){
						case 13: goto m1;}
		case 1:
			system("cls");
						cout << "  Подменю. Сохранение "<< endl<< endl; 
						tes->PrintToFile();
						cout << endl<<" >   1. Вернуться в меню."<<endl;
						switch (getch()){
						case 13: goto m1;}
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
		} }


	case 1://подменю номер 2
		m2:
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
	case 27:		goto m;		break;
		
	case 13:
		switch(selected_item2) {
		case 0:
			system("cls");
			cout << "  Подменю. Просмотр списка. "<< endl<< endl; 
			tes->Showfromfirst();
			cout << endl<<" >   1. Вернуться в меню."<<endl;
			switch (getch()){
			case 13: goto m2;}

		case 1:		goto m;	break;
	}
	break;
			case 49://1
		selected_item2=0;
		break;
			
	case 48:
		selected_item2=1;
		break;
				
		} }
		break; 
	case 2://подменю номер 3
		m3:
			while(true) {
			system("cls");
			cout<< endl<<"   Меню. Добавление элементов"<<endl<<endl;
for(int i=0;i<podmenu3;i++){
		if (i==selected_item3){		cout<<" > ";		}
		else {		cout<<"   ";		}
		
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
	case 27:		goto m;		break;
	case 13:
		switch(selected_item3) {
		case 0:
			system("cls");
						cout << "  Подменю. Добавление элемента в начало списка. "<< endl<< endl; 
						
						cin>>stroka;
						cout<<endl;
						tes->addcenter(stroka); //вызов добавления в середину
						cout<<endl<<endl;
						cout << endl<<" >   1. Вернуться в меню."<<endl;
						switch (getch()){
						case 13: goto m3;
						}
		case 1:			goto m;	break;
	}
	break;
	case 49://1
		selected_item3=0;		break;
		
	case 48:
		selected_item3=1; break;
						} }
		break; 


	case 3://подменю номер 4
		m4:
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
						cout << "  Подменю. Удаление элемента. "<< endl<< endl; 
						tes -> Del(); 
						cout << "  Элемент удален  " << endl;
						cout << endl<<" >   1. Вернуться в меню."<<endl;
						switch (getch()){
						case 13: goto m4;}
		case 1: goto m; break;
	break;
	}
	break;
	case 49://1
		selected_item4=0;
		break;
			
	case 48:
		selected_item4=1;
				} }
		break; 

	case 4://подменю номер 5
		m5:
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
						case 13: goto m5;}
		case 1:
			system("cls");
						cout << "  Подменю. Перемещене элементов. "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. Вернуться в меню."<<endl;
						switch (getch()){
						case 13: goto m5;}
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
			goto m;
			break;
		case 1:
			exit(0);
			break;
	break;
	}
	break;
	
	case 49:
		goto m;
		break;
	case 50:
		exit(0);
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
			goto m;
			break;
		case 1:
			exit(0);
			break;
	break;
	}
	break;
	
	case 49:
		goto m;
		break;
	case 50:
		exit(0);
		break;
	
	
} } }

}}  




