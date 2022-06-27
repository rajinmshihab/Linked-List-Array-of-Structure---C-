#include <iostream>
#include <Windows.h>
#include <string>
#include <algorithm>
#include <iomanip>  
#include "Source23232323.h"
#include<istream>
#include<fstream>

using namespace std;

int choice; int ID = 6;



class loginManager
{
public:
	void login();
private:
	string UserName1 = "Camille";
	string password1 = "tp061802";
	string UserName2 = "Rajin";
	string Password2 = "tp059508";
};
void loginManager::login()
{
loginstart:

	string UserName;
	string password;
	cout << "\t\t\t\t\t\t                ______________eXel_____________" << endl;
	cout << "\t\t\t\t\t\t               |                               |" << endl;
	cout << "\t\t\t\t\t\t               |*******************************|" << endl;
	cout << "\t\t\t\t\t\t               |[---TUTOR MANAGEMENT SYSTEM---]|" << endl;
	cout << "\t\t\t\t\t\t               |*******************************|" << endl;
	cout << "\t\t\t\t\t\t               |_______________________________|" << endl;
	cout << endl;
	cout << endl;

	cout << "\t\t\t\t\t\t\t  Enter Your UserName Please : ";
	cin >> UserName;
	if (UserName == UserName1 || UserName == UserName2) {
		cout << "\t\t\t\t\t\t\t  Enter Your Password Please : ";


		cin >> password;
	}
	else {
		cout << "\n\n\t\t\t\t\t\t\t ++You Have Intered Wrong UserName++" << endl;
		cout << endl;
		cout << endl;

		goto loginstart;

	}

	if (password == password1 || password == Password2) {
		cout << "\n\n\t\t\t\t\t\t\t ++Welcome To Tutor Managment Sytem Admin++" << endl;
	}
	else {
		cout << "\n\n\t\t\t\t++You Have Intered Wrong PassWord++";
		cout << endl;
		cout << endl;
		goto loginstart;
	}
}





struct Center {
	int CenterCode;
	string CenterName;
	string CenterLocation;
};

struct Tutor {
	struct Tutor* previous;
	int ID;
	string FirstName;
	string LastName;
	struct Date* DateOfJoined, * DateOfTerminated;
	double HourlyPayment;
	struct Center* center;
	struct Course* Subject;
	string PhoneNumber;
	string Address;
	int Rate;
	struct Tutor* next;
} *start, * newnode, * back, * current, * last;


struct Course {
	int Code;
	string Name;
};

struct Date {
	int Day;
	int Month;
	int Year;
};

