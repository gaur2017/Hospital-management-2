#include<iostream>
#include<fstream>
#include<sstream>
#include<stdlib.h>
#include<iomanip>
#include<math.h>
using namespace std;
string checkdepartment(int z)
{
	switch(z)
	{
		case 1:
			return "orthopedics";
			break;
		case 2:
			return "Gynecology";
			break;
		case 3:
			return "Emergency";
			break;
		case 4:
			return "Cardiology";
			break;
		case 5:
			return "E.N.T";
			break;
		default :
			return "EnternalMedicine";
			
	}
}
showorthopedics()
{
	cout<<endl;
	ifstream file;
	file.open("doctors.txt");
	if(!file)
	{
		cout<<"no such file exist"<<endl;
		return 1;
	}
	string department;
	int x,y,z,b,i=0;
	cout<<setw(8)<<"ID"<<setw(20)<<"department"<<setw(25)<<"Name"<<setw(15)<<"timing"<<endl;
	

while (i!=4)
{
file>>x;
file.ignore();
file>>y;
department =checkdepartment(y);
file.ignore();
file>>z;
file.ignore();
file>>b;
file.ignore();
string line;
getline(file,line,',');
cout<<setw(8)<<x<<setw(20)<<department<<setw(25)<<line<<setw(15)<<z<<"-"<<b<<endl;
i++;
	
}
file.close();
}
showGynecology()
{
	cout<<endl;
	ifstream file;
	file.open("doctors.txt");
	if(!file)
	{
		cout<<"no such file exist"<<endl;
		return 1;
	}
	string discard;
	getline(file,discard,'$');
	string department;
	int x,y,z,b,i=0;
	cout<<setw(8)<<"ID"<<setw(20)<<"department"<<setw(25)<<"Name"<<setw(15)<<"timing"<<endl;
	

while (i!=4)
{
file>>x;
file.ignore();
file>>y;
department =checkdepartment(y);
file.ignore();
file>>z;
file.ignore();
file>>b;
file.ignore();
string line;
getline(file,line,',');
cout<<setw(8)<<x<<setw(20)<<department<<setw(25)<<line<<setw(15)<<z<<"-"<<b<<endl;
i++;
	
}
file.close();
}
showemergency()
{
	cout<<endl;
	ifstream file;
	file.open("doctors.txt");
	if(!file)
	{
		cout<<"no such file exist"<<endl;
		return 1;
	}
	string discard;
	getline(file,discard,'&');
	string department;
	int x,y,z,b,i=0;
	cout<<setw(8)<<"ID"<<setw(20)<<"department"<<setw(25)<<"Name"<<setw(15)<<"timing"<<endl;
	

while (i!=4)
{
file>>x;
file.ignore();
file>>y;
department =checkdepartment(y);
file.ignore();
file>>z;
file.ignore();
file>>b;
file.ignore();
string line;
getline(file,line,',');
cout<<setw(8)<<x<<setw(20)<<department<<setw(25)<<line<<setw(15)<<z<<"-"<<b<<endl;
i++;
	
}
file.close();
}
showCardiology()
{
	cout<<endl;
	ifstream file;
	file.open("doctors.txt");
	if(!file)
	{
		cout<<"no such file exist"<<endl;
		return 1;
	}
	string discard;
	getline(file,discard,'@');
	string department;
	int x,y,z,b,i=0;
	cout<<setw(8)<<"ID"<<setw(20)<<"department"<<setw(25)<<"Name"<<setw(15)<<"timing"<<endl;
	

while (i!=4)
{
file>>x;
file.ignore();
file>>y;
department =checkdepartment(y);
file.ignore();
file>>z;
file.ignore();
file>>b;
file.ignore();
string line;
getline(file,line,',');
cout<<setw(8)<<x<<setw(20)<<department<<setw(25)<<line<<setw(15)<<z<<"-"<<b<<endl;
i++;
	
}
file.close();
}
showent()
{
	cout<<endl;
	ifstream file;
	file.open("doctors.txt");
	if(!file)
	{
		cout<<"no such file exist"<<endl;
		return 1;
	}
	string discard;
	getline(file,discard,'#');
	string department;
	int x,y,z,b,i=0;
	cout<<setw(8)<<"ID"<<setw(20)<<"department"<<setw(25)<<"Name"<<setw(15)<<"timing"<<endl;
	

while (i!=4)
{
file>>x;
file.ignore();
file>>y;
department =checkdepartment(y);
file.ignore();
file>>z;
file.ignore();
file>>b;
file.ignore();
string line;
getline(file,line,',');
cout<<setw(8)<<x<<setw(20)<<department<<setw(25)<<line<<setw(15)<<z<<"-"<<b<<endl;
i++;
	
}
file.close();
}
showinternalmed()
{
	cout<<endl;
	ifstream file;
	file.open("doctors.txt");
	if(!file)
	{
		cout<<"no such file exist"<<endl;
		return 1;
	}
	string discard;
	getline(file,discard,'%');
	string department;
	int x,y,z,b,i=0;
	cout<<setw(8)<<"ID"<<setw(20)<<"department"<<setw(20)<<"Name"<<setw(15)<<"timing"<<endl;
	

while (i!=4)
{
file>>x;
file.ignore();
file>>y;
department =checkdepartment(y);
file.ignore();
file>>z;
file.ignore();
file>>b;
file.ignore();
string line;
getline(file,line,',');
cout<<setw(8)<<x<<setw(20)<<department<<setw(25)<<line<<setw(15)<<z<<"-"<<b<<endl;
i++;
	
}
file.close();
}
bool checkavailibility(int id)
{
	fstream file;
	file.open("appointment.txt");
	if(!file)
	{
		cout<<"can't open file"<<endl;
		return 1;
	}
	int number;
	file>>number;
	while(!file.eof())
	{
		if(number ==id)
		{
			return false;
		}
		file>>number;
	}
	return true;
	file.close();
	
}
makeappointment(int d)
{
	bool check = false;
	while(!check)
	{
		int id;
		cout<<"enter your desired doctor Id number"<<endl;
		cin>>id;
		while(cin.fail())
		{
			cout<<"enter an integer from above choices"<<endl;
			cin.clear();
			cin.ignore(256,'\n');
			cin>>id;
		}
		switch(d)
		{
			case 1:
				do
				{
					if(id<=0||id>4)
					{
						cout<<"enter valid doctor id number(as shown above)"<<endl;
						
					}
					else
					break;
					cout<<"enter your desired doctor id number"<<endl;
					cin>>id;
				}
				while (id<=0||id>4);
				break;
			case 2:
			do
			{
			 if(id<=4 || id>8)
			 {
			 	cout<<"enter valid doctor id number (as shown above)"<<endl;
			 }
			 else 
			 break;
			 	cout<<"enter your desired doctor id number"<<endl;
			 	cin>>id;
			}
			while(id<=4||id>8);
			break;
			case 3:
			do
			{
			 if(id<=20 || id>24)
			 {
			 	cout<<"enter valid doctor id number (as shown above)"<<endl;
			 }
			 else 
			 break;
			 	cout<<"enter your desired doctor id number"<<endl;
			 	cin>>id;
			}
			while(id<=20||id>24);
			break;
			case 4:
			do
			{
			 if(id<=12 || id>16)
			 {
			 	cout<<"enter valid doctor id number (as shown above)"<<endl;
			 }
			 else 
			 break;
			 	cout<<"enter your desired doctor id number"<<endl;
			 	cin>>id;
			}
			while(id<=12||id>16);
			break;
			case 5:
			do
			{
			 if(id<=16 || id>20)
			 {
			 	cout<<"enter valid doctor id number (as shown above)"<<endl;
			 }
			 else 
			 break;
			 	cout<<"enter your desired doctor id number"<<endl;
			 	cin>>id;
			}
			while(id<=16||id>20);
			break;
			case 6:
			do
			{
			 if(id<=8 || id>12)
			 {
			 	cout<<"enter valid doctor id number (as shown above)"<<endl;
			 }
			 else 
			 break;
			 	cout<<"enter your desired doctor id number"<<endl;
			 	cin>>id;
			}
			while(id<=8||id>12);
			break;
			default:
				cout<<"enter valid input"<<endl;
    	}
    	bool found = checkavailibility(id);
    	if(!found)
    	{
    		cout<<"doctor unavailable"<<endl;
		}
		else
		{
			string data;
			ofstream file;
			file.open("appointment.txt",std::ofstream::out|std::ofstream::app);
			
			file<<id<<endl;
			check = true;
			cout<<"appointment succesfully done"<<endl;
		}
		int set();
    	
	}
	
}
checkappointment(int id)
{
	ifstream file;
	file.open("appointment.txt");
	if(!file)
	{
		cout<<"can't open file"<<endl;
		return 1;
	}
	int number ;
	bool found;
	file>>number;
	
	while(!file.eof())
	{
		if(number==id)
		{
			cout<<"found\nplease proceed to the writing area on your left\nyou will be shortly guided to your doctor"<<endl;
			found = true;
		}
		file>>number;
	}
	if(!found)
	{
		cout<<"not found\n"<<endl;
	}
	file.close();
}

