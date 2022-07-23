#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
using namespace std;
  char ch;

class Stock{
	      //Stock Information
	      char item_name[80];
	      int q_item;
	      int item_code;
	      char c_name[80];
	      float price;
	      float total_price;

	      //Customer Information
	      char consign_no[18];
	      int cus_no;
	      int i_code;
	      char cus_name[80];
	      char date[80];
	      char address[80];
	      int q_cus;


    public:
	   void getdata_s();
	   void getdata_c();
	   void display_s();

	   void modify_s();

	   char * getname() { return item_name;}
	   int getcode() { return item_code;}
	   char * getcname() { return c_name;}
	   int getcodec() { return i_code;}
	   int getq_item(){ return q_item;}
	   int getq_cus(){  return q_cus;}
	   void change(int, int);
    }s1, s2;
     void Stock::change(int x, int y)
	   {
	    s2.q_item= y-x;
	    }

  void Stock::getdata_s()
  {
     cout<<"Enter Item Code    :";	  cin>>item_code; cin.get(ch);
     cout<<"Enter Item name    :";  	  cin.getline(item_name,80);
     cout<<"Enter Quantity     :";        cin>>q_item;  cin.get(ch);
     cout<<"Enter Company name :";        cin.getline(c_name,80);
     cout<<"Enter price        :";        cin>>price;
  }


  void Stock::getdata_c()
  {
  cout<<"Enter customer number    :"; 	   cin>>cus_no; cin.get(ch);
  cout<<"Enter customer name      :";      cin.getline(cus_name, 80);
  cout<<"Enter consignment number :"; 	   cin.getline(consign_no,18);
  cout<<"Enter date of purchase   :";      cin.getline(date, 80);
  cout<<"Enter code of the item   :";      cin>>i_code;   cin.get(ch);
  cout<<"Enter address            :";      cin.getline(address,80);
  cout<<"Enter quantity required  :";      cin>>q_cus;
  }

  void Stock::display_s()
  {     cout<<endl;
	cout<<endl;cin.get(ch);
	cout<<"Item code    :"<<item_code<<endl;
	cout<<"Item name    :"<<item_name<<endl;
	cout<<"Quantity     :"<<q_item<<endl;
	cout<<"Company name :"<<c_name<<endl;
	cout<<"Price        :"<<price<<endl;
	total_price=price*q_item;
	cout<<"Total price  :"<<total_price<<endl;  cin.get(ch);
  }


/*  void Stock::display_c()
  {
     cout<<"Customer number   :"<<cus_no<<endl;
     cout<<"Customer name     :"<<cus_name<<endl;
     cout<<"Consignment no    :"<<consign_no<<endl;
     cout<<"Item code         :"<<i_code;
     cout<<"Purchased date    :"<<date;
     cout<<"Quantity purchased:"<<q_cus;
     cout<<"Address           :"<<address;
  }*/


   void Stock::modify_s()
   {    cout<<"Item code    :"<<item_code<<endl;
	cout<<"Item name    :"<<item_name<<endl;
	cout<<"Quantity     :"<<q_item<<endl;
	cout<<"Company name :"<<c_name<<endl;
	cout<<"Price        :"<<price<<endl;
	cout<<"Enter new details to modify"<<endl;
	char nm[80]="", c[80]=""; int ncode, nq, np;
	cout<<"New code (Press -1 to retain old one):" ;
	cin>>ncode;           cin.get(ch);
	cout<<"New name (Enter'.' to retain old one):";
	cin.getline(nm,80);
	cout<<"New quantity (Press -1 to retain old one):";
	cin>>nq;              cin.get(ch);
	cout<<"New company name (Enter '.' to retain old one);";
	cin.getline(c,80);
	cout<<"New price (Press -1 to retain old one):";
	cin>>np;

	if(strcmp(nm, ".")!=0)
	strcpy(item_name, nm);
	if(ncode!=-1)
	item_code=ncode;
	if(nq!=-1)
	q_item=nq;
	if(np!=-1)
	price=np;


   }