void bubbleSort(struct Tutor* start, int choice)
{
	int swapped;
	struct Tutor* PTR;
	struct Tutor*ptr  = NULL;

	
	if (start == NULL)
		return;
	switch (choice) {
	case 1:
		do {
			swapped = 0;
			PTR = start;
			while (PTR->next != ptr) 
			{
				
				if (PTR->ID > PTR->next->ID)
				{
					swap(PTR->ID, PTR->next->ID); swap(PTR->FirstName, PTR->next->FirstName);
					swap(PTR->LastName, PTR->next->LastName);
					swap(PTR->DateOfJoined->Day, PTR->next->DateOfJoined->Day); swap(PTR->DateOfJoined->Month, PTR->next->DateOfJoined->Month);
					swap(PTR->DateOfJoined->Year, PTR->next->DateOfJoined->Year);
					swap(PTR->DateOfTerminated->Day, PTR->next->DateOfTerminated->Day); swap(PTR->DateOfTerminated->Month, PTR->next->DateOfTerminated->Month);
					swap(PTR->DateOfTerminated->Year, PTR->next->DateOfTerminated->Year);
					swap(PTR->HourlyPayment, PTR->next->HourlyPayment);
					swap(PTR->center->CenterCode, PTR->next->center->CenterCode);
					swap(PTR->center->CenterName, PTR->next->center->CenterName);
					swap(PTR->center->CenterLocation, PTR->next->center->CenterLocation);
					swap(PTR->Subject->Code, PTR->next->Subject->Code);
					swap(PTR->Subject->Name, PTR->next->Subject->Name);
					swap(PTR->PhoneNumber, PTR->next->PhoneNumber); swap(PTR->Address, PTR->next->Address);
					swap(PTR->Rate, PTR->next->Rate);
					swapped = 1; 
				}
				PTR = PTR->next;
			}
			ptr = PTR;
		} while (swapped); 
		break;
	
	case 2:
		do {
			swapped = 0;
			PTR = start;

			while (PTR->next != ptr) 
			{
				
				if (PTR->HourlyPayment > PTR->next->HourlyPayment)
				{
					swap(PTR->ID, PTR->next->ID); swap(PTR->FirstName, PTR->next->FirstName);
					swap(PTR->LastName, PTR->next->LastName);
					swap(PTR->DateOfJoined->Day, PTR->next->DateOfJoined->Day); swap(PTR->DateOfJoined->Month, PTR->next->DateOfJoined->Month);
					swap(PTR->DateOfJoined->Year, PTR->next->DateOfJoined->Year);
					swap(PTR->DateOfTerminated->Day, PTR->next->DateOfTerminated->Day); swap(PTR->DateOfTerminated->Month, PTR->next->DateOfTerminated->Month);
					swap(PTR->DateOfTerminated->Year, PTR->next->DateOfTerminated->Year);
					swap(PTR->HourlyPayment, PTR->next->HourlyPayment);
					swap(PTR->center->CenterCode, PTR->next->center->CenterCode);
					swap(PTR->center->CenterName, PTR->next->center->CenterName);
					swap(PTR->center->CenterLocation, PTR->next->center->CenterLocation);
					swap(PTR->Subject->Code, PTR->next->Subject->Code);
					swap(PTR->Subject->Name, PTR->next->Subject->Name);
					swap(PTR->PhoneNumber, PTR->next->PhoneNumber); swap(PTR->Address, PTR->next->Address);
					swap(PTR->Rate, PTR->next->Rate);
					swapped = 1;
				}
				PTR = PTR->next;
			}
			ptr = PTR;
		} while (swapped); 
		break;
	case 3:
		do {
			swapped = 0;
			PTR = start;

			while (PTR->next != ptr) 
			{
				
				if (PTR->Rate > PTR->next->Rate)
				{
					swap(PTR->ID, PTR->next->ID); swap(PTR->FirstName, PTR->next->FirstName);
					swap(PTR->LastName, PTR->next->LastName);
					swap(PTR->DateOfJoined->Day, PTR->next->DateOfJoined->Day); swap(PTR->DateOfJoined->Month, PTR->next->DateOfJoined->Month);
					swap(PTR->DateOfJoined->Year, PTR->next->DateOfJoined->Year);
					swap(PTR->DateOfTerminated->Day, PTR->next->DateOfTerminated->Day); swap(PTR->DateOfTerminated->Month, PTR->next->DateOfTerminated->Month);
					swap(PTR->DateOfTerminated->Year, PTR->next->DateOfTerminated->Year);
					swap(PTR->HourlyPayment, PTR->next->HourlyPayment);
					swap(PTR->center->CenterCode, PTR->next->center->CenterCode);
					swap(PTR->center->CenterName, PTR->next->center->CenterName);
					swap(PTR->center->CenterLocation, PTR->next->center->CenterLocation);
					swap(PTR->Subject->Code, PTR->next->Subject->Code);
					swap(PTR->Subject->Name, PTR->next->Subject->Name);
					swap(PTR->PhoneNumber, PTR->next->PhoneNumber); swap(PTR->Address, PTR->next->Address);
					swap(PTR->Rate, PTR->next->Rate);
					swapped = 1;
				}
				PTR = PTR->next;
			}
			ptr = PTR;
		} while (swapped); 
		break;
	}
}
void display_ascending() {
	system("CLS");
	cout << "\n\t\t\t------------------------------------------------------------------------------------------------------ - " << endl;
	cout << "\t\t\t------------------------------------- Sort Tutor By Ascending order  ---------------------------------------------" << endl;
	cout << "\t" << setw(4); cout << "|ID|"; cout << setw(13) << "|FirstName|"; cout << setw(12) << "|LastName|"; cout << setw(14) << "|DateOfJoined|";
	cout << setw(18) << "|DataOfTerminated|"; cout << setw(6) << "|HourlyPayment|"; cout << setw(14) << "|CenterCode|"; cout << setw(18) << "|CenterLocation|"; cout << setw(14) << "|CenterName|";
	cout << setw(11) << "|CourseCODE|"; cout << setw(11) << "|CourseNAME|"; cout << setw(21) << "|PhoneNumer|"; cout << setw(23) << "|Adress|"; cout << setw(5) << "|Rate|" << endl;
	current = start; 
	while (current != NULL) {
		cout << "\t" << setw(6) << current->ID << setw(14) << current->FirstName << setw(13) << current->LastName << setw(7);
		cout << current->DateOfJoined->Day << "/" << current->DateOfJoined->Month << "/" << current->DateOfJoined->Year << setw(10);
		cout << current->DateOfTerminated->Day << "/" << current->DateOfTerminated->Month << "/" << current->DateOfTerminated->Year << setw(11);
		cout << current->HourlyPayment << setw(10) << current->center->CenterCode << setw(21) << current->center->CenterLocation;
		cout << setw(11) << current->center->CenterName;
		cout << setw(12) << current->Subject->Code << setw(13) << current->Subject->Name;
		cout << setw(17) << current->PhoneNumber << setw(30) << current->Address;
		cout << setw(10) << current->Rate;
		cout << endl;
		current = current->next; 
	}
	cout << "\t\t\t	Press Enter Key To Go Back To Main Menu :)" << endl;
	cout << "	"; cin.get();
	if (cin.get() == '\n') {
		cout << "\t\t\t	Going Back To Main Menu:)" << endl;
		Sleep(2000); 
		system("CLS"); 
	}
}
void SortMenu() {
	int choice; int i = 0; int arraySize = 0;
	cout << "\n\t\t\t------------------------------------------------------------------------------------------------------ - " << endl;
	cout << "\t\t\t------------------------------------- Sort Tutor By Ascending order  ---------------------------------------------" << endl;
	cout << "\t\t\t  1. Tutor ID                         " << endl;
	cout << "\t\t\t  2. Hourly Payment                        " << endl;
	cout << "\t\t\t  3. Tutor Rate                       " << endl;
	cout << "\t\t\t  4. Main Menu                            " << endl;
	cout<< "\t\t\t\t{ Enter Your Choice : [1 / 2 / 3 /4] } : ";
error:
	cin >> choice;
	if (choice >= 0 && choice <= 3) {
		bubbleSort(start, choice); 
		display_ascending(); 
	}
	else if (choice == 4) {
		cout << "\t\t\t\tGoing Back To Main Menu:)";
		Sleep(3000); 
		system("CLS"); 
	}
	else {
		cout << "\n\n\t\t\t\tYou Entred Wrong Value! Please Try Again? ";
		Sleep(2000); 
		goto error; 
	}
}

