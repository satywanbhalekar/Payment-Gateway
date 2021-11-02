#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<dos.h>
#include<graphics.h>
#include<process.h>
class covid19
	 {
	    private:
		    char name[40];
		    float age;
		    int wt;
		    float ht;
		    char sex;
		    char *s;
	    public:
		  void welcome_screen(void);
		  void getvalue(void);
		  void getlevel1_symptoms(void);
		  void getlevel2_symptoms(void);
		  void getlevel3_symptoms(void);
		  int analyse_symptoms(int);
		  char display_message(int,int);
	 };
 
void main()
	{
	 char ch,choice,cho;
	 //int m,n=2;
	 float m;
	 int n=1;
	 void diagnosis(void);
	 covid19 dts;
	 dts.welcome_screen();
	 dts.getvalue();
	 diagnosis();
	 dts.getlevel1_symptoms();
	 m=dts.analyse_symptoms(n);
	 choice=dts.display_message(m,n);
	 choice=toupper(choice);
	 if(choice=='Y')
	 {
	  ++n;
	  dts.getlevel2_symptoms();
	  m=dts.analyse_symptoms(n);
	  choice=dts.display_message(n,m);
	  choice=toupper(choice);
	  if(choice=='Y')
	  {
	   ++n;
	   dts.getlevel3_symptoms();
	   m=dts.analyse_symptoms(n);
	   cho=dts.display_message(n,m);
	   cho=toupper(cho);
	   if(cho=='Y')
	   {
	    ++n;
	    dts.getlevel3_symptoms();
	    m=dts.analyse_symptoms(n);
	    choice=dts.display_message(m,n);
	   }
	  }
	 }
	}
 
 
void covid19::welcome_screen()
	 {
	   clrscr();
	   gotoxy(23,7);
	   textcolor(YELLOW);
	   cputs("********* W E L C O M E ********* " );
	   gotoxy(25,9);
	   cputs(" B I G C E   C O L L G E "  );
	   gotoxy(18,12);
	   cputs(" COVID 19 DETECTION S O F T W A R E  ");
	   textcolor(GREEN+BLINK);
	   for(int x=50;x>=22;x--)
	   {
	    sound(2000);
	    delay(120);
	    nosound();
	    gotoxy(x,14);
	    cputs("D O N E  B Y  : ");
	    gotoxy(x,16);
	    cputs("SATYWAN BHALEKAR ");
	    gotoxy(43,18);
 
	   }
	   gotoxy(17,25);
	   cputs("******** PRESS ANY KEY TO CONTINUE ********* ");
	   getch();
	   return;
	}
 
 
	void covid19::getvalue()
	{
	 clrscr();
	 textcolor(WHITE);
	 gotoxy(20,8);
	 cputs(" P E R S O N A L   I N F O R M A T I O N");
	 gotoxy(25,10);
	 cputs("N A M E        :");
	 gotoxy(25,12);
	 cputs("A G E          :");
	 gotoxy(25,14);
	 cputs("W E I G H T    :");
	 gotoxy(25,16);
	 cputs("H E I G H T    :");
	 gotoxy(25,18);
	 cputs("S E X (M/F)    :");
	 textcolor(WHITE);
	 gotoxy(42,10);
	 gets(name);
	 gotoxy(42,12);
	 cin>>age;
	 gotoxy(42,14);
	 cin>>wt;
	 gotoxy(42,16);
	 cin>>ht;
	 gotoxy(42,18);
	 cin>>sex;
	 getch();
	 return;
	}
 
 
void diagnosis(void)
     {
     clrscr();
     textcolor(WHITE);
     gotoxy(20,5);
     cputs(" **  D I A G N O S I S   W I N D O W **   ");
     cout<<"\n\n\n";
     cputs(" Let's have alook at  symptoms.........");
     cout<<"\n\n\n";
     cputs(" Please enter the form in next page .");
     cout<<"\n\n\n\n\n\n\t\t\t ";
     textcolor(YELLOW);
     cputs("***** PRESS ANY KEY ***** ");
     getch();
     }
 