class person
{
	protected :
		int id;
		string name;
		char gender;
		long long phonenum;
	public:
	
		void set()
	{
		cin.ignore();
		cout<<"\n\n\t\t...............\n";
		cout<<"\t\tEnter your Name:";
		getline(cin,name);
		cout<<"\n\tEnter Gender(M/F):";
		cin>>gender;
		bool check=false;
		while(check==false)
		{
			if(gender!='M'&&gender!='F'&&gender!='m'&&gender!='f')
			{
				try
				{
					throw &gender;
				}
				catch(char *gender)
				{
					cout<<"enter valid input:"<<endl;
					cin>>*gender;
					if(*gender=='M'||*gender=='F'||*gender=='m'||*gender=='f')
					{
						check =true;
					}
				}
			}
			else
			{
				check=true;
			}
		}
		cout<<"\n\t\tEnter Phone number:";
		cin.ignore();
		cin>>phonenum;
		while(cin.fail())
		{
			cout<<"dear sir please enter phone number in integer form";
			cin.clear();
			cin.ignore(256,'\n');
			cin>>phonenum;
		}
		
	}
	string getname()
	{
		return name;
	}
	int getid()
	{
		return id;
	}
	char getgender()
	{
		return gender;
	}
	long getphone()
	{
		return phonenum;
	}
};

