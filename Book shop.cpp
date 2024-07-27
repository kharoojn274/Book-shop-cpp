#include <iostream>
#include <iomanip>
#include <windows.h>
#include<conio.h>
using namespace std;

typedef struct b_shop // used to declare many variables in one place
{
	char author[20],title[20],pub[20];
	int price,copies;
}b_shop;

struct bookshop //
{
	int sum,count;
	b_shop *B;
	
bookshop()
{
	sum=0, count=0;	
	B=new b_shop[1000]; // declare the array of b_shop
}
/****************************************************************************************************
********************************ABOUT US*************************************************************
****************************************************************************************************/
void about_us()
{
/*************************************************************************************************/		
	cout<<string (80,'_');	
	cout<<"\n\n\t  !\3\3 C";Sleep(100);cout<<"I";Sleep(100);cout<<"T";Sleep(100);
	cout<<"Y";Sleep(100);cout<<" U";Sleep(100);cout<<"N";Sleep(100);cout<<"I";
	Sleep(100);cout<<"V";Sleep(100);cout<<"E";Sleep(100);cout<<"R";Sleep(100);cout<<"S";Sleep(100);
	cout<<"I";Sleep(100);cout<<"T";Sleep(100);cout<<"Y";Sleep(100);
	cout<<" OF";Sleep(100);cout<<" S";Sleep(100);cout<<"C";Sleep(100);
	cout<<"I";Sleep(100);cout<<"E";Sleep(100);cout<<"N";Sleep(100);cout<<"C";
	Sleep(100);cout<<"E";Sleep(100);
	cout<<" &";Sleep(100);cout<<" I";Sleep(100);cout<<"N";Sleep(100);cout<<"F";
	Sleep(100);cout<<"O";Sleep(100);cout<<"R";Sleep(100);cout<<"M";Sleep(100);
	cout<<"A";Sleep(100);cout<<"T";Sleep(100);cout<<"I";Sleep(100);cout<<"O";
	Sleep(100);cout<<"N";Sleep(100);cout<<" T";Sleep(100);cout<<"E";Sleep(100);
	cout<<"C";Sleep(100);cout<<"";Sleep(100);cout<<"H";Sleep(100);cout<<"N";Sleep(100);
	cout<<"O";Sleep(100);cout<<"L";Sleep(100);cout<<"O";Sleep(100);cout<<"G";Sleep(100);
	cout<<"Y \3\3!\n\n\t\t\t\t";
/********************************BY******************************************************/			
	cout<<"  C";Sleep(100);cout<<"U";Sleep(100);cout<<"S";Sleep(100);cout<<"I";Sleep(100);cout<<"T\n\n";			
	cout<<string (80,'_');
/******************************DEVELOPED BY*****************************************************/
			cout<<"\n\n\t\t\t   ";

			cout<<"D";Sleep(100); cout<<"e";Sleep(100); cout<<"v";Sleep(100); cout<<"e";Sleep(100); cout<<"l";Sleep(100); cout<<"o";Sleep(100);
			cout<<"p";Sleep(100); cout<<"e";Sleep(100); cout<<"d";Sleep(100);Sleep(100); cout<<" B";Sleep(100); cout<<"y"; cout<<" : \n";Sleep(100);

			cout<<"\t\t\t"<<string (17,'_')<<endl ;	
/************************************** PALWASHA *********************************************/	

			cout<<"\n\t\t\t";
	
			cout<<"P";Sleep(100); cout<<"A";Sleep(100); cout<<"L";Sleep(100); cout<<"W";Sleep(100);cout<<"A";Sleep(100);cout<<"S";Sleep(100);
			cout<<"H";Sleep(100); cout<<"A";Sleep(100);
}
/****************************************************************************************************
*******************************BOOK SHOP MANAGEMENT SYSTEM*******************************************
****************************************************************************************************/
void introduction()
{
	system("color f0");			
		cout<<"\n\n";
		cout<<string (80,'*') ;
		cout<<"\n\t\t  BOOKSHOP MANAGMENT SYSTEM SYSTEM\t\t\t\t\t\t\t\t\t\t\t\t\t\t";	
		cout<<string (80,'*') ;
								
	system("color f0");
		cout<<"\n\nA  Book Shop Management System, is a software system for small \n\n";
		cout<<string (80,'_') <<"\n";
		Sleep(1000);
								
		cout<<"to mid-sized management system for book shops,to insert record of books ";
		cout<<string (80,'_') <<"\n";
		Sleep(1000);
								
	//	cout<<"\n\t\t"; cout<<"mangement thier record .\n\n";
		cout<<string(80,'=');
		Sleep(1000);
								
		cout<<"\n\n\nA Bookshop Management System generally should provide the capability to more effectively plan, control\n";
		cout<<string (80,'_') <<"\n";
		Sleep(1000);
								
		cout<<"and manage Books record.\n\n";
		cout<<string (80,'_') <<"\n";								
					
		getch();
}

/*/////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////INSERTION OF DATA //////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////*/	
void insert_data() 
{
	cout<<"\n\nEnter Author of Book:";
	cin>>B[count].author;
	cout<<"Enter Title of Book:";
	cin>>B[count].title;
	cout<<"Enter Publication of Book:";
	cin>>B[count].pub;
	cout<<"Enter Price of Book:";
	cin>>B[count].price;
	cout<<"Enter no. of copies of Book:";
	cin>>B[count].copies;
	sum=sum+B[count].copies*B[count].price;
	count++;
}
/**************************************************************************************************
******************************* DISPLAYING DATA ***************************************************
**************************************************************************************************/
void display_data()
{
	cout<<setw(10)<<"Book Title"<<setw(25)<<"Author of Book"<<setw(25)<<"Publication"<<setw(20)<<"Price"<<setw(10)<<"Copies"<<endl<<endl;
	for(int i=0;i<45;i++)
	cout<<"=*";
	cout<<endl;
	for(int i=0;i<count;i++)
	{
		cout<<setw(10)<<B[i].title<<setw(25)<<B[i].author<<setw(25)<<B[i].pub<<setw(20)<<B[i].price<<setw(10)<<B[i].copies<<endl;
	}
}
/****************************************************************************************************
******************************* SEARCH THE DATA  ****************************************************
****************************************************************************************************/
int search()
{
	char author[20],title[20];
	cout<<"Enter Book title and its Author name respectively to Search in stock\n";
	cout<<"Book title :";cin>>title;cout<<" Author Name :"; cin>>author;
	for(int i=0;i<count;i++)
	{
		int j=strcmp(B[i].title,title);
		int k=strcmp(B[i].author,author);  
		if(!j&&!k)
		{
			cout<<"\n\nBook is In Stock\n";
			cout<<"It Cost Rs  "<<B[i].price<<endl;
			return i;
		}
    }
	cout<<"\n\nSEARCH IS NOT IN STOCK\n";
	return 0;	
}
/*********************************************************************************************************
*************************************STOCK****************************************************************
*********************************************************************************************************/
void stock()
{
	cout<<"\n\n\n\tTotal Number of Books in Stock is  "<<count<<endl;
	cout<<"\tPurchase Price of Total Stock is  "<<sum<<endl;
}	
/********************************************************************************************************
*******************************PURCHASE BOOKS************************************************************
********************************************************************************************************/
void purchase()
{
	int copies;
	int i; //=search();
	if(i!=0)
	{
		cout<<"enter no of copies you want to purchase: ";
		cin>>copies;
		if(B[i].copies>copies)	
		{	
			cout<<"copies are available\n";
			B[i].copies=B[i].copies-copies;
		}
	else
		cout<<copies<<" are not available\n";
	}
}	
};
//***************************END OF STRUCTURE********************************************************