void covid19::getlevel1_symptoms(void)
    {
     clrscr();
     int i=0;
     gotoxy(23,3);
     textcolor(WHITE);
     cputs( " *** MEDICAL DIAGONOSIS FORM *** ");
     gotoxy( 3,6);
     cputs("FREQUENCY OF fever (H(HIGH),/L(LOW),/N(NORMAL):") ;
     gotoxy(64,6);
     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     gotoxy(3,8);
     cputs("FREQUENCY OF dry cough(H(HIGH),/L(LOW)/N(NORMAL):");
     gotoxy(64,8);
     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     gotoxy(3,10);
     cputs("FREQUENCY OF tiredness(H(HIGH),/L(LOW),/N(NORMAL):");
     gotoxy(64,10);
     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     gotoxy(3,12);
     cputs("sore throat (I(IMPAIRMENT),/N(NORMAL)");
     gotoxy(64,12);
     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     gotoxy(3,14);
     cputs("headache(P(PASSIVE)/A(ACTIVE);");
     gotoxy(64,14);
     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     gotoxy(3,16);
     cputs(" difficulty in breathing(P(PASSIVE)/A(ACTIVE)");
     gotoxy(64,16);
     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     gotoxy(3,18);
     cputs("FASTING BLOOD SUGAR(H(HIGH)/L(LOW)/N(NOMAL)");
     gotoxy(64,18);
     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     gotoxy(3,20);
     cputs("aches and pains (H(HIGH)/L(LOW)/N(NORMAL)");
     gotoxy(64,20);
     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     gotoxy(3,22);
     cputs(" blue-colored skin, depending on skin tone(PASSIVE)/A(ACTIVE)");
     gotoxy(64,22);
     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
     gotoxy(3,24);
     cputs("HOME AREA HAS THE HIGHEST NUMBER OF COVID-19 CASES(D/N)");
     gotoxy(64,24);
     cin>>s[i];
     s[i]=toupper(s[i]);
     ++i;
    }
 
int covid19::analyse_symptoms(int n)

    {
      int i=0;
      int count=0;
      int result=0;
      switch(n)
	{
	 case 1:    if(s[9]=='D' )
			result=-1;
		    else
		       if(s[5]=='P'&& s[6]=='P' && s[7]=='H')
			  result=-1;
		       else
			  {
			    for(i=0;i<10;i++)
			    {
			      if(s[i]=='H'||s[i]=='P'||s[i]=='D'||s[i]=='I')
				count++;
			     }
			     if(count>5)
				result=-1;
			  }
		       break;

	 case 2: if((s[0]=='P')||(s[1]=='P')||(s[2]=='P')||(s[3]=='H')||(s[4]=='P')||(s[5]=='P')||(s[6]=='P'))
		     result=-1;
		 else
		     result=0;
		     break;
	 case 3: if((s[0]=='Y')&&(s[1]=='N')&&(s[2]=='W')&&(s[3]=='P')&&(s[4]=='P')||

	 (s[0]=='Y')&&(s[1]=='B')&&(s[2]=='W')&&(s[3]=='P')&&(s[4]=='P')||

	 (s[0]=='Y')&&(s[1]=='N')&&(s[2]=='M')&&(s[3]=='P')&&(s[4]=='P')||

	 (s[0]=='Y')&&(s[1]=='N')&&(s[2]=='Y')&&(s[3]=='P')&&(s[4]=='P'))
		  result=0;
		else
		   result=-1;
		 break;
	 default:break;
	}
       return(result);
      }