void Data() {
	newnode = new Tutor; 
	newnode->DateOfJoined = new Date;
	newnode->DateOfTerminated = new Date;
	newnode->center = new Center;
	newnode->Subject = new Course;
	newnode->ID = 400;
	newnode->next = NULL;
	newnode->previous = NULL;

	newnode->DateOfTerminated->Day = 0; newnode->DateOfTerminated->Month = 0; newnode->DateOfTerminated->Year = 0;
	newnode->center->CenterCode = 122;
	newnode->center->CenterName = "Orange";
	newnode->center->CenterLocation = "Johor";
	newnode->FirstName = "Camille";
	newnode->LastName = "Alchami";
	newnode->HourlyPayment = 79;
	newnode->DateOfJoined->Day = 1;
	newnode->DateOfJoined->Month = 1;
	newnode->DateOfJoined->Year = 2010;
	newnode->Subject->Code = 125;
	newnode->Subject->Name = "Music";
	newnode->PhoneNumber = "0182692257";
	newnode->Address = "50250, Jln Sahabat, KL";
	newnode->Rate = 5;

	if (start == NULL) {
		start = last = newnode; 
	}
	else {
		newnode->previous = last; 
		last->next = newnode; 
		last = newnode; 
	}

	newnode = new Tutor; 
	newnode->DateOfJoined = new Date;
	newnode->DateOfTerminated = new Date;
	newnode->center = new Center;
	newnode->Subject = new Course;
	newnode->ID = 111;
	newnode->next = NULL;
	newnode->previous = NULL;

	newnode->DateOfTerminated->Day = 0; newnode->DateOfTerminated->Month = 0; newnode->DateOfTerminated->Year = 0;
	newnode->center->CenterCode = 232;
	newnode->center->CenterName = "Banan";
	newnode->center->CenterLocation = "Kelantan";
	newnode->FirstName = "Rajin";
	newnode->LastName = "Muhtade ";
	newnode->HourlyPayment = 78;
	newnode->DateOfJoined->Day = 9;
	newnode->DateOfJoined->Month = 9;
	newnode->DateOfJoined->Year = 2009;
	newnode->Subject->Code = 122;
	newnode->Subject->Name = "Health";
	newnode->PhoneNumber = "0182773212";
	newnode->Address = "52521, Jln Love, Selangor";
	newnode->Rate = 5;

	if (start == NULL) {
		start = last = newnode; 
	}
	else {
		newnode->previous = last; 
		last->next = newnode;
		last = newnode; 
	}

	newnode = new Tutor; 
	newnode->DateOfJoined = new Date;
	newnode->DateOfTerminated = new Date;
	newnode->center = new Center;
	newnode->Subject = new Course;
	newnode->ID = 222;
	newnode->next = NULL;
	newnode->previous = NULL;

	newnode->DateOfTerminated->Day = 0; newnode->DateOfTerminated->Month = 0; newnode->DateOfTerminated->Year = 0;
	newnode->center->CenterCode = 342;
	newnode->center->CenterName = "Apple";
	newnode->center->CenterLocation = "Penang";
	newnode->FirstName = "Caroline";
	newnode->LastName = "Ginger";
	newnode->HourlyPayment = 60;
	newnode->DateOfJoined->Day = 12;
	newnode->DateOfJoined->Month = 12;
	newnode->DateOfJoined->Year = 2012;
	newnode->Subject->Code = 121;
	newnode->Subject->Name = "Mathematics";
	newnode->PhoneNumber = "0182331212";
	newnode->Address = "54542, Jln Hug, Penang";
	newnode->Rate = 3;

	if (start == NULL) {
		start = last = newnode; 
	}
	else {
		newnode->previous = last;
		last->next = newnode;
		last = newnode; 
	}

	newnode = new Tutor; 
	newnode->DateOfJoined = new Date;
	newnode->DateOfTerminated = new Date;
	newnode->center = new Center;
	newnode->Subject = new Course;
	newnode->ID = 333;
	newnode->next = NULL;
	newnode->previous = NULL;

	newnode->DateOfTerminated->Day = 0; newnode->DateOfTerminated->Month = 0; newnode->DateOfTerminated->Year = 0;
	newnode->center->CenterCode = 452;
	newnode->center->CenterName = "DragonFruit";
	newnode->center->CenterLocation = "Perak";
	newnode->FirstName = "Clara";
	newnode->LastName = "Love";
	newnode->HourlyPayment = 80;
	newnode->DateOfJoined->Day = 4;
	newnode->DateOfJoined->Month = 4;
	newnode->DateOfJoined->Year = 2004;
	newnode->Subject->Code = 125;
	newnode->Subject->Name = "Science";
	newnode->PhoneNumber = "0173321119";
	newnode->Address = "54431, Jln Suia, Perak";
	newnode->Rate = 5;

	if (start == NULL) {
		start = last = newnode; 
	}
	else {
		newnode->previous = last; 
		last->next = newnode;
		last = newnode; 
	}

	newnode = new Tutor; 
	newnode->DateOfJoined = new Date;
	newnode->DateOfTerminated = new Date;
	newnode->center = new Center;
	newnode->Subject = new Course;
	newnode->ID = 444;
	newnode->next = NULL;
	newnode->previous = NULL;

	newnode->DateOfTerminated->Day = 0; newnode->DateOfTerminated->Month = 0; newnode->DateOfTerminated->Year = 0;
	newnode->center->CenterCode = 672;
	newnode->center->CenterName = "WaterMelon";
	newnode->center->CenterLocation = "Selangor";
	newnode->FirstName = "Nadia";
	newnode->LastName = "Swing";
	newnode->HourlyPayment = 40;
	newnode->DateOfJoined->Day = 12;
	newnode->DateOfJoined->Month = 4;
	newnode->DateOfJoined->Year = 2000;
	newnode->Subject->Code = 124;
	newnode->Subject->Name = "Language Arts";
	newnode->PhoneNumber = "0184441112";
	newnode->Address = "54221, Jln Sulatan, Selangor";
	newnode->Rate = 1;

	if (start == NULL) {
		start = last = newnode; 
	}
	else {
		newnode->previous = last; 
		last->next = newnode; 
		last = newnode; 
	}

}

