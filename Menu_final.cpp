// Menu_final.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

void pe4alno (){
	cout << endl<< "    ** ������� �������� �� ��������. �������� ���� ���������. **"<< endl;
}


int _tmain(int argc, _TCHAR* argv[])
{ 
	setlocale(LC_ALL,"russian");
int const k=6;
int selected_item=0;
m:
string menu []={"������ � �������","��������","���������� ���������","�������� ���������","��������������","�����"};

int const podmenu1=3;
int selected_item1=0;
string  menu1 []={ " ��������� �� ����� ", " ��������� � ���� ", " ������� � ������� ����"};


int const podmenu2=3;
int selected_item2=0;
string  menu2 []={ " �������� ����� ������ ", " �������� �� ����� ", " ������� � ������� ����"};

int const podmenu3=4;
int selected_item3=0;
string  menu3 []={" ���������� �������� � ������ ������"," ���������� �������� � ����� ������"," ���������� �������� �� �����"," ������� � ������� ����"};

int const podmenu4=4;
int selected_item4=0;
string  menu4 []={" �������� �������� � ������ ������"," �������� �������� � ����� ������"," �������� �������� �� �����", " ������� � ������� ����"};


int const podmenu5=3;
int selected_item5=0;
string  menu5 []={" ��������� ������ ", " ����������� �������� ", " ������� � ������� ����"};

int const ex=2;
int selected_item6=0;
string Exit[]={"��","���"};

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
case 72://�����
	selected_item --;
	if (selected_item<0){
		selected_item=k-1;
	}
	break;
	case 80://����
		if (selected_item==k-1){
		selected_item=-1;
		}
		selected_item++;
	break;
	case 27:
			while(true) {
			system("cls");
			cout<<endl<<"   �� �������, ��� ������ �����?"<<endl<<endl;;
for(int i=0;i<ex;i++){
		if (i==selected_item6){	cout<<" > ";}else {	cout<<"   ";}
		if(i==ex-1)
			cout<<" 2. "<<Exit[i];
		else cout<<" "<<i+1<<". "<<Exit[i]<<endl;
		} 
		

switch(getch()) {
case 72://�����
	selected_item6 --;
	if (selected_item6<0){
		selected_item6=ex-1;
	}
	break;
	case 80://����
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
	case 0: //������ �������
				
		while(true) {
			system("cls");
			cout<< endl<<"   ����. ������ � �������"<<endl<<endl;
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
			case 72://�����
	selected_item1 --;
	if (selected_item1<0){
		selected_item1=podmenu1-1;
	}
	break;
	
	case 80://����
		if (selected_item1==podmenu1-1){
		selected_item1=-1;
		}
		selected_item1++;
		
	break;
	case 27:
		
		goto m;
		break;
	case 13:
		switch(selected_item1) { //�� ��������
		case 0:
			system("cls");
						cout << "  �������. �������� "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. ��������� � ����."<<endl;
						switch (getch()){
						case 13: goto m;}
		case 1:
			system("cls");
						cout << "  �������. ���������� "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. ��������� � ����."<<endl;
						switch (getch()){
						case 13: goto m;}
		case 2:
			goto m;
		
	}
	break;
	//�� �������
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


	case 1://������� ����� 2
		while(true) {
			system("cls");
			cout<< endl<< "  ����. ��������"<<endl<<endl;
for(int i=0;i<podmenu2;i++){
		if (i==selected_item2){
		cout<<" > ";}		else {cout<<"   ";}
		
		if(i==podmenu2-1){	cout<<" 0. "<<menu2[i];}
		else cout<<" "<<i+1<<". "<<menu2[i]<<endl; 
}
		switch(getch()) {
			case 72://�����
	selected_item2 --;
	if (selected_item2<0){
		selected_item2=podmenu2-1;
	}
	break;
	
	case 80://����
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
			cout << "  �������. �������� ����� ������. "<< endl<< endl; 
			pe4alno(); 
			cout << endl<<" >   1. ��������� � ����."<<endl;
			switch (getch()){
			case 13: goto m;}

		case 1:
			system("cls");
			cout << "  �������. �������� ����� ������. "<< endl<< endl; 
			pe4alno(); 
			cout << endl<<" >   1. ��������� � ����."<<endl;
			switch (getch()){
			case 13: goto m;}


		case 2:		goto m;	break;
	}
	break;
			case 49://1
		selected_item2=0;
		break;
	case 50://2
		selected_item2=1;
		break; 
		
	case 48:
		selected_item2=2;
		
		goto m;
				
		} }
		break; 
	case 2://������� ����� 3
			while(true) {
			system("cls");
			cout<< endl<<"   ����. ���������� ���������"<<endl<<endl;
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
			case 72://�����
	selected_item3 --;
	if (selected_item3<0){
		selected_item3=podmenu3-1;
	}
	break;
	
	case 80://����
		if (selected_item3==podmenu3-1){
		selected_item3=-1;
		}
		selected_item3++;
		
	break;
	case 27:
		
		goto m;
		break;
	case 13:
		switch(selected_item3) {
		case 0:
			system("cls");
						cout << "  �������. ���������� �������� � ������ ������. "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. ��������� � ����."<<endl;
						switch (getch()){
						case 13: goto m;}
		case 1:
			system("cls");
						cout << "  �������. ���������� �������� � ����� ������. "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. ��������� � ����."<<endl;
						switch (getch()){
						case 13: goto m;}
		case 2:
			system("cls");
						cout << "  �������. ���������� �������� � �������� ������. "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. ��������� � ����."<<endl;
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
	case 3://������� ����� 4
			while(true) {
			system("cls");
			cout<< endl<<"   ����. ��������"<<endl<<endl;
for(int i=0;i<podmenu4;i++){
		if (i==selected_item4){cout<<" > ";}		else {	cout<<"   ";	}
		
		if(i==podmenu4-1){
			cout<<" 0. "<<menu4[i];}
		else cout<<" "<<i+1<<". "<<menu4[i]<<endl; 
}
		switch(getch()) {
			case 72://�����
	selected_item4 --;
	if (selected_item4<0){
		selected_item4=podmenu4-1;
	}
	break;
	
	case 80://����
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
						cout << "  �������. �������� �������� � ������ ������. "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. ��������� � ����."<<endl;
						switch (getch()){
						case 13: goto m;}
		case 1:
			system("cls");
						cout << "  �������. �������� �������� � ����� ������. "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. ��������� � ����."<<endl;
						switch (getch()){
						case 13: goto m;}

		case 2:
			system("cls");
						cout << "  �������. �������� �������� �� �����. "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. ��������� � ����."<<endl;
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

	case 4://������� ����� 5
			while(true) {
			system("cls");
			cout<< endl<< "   ����. ��������������"<<endl<<endl;
for(int i=0;i<podmenu5;i++){
		if (i==selected_item5){	cout<<" > ";}		else {cout<<"   ";}
		
		if(i==podmenu5-1){
			cout<<" 0. "<<menu5[i];}
		else cout<<" "<<i+1<<". "<<menu5[i]<<endl; 
}
		switch(getch()) {
			case 72://�����
	selected_item5 --;
	if (selected_item5<0){
		selected_item5=podmenu5-1;
	}
	break;
	
	case 80://����
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
						cout << "  �������. ��������� ��������. "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. ��������� � ����."<<endl;
						switch (getch()){
						case 13: goto m;}
		case 1:
			system("cls");
						cout << "  �������. ���������� ���������. "<< endl<< endl; 
						pe4alno(); 
						cout << endl<<" >   1. ��������� � ����."<<endl;
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
	case 5://�����
		
		while(true) {
			system("cls");
			cout<<endl<<"   �� �������, ��� ������ �����?"<<endl<<endl;
for(int i=0;i<ex;i++){
		if (i==selected_item6){	cout<<" > ";}		else {cout<<"   ";	}
		if(i==ex-1)
			cout<<" 2. "<<Exit[i];
		else cout<<" "<<i+1<<". "<<Exit[i]<<endl;
		} 
		

switch(getch()) {
case 72://�����
	selected_item6 --;
	if (selected_item6<0){
		selected_item6=ex-1;
	}
	break;
	case 80://����
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
			cout<<endl<<"   �� �������, ��� ������ �����?"<<endl<<endl;
for(int i=0;i<ex;i++){
		if (i==selected_item6){		cout<<" > ";}	else {	cout<<"   ";	}
		if(i==ex-1)
			cout<<" 2. "<<Exit[i];
		else cout<<" "<<i+1<<". "<<Exit[i]<<endl;
		} 
		

switch(getch()) {
case 72://�����
	selected_item6 --;
	if (selected_item6<0){
		selected_item6=ex-1;
	}
	break;
	case 80://����
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