int  main()
{    Stock s3;
cout<<"   ___________________________________________________________________________ "<<endl;
cout<<"  |                  -----   -----   -----    ----   |    |                   |"<<endl;
cout<<"  |                 |          |    |     |  |       |   -                    |"<<endl;
cout<<"  |                  -----     |    |     |  |       | -                      |"<<endl;
cout<<"  |                       |    |    |     |  |       |   -                    |"<<endl;
cout<<"  |                  -----     |     -----    ----   |    |                   |"<<endl;
cout<<"  |                                                                           |"<<endl;
cout<<"  |    -- --   ----   -    -  ----   ----   ----  -- --   ----  -    - -----  |"<<endl;
cout<<"  |   |  |  | |    | | -   | |    | |      |     |  |  | |     | -   |   |    |"<<endl;
cout<<"  |   |  |  | |____| |  -  | |____| | ___  |---- |  |  | |---- |  -  |   |    |"<<endl;
cout<<"  |   |  |  | |    | |   - | |    | |    | |     |  |  | |     |   - |   |    |"<<endl;
cout<<"  |   |     | |    | |    -| |    |  ----   ---- |     |  ---- |    -|   |    |"<<endl;
cout<<"  |                                                                           |"<<endl;
cout<<"  |___________________________________________________________________________|"<<endl;
cout<<endl;
cout<<endl;
    cout<<"               -----Press any key to return to main menu-----    "; cout<<endl;
    int choice1, choice2;
	do
	{
	 
	 cout<<"                 ********** Enter your choice ***********         "<<endl;
	 cout<<"                 ***   1. Login to Stock information  ***         "<<endl;
	 cout<<"                 *** 2. Login to customer information ***         "<<endl;
	 cout<<"                 ***           3. To Exit             ***         "<<endl;
	 cout<<"                 ****************************************         "<<endl;
	 cout<<"Enter your choice(1/2/3)"<<endl;
	 cin>>choice1;
	 switch(choice1)
	 {
	 case 1: {

		 do
		 {
		 
		 cout<<"              **------------- Stock Database ---------**"<<endl;
		 cout<<"              **-------------- Enter Choice ----------** "<<endl;
		 cout<<"              **        1.Enter the details           ** "<<endl;
		 cout<<"              **	2.Show record of Stock        ** "<<endl;
		 cout<<"              **        3.Search record in Stock      ** "<<endl;
		 cout<<"              **        4.Insert record in Stock      ** "<<endl;
		 cout<<"              **        5.Delete record from Stock    ** "<<endl;
		 cout<<"              **        6.Modify record from Stock    ** "<<endl;
		 cout<<"              **        7.To Exit                     ** "<<endl;
		 cout<<"              **--------------------------------------** "<<endl;
		 cout<<"Enter your choice:";
		 cin>>choice2;

		 switch(choice2)
		 {

		 case 1: 
		 {char an='y';
			    ofstream fout1("Stock", ios::out|ios::binary);
		    while (an=='y')
		    {
		   s1.getdata_s();
		   cin.get(ch);
		   fout1.write((char*)&s1, sizeof(s1));
		   cout<<"Do you want to add more"<<endl;
		   cin>>an;
		    }

		       fout1.close();

		       break;
		 }
		 case 2: {  ifstream fin1("Stock", ios::in|ios::binary);
			      if(!fin1){ cout<<"Cannot open file"<<endl;}
			      cout<<"\t The details of Stock are:"<<endl;
			      while(!fin1.eof())
			      {
					fin1.read((char*)&s1, sizeof(s1));
					if(fin1.eof()) break;
					s1.display_s();


			      }
			      fin1.close();
		       cout<<"Press any key to return to main menu"; cout<<endl;
		       break;}
	       /*case 3:
		       ofstream fout2("Stock", ios::app|ios::binary);
		       char more;
		       cout<<"Enter new record in stock database (y/n):";
		       cin>>more;
		       while(more=='y')
		       {
		       s1.getdata_s();

		       fout2.write((char*)&s1, sizeof(s1));
		       cout<<"Want to enter more:";
		       cin>>more;
		       }
		       fout2.close();
		       cout<<"Press any key to return to main menu"; getch();
		       break; */
	       case 3: { int choice3;
			  do
			  {
			     
			     cout<<"             **-------------Search By------------**"<<endl;
			     cout<<"             **         1.Item name              **"<<endl;
			     cout<<"             **         2.Item code              **"<<endl;
			     cout<<"             **         3.Company name           **"<<endl;
			     cout<<"             **         4.To exit                **"<<endl;
			     cout<<"             **************************************"<<endl;
			     cout<<"Enter your choice(1/2/3/4):"<<endl;
			     cin>>choice3;
			     switch(choice3)
			     {

			     case 1:{
				    char name[80], found1='n';
				    ifstream fin2("Stock", ios::in|ios::binary);
				    cout<<"Enter the item name to search:";  cin.get(ch);
				    cin.getline(name, 80);
				    while(!fin2.eof())
				    {
					fin2.read((char*)&s1, sizeof(s1));
					if(strcmpi(s1.getname(), name)==0)
					{
					   s1.display_s();
					   found1='y';
					   break;
					}
				    }
				    if(found1=='n') cout<<"Record not found"<<endl;
				    fin2.close();
				    cout<<"Press any key to return to main menu"; getch();
				    break;}
			     case 2: {  int code1, found2='n';
					ifstream fin3("Stock", ios::in|ios::binary);
					cout<<"Enter the item code to search:";
					cin>>code1;
					while(!fin3.eof())
					{
					 fin3.read((char*)&s1, sizeof(s1));
					 if(s1.getcode()==code1)
					 {
					  s1.display_s();
					  found2='y';
					  break;

					 }
					 }
					 if(found2=='n') cout<<"Record not found"<<endl;
					 fin3.close();
					 cout<<"Press any key to return to main menu"; cout<<endl;
					 break;}
			  case 3:{
				    char company[80], found3='n';
				    ifstream fin4("Stock", ios::in|ios::binary);
				    cout<<"Enter company name to search:"; cin.get(ch);
				    cin.getline(company, 80);
				    while(!fin4.eof())
				    {
				     fin4.read((char*)&s1, sizeof(s1));
				     if(fin4.eof()) break;
				     if(strcmpi(s1.getcname(), company)==0)
				     {
				      s1.display_s();
				      found3='y';
				     }
				    }
				     if(found3=='n') cout<<"Record not found";
				     fin4.close();
				     cout<<"Press any key to return to main menu"; cout<<endl;
				     break;}
			   case 4:{
				    break;}
			     }
			    }while(choice3!=4); cout<<"Press any key to return to main menu"; cout<<endl;
			       break;}
		case 4:{

			 ofstream fout3("temp.dat", ios::out|ios::binary);
			 ifstream fin5("Stock", ios::in|ios::binary);
			 char last='y';
			 cout<<"Enter the details whose record is to be inserted"<<endl;
			 s1.getdata_s();  cin.get(ch);
			 while(!fin5.eof())
			 {
				fin5.read((char*)&s2, sizeof(s2));
				if(fin5.eof()) break;
			 if(s1.getcode()<=s2.getcode())
			 {
			 fout3.write((char*)&s1, sizeof(s1));
			 last='n';
			 break;
			 }
			 else
			 fout3.write((char*)&s2, sizeof(s2));

		       }
			       if(last=='y')
			       fout3.write((char*)&s1, sizeof(s1));
			       else if(!fin5.eof())
			       {
			       while(!fin5.eof())
				  {
				     fin5.read((char*)&s2, sizeof(s2));
				     fout3.write((char*)&s2, sizeof(s2));
				  }
			       }
				fin5.close();
				fout3.close();
				remove("Stock");
				rename("temp.dat", "Stock");
				cout<<"New data inserted properly"<<endl;
				cout<<"Press any key to return to main menu"; getch();
				break;}

	       case 5: {ifstream fin6("Stock", ios::in|ios::binary);
		       ofstream fout4("temp.dat", ios::out|ios::binary);
		       int code2; char f='f', confirm='y';
		       cout<<"Enter item code of stock to be deleted:";
		       cin>>code2;
		       while(!fin6.eof())
		       {
			fin6.read((char*)&s1, sizeof(s1));
			if(fin6.eof()) break;
			if(s1.getcode()==code2)
			{
			  s1.display_s();
			  f='t';
			  cout<<"\nAre you sure, you want to delete:";
			  cin>>confirm;
			  if(confirm=='n') fout4.write((char*)&s1, sizeof(s1));
			}
			else
			  fout4.write((char*)&s1, sizeof(s1));
		       }
		      if(f=='f')
		      cout<<"Reocrd not found\n";
		      fin6.close();
		      fout4.close();
		      remove("Stock");
		      rename("temp.dat", "Stock");
		      if(f=='t'&& confirm=='y')
		      cout<<"Record deleted from the database\n";
		      else if(f=='f'|| confirm=='n')
		      cout<<"No record deleted from the database\n";
		      cout<<"Press any key to return to main menu"; getch();
		      break;}
	 case 6: {fstream fio("Stock", ios::in|ios::out|ios::binary);
		 long pos; char fod='f';  int code3;
		 cout<<"Enter the item code of stock to be modified:";
		 cin>>code3;
		 while(!fio.eof())
		 {
			pos=fio.tellg();
			fio.read((char*)&s1, sizeof(s1));
			if(fio.eof())
			break;
			if(s1.getcode()==code3)
			{
			    s1.modify_s();
			    fio.seekg(pos);
			    fio.write((char*)&s1, sizeof(s1));
			    fod='t';
			    break;
			}
		 }
		    if(fod=='f') cout<<"Record not found\n";
		    fio.close();
		    if(fod=='t') cout<<"Record modified from database\n"<<endl;
		    cout<<"Press any key to return to main menu"; getch();
		    break;}
	  case 7: break;
		 }

	       }while(choice2!=7);
	       cout<<"Press any key to return to main menu"; getch(); break;}




case 2:
	  {
	  ofstream fileout1("Customer", ios::out|ios::binary);
	  ifstream filein1("Customer", ios::in|ios::binary);
	     ofstream fileout2("tempdata", ios::out|ios::binary);
	  ifstream filein2("Stock", ios::in|ios::binary);
	  char purchase;

	   s1.getdata_c();
	   cin.get(ch);
	   fileout1.write((char*)&s1, sizeof(s1));



	  cout<<"Do you want to purchase the items";
	  cin>>purchase;
	  if(purchase=='y')
		 {


			filein1.read((char*)&s1, sizeof(s1));
			while(!filein2.eof())
			{
			if(filein2.eof()) break;
			   filein2.read((char*)&s2, sizeof(s2));
			   if(s1.getcodec()==s2.getcode())
			   {
			     s2.change(s1.getq_cus(),s2.getq_item());
			     if(filein2.eof()) break;
			     fileout2.write((char*)&s2, sizeof(s2));

			   }

			   else
			   {
			      if(filein2.eof()) break;

			   fileout2.write((char*)&s2, sizeof(s2));

			   }
			   cout<<"Item purchased"<<endl;
			 }






		  fileout1.close();
		  filein1.close();
		  filein2.close();
		  fileout2.close();
		  remove("Stock");
		  rename("tempdata","Stock");

		}
	      else
	      cout<<"you don't want to purchase"<<endl;

	      cout<<"Press any key to return to main menu"<<endl; getch();
	      break;}

       }
       }while(choice1!=3);
    return 0;
    }