Tutor* search(Tutor* x, int ID) {
	
	if (x == NULL) 
	{
		return x;
	}
	else
	{
		
		if (x->ID == ID) 
		{
			return x;
		}
		else {
			search(x->next, ID);
		}
	}
}

void modify_tutor_details(Tutor* temp)
{
	int choice;
	string address;
	string phoneNumber;
	char confirm; 
	char choiceConfirm;
	system("CLS"); 
	cout << "\n\t\t\t------------------------------------------------------------------------------------------------------ - " << endl;
	cout << "\t\t\t------------------------------------- Modify Tutor Deatails  ---------------------------------------------" << endl;
	cout << "\t" << setw(4); cout << "|ID|"; cout << setw(13) << "|FirstName|"; cout << setw(12) << "|LastName|"; cout << setw(14) << "|DateOfJoined|";
	cout << setw(18) << "|DataOfTerminated|"; cout << setw(6) << "|HourlyPayment|"; cout << setw(14) << "|CenterCode|"; cout << setw(18) << "|CenterLocation|"; cout << setw(14) << "|CenterName|";
	cout << setw(11) << "|CourseCODE|"; cout << setw(11) << "|CourseNAME|"; cout << setw(21) << "|PhoneNumer|"; cout << setw(23) << "|Adress|"; cout << setw(5) << "|Rate|" << endl;
	cout << endl << endl;
	cout << "\t" << setw(6) << temp->ID << setw(13) << temp->FirstName << setw(13) << temp->LastName << setw(8);
	cout << temp->HourlyPayment << setw(10) << temp->center->CenterCode << setw(21) << temp->center->CenterLocation;
	cout << setw(12) << temp->center->CenterName;
	cout << setw(12) << temp->Subject->Code << setw(13) << temp->Subject->Name;
	cout << setw(16) << temp->PhoneNumber << setw(30) << temp->Address;
	cout << setw(10) << temp->Rate;
	cout << endl << endl;
error:
	cout << "\t\t\tAre You Sure You Want To Modify This Record ? (Y/N) : ";
	cin >> choiceConfirm;
	
	if (toupper(choiceConfirm) == 'Y') {
		cout << "\tWhich Deatails Would Like To Modify IT?" << endl;
		cout << "\t\t\t1. PhoneNumber" << endl;
		cout << "\t\t\t2. Address     " << endl;
		cout << "\t\t\t3. Going Back To Main Menu:)" << endl << "\t";
		cout << "\n\t {Enter Your Option : [1/2/3]} : ";
	Try:
		cin >> choice;
		
		switch (choice) {
		case 1:
		Confirm:
			cout << "\tPLEASE INSERT NEW PHONE NUMBER : ";
			cin >> phoneNumber;
			cout << "\tYOU ENTERED THE NUMBER " << phoneNumber << endl;
		invalid:
			cout << "\tIS THIS THE PHONE NUMBER YOU WANTED? (Y/N)" << endl << "\t";
			cin >> confirm;
			
			if (toupper(confirm) == 'Y') {
				temp->PhoneNumber = phoneNumber; 
				cout << "\tPHONE NUMBER HAD SUCCESSFULLY CHANGED" << endl;
				Sleep(3000); 
				cout << "	*****      RETURNING TO MAIN MENU      *****";
				Sleep(3000); 
				system("CLS"); 
				return;
			}
			else if (toupper(confirm) == 'N') {
				cout << "\tINSERT AGAIN " << endl;
				goto Confirm; 
			}
			else {
				cout << "\tWRONG INPUT, PLEASE TRY AGAIN" << endl;
				goto invalid; 
			}
			break;
		case 2:
		addressConfirmation:
			cout << "\tPLEASE INSERT ADDRESS : ";
			cin.ignore();
			getline(cin, address);
			cout << "\tYOU ENTERED THE ADDRESS " << address << endl;
		wrongInputA:
			cout << "\tIS THIS THE ADDRESS YOU WANTED? (Y/N)" << endl << "\t";
			cin >> confirm;
			
			if (toupper(confirm) == 'Y') {
				temp->Address = address;
				cout << "\tADDRESS HAD SUCCESSFULLY CHANGED" << endl;
				Sleep(3000); 
				cout << "	*****      RETURNING TO MAIN MENU      *****";
				Sleep(3000); 
				system("CLS"); 
				return;
			}
			else if (toupper(confirm) == 'N') {
				cout << "\tINSERT AGAIN " << endl;
				goto addressConfirmation;
			}
			else {
				cout << "\tWRONG INPUT, PLEASE TRY AGAIN" << endl;
				goto wrongInputA; 
			}
			break;
		case 3:
			cout << "	*****      RETURNING TO MAIN MENU      *****";
			Sleep(3000); 
			system("CLS");
			break;
		default:
			cout << "\tTHE INPUT IS NOT VALID, PLEASE TRY AGAIN !" << endl;
			goto Try; 
		}
	}
	else if (toupper(choiceConfirm) == 'N') {
		cout << "\tPLEASE TRY AGAIN !" << endl << endl;
		cout << "	*****      RETURNING TO MAIN MENU      *****";
		Sleep(3000); 
		system("CLS"); 
	}
	else {
		cout << "\tPLEASE TRY AGAIN WITH VALID INPUT!" << endl;
		Sleep(3000); 
		goto error; 
	}

}






void ModifyTutorDetails() {
	int choice; int x; int n; int r; int arraySize = 0; int i = 0;
modifymenu:
	cout << "\n\t\t\t------------------------------------------------------------------------------------------------------ - " << endl;
	cout << "\t\t\t------------------------------------- Modify Tutor Detalis ---------------------------------------------" << endl;
	cout << "\tPLEASE ENTER THE TUTOR ID YOU WANT TO Modify : ";
	cin >> x;
	current = start;
	current = search(current, x); 
	
	if (current == NULL) {
		cout << "\tTHERE IS NO SUCH RECORD!!!" << endl;
		cout << "	*****      RETURNING TO MODIFY MENU      *****";
		Sleep(3000); 
		system("CLS"); 
		goto modifymenu; 
	}
	else {
		modify_tutor_details(current); 
	}
}


