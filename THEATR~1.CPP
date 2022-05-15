#include<iostream.h>
#include<time.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<graphics.h>
		 //globally declared variables//
int ch,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10,ch11,ch12,ch13,ch14;
int a, b ,c, n, i, j, cvv, l,dt, yr ,ticket, tic[10],row[2] ,seatcopy[13][6];
int economy=0,elite=0,premire=0, amount=0,amt=0,count=0;
char username[30],pass[45],con,carduser[20],cardpwd[10],cardno[17],pin[9];
char ch15, tick[10], seat[13][6], seatno;
int mn;
		// class for admin//
class admin
{
 public:
 int x,y,no;
 char ch[20];
 char name[30];
 char username[30];
 char password[10];
 char emailid[25];
 char cast[50];
 char movname[20];
 char rate[10];
 char direct[20];
 char genre[20];
 char lang[10];
 void add();
 void del();
}s;
		      //class for user//
class user
{
 public:
 char name[30];
 char e[35];
 char username[10];
 char password[10];
 char mno[15];
 void userdata();
}ss1;
		   //function declarations//
void logo();
void border();
void intro();
void admin_login();
void admin_menu();
void movrunning();
void user_acc();
void signup();
void signin();
void user_disp();
void faq();
void contact();
void vision();
void booking();
void timing();
void show_timing();
void seating1();
void seating2();
void ticketdisp();
void snack(int,int,int,int);
void transaction();
void trans();
void thankyou();
		   //MAIN FUNCITON//
