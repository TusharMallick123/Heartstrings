//DATING APPLICATION
#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<string>
using namespace std;
int case_insensitive_match(string s1, string s2) 
{
	
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	if(s1.compare(s2) == 0)
		return 1; 
	return 0; 
}
int main()
{
	cout<<endl<<"-----Welcome to HeartStrings!-----"<<endl;
	cout<<"----------------------------------"<<endl<<endl;
	cout<<"Please ensure you are 18+ to access the content of this app"<<endl;
	cout<<"___________"<<endl;
	cout<<"| I am a: |"<<endl;
	cout<<"+--+------+"<<endl;
	cout<<"|1.| Male |"<<endl;
	cout<<"|2.|Female|"<<endl;
	cout<<"+--+------+"<<endl;
	std::string bname[20]={"Ramesh ","Suresh","Mahesh","Raghav","Manish","Sumeet",
							"Ayush","Sanjeev","Sahil","Harsh","Rishav","Vishal",
							"Utkarsh","Aditya","Shubham","Aman","Shivansh",
							"Appoorv","Santosh","Sameer"};
	std::string btag[20]={"ABC-12302","AAC-12369","AAD-56974","FGT-56934","HDH-45924",
						  "DGH-45831","FAD-45934","DAW-45931","FEQ-42369","AWE-56391",
						  "DAW-23648","ADW-47526","DAF-41253","AWR-45693","FAW-45693",
						  "FQE-41563","FAE-04592","GJU-04159","DGH-42638","QFG-45265"};
	std::string gtag[20]={"BSD-96129","BST-45931","STG-49614","BSH-96106","HTS-84949",
						  "EGW-45965","WGW-15609","GAG-56096","RGE-15006","WGH-15604",
						  "AER-91966","EGG-56540","ERA-15634","RGG-56641","AER-00885",
						  "GGH-45855","ERH-46310","WAE-05641","HER-45061","GAE-00314"};
	int bstat[20]={1,1,0,1,1,1,0,0,0,1,0,1,1,1,0,0,1,0,1,0};
	int bage[20]={22,26,24,23,21,28,30,27,25,26,24,27,29,31,33,25,28,27,29,30};
	std::string gname[20]={"Saanvi","Zara","Inaya","Aarya","Pari","Ira","Fatima"
							,"Amayra","Kiara","Mariya","Anika","Rose","Meera",
							"Aadhya","Riya","Aayat","Shreya","Nyra","Vanya","Anaisha"};
	int gage[20]={24,30,25,26,24,29,24,26,28,27,25,22,23,24,26,33,31,32,28};
	int gstat[20]={1,1,1,1,1,1,1,1,0,1,0,1,0,1,1,0,0,0,1,0};
	int r1,r2,i,ch=0,age,stat,ar;
	cout<<"Please Enter :";
	cin>>r1;
	system("CLS");
	cout<<endl<<endl;
	cout<<"_____________________"<<endl;
	cout<<"| I am looking for: |"<<endl;
	cout<<"+--+----------------+"<<endl;
	cout<<"|1.|       Male     |"<<endl;
	cout<<"|2.|      Female    |"<<endl;
	cout<<"+--+----------------+"<<endl;
	cout<<"Please Enter: ";
	cin>>r2;
	system("CLS");
	cout<<endl<<endl;
	string name,nam;
	while(ch!=5)
	{
		system("CLS");
		cout<<"_______________________________"<<endl;
		cout<<"|No.|         Action          |"<<endl;
		cout<<"+---+-------------------------+"<<endl;
		cout<<"| 1 |     See all profiles    |"<<endl;
		cout<<"| 2 |Get suggested for a match|"<<endl;
		cout<<"| 3 |Search out for a profile |"<<endl;
		cout<<"| 4 | To seek contact details |"<<endl;
		cout<<"| 5 |    Exit application     |"<<endl;
		cout<<"+---+-------------------------+"<<endl;
		cout<<endl<<"Please enter your choice: ";
		cin>>ch;
		system("CLS");
		switch(ch)
		{
			case 1:
				cout<<"Here's a list of all the available profiles:"<<endl;
				cout<<"Name  - Age"<<endl;
				for(i=0;i<20;i++)
				{
					if(r2==2)
					cout<<gname[i]<<" - "<<gage[i]<<endl;
					else if(r2==1)
					cout<<bname[i]<<" - "<<bage[i]<<endl;
				}
				system("pause=2");
				break;
			case 2:
				cout<<"Let's find a perfect match for you:"<<endl;
				cout<<"-----------------------------------"<<endl;
				cout<<"Please introduce yourself:"<<endl;
				cout<<"What's your name? :";
				cin>>name;
				cout<<"Your age please: ";
				cin>>age;
				cout<<"What type of partner do you want:"<<endl;
				cout<<"________________"<<endl;
				cout<<"| 1 | Employed |"<<endl;
				cout<<"| 2 | Studying |"<<endl;
				cout<<"+---+----------+"<<endl;
				cout<<"Please Enter: ";
				cin>>stat;
				stat=(stat==1)?1:0;
				cout<<"Please select the age range:"<<endl;
				cout<<"__________________"<<endl;
				cout<<"|S.No.|   Range  |"<<endl;
				cout<<"+-----+----------+"<<endl;
				cout<<"|  1  |   18-22  |"<<endl;
				cout<<"|  2  |   22-25  |"<<endl;
				cout<<"|  3  |   25-28  |"<<endl;
				cout<<"|  4  |    >28   |"<<endl;
				cout<<"+-----+----------+"<<endl;
				cout<<"Please Enter: ";
				cin>>ar;
				cout<<"Computing the best results for you"<<endl;
				cout<<"----------------------------------"<<endl;
				system("pause=2");
				system("CLS");
				cout<<"Available matches are: "<<endl;
				cout<<"Name  -  Age"<<endl;
				for(i=0;i<20;i++)
				{
					if(r2==1)
					{
						if(bstat[i]==stat)
						{
							if(ar==1)
							{
								if(bage[i]>=18 && bage[i]<=22)
									cout<<bname[i]<<" - "<<bage[i]<<endl;
							}
							else if(ar==2)
							{
								if(bage[i]>=22 && bage[i]<=25)
									cout<<bname[i]<<" - "<<bage[i]<<endl;
							}
							else if(ar==3)
							{
								if(bage[i]>=25 && bage[i]<=28)
									cout<<bname[i]<<" - "<<bage[i]<<endl;
							}
							else if(ar==4)
							{
								if(bage[i]>28)
									cout<<bname[i]<<" - "<<bage[i]<<endl;
							}
						}	
					}
					else if(r2==2)
					{
						if(gstat[i]==stat)
						{
							if(ar==1)
							{
								if(gage[i]>=18 && gage[i]<=22)
									cout<<gname[i]<<" - "<<gage[i]<<endl;
							}
							else if(ar==2)
							{
								if(gage[i]>=22 && gage[i]<=25)
									cout<<gname[i]<<" - "<<gage[i]<<endl;
							}
							else if(ar==3)
							{
								if(gage[i]>=25 && gage[i]<=28)
									cout<<gname[i]<<" - "<<gage[i]<<endl;
							}
							else if(ar==4)
							{
								if(gage[i]>28)
									cout<<gname[i]<<" - "<<gage[i]<<endl;
							}
						}	
					}
				}
				system("pause=2");
				break;
			case 3:
				system("CLS");
				cout<<"Enter name to be searched:";
				cin>>nam;
				for(i=0;i<20;i++)
				{
					if(r2==2)
						if(case_insensitive_match(nam,gname[i]))
						{
							cout<<"Found with profile tag: "<<gtag[i]<<endl;
							break;
						}
					else if(r2==1)
						if(case_insensitive_match(nam,bname[i]))
						{
							cout<<"Found with profile tag: "<<btag[i]<<endl;
							break;
						}
					if(i==19)
					cout<<"No match found"<<endl;
				}
				system("pause=2");
				system("CLS");
				break;
			case 4:
				cout<<"Name  -  Age  -  Profile tag"<<endl;
				for(i=0;i<20;i++)
				{
					if(r2==2)
						cout<<gname[i]<<" - "<<gage[i]<<"  -  "<<gtag[i]<<endl;
					else if(r2==1)
						cout<<bname[i]<<" - "<<bage[i]<<"  -  "<<btag[i]<<endl;
				}
				cout<<"Please note the profile tag"<<endl;
				system("pause=2");
				system("CLS");
				cout<<"To request contact details for any profile please mail us your BIO-DATA."<<endl;
				cout<<"Please attatch the following details in the given order:"<<endl;
				cout<<"Your name: XYZ"<<endl;
				cout<<"Profile tag of the user for which contact is requested: [Example: #ABC-12345]"<<endl;
				cout<<"Look in the profile list to get the profile tag"<<endl;
				cout<<"Contact details will be mailed to you after getting permission from the profile you requested"<<endl;
				cout<<"Mail us at: profile_enquiry@heartstrings.com"<<endl;
				system("pause=2");
				break;
			case 5:
				cout<<"Thank you for using HEARTSTRINGS!"<<endl;
				system("pause=2");
				break;		
		}
	}
	return 0;
}