void DisplaySearchByID(Tutor* temp)
{
	int choice;
	searchbyid:
	system("CLS"); 
	
	cout << "\n\t\t\t------------------------------------------------------------------------------------------------------ - " << endl;
	cout << "\t\t\t------------------------------------- Search Tutor By Id  ---------------------------------------------" << endl;
	cout << "\t" << setw(4); cout << "|ID|"; cout << setw(13) << "|FirstName|"; cout << setw(12) << "|LastName|"; cout << setw(14) << "|DateOfJoined|";
	cout << setw(18) << "|DataOfTerminated|"; cout << setw(6) << "|HourlyPayment|"; cout << setw(14) << "|CenterCode|"; cout << setw(18) << "|CenterLocation|"; cout << setw(14) << "|CenterName|";
	cout << setw(11) << "|CourseCODE|"; cout << setw(11) << "|CourseNAME|"; cout << setw(21) << "|PhoneNumer|"; cout << setw(23) << "|Adress|"; cout << setw(5) << "|Rate|" << endl;
	cout << endl << endl;
	cout << "\t" << setw(6) << temp->ID << setw(13) << temp->FirstName << setw(13) << temp->LastName << setw(8);
	cout << temp->HourlyPayment << setw(10) << temp->center->CenterCode << setw(21) << temp->center->CenterLocation;
	cout << setw(12) << temp->center->CenterName;
	cout << setw(12) << temp->Subject->Code << setw(13) << temp->Subject->Name;
	cout << setw(16) << temp->PhoneNumber << setw(30) << temp->Address;
	cout << setw(10) << temp->Rate;
	cout << endl << endl;
	cout << "\t\t\t	Press Enter Key To Go Back To Main Menu :)" << endl;
	cout << "	"; cin.get();
	if (cin.get() == '\n') {
		cout << "\t\t\t\tGoing Back To Main Menu : )" << endl;
		Sleep(2000); 
		system("CLS"); 
	}
}



void SearchMenu() {
	int x;
searchmenu:
	cout << "\n\t\t\t------------------------------------------------------------------------------------------------------ - " << endl;
	cout << "\t\t\t------------------------------------- Search Tutor By ID ---------------------------------------------" << endl;
	cout << "\t\t\tPlease Enter Tutor Id That You Want To Search : ";
	cin >> x;
	current = start;
	current = search(current, x);
	if (current == NULL) {
		cout << "\t\t\t We Cant Find Your ID" << endl;
		cout << "\t\t\t\tGoing Back To Main Menu : )";
		Sleep(3000); 
		system("CLS");
		goto searchmenu; 
	}
	else {
		DisplaySearchByID(current);

	}
}


