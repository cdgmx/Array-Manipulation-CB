#include <iostream>
#include <string>
#include <iomanip>
#include <ProcessEnv.h >
#include <Windows.h>
#include <conio.h>
#include <fstream>
#include<stdio.h>
#include <vector>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int size1 = 0; //initialize the size of array 1 to 0 to know if it is still empty
	int size2 = 0;
	int size3 = 0;
	int arr1[5] = {1,2,3,4,5};
	int arr2[5];
	int arr3[5];



	int *sp1 = &size1; //pointer to size1
	int *ap1 = &arr1[0]; //pointer to array1

	int *sp2 = &size2;
	int *ap2 = &arr2[0];

	int *sp3 = &size3;
	int *ap3 = &arr3[0];

	int headers(int* arr1, int* arr2, int* size1, int* size2 )
        {




	//Header
	string str[10];
	int console_width = 120;
	int len;


	// Header Title Strings
	str[3]="Array Manipulation";
	str[1]="College of Technology";
	str[2]="Computer Engineering Department";
    //



	for(int x=0; x<5; x++) {
		len = str[x].length();
		if(len%2==0) str[x]+=" ";
		cout<<setw((console_width/2)+len/2)<<right<<str[x]<<endl;
	}


	cout<<"		Course Code: CpE 211						"<<endl;
	cout<<"		Course title: Object Oriented Program		"<<endl;
	cout<<"		Author: Deyb Monteclaro"<<endl;
	cout<<"		Lab1: Review of C++ Arrays & Strings"<<endl;
	cout<<"________________________________________________________________________________________________________________________";
    cout<<" "<<endl;

	//array display

	cout<<"		   	Array 1: ";

	if(*size1==0)
	{
		cout<<"No Value";
	}
	else
	{
		for(int a=0; a<*size1; a++)
		{
		cout<< "["<<arr1[a]<<"]";
		}
	}



	cout<<"\n";




	cout<<"			Array 2: ";
	if(*size2==0)
	{
		cout<<"No Value";
	}
	else
	{
		for(int a=0; a<*size2; a++)
		{
		cout<< "["<<arr2[a]<<"]";
		}
	}


	cout<<"\n";
	cout<<"			1) Create                                       "<<endl;
	cout<<"			2) Add                                            "<<endl;
	cout<<"			3) Delete                                    "<<endl;
	cout<<"			4) Merge                                   "<<endl;
	cout<<"			5) Exit                               "<<endl;


}


//start of Choice 1
int prob1() {

	int ch;



	int* harr1 = new int[*sp1];
	int* harr2 = new int[*sp2];

	Choice:
	cout<<"Create 2 Arrays \n";
	cout<<"Array 1:";

	if (*sp1==0)
        {
        cout<<"No Value";
        }
	else
        {
        for(int x=0; x<*sp1; x++)
            {
            cout<< "["<<harr1[x]<<"]";
            }

        }

	cout<<"\nArray 2:";

    if (*sp2==0)
        {
		cout<<"No Value";
        }
	else
        {
		for(int x=0; x<*sp2; x++)
            {
            cout<< "["<<harr2[x]<<"]";
            }
        }

	cout<<"\nEnter [1] for array 1\nEnter [2] for array 2\nEnter [3] to go back to main\nChoice:";
	cin>>ch;
	system("cls");


	if (ch<1||ch>3)
        { //need to check if integer or not
			cout<<"Wrong choice";
			system("cls");
			goto Choice;
        }

	else if(ch==1)
        {

            for (int x=0; x<*sp1; x++)
                {
                    cout<<"Array 1 Element[";
                    cout<<x<<"]: ";
                    cin>>harr1[x];
                }

            system("cls");
            cout<<"The array 1 is: \n";


            for(int x=0; x<*sp1; x++)
                {
                    cout<< "["<<harr1[x]<<"]";
                }

            ap1=&harr1[0];

            cout<<"\n";
            system("pause");
            system("cls");
            goto Choice;
		}

	else if(ch==2)
        {


            for (int x=0; x<*sp2; x++)
                {
                    cout<<"Array 2 Element[";
                    cout<<x<<"]: ";
                    cin>>harr2[x];
                }

            cout<<"The array 2 is: \n";



            for(int x=0; x<*sp2; x++)
                {
                    cout<< "["<<harr2[x]<<"]";
                }
             ap2=&harr2[0];

            cout<<"\n";
            system("pause");
            system("cls");
            goto Choice;
		}


	else if(ch==3)
	{

        delete [] harr1;
        delete [] harr2;

         for(int x=0; x<*sp2; x++)
                {
                    cout<< "["<<harr2[x]<<"]";
                }
		return 0;
	}







	}





int main()
    {

    Choice:
    headers(ap1, ap2, sp1, sp2);
	int choice;
	bool ok=false;
	while(!ok) {

		cout<<"\n\nEnter Choice: ";
		cin>>choice;

		if(!(cin.good())||choice<1||choice>10) {

			cout<<"\nInvalid! Please Try Again"<<endl;
			cin.clear();
			cin.ignore(INT_MAX,'\n');
			system("pause");
			system("cls");
			main();
		} else
			ok=true;
		system("cls");
	}






	switch(choice) {
		case(1):

		    //create array here instead of making it global
		    cout<<"Declare size of Array 1: ";
		    cin>>*sp1;
            cout<<"Declare size of Array 2: ";
		    cin>>*sp2;







			prob1();
			system ("Pause");
			system ("cls");
			main();
	}
	return 0;
}