class doctor:public person
{
	private :
		string specialization;
	public:
	setspecialization(string sp)
		{
			specialization=sp;
		}
		string getspecialization()
		{
			return specialization;
		}
		void checkpatient()
		{
			cout<<"patient checked"<<endl;
		}
		void prescribemedicine()
		{
			cout<<"medicine prescription sent to pharmacy"<<endl;
		}
		void generatereport()
		{
			cout<<"reports will be available to collect after 10 days from prescribed time"<<endl;
			
		}
};

class patient:public person
{
	int choice;
	public:
		int set()
		{
			person::set();
			system("cls");
			cout<<"\n\n\t\tchoose department"<<endl;
			cout<<"\n\t\t\t\t1)Orthopedics \n\t\t\t\t2)Gynecology \n\t\t\t\t3)Emergency \n\t\t\t\t4)Cardiology \n\t\t\t\t5)E.N.T \n\t\t\t\t6)Enternal Medicine \n\n\n\t\t\tYour Choice:"<<endl;
			cin>>choice;
			while(cin.fail())
			{
				cout<<"enter an integer from above choice"<<endl;
				cin.clear();
				cin.ignore(256,'\n');
				cin>>choice;
			}
			bool check = false;
			while(!check)
			{
				if(choice>=1&&choice<=6)
				{
					check= true;
				}
				else
				{
					try
					{
						throw &choice;
					}
					catch(int *choice)
					{
						cout<<"enter valid input :"<<endl;
						cin>>*choice;
						while(cin.fail())
						{
							cin.clear();
							cin.ignore(256,'\n');
							cin>>*choice;
						}
					}
				}
			}
			switch(choice)
			{
				case 1:
					showorthopedics();
					break;
				case 2:
					showGynecology();
					break;
				case 3:
					showemergency();
					break;
				case 4:
					showCardiology();
					break;
				case 5:
					showent();
					break;
				case 6:
					showinternalmed();
					break;
				default :
					cout<<"\ndepartment not present :\t";
			}
			return choice;
		}
};