void DisplayRecords() 
{
	system("CLS");
	Tutor* current = start;
	cout << "\n\t\t\t------------------------------------------------------------------------------------------------------ - " << endl;
	cout << "\t\t\t------------------------------------- Display Tutor Details ---------------------------------------------" << endl;
	cout << "\t" << setw(4); cout << "|ID|"; cout << setw(13) << "|FirstName|"; cout << setw(12) << "|LastName|"; cout << setw(14) << "|DateOfJoined|";
	cout << setw(18) << "|DataOfTerminated|"; cout << setw(6) << "|HourlyPayment|"; cout << setw(14) << "|CenterCode|"; cout << setw(18) << "|CenterLocation|"; cout << setw(14) << "|CenterName|";
	cout << setw(11) << "|CourseCODE|"; cout << setw(11) << "|CourseNAME|"; cout << setw(21) << "|PhoneNumer|"; cout << setw(23) << "|Adress|"; cout << setw(5) << "|Rate|" << endl;
	int i = 0;
	while (current != NULL)
	{
		cout << "\t" << setw(6) << current->ID << setw(14) << current->FirstName << setw(13) << current->LastName << setw(7);
		cout << current->DateOfJoined->Day << "/" << current->DateOfJoined->Month << "/" << current->DateOfJoined->Year << setw(10);
		cout << current->DateOfTerminated->Day << "/" << current->DateOfTerminated->Month << "/" << current->DateOfTerminated->Year << setw(11);
		cout << current->HourlyPayment << setw(10) << current->center->CenterCode << setw(21) << current->center->CenterLocation;
		cout << setw(11) << current->center->CenterName;
		cout << setw(12) << current->Subject->Code << setw(13) << current->Subject->Name;
		cout << setw(17) << current->PhoneNumber << setw(30) << current->Address;
		cout << setw(10) << current->Rate;
		cout << endl;
		current = current->next;

	}
	cout << "\n\n\t\t\tPress Enter Key To Go Back To Main Menu:>>" << endl;
	cout << "	"; cin.get();
	if (cin.get() == '\n') {
		cout << "\t\t\tGoing Back To Main Menu:))" << endl;
		Sleep(2000); 
		system("CLS"); 
	}

}
void DetailsOfTutor() {
	int Choice; char seperator;
	newnode->DateOfTerminated->Day = 0; newnode->DateOfTerminated->Month = 0; newnode->DateOfTerminated->Year = 0;
	fstream file;
	cout << "\n\t\t\t------------------------------------------------------------------------------------------------------ - " << endl;
	cout << "\t\t\t------------------------------------- Add Tutor Details ---------------------------------------------" << endl;
	cout << "\t\t\tEnter Tutor ID :";
	cin >> newnode->ID;
	cout << "\t\t\tEnter Tutor First Name : ";
	cin >> newnode->FirstName;
	cout << "\t\t\tEnter Tutor Last Name : ";
	cin >> newnode->LastName;
	cout << "\t\t\tEnter Date Of Joined : " << endl;
	cout << "\t\t\tUse This Format (Day/Month/Year) : ";
	cin >> newnode->DateOfJoined->Day; cin >> seperator;
	cin >> newnode->DateOfJoined->Month; cin >> seperator;
	cin >> newnode->DateOfJoined->Year;
	cout << "\t\t\tEnter Hourly Payment Between 40 To 80 : ";
hourInsert:
	cin >> newnode->HourlyPayment;
	if (newnode->HourlyPayment < 40 || newnode->HourlyPayment> 80) {
		cout << "\n\n\t\t\t\tYou Entred Wrong Value! Please Try Again? ";
		goto hourInsert; 
	}
	cout << "\t\t\t	Please select Tuition Center : " << endl;
	cout << "\t\t\t	1. Johor : "<< endl; 
	cout << "\t\t\t        2. Kelantan : "<< endl;
	cout << "\t\t\t	3. Penang : "<< endl;
	cout << "\t\t\t	4. Perak : "<< endl;
	cout << "\t\t\t	5. Sarawak : "<< endl;
	cout << "\t\t\t	6. Selangor : "<< endl;
	cout << "\t\t\t	7. Kuala Lumpur : " << endl;

	cout << "\t\t\t\t{Enter Your Choice : [1/2/3/4/5/6/7]} : ";
error:
	cin >> Choice;
	switch (Choice) {
	case 1:
		newnode->center->CenterCode = 122;
		newnode->center->CenterName = "Orange";
		newnode->center->CenterLocation = "Johor";
		break;
	case 2:
		newnode->center->CenterCode = 232;
		newnode->center->CenterName = "Banana";
		newnode->center->CenterLocation = "Kelantan";
		break;
	case 3:
		newnode->center->CenterCode = 342;
		newnode->center->CenterName = "Apple";
		newnode->center->CenterLocation = "Penang";
		break;
	case 4:
		newnode->center->CenterCode = 452;
		newnode->center->CenterName = "DragonFruit";
		newnode->center->CenterLocation = "Perak";
		break;
	case 5:
		newnode->center->CenterCode = 562;
		newnode->center->CenterName = "Grab";
		newnode->center->CenterLocation = "Sarawak";
		break;
	case 6:
		newnode->center->CenterCode = 672;
		newnode->center->CenterName = "WaterMelon";
		newnode->center->CenterLocation = "Selangor";
		break;
	case 7:
		newnode->center->CenterCode = 782;
		newnode->center->CenterName = "Mango";
		newnode->center->CenterLocation = "Kuala Lumpur";
		break;
	default:
		cout << "\n\t\t\t\tYou Entred Wrong Value! Please Try Again? " << endl << "\t";
		goto error; 
	}
	cout << "\t\t\t	Please Select Tutor Course        : " << endl;
	cout << "\t\t\t	1. Mathematics " << endl;
	cout << "\t\t\t	2. Health" << endl;
	cout<< "\t\t\t	3. Handwriting" << endl;
	cout << "\t\t\t	4. Language Arts" << endl;
	cout << "\t\t\t	5. Music" << endl;
	cout << "\t\t\t	6. Dance" << endl;
	cout << "\t\t\t\t7. Science" << endl;
	cout<< "\t\t\t\t{Enter Your Choice : [1/2/3/4/5/6/7]} : ";
error1:
	cin >> Choice;
	switch (Choice) {
	case 1:
		newnode->Subject->Code = 121;
		newnode->Subject->Name = "Mathematics";
		break;
	case 2:
		newnode->Subject->Code = 122;
		newnode->Subject->Name = "Health";
		break;
	case 3:
		newnode->Subject->Code = 123;
		newnode->Subject->Name = "Handwriting";
		break;
	case 4:
		newnode->Subject->Code = 124;
		newnode->Subject->Name = "Language Arts";

		break;
	case 5:
		newnode->Subject->Code = 125;
		newnode->Subject->Name = "Music";
		break;
	case 6:
		newnode->Subject->Code = 126;
		newnode->Subject->Name = "Dance";
		break;
	case 7:
		newnode->Subject->Code = 127;
		newnode->Subject->Name = "Science";
		break;
	default:
		cout << "\n\t\t\t\tYou Entred Wrong Value! Please Try Again? " << endl << "\t";
		goto error1; 
		break;
	}
	cout <<"\t\t\t\tEnter Tutor Phone Number : ";
	cin >> newnode->PhoneNumber;
	cout <<"\t\t\t\tEnter Tutor Address : ";
	cin.ignore();
	getline(cin, newnode->Address);
	cout << "\t\t\t\tEnter Tutor Rate Between 1 To 5  : ";
ratingInsert:
	cin >> newnode->Rate;
	if (newnode->Rate < 1 || newnode->Rate >5) {
		cout << "\n\n\t\t\t\tYou Entred Wrong Value! Please Try Again?   : ";
		goto ratingInsert; 
	}
	Sleep(2000);
	cout << "\n\t\t\t------------------------------------------------------------------------------------------------------ - " << endl;
	cout << "\t\t\t------------------------------------- Details Added SUccessfully ---------------------------------------------" << endl;
	Sleep(2000); system("CLS");
	
}

void addTutorDetails() {

	newnode = new Tutor; 
	newnode->DateOfJoined = new Date;
	newnode->DateOfTerminated = new Date;
	newnode->center = new Center;
	newnode->Subject = new Course;
	newnode->ID = ID;
	newnode->next = NULL;
	newnode->previous = NULL;
	if (start == NULL) {
		DetailsOfTutor(); 
		ID = ID + 1; 
		start = last = newnode; 
	}
	else {
		DetailsOfTutor(); 
		ID = ID + 1; 
		newnode->previous = last; 
		last->next = newnode; 
		last = newnode; 
	}
	
}

