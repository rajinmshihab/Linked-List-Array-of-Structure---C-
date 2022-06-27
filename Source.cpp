#include <windows.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>  
using namespace std;

int tutorID = 1;
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


struct TuitionCenter {
	int tuitionCenterCode;
	string tuitionCenterName;
	string tuitionCenterLocation;
};

struct Subject {
	int subjectCode;
	string subjectName;
};

struct Date {
	int dd;
	int mm;
	int yyyy;
};

struct Tutor {
	int tutorID;
	string tutorFirstName;
	string tutorLastName;
	struct Date datejoined, dateTerminated;
	double hourlyPayRate;
	struct TuitionCenter center;
	struct Subject teachSub;
	string phoneNumber;
	string tutorAddress;
	int rating;
}; struct Tutor tutorDetails[100];


void initialize_data() {
	tutorDetails[0].tutorID = 400; tutorDetails[0].tutorFirstName = "Camille"; tutorDetails[0].tutorLastName = "Alchami";
	tutorDetails[0].datejoined.dd = 1; tutorDetails[0].datejoined.mm = 1; tutorDetails[0].datejoined.yyyy = 2010;
	tutorDetails[0].hourlyPayRate = 40; tutorDetails[0].center.tuitionCenterCode = 122; tutorDetails[0].center.tuitionCenterName = "Orange";
	tutorDetails[0].center.tuitionCenterLocation = "Johor"; tutorDetails[0].teachSub.subjectCode = 2001;
	tutorDetails[0].teachSub.subjectName = "Music"; tutorDetails[0].phoneNumber = "0182692257";
	tutorDetails[0].tutorAddress = "50250, Jln Sahabat, KL"; tutorDetails[0].rating = 5;
	tutorDetails[1].tutorID = 111; tutorDetails[1].tutorFirstName = "Rajin"; tutorDetails[1].tutorLastName = "Muhtadee";
	tutorDetails[1].datejoined.dd = 9; tutorDetails[1].datejoined.mm = 9; tutorDetails[1].datejoined.yyyy = 2000;
	tutorDetails[1].hourlyPayRate = 78; tutorDetails[1].center.tuitionCenterCode = 232; tutorDetails[1].center.tuitionCenterName = "Banana";
	tutorDetails[1].center.tuitionCenterLocation = "Kelantan"; tutorDetails[1].teachSub.subjectCode = 2001;
	tutorDetails[1].teachSub.subjectName = "Health"; tutorDetails[1].phoneNumber = "0182773212";
	tutorDetails[1].tutorAddress = "52521, Jln Love, Selangor"; tutorDetails[1].rating = 5;
	tutorDetails[2].tutorID = 222; tutorDetails[2].tutorFirstName = "Caroline"; tutorDetails[2].tutorLastName = "Ginger";
	tutorDetails[2].datejoined.dd = 12; tutorDetails[2].datejoined.mm = 12; tutorDetails[2].datejoined.yyyy = 2012;
	tutorDetails[2].hourlyPayRate = 60; tutorDetails[2].center.tuitionCenterCode = 342; tutorDetails[2].center.tuitionCenterName = "Apple";
	tutorDetails[2].center.tuitionCenterLocation = "Penang"; tutorDetails[2].teachSub.subjectCode = 121;
	tutorDetails[2].teachSub.subjectName = "Mathematics"; tutorDetails[2].phoneNumber = "0182331212";
	tutorDetails[2].tutorAddress = "54542, Jln Hug, Penang"; tutorDetails[2].rating = 3;
	tutorDetails[3].tutorID = 333; tutorDetails[3].tutorFirstName = "Clara"; tutorDetails[3].tutorLastName = "Love";
	tutorDetails[3].datejoined.dd = 4; tutorDetails[3].datejoined.mm = 4; tutorDetails[3].datejoined.yyyy = 2004;
	tutorDetails[3].hourlyPayRate = 80; tutorDetails[3].center.tuitionCenterCode = 452; tutorDetails[3].center.tuitionCenterName = "DragonFruit";
	tutorDetails[3].center.tuitionCenterLocation = "Perak"; tutorDetails[3].teachSub.subjectCode = 125;
	tutorDetails[3].teachSub.subjectName = "Science"; tutorDetails[3].phoneNumber = "0173321119";
	tutorDetails[3].tutorAddress = "54431, Jln Suia, Perak"; tutorDetails[3].rating = 5;
	tutorDetails[4].tutorID = 444; tutorDetails[4].tutorFirstName = "Nadia"; tutorDetails[4].tutorLastName = "Swing";
	tutorDetails[4].datejoined.dd = 12; tutorDetails[4].datejoined.mm = 4; tutorDetails[4].datejoined.yyyy = 2000;
	tutorDetails[4].hourlyPayRate = 40; tutorDetails[4].center.tuitionCenterCode = 672; tutorDetails[4].center.tuitionCenterName = "WaterMelon";
	tutorDetails[4].center.tuitionCenterLocation = "Selangor"; tutorDetails[4].teachSub.subjectCode = 124;
	tutorDetails[4].teachSub.subjectName = "Language Arts"; tutorDetails[4].phoneNumber = "0184441112";
	tutorDetails[4].tutorAddress = "54221, Jln Sulatan, Selangor"; tutorDetails[4].rating = 1;
	tutorDetails[5].tutorID = 555; tutorDetails[5].tutorFirstName = "Fahed"; tutorDetails[5].tutorLastName = "Laof";
	tutorDetails[5].datejoined.dd = 23; tutorDetails[5].datejoined.mm = 4; tutorDetails[5].datejoined.yyyy = 2001;
	tutorDetails[5].hourlyPayRate = 60; tutorDetails[5].center.tuitionCenterCode = 512; tutorDetails[5].center.tuitionCenterName = "Cherry";
	tutorDetails[5].center.tuitionCenterLocation = "Bukit Bintang"; tutorDetails[5].teachSub.subjectCode = 442;
	tutorDetails[5].teachSub.subjectName = "Science"; tutorDetails[5].phoneNumber = "0192224123";
	tutorDetails[5].tutorAddress = "54431, Jln Suia, Perak"; tutorDetails[5].rating = 3;
	tutorDetails[6].tutorID = 500; tutorDetails[6].tutorFirstName = "Gamal"; tutorDetails[6].tutorLastName = "Yaong";
	tutorDetails[6].datejoined.dd = 22; tutorDetails[6].datejoined.mm = 3; tutorDetails[6].datejoined.yyyy = 2006;
	tutorDetails[6].hourlyPayRate = 55; tutorDetails[6].center.tuitionCenterCode = 4421; tutorDetails[6].center.tuitionCenterName = "Alpha";
	tutorDetails[6].center.tuitionCenterLocation = "Bukit Bintang"; tutorDetails[6].teachSub.subjectCode = 449;
	tutorDetails[6].teachSub.subjectName = "Chinese"; tutorDetails[6].phoneNumber = "0164013204";
	tutorDetails[6].tutorAddress = "Language Arts"; tutorDetails[6].rating = 4;
	tutorID = 8;
}