class receptionist :public person
{
	bool available=false;
	char ans;
	int id = 90;
	public :
		receptionist()
		{
			
		}
		receptionist(int d)
		{
			cout<<"do you have an appointment (Y/N)"<<endl;
			cin>>ans;
			bool check = false;
			while(check==false)
			{
				if(ans!='y'&&ans!='Y'&&ans!='N'&&ans!='n')
				{
					try
					{
						throw &ans;
					}
					catch(char *ans)
					{
						cout<<"enter valid input :"<<endl;
						cin>>*ans;
						if(*ans=='y'||*ans=='Y'||*ans=='n'||*ans=='N')
						{
							check = true;
						}
					}
				}
				else
				{
					check = true;
				}
			}
			char choice;
			switch(ans)
			{
				case 'n':
				case 'N':
					cout<<"do you want to make an appointment?(M) or walk in?(W)";
					cin>>choice;
					// acception handling for error
					check = false;
					while(check==false)
					{
						if(choice!='m'&&choice!='M'&&choice!='w'&&choice!='W')
						{
						 try
						 {
						 	throw &choice;
						  }
						  catch(char *choice)
						  {
						  	cout<<"enter valid input :"<<endl;
						  	cin>>*choice;
						  	if(*choice=='m'||*choice=='M'||*choice=='W'||*choice=='w')
						  	{
						  		check = true;
							  }
						  }	
						}
						else
						{
							check = true;
						}
					}
					if(choice=='m'||choice=='M')
					{
						makeappointment(d);
					}
					else if(choice=='w'||choice=='W')
					{
						while(!available)
						{
							switch(d)
							{
								case 1:
								do
								{
									cout<<"enter your desired doctor's id number:"<<endl;
									cin>>id;
									while(cin.fail())
									{
										cout<<"you have entered wrong"<<endl;
										cin.clear();
										cin.ignore(256,'\n');
										cin>>id;
										
									}
									if(id<=0||id>4)
									{
										cout<<"enter valid doctor id number (as shown above)"<<endl;
										
									}
								}
								while(id<=0||id>4);
								break;
								case 2:
								do
								{
									cout<<"enter your desired doctor's id number:"<<endl;
									cin>>id;
									while(cin.fail())
									{
										cout<<"you have entered wrong"<<endl;
										cin.clear();
										cin.ignore(256,'\n');
										cin>>id;
										
									}
									if(id<=4||id>8)
									{
										cout<<"enter valid doctor id number (as shown above)"<<endl;
										
									}
								}
								while(id<=4||id>8);
								break;
								case 3:
								do
								{
									cout<<"enter your desired doctor's id number:"<<endl;
									cin>>id;
									while(cin.fail())
									{
										cout<<"you have entered wrong"<<endl;
										cin.clear();
										cin.ignore(256,'\n');
										cin>>id;
										
									}
									if(id<=20||id>24)
									{
										cout<<"enter valid doctor id number (as shown above)"<<endl;
										
									}
								}
								while(id<=20||id>24);
								break;
								case 4:
								do
								{
									cout<<"enter your desired doctor's id number:"<<endl;
									cin>>id;
									while(cin.fail())
									{
										cout<<"you have entered wrong"<<endl;
										cin.clear();
										cin.ignore(256,'\n');
										cin>>id;
										
									}
									if(id<=12||id>16)
									{
										cout<<"enter valid doctor id number (as shown above)"<<endl;
										
									}
								}
								while(id<=12||id>16);
								break;
								case 5:
								do
								{
									cout<<"enter your desired doctor's id number:"<<endl;
									cin>>id;
									while(cin.fail())
									{
										cout<<"you have entered wrong"<<endl;
										cin.clear();
										cin.ignore(256,'\n');
										cin>>id;
										
									}
									if(id<=16||id>20)
									{
										cout<<"enter valid doctor id number (as shown above)"<<endl;
										
									}
								}
								while(id<=16||id>20);
								break;
								case 6:
								do
								{
									cout<<"enter your desired doctor's id number:"<<endl;
									cin>>id;
									while(cin.fail())
									{
										cout<<"you have entered wrong"<<endl;
										cin.clear();
										cin.ignore(256,'\n');
										cin>>id;
										
									}
									if(id<=8||id>12)
									{
										cout<<"enter valid doctor id number (as shown above)"<<endl;
										
									}
								}
								while(id<=8||id>12);
								break;
								default:
									cout<<" enter valid input"<<endl;
								
									
							}
							available = checkavailibility(id);
							if(!available)
							{
								cout<<"doctor not available at this time"<<endl;
							}
							else 
							{
								cout<<"doctor available"<<endl;
							}
							
							
							
						}
						
					}
					else
					cout<<"enter valid input"<<endl;
					break;
				case 'y':
				case 'Y':
				  int id;
				  cout<<"enter your assinged doctor's ID number"<<endl;
				  cin >>id;
				  while(cin.fail())
				  {
				   cout<<"you have made an error"<<endl;
				   cin.clear();
				   cin.ignore(256,'\n');
				   cin>>id;	
		    	  }
				  break ;
				  default :
				  cout<<"";	
					
					
			}
		}
	
};