void main()
{
 clrscr();
 logo();
 intro();
 getch();
}
void border()       //FOR BORDER//
{
 cout<<" ";
 for(int i=1;i<79;i++)
 {
  gotoxy(i+1,1);
  textcolor(4);
  cputs("\6");
 }
 gotoxy(1,1);
 for(i=1;i<25;i++)
 {
  textcolor(2);
  cputs("\5");
  gotoxy(1,i+1);
 }
 gotoxy(1,25);
 for(i=1;i<79;i++)
 {
  gotoxy(i+1,24);
  textcolor(BLUE);
  cputs("\6");
 }
 gotoxy(80,1);
 for(i=1;i<25;i++)
 {
  gotoxy(80,i);
  textcolor(MAGENTA);
  cputs("\5");
 }
 gotoxy(1,1);
}
void intro()          //Introduction//
{
  clrscr();
  border();
  textcolor(MAGENTA);
  gotoxy(27,10);
  cputs(" 1.To login as Admin");
  gotoxy(27,12);
  cputs(" 2. To login as User");
  gotoxy(27,14);
  cputs(" 3. Exit");
  gotoxy(25,16);
  cputs("Enter your choice(1/2/3): \5\5");
  cin>>ch;
  switch(ch)
   {
     case 1 : admin_login();
	      break;
     case 2 : clrscr();
	      user_acc();
	      break;
     case 3 : exit(0);
	      break;
     default: intro();

     closegraph();
   }
}
void admin_login()            //To login as admin//
{
 clrscr();
 border();
 gotoxy(1,1);
 textcolor(CYAN);
 gotoxy(30,9);
 cputs("USERNAME:");
 gotoxy(41,9);
 cin>>username;
 gotoxy(30,10);
 cputs("PASSWORD:");
 gotoxy(41,10);
 gets(pass);
 char aa[20],ch3;
 int n2,v1=1;
 for(int i=0;i<20;i++)      //for loop for password//
 {
  ch3=getch();
  v1=ch3;
  if(v1!=13)
   {
    pass[i]=ch3;
    n2=i;
    cout<<'\4';
   }
 if(v1==13)
   break;
 }
 pass[n2+1]='\0';
 clrscr();
 border();
 gotoxy(1,1);
 gotoxy(20,10);
 cputs("\nChecking Username and Password Combination ");
 for(int che=0;che<7;che++)
 {
  delay(400);
  cout<<".";
 }
 a=strcmp("admin",username);
 b=strcmp("password",pass);
 if(a==0&&b==0)
  {
   clrscr();
   border();
   gotoxy(30,10);
   cputs("Logging in");
   for(int che=0;che<8;che++)
    {
      delay(400);
      cout<<".";
    }
 admin_menu();
 }
 else
 {
  clrscr();
  border();
  gotoxy(26,13);cputs("Wrong username or password...Try again!!");
  getch();
  admin_login();
 }
}
void admin_menu()            //menu for admin//
{
 clrscr();
 border();
 textcolor(MAGENTA);
 gotoxy(27,2);
 for( int i=0;i<19;i++)
 cout<<char(4);
 gotoxy(33,3);
 cputs("ADMIN");
 gotoxy(27,4);
 for(i=0;i<19;i++)
 cout<<char(4);
 gotoxy(30,8);
 cputs("1. Add movie");
 gotoxy(30,9);
 cputs("2. Delete movie");
 gotoxy(30,10);
 cputs("3. Go back");
 gotoxy(30,11);
 cputs("4. Exit");
 gotoxy(25,13);
 cputs("Enter your choice(1/2/3/4): ");
 cin>>ch12;
  switch (ch12)
   {
    case 2: s.del();
	    break;
    case 1: s.add();
	    break;
    case 3: intro();
	    break;
    case 4: exit(0);
	    break;
    default: cout<<"\tWrong Choice";
   }
}
void admin :: add()        //To add movie//
{
 border();
 movrunning();
 gotoxy(30,20);
 cputs("Press any key to add movie");
 getch();
 clrscr();
 border();
 char ch='y';
 ofstream s1("new.txt",ios::app);
 while(ch=='y')
 {
  textcolor(CYAN);
  gotoxy(26,5);
  cputs("MOVIE NO:");
  gotoxy(40,5);
  cin>>s.no;
  gotoxy(26,7);
  cputs("MOVIE NAME:");
  gotoxy(40,7);
  gets(s.movname);
  gotoxy(26,9);
  cputs("DIRECTOR:");
  gotoxy(40,9);
  gets(s.direct);
  gotoxy(26,11);
  cputs("CAST:");
  gotoxy(40,11);
  gets(s.cast);
  gotoxy(26,13);
  cputs("GENRE:");
  gotoxy(40,13);
  gets(s.genre);
  gotoxy(26,15);
  cputs("RATING:");
  gotoxy(40,15);
  gets(s.rate);
  gotoxy(26,17);
  cputs("LANGUAGE:");
  gotoxy(40,17);
  gets(s.lang);
 s1.write((char*)&s,sizeof(s));
 clrscr();
 border();
 gotoxy(20,17);
 cputs("Movie has been successfully added!!!");
 gotoxy(20,18);
 cputs("Do you want to add more movies(y/n)? ");
 cin>>ch;
 }
 s1.close();
 movrunning();
 getch();
 admin_menu();
}
void admin :: del()                 //To delete movie//
{
 int r;
 char ch;
 movrunning();
 border();
 ofstream s3("d.txt",ios::out);
 gotoxy(20,21);
 cout<<"Enter movie no to be deleted: ";
 cin>>r;
 ifstream s4("new.txt",ios::in);
 s4.seekg(0);
 while(s4.read((char*)&s,sizeof(s)))
  {
   if(s.no!=r)
   s3.write((char*)&s,sizeof(s));
  }
 s3.close();
 s4.close();
 remove("new.txt");
 rename("d.txt","new.txt");
 cout <<endl<<"The movies are";
 movrunning();
 gotoxy(1,1);
 border();
 getch();
 admin_menu();
}
void movrunning()             //No. of movies running
{
 clrscr();
 border();
 gotoxy(30,4);
 textcolor(RED);
 cout<<"MOVIES RUNNING IN SHN"<<endl;
 ifstream s2("new.txt",ios::in);
 s2.seekg(0);
 while(s2.read((char*)&s,sizeof(s)))
 {
   delay(200);
   cout<<"\5             "<<s.no<<"\4";
   cout<< s.movname<<endl<<endl;
 }
 s2.close();
}
void user::userdata()        //User Data//
{
 textcolor(CYAN) ;
 border();
 gotoxy(26,3);
 for(i=0;i<22;i++)
 cout<<char(4);
 gotoxy(32,4);
 cputs("USER DETAILS");
 gotoxy(26,5);
 for(i=0;i<22;i++)
 cout<<char(4);
 gotoxy(23,7);
 cputs("NAME:");
 gotoxy(44,7);
 gets(name);
 gotoxy(23,9);
 cputs("USERNAME:");
 gotoxy(44,9);
 gets(username);
 gotoxy(23,11);
 cputs("LOGIN PASSWORD:");
 char aa[20],ch3;
 int n2,v1=1;
 for(int i=0,j=44;i<20;i++,j++)
  {
   ch3=getch();
   v1=ch3;
   if(v1!=13)
    {
      password[i]=ch3;
      n2=i;
      gotoxy(j,11);
      cout<<'\4';
     }
   if(v1==13)
    break;
  }
 password[n2+1]='\0';
 gotoxy(23,13);
 cputs("EMAIL ID:");
 gotoxy(44,13);
 gets(e);
 gotoxy(23,15);
 cputs("MOBILE NUMBER:");
 gotoxy(44,15);
 gets(mno);
}
void user_acc()             // account for user//
{
 label1:
 int d;
 clrscr();
 border();
 textcolor(GREEN);
 gotoxy(28,3);
 for(i=0;i<14;i++)
 cout<<char(4);
 gotoxy(32,4);
 cputs("LOGIN");
 gotoxy(28,5);
 for(i=0;i<14;i++)
 cout<<char(4);
 gotoxy(29,7);
 cputs("1.New user");
 gotoxy(29,8);
 cputs("2.Already registered");
 gotoxy(29,9);
 cputs("3.Exit");
 gotoxy(27,12);
 cout<<"Enter your choice(1/2/3): ";
 cin>>d;
 switch(d)
  {
   case 1 : signup();
	    goto label1;
   case 2 : signin();
	    break;
   case 3 : exit(0);
	    break;
   default: cout<<"\tWRONG CHOICE!!!";
  }
}
void signup()                 //signup as user//
{
 ofstream f6("users.txt",ios::app);
 clrscr();
 border();
 gotoxy(26,2);
 cout<<char(2)<<"WELCOME TO SHN"<<char(2);
 ss1.userdata();
 f6.write((char*)&ss1,sizeof(ss1));
 f6.close();
}
void signin()
{
 char uname[15],upass[10],ch2;
 int z1,z2,r;
 label2:
 clrscr();
 border();
 textcolor(MAGENTA);
 gotoxy(31,7);cout<<"username:";
 gotoxy(48,7);gets(uname);
 gotoxy(31,8);cout<<"password:";
 gotoxy(48,8);
 char aa[20],ch3;
 int n2,v1=1;
 for(int i=0;i<20;i++)
 {
  ch3=getch();
  v1=ch3;
  if(v1!=13)
   {
     upass[i]=ch3;
     n2=i;
     cout<<'\4';
    }
   if(v1==13)
      break;
 }
 upass[n2+1]='\0';
 clrscr();
 border();
 gotoxy(26,10);
 cputs("Checking username and password combination");
 for(int che=0;che<7;che++)
 {
  delay(400);cout<<".";
 }
 ifstream f7("users.txt",ios::in);             //file to store user detail//
 f7.seekg(0);
 while(!f7.eof())
 {
  f7.read((char*)&ss1,sizeof(ss1));
  z1=strcmp(ss1.username,uname);
  z2=strcmp(ss1.password,upass);
  if((z1==0)&&(z2==0))
   {
    clrscr();
    border();
    gotoxy(28,10);
    cputs("Logging in");
    for(int che=0;che<7;che++)
     {
       delay(400);cout<<".";
     }
  user_disp();
  }
 }
 f7.close();
 system("cls");
 gotoxy(1,1);
 border();
 gotoxy(10,2);
 cputs("USERNAME / PASSWORD mismatching!!!");
 gotoxy(25,5);
 cputs("1. Try SIGNING IN once more");
 gotoxy(26,6);
 cputs("2. Go to LOGIN PAGE\n\n");
 cputs("Enter your CHOICE : ");
 cin>>ch10;
 clrscr();
 border();
 if(ch10==1)
  goto label2;
 else if(ch10==2)
  user_acc();
}
void user_disp()
{
 char ch2;
 clrscr();
 border();
 textcolor(YELLOW);
 gotoxy(27,2);
 for(i=0;i<18;i++)
 cout<<char(4);
 gotoxy(31,4);
 cputs("Dear User");
 gotoxy(28,5);
 cputs(" WELCOME TO SHN");
 gotoxy(27,6);
 for(i=0;i<18;i++)
 cout<<char(4);
 gotoxy(30,11);
 cputs("3. VISION");
 gotoxy(30,9);
 cputs("1. BOOK MOVIES");
 gotoxy(30,10);
 cputs("2. CURRENT MOVIES");
 gotoxy(30,12);
 cputs("4. FAQ");
 gotoxy(30,13);
 cputs("5. CONTACT US");
 gotoxy(30,14);
 cputs("6. GO BACK");
 gotoxy(30,15);
 cputs("7. Exit");
 gotoxy(32,16);
 cin>>ch2;
 switch(ch2)
  {
    case '3': vision();
	      getch();
	      user_disp();
	      break;
    case '1': booking();
	      break;
    case '2': movrunning();
	      getch();
	      user_disp();
	      break;
    case '4': faq();
	      getch();
	      user_disp();
	      break;
    case '5': contact();
	      getch();
	      user_disp();
	      break;
    case '6': user_acc();
	      break;
    case '7': exit(0);
	      break;
    default : user_disp();
   }
}
void contact()
{                        //To coontact SHN CINEMAS//
 clrscr();
 border();
 gotoxy(27,2);
 for(i=0;i<18;i++)
 cout<<char(4);
 gotoxy(32,3);
 cout<<"CONTACT US";
 gotoxy(27,4);
 for(i=0;i<18;i++)
 cout<<char(4);
 cout<<endl;
 gotoxy(20,6);
 cout<<"-Our Corporate Office :";
 gotoxy(20,7);
 cout<<"25, 5th Floor,";
 gotoxy(20,8);
 cout<<"SOUTH MADA STREET,";
 gotoxy(20,9);
 cout<<"MYLAPORE";
 gotoxy(20,10);
 cout<<"Chennai - 600004";
 gotoxy(20,13);
 cout<<"Phone Number:";
 gotoxy(20,14);
 cout<<"044-24567654";
 gotoxy(20,15);
 cout<<" 9876805965";
 gotoxy(20,17);
 cout<<"-Email id:";
 gotoxy(20,18);
 cout<<"shncinemas@gmail.com";
 getch();
 gotoxy(33,20);
 cout<<" Press any key to GO BACK";
}
void vision()
{
 clrscr();
 border();
 gotoxy(27,2);for(i=0;i<18;i++)
 cout<<char(4);
 gotoxy(32,3);
 cout<<"VISION";
 gotoxy(27,4);
 for(i=0;i<18;i++)
 cout<<char(4);
 gotoxy(10,7);
 cout<<"A Superior Sensory and Social cinematic experience,SHN offers";
 cout<<"\n seamless service and a wealth of amenties.SHN is a culmination of style,";
 cout<<"\n innovation and setting like never before.";
 getch();
}
void faq()                                //faq regarding shn registraton//
{
 clrscr();
 border();
 gotoxy(29,2);
 for(i=0;i<16;i++)
 cout<<char(4);
 cout<<"\n\n-*If I am late for the film will my seat be held ?";
 cout<<"\n Once your purchase has been confirmed, your admission is held and will not be ";
 cout<<"\nsold to another customer.";
 cout<<"\n\n-*What is the minimum age of children to buy a ticket :";
 cout<<"\n Children aged 3 years and above will require a separate ticket.";
 gotoxy(30,19);
 cout<<"\n\n Press any key to GO BACK";
}
void booking()             // To Book Movies//
{
 clrscr();
 gotoxy(1,1);
 border();
 textcolor(RED);
 movrunning();
 gotoxy(40,20);
 cout<<"ENTER MOVIE NO. TO BOOK";
 cin>>ch3;
 ifstream s2("new.txt",ios::in);
 s2.seekg(0);
 while(!s2.eof())
 {
  s2.read((char*)&s,sizeof(s));
   if(ch3==s.no)
     {
       clrscr();
       border();
       delay(500);
       gotoxy(26,5);
       cputs("MOVIE NO:");
       gotoxy(40,5);
       cout<<s.no;
       delay(500);
       gotoxy(26,7);
       cputs("MOVIE NAME:");
       gotoxy(40,7);
       puts(s.movname);
       delay(500);
       gotoxy(26,9);
       cputs("DIRECTOR:");
       gotoxy(40,9);
       puts(s.direct);
       delay(500);
       gotoxy(26,11);
       cputs("CAST:");
       gotoxy(40,11);
       puts(s.cast);
       delay(500);
       gotoxy(26,13);
       cputs("GENRE:");
       gotoxy(40,13);
       puts(s.genre);
       delay(500);
       gotoxy(26,15);
       cputs("RATING:");
       gotoxy(40,15);
       puts(s.rate);
       delay(500);
       gotoxy(26,17);
       cputs("LANGUAGE:");
       gotoxy(40,17);
       puts(s.lang);
       gotoxy(26,19);
       cputs("1. Proceed to book");
       gotoxy(26,20);
       cputs("2. Go back");
       gotoxy(26,22);
       cputs("Enter your choice ");
       cin>>ch7;
       if(ch7==1)
	timing();
       else if(ch7==2)
	 booking();
       else
	 booking() ;
    }
 }
s2.close();
}
void timing()         //to show timings//
{
 clrscr();
 border();
 void nextdate(int,int,int);
 gotoxy(26,3);
 textcolor(CYAN);
 for(i=0;i<22;i++)
 cout<<char(4);
 gotoxy(32,4);
 cputs("BOOKING DATE");
 gotoxy(26,5);
 for(i=0;i<22;i++)
 cout<<char(4);
 gotoxy(17,7);
 cout<<"ENTER TODAY DATE (dd mm yy):";
 cin>>dt>>mn>>yr;
 nextdate(dt,mn,yr);
}
void nextdate(int d,int m,int y)         //DATES OF CINEMAS RUNNING//
{
 for(int i=0, w=9;i<3;i++,w++)
{
 d=d+1;
 if((d>=31)&&(m==12))
 {
  m=1;
  y=y+1;
  d=1;
 }
 else if(m>=12)
 {
  y=y+1;
  m=1;
  }
  else if(d>=31)
  {
  m=m+1;
  d=d+1;
  }
 gotoxy(26,w);cout<<i+1<<") "<< d<<"/"<<m<<"/"<<y;
 }
 gotoxy(20,13);
 cout<<"Enter your choice(1/2/3): ";
 cin>>ch13;
 getch();
 show_timing();
}
void show_timing()             //TO SHOW TIMINGS//
{
 clrscr();
 border();
 gotoxy(28,5);
 gotoxy(27,3);
 for(i=0;i<22;i++)
 cout<<char(4);
 gotoxy(32,4);
 cputs("SHOW TIMING");
 gotoxy(27,5);
 textcolor(6);
 for(i=0;i<22;i++)
 cout<<char(4);
 gotoxy(28,8);
 cputs("1. MORNING SHOW - 10.00 - 12.30") ;
 gotoxy(28,9);
 cputs("2. MATNEE - 14.30 - 17.00");
 gotoxy(28,10);
 cputs("3. EVENING SHOW - 18.30 - 21.00");
 gotoxy(28,11);
 cputs("4. NIGHT SHOW - 22.00 - 00.30");
 gotoxy(24,14);
 cputs("Enter your choice ");
 cin>> ch14;
 if(count==0)
 seating1();
 else
 seating2();
 }
 void seating1()                    //SEATING ARRANGEMENT//
 {
  clrscr();
  textcolor(YELLOW);
  for(int i= 0;i<13;i++)
   {
    for(int j=0;j<6;j++)
     {
       seat[i][j] = '*';
       seatcopy[i][j] = 0;
     }
   }
 seating2();
}
void seating2()
{
 clrscr();
 textcolor(3);
 gotoxy(1,1);
 gotoxy(28,1);
 gotoxy(20,1);
 cout<<"\5\5\5\5\5 SHN CINEMAS UNLIMITED\5\5\5\5\5";
 gotoxy(8,2);
 cout<<" ROW 1-2";gotoxy(32,2);cout<<" ROW 3-7";
 gotoxy(50,2);cout<<" ROW 8-13\n";
 cout<<"\t ELITE                 PREMIERE           ECONOMY \n";
 cout<<"\t Rs.500                 Rs.300             Rs.200 \n";
 gotoxy(24,5);
 cout<<"\6\6\6SEATING ARRANGEMENT\6\6\6 "<<endl;
 cout<<"_________________________________________________________________________";
 cout<<"\n\t * - Available";
 cout<<" \t x- Occupied"<<endl;
 cout<<endl;
 cout<<" \t \tA\tB\tC\tD\tE\tF"<<endl;
 cout<<"\tRow 1\t"<<seat[0][0]<<"\t"<<seat[0][1]<<"\t"<<seat[0][2]<<"\t"<<seat[0][3]<<"\t"<<seat[0][4]<<"\t"<<seat[0][5]<<endl;
 cout<<"\tRow 2\t"<<seat[1][0]<<"\t"<<seat[1][1]<<"\t"<<seat[1][2]<<"\t"<<seat[1][3]<<"\t"<<seat[1][4]<<"\t"<<seat[1][5]<<endl;
 cout<<"\tRow 3\t"<<seat[2][0]<<"\t"<<seat[2][1]<<"\t"<<seat[2][2]<<"\t"<<seat[2][3]<<"\t"<<seat[2][4]<<"\t"<<seat[2][5]<<endl;
 cout<<"\tRow 4\t"<<seat[3][0]<<"\t"<<seat[3][1]<<"\t"<<seat[3][2]<<"\t"<<seat[3][3]<<"\t"<<seat[3][4]<<"\t"<<seat[3][5]<<endl;
 cout<<"\tRow 5\t"<<seat[4][0]<<"\t"<<seat[4][1]<<"\t"<<seat[4][2]<<"\t"<<seat[4][3]<<"\t"<<seat[4][4]<<"\t"<<seat[4][5]<<endl;
 cout<<"\tRow 6\t"<<seat[5][0]<<"\t"<<seat[5][1]<<"\t"<<seat[5][2]<<"\t"<<seat[5][3]<<"\t"<<seat[5][4]<<"\t"<<seat[5][5]<<endl;
 cout<<"\tRow 7\t"<<seat[6][0]<<"\t"<<seat[6][1]<<"\t"<<seat[6][2]<<"\t"<<seat[6][3]<<"\t"<<seat[6][4]<<"\t"<<seat[6][5]<<endl;
 cout<<"\tRow 8\t"<<seat[7][0]<<"\t"<<seat[7][1]<<"\t"<<seat[7][2]<<"\t"<<seat[7][3]<<"\t"<<seat[7][4]<<"\t"<<seat[7][5]<<endl;
 cout<<"\tRow 9\t"<<seat[8][0]<<"\t"<<seat[8][1]<<"\t"<<seat[8][2]<<"\t"<<seat[8][3]<<"\t"<<seat[8][4]<<"\t"<<seat[8][5]<<endl;
 cout<<"\tRow 10\t"<<seat[9][0]<<"\t"<<seat[9][1]<<"\t"<<seat[9][2]<<"\t"<<seat[9][3]<<"\t"<<seat[9][4]<<"\t"<<seat[9][5]<<endl;
 cout<<"\tRow 11\t"<<seat[10][0]<<"\t"<<seat[10][1]<<"\t"<<seat[10][2]<<"\t"<<seat[10][3]<<"\t"<<seat[10][4]<<"\t"<<seat[10][5]<<endl;
 cout<<"\tRow 12\t"<<seat[11][0]<<"\t"<<seat[11][1]<<"\t"<<seat[11][2]<<"\t"<<seat[11][3]<<"\t"<<seat[11][4]<<"\t"<<seat[11][5]<<endl;
 cout<<"\tRow 13\t"<<seat[12][0]<<"\t"<<seat[12][1]<<"\t"<<seat[12][2]<<"\t"<<seat[12][3]<<"\t"<<seat[12][4]<<"\t"<<seat[12][5]<<endl;
 lb2:
 gotoxy(1,1);
 for(i=0;i<24;i++)
  {
   textcolor(4);
   cout<<"\5";
   cout<<endl;
  }
 gotoxy(80,1);
 for(i=0;i<24;i++)
 {
  textcolor(4);
  gotoxy(80,i+1);
  cout<<"\6";
 }
  gotoxy(5,24);
  cout<<endl;
  textcolor(2);
  cputs("How many tickets you want to book?: ");
  cin>>l;
  for(j=0;j<l;j++)
  {
   cputs("Enter Ticket type(1/2/3): ");
   cin>>ticket;
   cputs("Desired Row: ");
   cin>>row[0];
   cputs("Desired seat (A,B,C,D,E or F): ");
   cin>>seatno;
   switch(seatno)
     {
       case 'A':
       case 'a': row[0]=row[0]-1;
		 row[1]=1;
		 row[1]=row[1]-1;
		 break;
       case 'B':
       case 'b': row[0]=row[0]-1;
		 row[1]=2;
		 row[1]=row[1]-1;
		 break;
       case 'C':
       case 'c': row[0]=row[0]-1;
		 row[1]=3;
		 row[1]=row[1]-1;
		 break;
       case 'D':
       case 'd': row[0] = row[0]-1;
		 row[1]=4;
		 row[1]=row[1]-1;
		 break;
       case 'E':
       case 'e': row[0]=row[0]-1;
		 row[1]=5;
		 row[1]=row[1]-1;
		 break;
       case 'F':
       case 'f': row[0]=row[0]-1;
		 row[1]=6;
		 row[1]=row[1]-1;
		 break;
     }
  if(ticket==1)
   {
    if((row[0]+1==1)||(row[0]+1==2))
       {
	 if((seatcopy[row[0]][row[1]])==0)
	   {
	    seatcopy[row[0]][row[1]]=1;
	    seat[row[0]][row[1]]='x';
	   }
	 else if((seatcopy[row[0]][row[1]])== 1)
	  {
	   cout<<"Message: Seat "<<row[0]+1<<seatno<<" is already occupied"<<endl;
	   getch();
	   goto lb2;
	  }
       }
    else
     {
	cputs("Wrong Class");cout<<endl;
	getch();
	clrscr();
	seating2();
     }
   }
  else if(ticket==2)
   {
    if(row[0]+1==3||row[0]+1==4||row[0]+1==5||row[0]+1==6||row[0]+1==7)
     {
      if((seatcopy[row[0]][row[1]])==0)
	{
	  seatcopy[row[0]][row[1]]=1;
	  seat[row[0]][row[1]]='x';
	 }
      else if((seatcopy[row[0]][row[1]])==1)
	 {
	  cout<<"Message: Seat "<<row[0]+1<<seatno<<" is already occupied"<<endl;
	  getch();
	  goto lb2;
	  }
   }
   else
    {
      cputs("Wrong Class");cout<<endl;
      getch();
      clrscr();
      seating2();
    }
  }
  else if(ticket==3)
   {
    if(row[0]+1==8 || row[0]+1==9||row[0]+1==10||row[0]+1==11||row[0]+1==12||row[0]+1==13)
     {
       if(seatcopy[row[0]][row[1]]==0)
	 {
	   seatcopy[row[0]][row[1]]=1;
	   seat[row[0]][row[1]]='x';
	  }
       else if(seatcopy[row[0]][row[1]] == 1)
	  {
	   cout<<"Message: Seat "<<row[0]+1<<seatno<<" is already occupied"<<endl;
	   getch();
	   goto lb2;
	  }
     }
  else
   {
    cputs("Wrong Class");cout<<endl;
    getch();
    clrscr();
    seating2();
    }
  }
  tic[j]=row[0]+1 ;
  tick[j]=seatno;
  row[1] = 0;
 }
 transaction();
}
void snack(int economy,int premire,int elite,int amount) //snack//
{
 lab:
 clrscr();
 border();
 textcolor(YELLOW);
 gotoxy(17,3);
 cout<<char(2);cputs("GOOD FOOD IS GOOD MOOD RIGHT?? SO WHY WAITING??");
 cout<<char(2);
 gotoxy(24,5);
 cputs("1.Large Popcorn Tub Rs.100");
 gotoxy(24,7);
 cputs("2.Regular Coke Rs.70");
 gotoxy(24,9);
 cputs("3.French fries Rs 80");
 gotoxy(20,11);
 cputs("Enter the item no you want ");
 gotoxy(20,13);
 cin>>ch6;
 switch(ch6)
 {
  case 1 : cout<<endl;
	   gotoxy(20,15);
	   cputs(" No of items:");
	   cin>>ch8;
	   gotoxy(35,20);
	   cout<<"Do you want to buy more(y/n)?? ";
	   cin >>con;
	   if(con=='y')
	    {
	     amt+=(ch8*100);
	     goto lab;
	    }
	   else if(con=='n')
	    amt+=(ch8*100);
	   else
	    amt+=(ch8*100);
	   break;
  case 2: gotoxy(20,15);
	  cout<<"No of items: ";
	  cin>>ch8;
	  gotoxy(30,18);
	  cout<<"Do you want to buy more(y/n)?? ";
	  gotoxy(30,19);
	  cin >>con;
	  if(con=='y')
	   {
	    amt+=(ch8*70);
	    goto lab;
	   }
	  else if(con=='n')
	   amt+=(ch8*70);
	  else
	   amt+=(ch8*70);
	  break;
  case 3: gotoxy(22,13);
	  cout<<"No of items: ";
	  cin>>ch8;
	  gotoxy(30,18);
	  cout<<"\n\nDo you want to buy more(y/n)?? ";
	  cin >>con;
	  if(con=='y')
	   {
	    amt+=(ch8*80);
	    goto lab;
	   }
	  else if(con=='n')
	   amt+=(ch8*80);
	  else
	   amt+=(ch8*80);
	  break;
  default: cputs("wrong choice");
 }
 clrscr();
 border();
 gotoxy(1,1);
 textcolor(BLUE);
 gotoxy(3,3);
 for(int i=0;i<=70;i++)
 cout<<char(4);
 gotoxy(30,4);
 cout<<" SHN CINEMAS";                    //TICKET DETAILS//
 gotoxy(30,8);
 cout<<"BOOKING DETAILS:";
 gotoxy(20,10);
 cout<<"YOU HAVE CHOSEN TO WATCH:      "<<s.movname;
 gotoxy(20,11);
 cout<<"NO. OF SEATS";
 gotoxy( 60,11 );
 cout<<"AMOUNT";
 gotoxy(20,12);
 cout<<"ECONOMY : "<<economy; gotoxy(60,12);cout<<economy*200;
 gotoxy(20,13);
 cout<<"PREMIRE : "<<premire;gotoxy(60,13);cout<<premire*300;
 gotoxy(20,14);
 cout<<"ELITE : "<<elite;gotoxy(60,14);cout<<elite*500;
 gotoxy(20,15);
 cout<<"TICKET COST: Rs."<<amount;
 gotoxy(20,15);
 cout<<"SNACKS COST: Rs."<<amt;
 gotoxy(20,16);
 cout<<"GRAND TOTAL Rs."<<amt+amount;
 gotoxy(10,18);
 for( i=0;i<=70;i++)
 cout<<char(4);
 gotoxy(20,20);
 cout<<"1) GO BACK";
 gotoxy(20,21);
 cout<<"2) PROCEED TO PAY";
 gotoxy(40,22);
 cout<<"Enter your choice: ";
 cin>>ch9;
  if(ch9==1)
  goto lab;
  else if(ch7==2)
  trans();
 delay(500);
 trans();
}
void transaction()             //CALCULATION OF AMOUNT TO BE PAYED BY THE USER//
{
 clrscr();
 border();
 for(int i=0;i<l;i++)
 {
   if(tic[i]<3)
   {
     elite++;
     amount+=500;
   }
   else if(tic[i]>2&&tic[i]<8)
    {
     amount+=300;
     premire++;
    }
   else
   {
    amount+=200;
    economy++;
   }
 }
 clrscr();
 border();
 textcolor(RED);
 gotoxy(3,3);
 for( i=0;i<=70;i++)
 {
 cout<<char(4);
 }
 gotoxy(30,4);
 cout<<" SHN CINEMAS";     //TICKET DETAILS//
 gotoxy(20,6);
 cout<<"BOOKING DETAILS";
 gotoxy(20,7);
 cout<<"YOU HAVE CHOSEN TO WATCH:  "<<s.movname;
 gotoxy(20,8);
 cout<<"NO. OF SEATS";gotoxy(60,8); cout<<"AMOUNT";
 gotoxy(20,9);
 cout<<"ECONOMY : "<<economy; gotoxy(60,9);cout<<economy*200;
 gotoxy(20,10);
 cout<<"PREMIRE : "<<premire;gotoxy(60,10);cout<<premire*300;
  gotoxy(20,11);
 cout<<"ELITE : "<<elite;gotoxy(60,11);cout<<elite*500;
 gotoxy(20,12);
 cout<<"TICKET COST: Rs."<<amount;
 gotoxy(20,13);
 cout<<"SNACKS COST: Rs."<<amt;
 gotoxy(20,14);
 cout<<"GRAND TOTAL Rs."<<amt+amount;
 gotoxy(10,16);
 for( i=0;i<=59;i++)
 cout<<char(4);
 gotoxy(20,18);
 gotoxy(20,19);
 cout<<"1. SNACK CORNER";
 gotoxy(20,20);
 cout<<"2. PROCEED TO PAY";
 gotoxy(10,21);cout<<"Enter your choice: ";
 cin>>ch9;
 if(ch9==1)
  snack(economy,premire,elite,amount);
  else
 if(ch9==2)
 trans();
}
void trans()         //MODE OF PAYMENT//
{
 clrscr();
 border();
 gotoxy(1,1);
 gotoxy(20,5);
 cout<<" HOW WOULD YOU LIKE TO PAY ?";
 gotoxy(23,9);
 cout<<"1. Net Banking ";
 gotoxy(23,11);
 cout<<"2. Credit Card ";
 gotoxy(23,13);
 cout<<"3. Debit Card ";
 gotoxy(23,15);
 cout<<"Enter your CHOICE : ";
 cin>>ch11;
 clrscr();
 border();
 switch(ch11)
  {
   case 1 : gotoxy(30,5);
	    cout<<"1. ICICI BANK ";
	    gotoxy(30,7);
	    cout<<" 2. KARUR VYSYA  BANK ";
	    gotoxy(30,9);
	    cout<<" 3. CANARA BANK ";
	    gotoxy(30,11);
	    cout<<" 4. Back";
	    gotoxy(30,13);
	    cout<<" Enter your CHOICE : ";
	    cin>>ch12;
	    if(ch12==4)
	     trans();
	    clrscr();
	    border();
	    textcolor(5);
	    gotoxy(30,8);
	    cout<<"WELCOME TO ";
	    delay(2000);
	    if(ch12==1)
	     cout<<"ICICI BANK ";
	    else if(ch12==2)
	     cout<<"KARUR VYSYA BANK ";
	    else if(ch12==3)
	     cout<<"CANARA BANK";
	    gotoxy(28,10);
	    cout<<"Enter the following details";
	    gotoxy(28,12);
	    cout<<"USERNAME:";
	    gets(carduser);
	    gotoxy(28,14);
	    cout<<"PASSWORD:";
	    char aa[30],ch3;
	    int n2,v1=1;
	    for(int i=0;i<20;i++)
	      {
	       ch3=getch();
	       v1=ch3;
	       if(v1!=13)
		 {
		  cardpwd[i]=ch3;
		  n2=i;
		  cout<<'\4';
		 }
	       if(v1==13)
		break;
	       }
	    cardpwd[n2+1]='\0';
	    ticketdisp();
	    break;
   case 2 : border();
	    gotoxy(30,3);
	    cout<<"Enter the following DETAILS ";
	    gotoxy(20,7);
	    cout<<"CREDIT CARD NUMBER : ";
	    cin>>cardno;
	    gotoxy(20,9);
	    cout<<"NAME : ";
	    gets(carduser);
	    gotoxy(20,11);
	    cout<<"CVV NUMBER : ";
	    cin>>cvv;
	    gotoxy(20,13);
	    cout<<"PASSWORD : ";
	    for( i=0;i<20;i++)
	     {
	      ch3=getch();
	      v1=ch3;
	      if(v1!=13)
	       {
		 cardpwd[i]=ch3;
		 n2=i;
		 cout<<'\4';
	       }
	      if(v1==13)
		break;
	      }
	    cardpwd[n2+1]='\0';
	    ticketdisp();
	    break;
   case 3 : border();
	    gotoxy(30,5);
	    cout<<"Enter the following DETAILS ";
	    gotoxy(20,10);
	    cout<<"CARD Number : ";
	    cin>>cardno;
	    gotoxy(20,15);
	    cout<<"PIN Number : ";
	    for( i=0;i<20;i++)
	     {
	      ch3=getch();
	      v1=ch3;
	      if(v1!=13)
		{
		 pin[i]=ch3;
		 n2=i;
		 cout<<'\4';
		}
	      if(v1==13)
	       break;
	      }
	    pin[n2+1]='\0';
	    ticketdisp();
	    break;
  }
}
void ticketdisp()
{
 clrscr();
 border();
 int n;
 double time;
 gotoxy(30,15);
 cout << "Your Transaction is being processed";
 for (n=0; n<7; n++ )
 {
  cout << ".";
    for ( time=0; time<=4000000; time++);
 }
 clrscr();
 border();
 gotoxy(20,7);
 cout<<"Transaction has been SUCCESSFULLY COMPLETED.";
 gotoxy(20,8);
 cout<<"Rs."<<amount+amt<<" has been DEDUCTED from your account.";
 gotoxy(20,14);
 cout<<"Your ticket has been BOOKED.";
 gotoxy(20,18);
 cout<<"THANK YOU\7\7\7...";
 getch();
 clrscr();
 border();
 gotoxy(27,3);
 for(i=0;i<22;i++)
 cout<<char(4);               //confirmation ticket//
 gotoxy(32,4);
 cputs("TICKET DETAILS");
 gotoxy(27,5);
 for(i=0;i<22;i++)
 cout<<char(4);
 gotoxy(27,8);
 cputs("TICKET HOLDER:");
 gotoxy(42,8);
 cout<<ss1.username;
 gotoxy(27,10);
 cputs("MOVIE:");
 gotoxy(42,10);
 cout<<s.movname;
 gotoxy(27,12);
 cputs("NO OF TICKETS:");
 gotoxy(42,12);
 cout<<l;
 gotoxy(27,14);
 cputs("SEAT NOS:");
 gotoxy(42,14);
 for(int k=0;k<l;k++)
 {
 cout<<tic[k]<<tick[k];
 cout<<"\t";
 }
 gotoxy(27,16);
 cputs("DATE:");
 gotoxy(42,16);
 if(ch13==1)
 {
 for(int i=0;i<1;i++)
  {
   int k=yr%4;
    if(((dt==31)&&(mn==1||mn==3||mn==5||mn==7||mn==8||mn==10))||((dt==30)&&(mn==4)))
     {
      dt=1;
      mn=mn+1;
     }
    else if((dt==31)&&(mn==12))
     {
      dt=1;
      mn=1;
      yr=yr+1;
     }
    else if(((k==0)&&(dt==29)&&(mn==2))||((k!=1)&&(dt==28)&&(mn==2)))
    {
     dt=1;
     mn=3;
    }
    else
   {
   dt=dt+1;
   }
  cout<<mn<<"/"<<dt<<"/"<<yr;
  }
 }
 else
 {
 for(int i=0;i<3;i++)
  {
 int k=yr%4;
  if(((dt==31)&&(mn==1||mn==3||mn==5||mn==7||mn==8||mn==10))||((dt==30)&&(mn==4)))
   {
    dt=1;
    mn=mn+1;
   }
  else if((dt==31)&&(mn==12))
  {
   dt=1;
   mn=1;
   yr=yr+1;
  }
  else if(((k==0)&&(dt==29)&&(mn==2))||((k!=1)&&(dt==28)&&(mn==2)))
  {
   dt=1;
   mn=3;
  }
  else
  {
  dt=dt+1;
  }
 }
 cout<<dt<<"/"<<mn<<"/"<<yr;
 }
 gotoxy(27,18);
 cputs("SHOW TIMING:");
 gotoxy(42,18);
 switch(ch14)
  {
 case 1:cputs("10:00 - 12:30");
	break;
 case 2:cputs("14:30 - 17:00");
	break;
 case 3:cputs("18:30 - 21.00");
	break;
 case 4:cputs("22:00 - 00:30");
	break;
  }
 getch();
 clrscr();
 border();
 gotoxy(20,15);
 cout<<"Do you wish to book more tickets? (y/n) ";
 cin>>ch15;
 if(ch15=='y')
 {
 ++count;
 amt=amount=elite=premire=economy=0;
 signin();
 }
else
 {
 clrscr();
 thankyou();
 }
}
void logo()    //FUNCTION FOR LOGO//
{
 int gd=DETECT;
 int gm;
 initgraph(&gd,&gm,"C:\\turboC3\\BGI");
 setbkcolor(4);
 settextstyle(1,HORIZ_DIR,8);
 for(int i=1;i<15;i++)
 {
 if(i==7||i==8)
 continue;
 else
  {
   setcolor(i);
   outtextxy(150,10,"THEATRE ");
   outtextxy(60,100,"MANAGEMENT");
   delay(300);
  }
 }
 settextstyle(8,HORIZ_DIR,4);
 setcolor(5);
 outtextxy(165,220,"Project done by");
 settextstyle(8,HORIZ_DIR,5);
 setcolor(3);
 outtextxy(120,280,"R.SHRUTHI");
 getch();
 cleardevice();
 int j,k;
 gotoxy(24,19);
 cout<<"LOADING "<<endl;
 gotoxy(28,22);
 cout<<"___________";
 j=28;
 for( i=0;i<101;i++)
 {
  gotoxy(41,22);
  delay(50);
  cout<<i<<"% completed"<<endl;
  if(i%10==0)
    {
     gotoxy(j,22);
     j++;
     cout<<char(16);
    }
  }
 cout<<"\n\n\t\t\t\tSUCCESSFULLY LOADED";
 cleardevice();
 setbkcolor(4);
 settextstyle(7,HORIZ_DIR,7);
 setcolor(6);
 outtextxy(100,10,"SHRUTHI CINEMAS");
 delay(500);
 outtextxy(50,100,"ENTERTAINMENT");
 cout<<"\t\t";
 outtextxy(50,200,"UNLIMITED");
 delay(100);
 delay(40);
 cout<<endl;
 gotoxy(31,22);
 cout<<"MYLAPORE,Chennai"<<endl;
 delay(40);
 gotoxy(4,23);cout<<"www.shncinemas.com";
 gotoxy(65,23);cout<<"Ph:044-623311"<<endl;
 getch();
 cleardevice();
 closegraph();
}
void thankyou()         //FOR THANK YOU//
{
 clrscr();
 int gd=DETECT;
 int gm;
 initgraph(&gd,&gm,"C:\\turboC3\\BGI");
 settextstyle(3,HORIZ_DIR,9);
 setbkcolor(4);
 for(int i=1;i<15;i++)
 {
 if(i==7||i==8)
 continue;
 else
  {
   setcolor(i);
   outtextxy(150,150,"THANK");
   outtextxy(200,250,"YOU");
   delay(300);
   }
 }
 exit(0);
}