void delete_last_tutor(Tutor* temp) {
	temp = last; 
	last->previous->next = NULL; 
	last = last->previous; 
	delete temp; 
}



void delete_first_tutor(Tutor* temp) {
	temp = start; 
	start->next->previous = NULL; 
	start = start->next; 
	delete temp; 
}
void delete_tutor_details(Tutor* temp)
{
	char seperator; int dayOfContract;
	
	cout << "\t| TUTOR DETAILS |" << endl;
	cout << "\t" << setw(4); cout << "|TUTOR ID|"; cout << setw(13) << "|FIRST NAME|"; cout << setw(12) << "|LAST NAME|" << setw(14) << "|DATE JOINED|" << endl;
	cout << "\t" << setw(6) << temp->ID << setw(13) << temp->FirstName << setw(14) << temp->LastName << setw(7);
	cout << temp->DateOfJoined->Day << "/" << temp->DateOfTerminated->Month << "/" << temp->DateOfJoined->Year << "\t" << endl;
	cout << "\t WHAT IS THE TEMINATION DATE OF THE USER? (DD/MM/YYY) : ";
	cin >> temp->DateOfTerminated->Day; cin >> seperator; 
	cin >> temp->DateOfTerminated->Month; cin >> seperator;
	cin >> temp->DateOfTerminated->Year;
	dayOfContract = (temp->DateOfTerminated->Day + temp->DateOfTerminated->Month * 30 + temp->DateOfTerminated->Year * 365) -
		(temp->DateOfJoined->Day + temp->DateOfJoined->Month * 30 + temp->DateOfJoined->Year * 365); 

	if (dayOfContract >= 60) {
		char choice;
		system("CLS");
	
		cout << "\t| DELETE TUTOR MENU |" << endl;
		cout << "\t| TUTOR DETAILS |" << endl;
		cout << "\t" << setw(4); cout << "|TUTOR ID|"; cout << setw(13) << "|FIRST NAME|"; cout << setw(12) << "|LAST NAME|"; cout << setw(14) << "|DATE JOINED|";
		cout << setw(18) << "|DATE TERMINATED|"; cout << setw(3) << "|PAY|"; cout << setw(14) << "|CENTRE CODE|"; cout << setw(18) << "|CENTRE LOCATION|"; cout << setw(14) << "|CENTRE NAME|";
		cout << setw(11) << "|SUB CODE|"; cout << setw(11) << "|SUB NAME|"; cout << setw(15) << "|PHONE NUM|"; cout << setw(21) << "|ADDRESS|"; cout << setw(23) << "|RATINGS|" << endl;
		cout << "\t" << setw(6) << temp->ID << setw(14) << temp->FirstName << setw(13) << temp->LastName << setw(7);
		cout << temp->DateOfJoined->Day << "/" << temp->DateOfJoined->Month << "/" << temp->DateOfJoined->Year << setw(10);
		cout << temp->DateOfTerminated->Day << "/" << temp->DateOfTerminated->Month << "/" << temp->DateOfTerminated->Year << setw(11);
		cout << temp->HourlyPayment << setw(10) << temp->center->CenterCode << setw(21) << temp->center->CenterLocation;
		cout << setw(11) << temp->center->CenterName;
		cout << setw(12) << temp->Subject->Code << setw(13) << temp->Subject->Name;
		cout << setw(17) << temp->PhoneNumber << setw(30) << temp->Address;
		cout << setw(10) << temp->Rate;
		cout << endl << endl;
	error:
		cout << "\tARE YOU SURE THIS IS THE RECORD YOU WANT TO DELETE? (Y/N) : "; 
		cin >> choice;
		
		if (toupper(choice) == 'Y') {
			cout << "\t PERFORMING DELETION........"; Sleep(3000);
			
			if (temp == start && temp == last) { 
				start = NULL; 
			}
			else if (temp == start) {
				delete_first_tutor(temp); 
			}
			else if (temp == last) { 
				delete_last_tutor(temp); 
			}
			else {
				back = temp->previous; 
				back->next = back->next->next; 
				temp->next->previous = back; 
				delete temp; 
			}
			cout << endl << endl << "\tSUCCESSFULLY DELETED !" << endl;
			Sleep(3000); 
			cout << "\t\t\tGoing Back To Main Menu : ))";
			Sleep(3000); 
			system("CLS");
		}
		else if (toupper(choice) == 'N') {
			cout << "\tPLEASE TRY AGAIN !!!" << endl << endl;
			cout << "\t\t\tGoing Back To Main Menu : ))";
			Sleep(3000); 
			system("CLS"); 
			return;
		}
		else {
			cout << "\n\n\t\t\t\tYou Entred Wrong Value!Please Try Again ? : ";
			goto error; 
		}
	}
	else {
		cout << "\tTERMINATION DATE IS NOT OVER 60 DAYS!" << endl << endl;
		cout << "\tDELETE EXECUTION DENIED" << endl;
		cout << "\t\t\tGoing Back To Main Menu : ))";
		Sleep(3000); 
		system("CLS");  
		return;
	}

}


void DeleteTutorDetails() 
{
	int choice; int x; int n; int r; int arraySize = 0; int i = 0;
modifymenu:
	cout << "\n\t\t\t------------------------------------------------------------------------------------------------------ - " << endl;
	cout << "\t\t\t------------------------------------- Modify Tutor Detalis ---------------------------------------------" << endl;
	cout << "\tPLEASE ENTER THE TUTOR ID YOU WANT TO Delete : ";
	cin >> x;
	current = start;
	current = search(current, x); 
	
	if (current == NULL) {
		cout << "\tTHERE IS NO SUCH RECORD!!!" << endl;
		cout << "\t\t\tGoing Back To Main Menu : ))";
		Sleep(3000); 
		system("CLS"); 
		goto modifymenu; 
	}
	else {
		delete_tutor_details(current); 
	}
}

 



