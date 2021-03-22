#include<iostream>
using namespace std;

const int MAX=10000 ;

int age[MAX];
string name[MAX] ;
double salary[MAX];
string gender[MAX];
int add =0 ;
//***********************************************************************************
  int menu(){

      int choice = -1;
      while (choice== -1){
cout << "\nEnter your choice:\n";
		cout << "1) Add new employee\n";
		cout << "2) Print all employees\n";
		cout << "3) Delete by age\n";
		cout << "4) Update Salary by name\n";
		cout << "5) Exit\n";
		cin >>choice ;

		if (!(choice>=1&&choice<=5)){
      cout << "INVALID CHOICE : PLEASE ENTER RIGHT CHOICE : \N";
      choice = -1;
		}
  }
  }
//***********************************************************************************
 void read(){

cout << "ENRTER  NAME :\n";
    cin >>name[add];
 cout << "ENRTER  AGE :\n";
    cin >>age[add];
cout << "ENRTER  GENDER :\n";
    cin >>gender[add];
cout << "ENRTER  SALARY :\n";
    cin >>salary[add];
    add++;
 }
//***********************************************************************************
void print(){

 cout <<"*********************************************\n";
 for (int i =0 ; i < add ; i++ ){
    if (age[i]!=-1){
            if (i!=0)
cout <<"----------\n";
        cout << "employee name "<<" is "<<name[i]<<"\n";
                cout << "gender "<<" is "<<gender[i]<<"\n";
        cout << "age of  "<<" is "<<age[i]<<"\n";
                cout << "salary "<<" is "<<salary[i]<<"\n\n";

    }

 }

}

//***********************************************************************************
void delet(){
 cout << "ENTER STAER AND END AGE : ";
 int start ,en ;
 cout <<"start is :";
 cin >>start;
cout <<"end is :";
 cin >>en;

 for (int i =0 ; i <add; i++) {
    if (age[i]>=start && age[i]<=en)
    age[i]=-1;

 }

}
//***********************************************************************************
void update(){

cout << "ENTER NAME THAT YOU WANT TO  UPDATE \N";
string nam;
cin >>nam;
cout << "ENTER SALARY UPDATE \N";
int nsa;
cin >>nsa;
bool isfound = false;
for (int i =0 ; i < add ; i ++ ){

    if (nam==name[i]&&age[i]!=-1)
    {
        salary[i]=nsa;
        isfound=true;
        break;
    }
}
if (!isfound)
cout <<"  SORRY I DON'T FINF THIS NAME -_- " ;
}
//***********************************************************************************

void systm(){
    while (true)
{
    int choise=menu();

     if (choise==1)
        read();
       else if (choise==2)
          print();
         else if (choise==3)
            delet();
           else if (choise==4)
              update();
                else
                    break ;

}

}
//***********************************************************************************


int main (){

systm();
	return 0;
}
//***********************************************************************************