char covid19::display_message(int n,int m)

      {
       char ch;
       clrscr();
       switch(n)
	 {
	  case 1:
		  switch(m);
		      {
		       case 0: gotoxy(30,12);
			       cputs("THE PERSON IS NOT COVID 19 POSITIVE");
			       gotoxy(50,20);
			       cputs("PRESS ANY KEY TO QUIT." );
			      // gotoxy(70,20);
			       //cin>>ch;
			       //break;
			       exit(0);

		       case -1:

			       gotoxy(30,20);
			       cputs("\n THE PERSON CLOSE CONTACT COVID 19 PATIONT ");
			       gotoxy(54,20);
			       cputs("PROCEED (Y/N)  ?");
			       gotoxy(70,20);
			       cin>>ch;
			       break;

		     //  default: break;
		      }





		case 2:
			switch(m)
			{
			   case 0: gotoxy(30,12);
				   cputs("IT IS PRIMARY STAGE OF COVID 19.");
				   gotoxy(50,25);
				   cputs("Proceed(Y/N)?");
				   gotoxy(70,25);
				   cin>>ch;
				   break;

			   case -1: gotoxy(30,12);
				   cputs("IT IS SECONDARY STAGE OF COVID 19");
				   gotoxy(50,25);
				   cputs("PRESS ANY KEY TO QUIT");
				   getch();
				   break;

				   }
			break;

		case 3:switch(m)
		 {
			   case 0: gotoxy(30,12);
				cputs(" IT IS FIRST STAGE OF COVID 19");
				gotoxy(50,25);
				cputs("press any key to quit");
				getch();
				break;


			   case -1: gotoxy(30,12);
			       cputs("IT HAS NO COVID 19");
			       gotoxy(50,25);
			       cputs("PRESS ANY  KEY TO QUIT .");
			       getch();
			       break;

		      //	   default: break;

		 }

	      // break ;
	       //	default : break;
	       }
	       return (ch);
	     }



void covid19::getlevel2_symptoms()
	       {
		clrscr();
		int j=0;
		  gotoxy(20,8);
		  cputs("chest pain or pressure(P/A)  :");
		  gotoxy(60,8);
		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  j++;
		  gotoxy(20,10);
		  cputs("loss of speech or movement(P/A)  :");
		  gotoxy(60,10);
		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  ++j;
		  gotoxy(20,12);
		  cputs("Loss of taste or smell(P/A)     :");
		  gotoxy(60,12);
		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  ++j;
		  gotoxy(20,14);
		  cputs(" conjunctivitis (H/L/N)     :");
		  gotoxy(60,14);
		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  ++j;
		  gotoxy(20,16);
		  cputs("diarrhoea(P/A)    :");
		  gotoxy(60,16);
		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  ++j;
		  gotoxy(20,18);
		  cputs(" HORMONAL DISORDER(P/A):");

		  gotoxy(60,18);
		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  ++j;
		  gotoxy(20,20);
		  cputs(" Inability to wake or stay awake(P/A) :");
		  gotoxy(60,20);
		  cin>>s[j];
		  s[j]=toupper(s[j]);
		  ++j;
		  return;
	      }

void covid19::getlevel3_symptoms()
	     {
		 int k=0;
		 clrscr();
		 gotoxy(10,8);
		 cputs(" AGE(young(Y)/Middle aged(M)/Elderly(E))");
		 gotoxy(73,8);
		 cin>>s[k];
		 s[k]= toupper (s[k]);
		 ++k;
		 gotoxy(10,12);
		 cputs("BODY WEIGHT(normal(N)/Above normal(A)/Below normal(B)/obese)");
		 gotoxy(73,12);
		 cin>>s[k];
		 s[k]= toupper(s[k]);
		 ++k;
		 gotoxy(10,16);
		 cputs(" DURATION (weeks(W)/Months(M)/Years(Y))");
		 gotoxy(73,16);
		 cin>>s[k];
		 s[k]= toupper(s[k]);
		 ++k;

		gotoxy(10,20);
		 cputs("KETONUREA(P/A)");
		 gotoxy(73,20);
		 cin>>s[k];
		 s[k]= toupper(s[k]);
		 ++k;
		 gotoxy(10,24);
		 cputs("AUTO ANTIBODIES(P/A)");
		 gotoxy(73,24);
		 cin>>s[k];
		 s[k]= toupper(s[k]);
		 ++k;
		 return;
	}