int check_vacant_slot(Tutor* X) {
	int emptySlot = 0; int vacantSlot = 0;
	if (start == NULL) {
		return 1; 
	}
	else {
		while (X != NULL) { 
			vacantSlot++; 
			X = X->next;
		}
		emptySlot = 100 - vacantSlot;
		if (emptySlot == 0) {
			return 2; 
		}
		else {
			return 3;
		}
	}
}
int main() {

	loginManager loginManagerObj;
	loginManagerObj.login();
	Data();
mainmenu:
	int option; int check; int i = 0; int arraySize = 0;
	char exitChoice;	current = start;
	
	cout << "\n\n" << endl;
	cout << "\t\t\t\t9999999999       888           888      0000000000000             2222222222             111" << endl;
	cout << "\t\t\t\t99       99       888         888       0000000000000             22       22            111" << endl;
	cout << "\t\t\t\t99       99        888       888        000                       22       22            111" << endl;
	cout << "\t\t\t\t99999999999            88888            000                       22222222222            111" << endl;
	cout << "\t\t\t\t999                   888 888           000                       222                    111" << endl;
	cout << "\t\t\t\t999                888       888        000         000           222                    111 " << endl;
	cout << "\t\t\t\t99999999999       888         888       000000000000000           22222222222            111111111111" << endl;
	cout << "\t\t\t\t99999999999      888           888      000000000000000           22222222222            111111111111" << endl;
	cout << "\n\n\t\t\t\tCreated by : " << endl;
	cout << "\n\t\t\t\tCAMILLE ALCHAMI TP061802" << endl;
	cout << "\t\t\t\tRajin Muhtadee Shihab TP059508" << endl;
	cout << endl;
	cout << "\t --------------------------------------------------------------------- " << endl;
	cout << "\t |1.Add Tutor Record                                                 |" << endl;
	cout << "\t |2.Display Records                                                  |" << endl;
	cout << "\t |3.Sort And Display By(ID,HourlyPayment,Rate)                       |" << endl;
	cout << "\t |4.Search a Tutor By ID                                             |" << endl;
	cout << "\t |5.Modify a Tutor Record                                            |" << endl;
	cout << "\t |6.Delete a Tutor Record                                            |" << endl;
	cout << "\t |7.Exit                                                             |" << endl;
	cout << "\t --------------------------------------------------------------------- " << endl;

	cout << "\n\t {Enter Your Option : [1/2/3/4/5/6/7]} : ";
	cin >> option;
	switch (option) {
	case 1:
		check = check_vacant_slot(current);
		
		if (check == 2) {
			cout << "Slots Are Full :( ";
			Sleep(3000); 
			system("CLS"); 
			goto mainmenu; 
		}
		else {
			system("CLS"); 
			addTutorDetails(); 
			goto mainmenu; 
		}
		break;
	case 2:
		check = check_vacant_slot(current); 
		if (check == 1) {
			cout << "\tSlots Are Empty :( " << endl;
			Sleep(3000); 
			cout << "\t\t\tGoing Back To Main Menu:))";
			Sleep(2000); 
			system("CLS"); 
			goto mainmenu; 
		}
		else {
			system("CLS"); 
			DisplayRecords(); 
			goto mainmenu; 
		}
		break;
		case 3:
			check = check_vacant_slot(current); 
			if (check == 1) {
				cout << "\tSlots Are Empty :(" << endl;
				Sleep(3000); 
				cout << "\t\t\tGoing Back To Main Menu:))";
				Sleep(2000); 
				system("CLS"); 
				goto mainmenu; 
			}
			else {
				system("CLS"); 
				SortMenu(); 
				goto mainmenu; 
			}
			break;
		case 4:
			check = check_vacant_slot(current); 
		
			if (check == 1) {
				cout << "\t\tSlots Are Empty :(" << endl;
				Sleep(3000); 
				cout << "\t\t\tGoing Back To Main Menu:))";
				Sleep(2000); 
				system("CLS"); 
				goto mainmenu; 
			}
			else {
				system("CLS"); 
				bubbleSort(start, 1); 
				SearchMenu(); 
				goto mainmenu;
			}
			break;
		case 5:
			check = check_vacant_slot(current); 
		
			if (check == 1) {
				cout << "\t\tSlots Are Empty :(" << endl;
				Sleep(3000); 
				cout << "\t\t\tGoing Back To Main Menu:))";
				Sleep(2000); 
				system("CLS"); 
				goto mainmenu; 
			}
			else {
				system("CLS"); 
				bubbleSort(start, 1); 
				ModifyTutorDetails(); 
				goto mainmenu; 
			}
			break;
		case 6:
			check = check_vacant_slot(current); 
		
			if (check == 1) {
				cout << "\t\tSlots Are Empty :(" << endl;
				Sleep(3000); 
				cout << "\t\t\tGoing Back To Main Menu:))";
				Sleep(2000); 
				system("CLS"); 
				goto mainmenu; 
			}
			else {
				system("CLS"); 
				bubbleSort(start, 1); 
				DeleteTutorDetails(); 
				goto mainmenu; 
			}
			break;
		case 7:
			cout << "\t\t\tAre You Sure You Want To Exit ? (Y / N) " << endl << "\t";
			cin >> exitChoice;
			if (toupper(exitChoice) == 'Y') {
				cout << "\t\t\tExiting:))";
				Sleep(3000); 
				exit; 
			}
			else {
				cout << "\t\t\tGoing Back To Main Menu:))";
				Sleep(3000); 
				system("CLS"); 
				goto mainmenu; 
			}
			break;
		default:
			cout << "\t\t\tGoing Back To Main Menu:))";
			system("CLS"); 
			goto mainmenu; 
	}
}
	