int check_vacant_slot() {
	int i = 0; int emptySlot = 0; int vacantSlot = 0;

	while (i < 100) {
		if (tutorDetails[i].tutorID != NULL) {
			vacantSlot++; 
		}
		else {
			emptySlot++; 
		}
		i++;
	}
	if (vacantSlot == 0) {
		return 1; 
	}
	else if (emptySlot == 0) {
		return 2; 
	}
	else {
		return 3;
	}
}

void merge(int l, int m, int r, int choice) {
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	struct Tutor L[50], R[50];
	for (i = 0; i < n1; i++) {
		L[i] = tutorDetails[l + i];
	}
	for (j = 0; j < n2; j++) {
		R[j] = tutorDetails[m + 1 + j];
	}
	i = 0; // First subarray
	j = 0; // Second subarray
	k = l; // Merged subarray
	switch (choice) {
	case 1:
		while (i < n1 && j < n2)
		{
			if (L[i].tutorID <= R[j].tutorID)
			{
				tutorDetails[k] = L[i];
				i++;
			}
			else
			{
				tutorDetails[k] = R[j];
				j++;
			}
			k++;
		}
		break;
	case 2:
		while (i < n1 && j < n2)
		{
			if (L[i].center.tuitionCenterCode <= R[j].center.tuitionCenterCode)
			{
				tutorDetails[k] = L[i];
				i++;
			}
			else
			{
				tutorDetails[k] = R[j];
				j++;
			}
			k++;
		}
		break;
	case 3:
		while (i < n1 && j < n2)
		{
			if (L[i].hourlyPayRate <= R[j].hourlyPayRate)
			{
				tutorDetails[k] = L[i];
				i++;
			}
			else
			{
				tutorDetails[k] = R[j];
				j++;
			}
			k++;
		}
		break;
	case 4:
		while (i < n1 && j < n2)
		{
			if (L[i].rating <= R[j].rating)
			{
				tutorDetails[k] = L[i];
				i++;
			}
			else
			{
				tutorDetails[k] = R[j];
				j++;
			}
			k++;
		}
		break;
	}

	while (i < n1)
	{
		tutorDetails[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		tutorDetails[k] = R[j];
		j++;
		k++;
	}

}


void mergeSort(int l, int r, int choice)

{	
	if (l < r)
	{
		int m = l + (r - l) / 2;

		
		mergeSort(l, m, choice); 
		mergeSort(m + 1, r, choice); 
		merge(l, m, r, choice); 
	}
}

/*
int binarySearch(int, int, int);


int exponential_search(int n, int tutID) {


	if (tutorDetails[0].tutorID == tutID) {
		return 0;
	}
	int i = 1;
	while (i < n && tutorDetails[i].tutorID <= tutID) {
		i = i * 2;
	}

	return binarySearch(i / 2, min(i, n), tutID); 
}

int binarySearch(int left, int right, int tutID) {
	if (right >= left)
	{
		int mid = left + (right - left) / 2; 
		if (tutorDetails[mid].tutorID == tutID)  
			return mid;
		else if (tutorDetails[mid].tutorID > tutID) 
			return binarySearch(left, mid - 1, tutID);
		else
			return binarySearch(mid + 1, right, tutID); 
	}
	return -1; 
}

*/ 

void enterDetails(int i) {
	int choice; char seperator;
	cout << "\n\t\t\t------------------------------------------------------------------------------------------------------ - " << endl;
	cout << "\t\t\t------------------------------------- Add Tutor Details ---------------------------------------------" << endl;
	cout << "\t\t\tEnter Tutor ID :";
	cin>> tutorDetails[i].tutorID;
	cout << "\t\t\tEnter Tutor First Name : ";
	cin >> tutorDetails[i].tutorFirstName;
	cout << "\t\t\tEnter Tutor Last Name : ";
	cin >> tutorDetails[i].tutorLastName;
	cout << "\t\t\tEnter Date Of Joined : " << endl;
	cout << "\t\t\tUse This Format (Day/Month/Year) : ";
	cin >> tutorDetails[i].datejoined.dd; cin >> seperator;
	cin >> tutorDetails[i].datejoined.mm; cin >> seperator;
	cin >> tutorDetails[i].datejoined.yyyy;
	cout << "\t\t\tEnter Hourly Payment Between 40 To 80 : ";
hourInsert:
	cin >> tutorDetails[i].hourlyPayRate;

	if (tutorDetails[i].hourlyPayRate < 40 || tutorDetails[i].hourlyPayRate > 80) {
		cout << "\n\n\t\t\t\tYou Entred Wrong Value! Please Try Again? ";
		goto hourInsert;  
	}
	cout << "\t\t\t	Please select Tuition Center : " << endl;
	cout << "\t\t\t	1. Johor : " << endl;
	cout << "\t\t\t        2. Kelantan : " << endl;
	cout << "\t\t\t	3. Penang : " << endl;
	cout << "\t\t\t	4. Perak : " << endl;
	cout << "\t\t\t	5. Sarawak : " << endl;
	

	cout << "\t\t\t\t{Enter Your Choice : [1/2/3/4/5]} : ";
error:
	cin >> choice;
	switch (choice) {
	case 1:
		tutorDetails[i].center.tuitionCenterCode = 122;
		tutorDetails[i].center.tuitionCenterName = "Orange";
		tutorDetails[i].center.tuitionCenterLocation = "Johor";
		break;
	case 2:
		tutorDetails[i].center.tuitionCenterCode = 232;
		tutorDetails[i].center.tuitionCenterName = "Banana";
		tutorDetails[i].center.tuitionCenterLocation = "Kelantan";
		break;
	case 3:
		tutorDetails[i].center.tuitionCenterCode = 342;
		tutorDetails[i].center.tuitionCenterName = "Apple";
		tutorDetails[i].center.tuitionCenterLocation = "Penang";
		break;
	case 4:
		tutorDetails[i].center.tuitionCenterCode = 452;
		tutorDetails[i].center.tuitionCenterName = "DragonFruit";
		tutorDetails[i].center.tuitionCenterLocation = "Perak";
		break;
	case 5:
		tutorDetails[i].center.tuitionCenterCode = 562;
		tutorDetails[i].center.tuitionCenterName = "Grab";
		tutorDetails[i].center.tuitionCenterLocation = "Sarawak";
		break;
	default:
		cout << "\n\t\t\t\tYou Entred Wrong Value! Please Try Again? " << endl << "\t";
		goto error; 
	}
	cout << "\t\t\t	Please Select Tutor Course        : " << endl;
	cout << "\t\t\t	1. Mathematics " << endl;
	cout << "\t\t\t	2. Health" << endl;
	cout << "\t\t\t	3. Handwriting" << endl;
	cout << "\t\t\t	4. Language Arts" << endl;
	cout << "\t\t\t	5. Music" << endl;
	cout << "\t\t\t	6. Dance" << endl;
	cout << "\t\t\t\t7. Science" << endl;
	cout << "\t\t\t\t{Enter Your Choice : [1/2/3/4/5/6/7]} : ";
error1:
	cin >> choice;
	switch (choice) {
	case 1:
		tutorDetails[i].teachSub.subjectCode = 121;
		tutorDetails[i].teachSub.subjectName = "Mathematics";
		break;
	case 2:
		tutorDetails[i].teachSub.subjectCode = 122;
		tutorDetails[i].teachSub.subjectName = "Health";
		break;
	case 3:
		tutorDetails[i].teachSub.subjectCode = 123;
		tutorDetails[i].teachSub.subjectName = "Handwriting";
		break;
	case 4:
		tutorDetails[i].teachSub.subjectCode = 124;
		tutorDetails[i].teachSub.subjectName = "Language Arts";
		break;
	case 5:
		tutorDetails[i].teachSub.subjectCode = 125;
		tutorDetails[i].teachSub.subjectName = "Music";
		break;
	case 6:
		tutorDetails[i].teachSub.subjectCode = 126;
		tutorDetails[i].teachSub.subjectName = "Dance";
		break;
	case 7:
		tutorDetails[i].teachSub.subjectCode = 127;
		tutorDetails[i].teachSub.subjectName = "Science";
		break;
	default:
		cout << "\n\t\t\t\tYou Entred Wrong Value! Please Try Again? " << endl << "\t";
		goto error1;
		break;
	}
	cout << "\t\t\t\tEnter Tutor Phone Number : ";
	cin >> tutorDetails[i].phoneNumber;
	cout << "\t\t\t\tEnter Tutor Address : ";
	cin.ignore();
	getline(cin, tutorDetails[i].tutorAddress);
	cout << "\t\t\t\tEnter Tutor Rate Between 1 To 5  : ";
ratingInsert:
	cin >> tutorDetails[i].rating;
	if (tutorDetails[i].rating < 1 || tutorDetails[i].rating >5) {
		cout << "\n\n\t\t\t\tYou Entred Wrong Value! Please Try Again?   : ";
		goto ratingInsert;
	}
	Sleep(2000); 
	cout << "\n\t\t\t------------------------------------------------------------------------------------------------------ - " << endl;
	cout << "\t\t\t------------------------------------- Details Added SUccessfully ---------------------------------------------" << endl;
	Sleep(2000); system("CLS"); 
}

int addTutorDetails() {
	int i = 1;
	
	if (tutorDetails[0].tutorID == NULL) {
		tutorDetails[0].tutorID = tutorID;
		enterDetails(0); 
		tutorID = tutorID + 1;
		return 0;
	}
	else {
		for (i < 100; i; i++) {
			if (tutorDetails[i].tutorID != NULL) {
				continue;
			}
			else {
				tutorDetails[i].tutorID = tutorID;
				enterDetails(i);
				tutorID = tutorID + 1;
				break;
			}
		}
	}
	return 1;
}
void display_record(int lastIndex)
{
	system("CLS");

	cout << "\t| TUTOR DETAILS |" << endl << endl;
	cout << "\t" << setw(4); cout << "|TUTOR ID|"; cout << setw(13) << "|FIRST NAME|"; cout << setw(12) << "|LAST NAME|"; cout << setw(14) << "|DATE JOINED|";
	cout << setw(18) << "|DATE TERMINATED|"; cout << setw(6) << "|PAY|"; cout << setw(14) << "|CENTRE CODE|"; cout << setw(18) << "|CENTRE LOCATION|"; cout << setw(14) << "|CENTRE NAME|";
	cout << setw(11) << "|SUB CODE|"; cout << setw(11) << "|SUB NAME|"; cout << setw(15) << "|PHONE NUM|"; cout << setw(21) << "|ADDRESS|"; cout << setw(23) << "|RATINGS|" << endl;
	int i = 0;
	while (i <= lastIndex) {
		if (tutorDetails[i].tutorID != NULL) {
			cout << "\t" << setw(6) << tutorDetails[i].tutorID << setw(14) << tutorDetails[i].tutorFirstName << setw(13) << tutorDetails[i].tutorLastName << setw(7);
			cout << tutorDetails[i].datejoined.dd << "/" << tutorDetails[i].datejoined.mm << "/" << tutorDetails[i].datejoined.yyyy << setw(10);
			cout << tutorDetails[i].dateTerminated.dd << "/" << tutorDetails[i].dateTerminated.mm << "/" << tutorDetails[i].dateTerminated.yyyy << setw(11);
			cout << tutorDetails[i].hourlyPayRate << setw(10) << tutorDetails[i].center.tuitionCenterCode << setw(21) << tutorDetails[i].center.tuitionCenterLocation;
			cout << setw(11) << tutorDetails[i].center.tuitionCenterName;
			cout << setw(12) << tutorDetails[i].teachSub.subjectCode << setw(13) << tutorDetails[i].teachSub.subjectName;
			cout << setw(17) << tutorDetails[i].phoneNumber << setw(30) << tutorDetails[i].tutorAddress;
			cout << setw(10) << tutorDetails[i].rating;
			cout << endl;
		}
		i++;
	}
	cout << "	Press Enter To Leave" << endl;
	cout << "	"; cin.get();
	if (cin.get() == '\n') {
		cout << "\t\t\tGoing Back To Main Menu : ))" << endl;
		Sleep(2000);
		system("CLS");
	}
}
void display_ascending(int lastIndex) {
	system("CLS");
	
	cout << "\t| TUTOR DETAILS |" << endl << endl;
	cout << "\t" << setw(4); cout << "|TUTOR ID|"; cout << setw(13) << "|FIRST NAME|"; cout << setw(12) << "|LAST NAME|"; cout << setw(14) << "|DATE JOINED|";
	cout << setw(18) << "|DATE TERMINATED|"; cout << setw(6) << "|PAY|"; cout << setw(14) << "|CENTRE CODE|"; cout << setw(18) << "|CENTRE LOCATION|"; cout << setw(14) << "|CENTRE NAME|";
	cout << setw(11) << "|SUB CODE|"; cout << setw(11) << "|SUB NAME|"; cout << setw(15) << "|PHONE NUM|"; cout << setw(21) << "|ADDRESS|"; cout << setw(23) << "|RATINGS|" << endl;
	int i = 0;
	while (i <= lastIndex) {
		if (tutorDetails[i].tutorID != NULL) {
			cout << "\t" << setw(6) << tutorDetails[i].tutorID << setw(14) << tutorDetails[i].tutorFirstName << setw(13) << tutorDetails[i].tutorLastName << setw(7);
			cout << tutorDetails[i].datejoined.dd << "/" << tutorDetails[i].datejoined.mm << "/" << tutorDetails[i].datejoined.yyyy << setw(10);
			cout << tutorDetails[i].dateTerminated.dd << "/" << tutorDetails[i].dateTerminated.mm << "/" << tutorDetails[i].dateTerminated.yyyy << setw(11);
			cout << tutorDetails[i].hourlyPayRate << setw(10) << tutorDetails[i].center.tuitionCenterCode << setw(21) << tutorDetails[i].center.tuitionCenterLocation;
			cout << setw(11) << tutorDetails[i].center.tuitionCenterName;
			cout << setw(12) << tutorDetails[i].teachSub.subjectCode << setw(13) << tutorDetails[i].teachSub.subjectName;
			cout << setw(17) << tutorDetails[i].phoneNumber << setw(30) << tutorDetails[i].tutorAddress;
			cout << setw(10) << tutorDetails[i].rating;
			cout << endl;
		}
		i++;
	}
	cout << "	Press Enter To Leave" << endl;
	cout << "	"; cin.get();
	if (cin.get() == '\n') {
		cout << "\t\t\tGoing Back To Main Menu : ))" << endl;
		Sleep(2000);
		system("CLS");
	}
}

void display_orientation() {
	int choice; int i = 0; int arraySize = 0;
	cout << "\tMake Your Choice ? " << endl;
	cout << "\t1. Asceding Order" << endl;
	cout << "\t3. EXIT BACK TO MAIN MENU" << endl;
	while (tutorDetails[i].tutorID != NULL) {
		arraySize++;
		i++;
	}
error:
	cout << "\t";
	cin >> choice;
	switch (choice) {
	case 1:
		display_ascending(arraySize - 1); 
		break;
	case 2:
		cout << "\t\t\tGoing Back To Main Menu : ))";
		Sleep(3000); 
		system("CLS"); 
		return;
	default:
		cout << "\n\n\t\t\t\tYou Entred Wrong Value!Please Try Again ? : ";
		goto error;
	} 
}


void display_tutor_menu() {
	int choice; int i = 0; int arraySize = 0;
	cout << "\t|    choose what you want to display ?     |" << endl << endl << endl;
	cout << "\t|  1. TUTOR ID                           |" << endl;
	cout << "\t|  2. TUITION CENTRE                     |" << endl;
	cout << "\t|  3. HOURLY WAGE                        |" << endl;
	cout << "\t|  4. TUTOR RATING                       |" << endl;
	cout << "\t|  5. EXIT                               |" << endl;
	cout << "\n\t {Enter Your Option : [1/2/3/4/5]} : "; "\t";
error:
	cin >> choice;
	
	if (choice >= 0 && choice <= 4) {
		while (tutorDetails[i].tutorID != NULL) {
			arraySize++;
			i++;
		}
		mergeSort(0, arraySize - 1, choice); //first, last, choice
		display_orientation();
	}
	else if (choice == 5) {
		cout << "\t\t\tGoing Back To Main Menu : ))";
		Sleep(3000); 
		system("CLS"); 
	}
	else {
		cout << "\n\n\t\t\t\tYou Entered Wrong Value!Please Try Again ? :";
		Sleep(2000); 
		goto error; 
	}
}




void delete_tutor_details(int index, int lastIndex) {
	char seperator; int dayOfContract;
	cout << "\t| TUTOR DETAILS |" << endl;
	cout << "\t" << setw(4); cout << "|TUTOR ID|"; cout << setw(13) << "|FIRST NAME|"; cout << setw(12) << "|LAST NAME|" << setw(14) << "|DATE JOINED|" << endl;
	cout << "\t" << setw(6) << tutorDetails[index].tutorID << setw(13) << tutorDetails[index].tutorFirstName << setw(14) << tutorDetails[index].tutorLastName << setw(7);
	cout << tutorDetails[index].datejoined.dd << "/" << tutorDetails[index].datejoined.mm << "/" << tutorDetails[index].datejoined.yyyy << "\t" << endl;
	cout << "\t WHAT IS THE TEMINATION DATE OF THE USER? (DD/MM/YYY) : ";
	cin >> tutorDetails[index].dateTerminated.dd; cin >> seperator; 
	cin >> tutorDetails[index].dateTerminated.mm; cin >> seperator;
	cin >> tutorDetails[index].dateTerminated.yyyy;
	dayOfContract = (tutorDetails[index].dateTerminated.dd + tutorDetails[index].dateTerminated.mm * 30 + tutorDetails[index].dateTerminated.yyyy * 365) -
		(tutorDetails[index].datejoined.dd + tutorDetails[index].datejoined.mm * 30 + tutorDetails[index].datejoined.yyyy * 365); 
	
	if (dayOfContract >= 60) {
		char choice;
		system("CLS");
		cout << "\t| DELETE TUTOR MENU |" << endl;
		cout << "\t| TUTOR DETAILS |" << endl;
		cout << "\t" << setw(4); cout << "|TUTOR ID|"; cout << setw(13) << "|FIRST NAME|"; cout << setw(12) << "|LAST NAME|"; cout << setw(14) << "|DATE JOINED|";
		cout << setw(18) << "|DATE TERMINATED|"; cout << setw(3) << "|PAY|"; cout << setw(14) << "|CENTRE CODE|"; cout << setw(18) << "|CENTRE LOCATION|"; cout << setw(14) << "|CENTRE NAME|";
		cout << setw(11) << "|SUB CODE|"; cout << setw(11) << "|SUB NAME|"; cout << setw(15) << "|PHONE NUM|"; cout << setw(21) << "|ADDRESS|"; cout << setw(23) << "|RATINGS|" << endl;
		cout << "\t" << setw(6) << tutorDetails[index].tutorID << setw(14) << tutorDetails[index].tutorFirstName << setw(13) << tutorDetails[index].tutorLastName << setw(7);
		cout << tutorDetails[index].datejoined.dd << "/" << tutorDetails[index].datejoined.mm << "/" << tutorDetails[index].datejoined.yyyy << setw(10);
		cout << tutorDetails[index].dateTerminated.dd << "/" << tutorDetails[index].dateTerminated.mm << "/" << tutorDetails[index].dateTerminated.yyyy << setw(11);
		cout << tutorDetails[index].hourlyPayRate << setw(10) << tutorDetails[index].center.tuitionCenterCode << setw(21) << tutorDetails[index].center.tuitionCenterLocation;
		cout << setw(11) << tutorDetails[index].center.tuitionCenterName;
		cout << setw(12) << tutorDetails[index].teachSub.subjectCode << setw(13) << tutorDetails[index].teachSub.subjectName;
		cout << setw(17) << tutorDetails[index].phoneNumber << setw(30) << tutorDetails[index].tutorAddress;
		cout << setw(10) << tutorDetails[index].rating;
		cout << endl << endl;
	error:
		cout << "\tARE YOU SURE THIS IS THE RECORD YOU WANT TO DELETE? (Y/N) : ";
		cin >> choice;
		if (toupper(choice) == 'Y') {
			cout << "\t PERFORMING DELETION........"; Sleep(3000);
			
			if (lastIndex == index) {
				tutorDetails[lastIndex].tutorID = NULL;  tutorDetails[lastIndex].tutorFirstName = ""; tutorDetails[lastIndex].tutorLastName = "";
				tutorDetails[lastIndex].datejoined.dd = NULL; tutorDetails[lastIndex].datejoined.mm = NULL; tutorDetails[lastIndex].datejoined.yyyy = NULL;
				tutorDetails[lastIndex].dateTerminated.dd = NULL; tutorDetails[lastIndex].dateTerminated.mm = NULL; tutorDetails[lastIndex].dateTerminated.yyyy = NULL;
				tutorDetails[lastIndex].hourlyPayRate = NULL; tutorDetails[lastIndex].center.tuitionCenterCode = NULL;  tutorDetails[lastIndex].center.tuitionCenterLocation = "";
				tutorDetails[lastIndex].center.tuitionCenterName = ""; tutorDetails[lastIndex].teachSub.subjectCode = NULL; tutorDetails[lastIndex].teachSub.subjectName = "";
				tutorDetails[lastIndex].phoneNumber = ""; tutorDetails[lastIndex].tutorAddress = "";  tutorDetails[lastIndex].rating = NULL;
			}
			else {
				for (index; index < lastIndex; index++) {
					tutorDetails[index].tutorID = tutorDetails[index + 1].tutorID; tutorDetails[index].tutorFirstName = tutorDetails[index + 1].tutorFirstName;
					tutorDetails[index].tutorLastName = tutorDetails[index + 1].tutorLastName; tutorDetails[index].datejoined.dd = tutorDetails[index + 1].datejoined.dd;
					tutorDetails[index].datejoined.mm = tutorDetails[index + 1].datejoined.mm; tutorDetails[index].datejoined.yyyy = tutorDetails[index + 1].datejoined.yyyy;
					tutorDetails[index].dateTerminated.dd = tutorDetails[index + 1].dateTerminated.dd; tutorDetails[index].dateTerminated.mm = tutorDetails[index + 1].dateTerminated.mm;
					tutorDetails[index].dateTerminated.yyyy = tutorDetails[index + 1].dateTerminated.yyyy; tutorDetails[index].hourlyPayRate = tutorDetails[index + 1].hourlyPayRate;
					tutorDetails[index].center.tuitionCenterCode = tutorDetails[index + 1].center.tuitionCenterCode; tutorDetails[index].center.tuitionCenterLocation = tutorDetails[index + 1].center.tuitionCenterLocation;
					tutorDetails[index].center.tuitionCenterName = tutorDetails[index + 1].center.tuitionCenterName; tutorDetails[index].teachSub.subjectCode = tutorDetails[index + 1].teachSub.subjectCode;
					tutorDetails[index].teachSub.subjectName = tutorDetails[index + 1].teachSub.subjectName; tutorDetails[index].phoneNumber = tutorDetails[index + 1].phoneNumber;
					tutorDetails[index].tutorAddress = tutorDetails[index + 1].tutorAddress; tutorDetails[index].rating = tutorDetails[index + 1].rating;
				}
				tutorDetails[lastIndex].tutorID = NULL;  tutorDetails[lastIndex].tutorFirstName = ""; tutorDetails[lastIndex].tutorLastName = "";
				tutorDetails[lastIndex].datejoined.dd = NULL; tutorDetails[lastIndex].datejoined.mm = NULL; tutorDetails[lastIndex].datejoined.yyyy = NULL;
				tutorDetails[lastIndex].dateTerminated.dd = NULL; tutorDetails[lastIndex].dateTerminated.mm = NULL; tutorDetails[lastIndex].dateTerminated.yyyy = NULL;
				tutorDetails[lastIndex].hourlyPayRate = NULL; tutorDetails[lastIndex].center.tuitionCenterCode = NULL;  tutorDetails[lastIndex].center.tuitionCenterLocation = "";
				tutorDetails[lastIndex].center.tuitionCenterName = ""; tutorDetails[lastIndex].teachSub.subjectCode = NULL; tutorDetails[lastIndex].teachSub.subjectName = "";
				tutorDetails[lastIndex].phoneNumber = ""; tutorDetails[lastIndex].tutorAddress = "";  tutorDetails[lastIndex].rating = NULL;
			}
			cout << endl << endl << "\tSUCCESSFULLY DELETED !" << endl;
			Sleep(3000); 
			cout << "\t\t\tGoing Back To Main Menu : ))";
			Sleep(3000); 
			system("CLS"); 
		}
		else if (toupper(choice) == 'N') {
			cout << "\n\n\t\t\t\tYou Entred Wrong Value!Please Try Again ? : " << endl;
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



void DisplaySearchByID(int index) {
	int choice;
	string address, phoneNumber;
	char confirm; char choiceConfirm;
	system("CLS");
	cout << "\t| MODIFY TUTOR MENU |" << endl;
	cout << "\t" << setw(4); cout << "|TUTOR ID|"; cout << setw(13) << "|FIRST NAME|"; cout << setw(12) << "|LAST NAME|";
	cout << setw(6) << "|PAY|"; cout << setw(14) << "|CENTRE CODE|"; cout << setw(18) << "|CENTRE LOCATION|"; cout << setw(14) << "|CENTRE NAME|";
	cout << setw(11) << "|SUB CODE|"; cout << setw(11) << "|SUB NAME|"; cout << setw(15) << "|PHONE NUM|"; cout << setw(21) << "|ADDRESS|"; cout << setw(23) << "|RATINGS|" << endl;
	cout << "\t" << setw(6) << tutorDetails[index].tutorID << setw(13) << tutorDetails[index].tutorFirstName << setw(13) << tutorDetails[index].tutorLastName << setw(8);
	cout << tutorDetails[index].hourlyPayRate << setw(10) << tutorDetails[index].center.tuitionCenterCode << setw(21) << tutorDetails[index].center.tuitionCenterLocation;
	cout << setw(12) << tutorDetails[index].center.tuitionCenterName;
	cout << setw(12) << tutorDetails[index].teachSub.subjectCode << setw(13) << tutorDetails[index].teachSub.subjectName;
	cout << setw(16) << tutorDetails[index].phoneNumber << setw(30) << tutorDetails[index].tutorAddress;
	cout << setw(10) << tutorDetails[index].rating;
	cout << endl << endl;
	cout << "\t\t\t	Press Enter Key To Go Back To Main Menu :)" << endl;
	cout << "	"; cin.get();
	if (cin.get() == '\n') {
		cout << "\t\t\t\tGoing Back To Main Menu : )" << endl;
		Sleep(2000);
		system("CLS");
	}
}

void SearchMenu()
{
	searchmenu:
	int r; int arraySize = 0; int x; int i = 0;
	while (tutorDetails[i].tutorID != NULL) {
		arraySize++;
		i++;
	}
	cout << "\tPLEASE ENTER THE TUTOR ID YOU WANT TO SEARCH : "; cin >> x;
	r = exponential_search(arraySize, x); 
	if (r == -1) {
		cout << "\tTHERE IS NO SUCH RECORD!!!" << endl;
		cout << "	*****      RETURNING TO MODIFY MENU      *****";
		Sleep(3000); 
		system("CLS"); 
		goto searchmenu; 
	}
	else {
		DisplaySearchByID(r);

	}
}
void DETAILS(int index) {
	int choice;
	string address, phoneNumber;
	char confirm; char choiceConfirm;
	system("CLS");
	cout << "\t| MODIFY TUTOR MENU |" << endl;
	cout << "\t" << setw(4); cout << "|TUTOR ID|"; cout << setw(13) << "|FIRST NAME|"; cout << setw(12) << "|LAST NAME|";
	cout << setw(6) << "|PAY|"; cout << setw(14) << "|CENTRE CODE|"; cout << setw(18) << "|CENTRE LOCATION|"; cout << setw(14) << "|CENTRE NAME|";
	cout << setw(11) << "|SUB CODE|"; cout << setw(11) << "|SUB NAME|"; cout << setw(15) << "|PHONE NUM|"; cout << setw(21) << "|ADDRESS|"; cout << setw(23) << "|RATINGS|" << endl;
	cout << "\t" << setw(6) << tutorDetails[index].tutorID << setw(13) << tutorDetails[index].tutorFirstName << setw(13) << tutorDetails[index].tutorLastName << setw(8);
	cout << tutorDetails[index].hourlyPayRate << setw(10) << tutorDetails[index].center.tuitionCenterCode << setw(21) << tutorDetails[index].center.tuitionCenterLocation;
	cout << setw(12) << tutorDetails[index].center.tuitionCenterName;
	cout << setw(12) << tutorDetails[index].teachSub.subjectCode << setw(13) << tutorDetails[index].teachSub.subjectName;
	cout << setw(16) << tutorDetails[index].phoneNumber << setw(30) << tutorDetails[index].tutorAddress;
	cout << setw(10) << tutorDetails[index].rating;
	cout << endl << endl;
error:
	cout << "\tARE YOU SURE THIS IS THE RECORD YOU WANT TO MODIFY? (Y/N) : ";
	cin >> choiceConfirm;
	if (toupper(choiceConfirm) == 'Y') {
		cout << "\tWHICH DETAILS WOULD YOU LIKE TO CHANGE?" << endl;
		cout << "\t1. PHONE NUMBER" << endl;
		cout << "\t2. ADDRESS     " << endl;
		cout << "\t3.Going Back To Main Menu : ))" << endl << "\t";
	retry:
		cin >> choice;
		switch (choice) {
		case 1:
		phoneConfirmation:
			cout << "\tPLEASE INSERT NEW PHONE NUMBER : ";
			cin >> phoneNumber;
			cout << "\tYOU ENTERED THE NUMBER " << phoneNumber << endl;
		wrongInput:
			cout << "\tIS THIS THE PHONE NUMBER YOU WANTED? (Y/N)" << endl << "\t";
			cin >> confirm;

			if (toupper(confirm) == 'Y') {
				tutorDetails[index].phoneNumber = phoneNumber;
				cout << "\tPHONE NUMBER HAD SUCCESSFULLY CHANGED" << endl;
				Sleep(3000);
				cout << "\t\t\tGoing Back To Main Menu : ))";
				Sleep(3000);
				system("CLS");
				return;
			}
			else if (toupper(confirm) == 'N') {
				cout << "\n\n\t\t\t\tYou Entred Wrong Value!Please Try Again ? :" << endl;
				goto phoneConfirmation;
			}
			else {
				cout << "\n\n\t\t\t\tYou Entred Wrong Value!Please Try Again ? :" << endl;
				goto wrongInput;
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
				tutorDetails[index].tutorAddress = address;
				cout << "\tADDRESS HAD SUCCESSFULLY CHANGED" << endl;
				Sleep(3000);
				cout << "\t\t\tGoing Back To Main Menu : ))";
				Sleep(3000);
				system("CLS");
				return;
			}
			else if (toupper(confirm) == 'N') {
				cout << "\n\n\t\t\t\tYou Entred Wrong Value!Please Try Again ? :" << endl;
				goto addressConfirmation;
			}
			else {
				cout << "\n\n\t\t\t\tYou Entred Wrong Value!Please Try Again ? :" << endl;
				goto wrongInputA;
			}
			break;
		case 3:
			cout << "\t\t\tGoing Back To Main Menu : ))";
			Sleep(3000);
			system("CLS");
			break;
		default:
			cout << "\n\n\t\t\t\tYou Entred Wrong Value!Please Try Again ? : " << endl;
			goto retry;
		}
	}
	else if (toupper(choiceConfirm) == 'N') {
		cout << "\n\n\t\t\t\tYou Entred Wrong Value!Please Try Again ? : " << endl << endl;
		cout << "\t\t\tGoing Back To Main Menu : ))";
		Sleep(3000);
		system("CLS");
	}
	else {
		cout << "\n\n\t\t\t\tYou Entred Wrong Value!Please Try Again ? :" << endl;
		Sleep(3000);
		goto error;
	}

}



void Modify_function()
{
	c:
	int choice; int x; int n; int r; int arraySize = 0; int i = 0;
	while (tutorDetails[i].tutorID != NULL) {
		arraySize++;
		i++;
	}
	cout << "\tPLEASE ENTER THE TUTOR ID YOU WANT TO Modify it : "; cin >> x;
	r = exponential_search(arraySize, x); 
	if (r == -1) {
		cout << "\tTHERE IS NO SUCH RECORD!!!" << endl;
		cout << "\t\t\tGoing Back To Main Menu : ))";
		Sleep(3000); 
		system("CLS"); 
		goto c; 
	}
	else {
		DETAILS(r);
	}
}


void DeleteTutorDetails()
{
	deletemenu:
	int choice; int x; int n; int r; int arraySize = 0; int i = 0;
	while (tutorDetails[i].tutorID != NULL) {
		arraySize++;
		i++;
	}
	cout << "\tPLEASE ENTER THE TUTOR ID YOU WANT TO Delete It : "; cin >> x;
	r = exponential_search(arraySize, x); 
	if (r == -1) {
		cout << "\tTHERE IS NO SUCH RECORD!!!" << endl;
		cout << "\t\t\tGoing Back To Main Menu : ))";
		Sleep(3000); 
		system("CLS"); 
		goto deletemenu; 
	}
	else {
		delete_tutor_details(r, arraySize - 1); 
	}
}





int main() {
	initialize_data();
	loginManager loginManagerObj;
	loginManagerObj.login();
mainmenu:
	int choice; int check; int i = 0; int arraySize = 0;
	char exitChoice;
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
	cout << "\t |2.Display All Records sorted by (ID,Centertution,HourlyPayment,Rate|" << endl;
	cout << "\t |3.Search a Tutor By ID                                             |" << endl;
	cout << "\t |4.Modify a Tutor Record                                            |" << endl;
	cout << "\t |5.Delete a Tutor Record                                            |" << endl;
	cout << "\t |6.Exit                                                             |" << endl;
	cout << "\t --------------------------------------------------------------------- " << endl;

	cout << "\n\t {Enter Your Option : [1/2/3/4/5/6]} : ";
	while (tutorDetails[i].tutorID != NULL) {
		arraySize++;
		i++;
	}
	cin >> choice;
	switch (choice) {
	case 1:
		check = check_vacant_slot();
		if (check == 2) {
			cout << "THERE IS NO AVAILABLE SLOT ";
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
		check = check_vacant_slot();
		
		if (check == 1) {
			cout << "\tCURRENTLY THERE'S NO RECORDS OF TUTOR, PLEASE ADD NEW TUTOR " << endl;
			Sleep(3000); 
			cout << "\t\t\tGoing Back To Main Menu : ))";
			Sleep(2000); 
			system("CLS"); 
			goto mainmenu; 
		}
		else {
			system("CLS");
			display_tutor_menu();
			goto mainmenu; 
		}
		break;
	case 3:
		check = check_vacant_slot();
		
		if (check == 2) {
			cout << "THERE IS NO AVAILABLE SLOT ";
			Sleep(3000); 
			system("CLS"); 

			goto mainmenu; 
		}
		else {
			system("CLS"); 
			SearchMenu(); 
			goto mainmenu; 
		}
		break;
	case 4:
		check = check_vacant_slot();
		
		if (check == 1) {
			cout << "\tCURRENTLY THERE'S NO RECORDS OF TUTOR, PLEASE ADD NEW TUTOR " << endl;
			Sleep(3000); 
			cout << "\t\t\tGoing Back To Main Menu : ))";
			Sleep(2000); 
			system("CLS"); 
			goto mainmenu; 
		}
		else {
			system("CLS"); 
			mergeSort(0, arraySize - 1, 1); 
			Modify_function(); 
			goto mainmenu; 
		}
		break;
	case 5:
		check = check_vacant_slot();

		if (check == 1) {
			cout << "\tCURRENTLY THERE'S NO RECORDS OF TUTOR, PLEASE ADD NEW TUTOR " << endl;
			Sleep(3000);
			cout << "\t\t\tGoing Back To Main Menu : ))";
			Sleep(2000);
			system("CLS");
			goto mainmenu;
		}
		else {
			system("CLS");
			mergeSort(0, arraySize - 1, 1);
			DeleteTutorDetails();
			goto mainmenu;
		}
		break;
	case 6:
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
		cout << "Going back to main menu";
		system("CLS");
		goto mainmenu; 
	}
}