class building
{
	private :
		int no_of_room;
	public:
		updatedoctor()
		{
			fstream fin;
			fin.open("doctor.txt",fstream::in);
			stringstream sstr;
			string x;
			string o;
			string temp;
			cin.ignore();
			cout<<"Enter the name of doctor which you want to replace"<<endl;
			getline(cin,x);
			cout<<"enter the name of new doctor"<<endl;
			getline(cin,o);
			int comma=0;
			while(!fin.eof())
			{
				getline(fin,temp,'\n');
				if(temp.find(x)!=std::string::npos)
				{
					for(int i=0;i<temp.length();i++)
					{
						sstr<<temp[i];
						if(temp[i]==',')
						{
							comma++;
						}
						if(comma==4)
						{
							break;
						}
					}
					sstr<<o<<",";
					if(temp[temp.length()-1] !=',')
					{
						sstr<<temp[temp.length()-1];
					}
					sstr<<endl;
					
				}
				else
				{
					sstr<<temp<<endl;
				}
			}
			fin.close();
			fstream fout;
			fin.open("doctor.txt",fstream::out| fstream::trunc);
			fin<<sstr.str();
			
		}
		bool checkpass(string pass)
		{
			string password ="pass";
			if(password ==pass)
			{
			 return true;
			}
			else 
			{
				return false;
			}
		}
	
};


int main(void)

{
cout<<setw(30)<<"\t\t\t-------------------";
cout<<setw(30)<<"\n\t\t\t\tHOSPITAL MANAGEMENT"<<endl;
cout<<setw(30)<<"\t\t\t-------------------"<<endl;	
int ans;
bool check=false;
cout<<"\t\tPRESS 1 : To View Doctors Present in our hospital"<<endl;
cout<<"\n\t\tPRESS 2 : To Go To Appointment Section"<<endl;
cout<<"\t\t-----------------------------";
cout<<"\n\t\tAdministration Login"<<endl;
cout<<"\t\tPRESS 3 : To Update Doctor";
cout<<"\n\t\t-----------------------------";
cout<<"\n\n\t\t\t\tInput:";
cin>>ans;
while(cin.fail()) 
{

        cout<<"enter an integer from above choices"<<endl;
        cin.clear();
        cin.ignore(256,'\n');
        
        cin >> ans;
}
	while(!check)
{

	if(ans>=1&&ans<=3)
	{
	
		check=true;
	}
	else
	{
	
		try
		{
			throw &ans;
		}
		catch(int *ans)
		{
			cout<<"enter valid input:"<<endl;
			cin>>*ans;
			 while(cin.fail())
	{
        cout<<"enter an integer from above choices"<<endl;
        cin.clear();
        cin.ignore(256,'\n');
        
        cin >> *ans;
    }
		}
		
	}
}
int pass,d;
  switch (ans)
  {
	case 1:
	system("CLS");
		showorthopedics();
		showGynecology();
		showemergency();
		showCardiology();
		showent();
		showinternalmed();
	
		break;
		
	case 2:
		{
			patient pa;
			d=pa.set();
		}
		{
			receptionist re(d);
		}
		break;
	case 3:
{
		building b;
		string pass;
		bool check=false;
		while(check!=true)
{
				
		cout<<"\n\t\t\t\tEnter pass key:";
		cin>>pass;
		check=b.checkpass(pass);
		if(check==true)
		{
		cout<<"\n\n\t\t\t\tAccess granted"<<endl;
		b.updatedoctor();		
		}
	
		else
		cout<<"\n\n\t\t\t\tAccess denied"<<endl;
}
}
	break;
	default:
	cout<<"enter valid input"<<endl;
		
	}
    system("pause");

	
}