/****************************************************************************************************
*********************************FLAG****************************************************************
****************************************************************************************************/
void flag ()
{
	

 		cout<<"\n";
		cout<<"******************************************************\n";cout<<"***********               *                          *\n";
		cout<<"***********            ****                          *\n";cout<<"***********          *****        *                  *\n";
		cout<<"***********        *****         ***                 *\n";cout<<"***********      ******        *******               *\n";
		cout<<"***********      ******         *****                *\n";cout<<"***********       ******       *******               *\n";
		cout<<"***********        ******      *     *               *\n";cout<<"***********          *****                           *\n";
		cout<<"***********            *****                         *\n";cout<<"***********               ****                       *\n";
		cout<<"***********                   *                      *\n";cout<<"******************************************************\n";
		
	
		cout<<"\n\n\t\t  P ";Sleep(200);cout<<"A ";Sleep(200);cout<<"K ";Sleep(200);
	
		cout<<"I ";Sleep(200);cout<<"S ";Sleep(200);cout<<"T ";Sleep(200);cout<<"A ";Sleep(200);cout<<"N   ";
		
		getch();
	   	system("cls");
	   	system("color 0f");
}

/****************************************************************************************************
*********************************MAIN****************************************************************
*****************************************************************************************************/
int main()
{
	
	flag();
	system("color f1");
	bookshop o;
	int ch; //used for switch seldection;
	while(1)
	{
	
		system("color f1");
		cout<<"\n\n";

			cout<<"\t\t"<<string (38,'=') ;

			cout<<"\n\n\t\t   BOOK SHOP MANAGMENT SYSTEM\n\n";	

			cout<<"\t\t"<<string (38,'=') ;
		
			

			cout<<"\n";
			cout<<"\t\t\n";
			cout<<" 1) ABOUT US\n";
			cout<<" 2) WHAT IS BOOK SHOP MANAGEMENT SYSTEM\n";
			cout<<" 3) NEW ENTRY\n";
			cout<<" 4) DISPLAY RECORD\n";
			cout<<" 5) SEARCH BOOKS\n";
			cout<<" 6) PURCHASE BOOKS\n";

			cout<<" 7) STOCK\n";

			cout<<" 8) EXIT\n";

			cout<<"\t\t\t\t\t\tPlease Enter An Option (1-8) : ";
		cin>>ch;
		switch(ch)
		{
			case 1: //about us
				{
					system("cls");
					system("color f1");
					o.about_us();
				}
			break;
			case 2: //About system
				{
					system("cls");
					system("color f1");
					o.introduction();
				}
			break;	
			case 3: //Insertion
				{	
					system("cls");
					system("color f1");
					o.insert_data();
				}
			break;	
			case 4: //Display
				{
					system("cls");
					system("color f1");
					o.display_data();
				}
			break;
			case 5: //Search
				{
					system("cls");
					system("color f1");
					o.search();
				}
			break;
			case 6: //purcahse
				{
					system("cls");
					system("color f1");
					o.purchase();
				}
			break;
			case 7: //stock
				{
					system("cls");
					system("color f1");
					o.stock();
				}
			break;
			case 8: //exit
				{
					return 0;
				}
			break;
			default:
				{
				cout<<"Enter a Valid choice .";
				}
			break;	
			
		}
		
	}
	
	
}
