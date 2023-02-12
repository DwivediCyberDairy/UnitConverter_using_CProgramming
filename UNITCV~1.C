/*  Welcome to unit converter project bassed on c programming we can perform
( Currency , Temprature , Distance , Time , Volume ) type conversion,
these functions are created in below program */


#include<stdio.h>  /* header file linkking section */
#include<conio.h>
#include<ctype.h>
//#include<graphics.h>
#include<dos.h>
void getfa();      /* UDF declaration section*/
void currency();
void distance();
void getTime();
void Volume();
void gettemp();
void fun();

/* Main() fun Code start */
void main()     /*Program (execution/start) && (ending/closing) alwys from this function*/
{
    char v;
	clrscr();

	start:                            /*defined loop stage*/
	{
	textcolor(LIGHTGREEN);
	gotoxy(30,2);
	cprintf("WELCOME TO UNIT CONVERTER APPLICATION!\n");
	gotoxy(26,3);
	textcolor(LIGHTGREEN);
	cprintf("______________________________________________\n");
	gotoxy(1,5);
	textcolor(LIGHTRED);
	cprintf("\31 Here is a list of conversion to choose from -\n");
	gotoxy(1,7);
	textcolor(YELLOW);
	/*.. Main Apllication Functionality Option's Window..*/
	printf("=>FrontPage(O)\n=>Temperature(T)\n=>Currency(C)\n=>Mass(M)\n=>Distance(D)\n=>Time(S)\n=>Exit(E)"); //\4 replaced \=>
	textcolor(LIGHTRED);
	gotoxy(1,15);
	cprintf("Enter your choice :\32 ") ;
	fflush(stdin);
	v=getche();
	v=toupper(v);
	clrscr();
     //  scanf("%c",v);
	switch(v)
	{
	case 'O':
	  fun();
	  break;
	case 'T' :
	  gettemp();    /* gettemp() Fun calling */
	  break;
	case 'C' :
	  currency();    /* currency() Fun calling */
	  break;
	case 'M' :
	  Volume();     /* Volume() Fun calling */
	  break;
	case 'D' :
	   distance();   /* distance() Fun calling */
	   break;
	case 'S' :
	   getTime();    /* getTime() Fun calling */
	   break;
	case 'E':
	  exit(0);
	  break;

	default:
	textcolor(RED+BLINK);
	cprintf("Not availaible your choice:");
	delay(700);
	clrscr();
	break;
	}

	getch();
	goto start;

   }
}
/* Main() fun code end */

/* front Page fun Section Code start */
void fun()
{
	clrscr();
	textcolor(LIGHTRED);
	gotoxy(18,2);
	cprintf("____________") ;
	gotoxy(28,2);
	cprintf(" WELCOME TO C PROJECT");
	cprintf("____________") ;
	textcolor(LIGHTGREEN);
	gotoxy(17,4);
	cprintf("SUBMITTED BY");
	textcolor(LIGHTGREEN);
	gotoxy(50,4);
	cprintf("SUBMITTED TO\n");
	textcolor(YELLOW);
	gotoxy(19,6);
	cprintf("\20 Ms. Shahin Khatoon\n");
	gotoxy(19,7);
	cprintf("\20 Ms. Vaishnavi Pal");
	gotoxy(19,8);
	cprintf("\20 Ms. Anupam Pal");
	gotoxy(19,9);
	cprintf("\20 Mr. RaghuNath");
	gotoxy(19,10);
	cprintf("\20 Mr. Arun Kumar");
	gotoxy(19,11);
	cprintf("\20 Mr. Saurabh Pal");
	gotoxy(19,12);
	cprintf("\20 Mr. Pramod Dwivedi");
	gotoxy(50,6);
	cprintf("\20 Er. Satyam Mishra");
	delay(11000);
	clrscr();
	main();
}

/*--temprature convertor fun() section created by Mr. shaurab --*/
void gettemp()
{
	float f,k,c,ch,res;
	textcolor(LIGHTGREEN);
    gotoxy(30,2);
    cprintf("\20:WELCOME TO TEMPRATURE CONVERTER:\21 \n");
	gotoxy(29,3);
	cprintf("_______________________________________: \n");
	textcolor(LIGHTRED);
	gotoxy(1,5);
    cprintf("\31 Here is a list of conversation to choose from -\n");
    textcolor(YELLOW);
	gotoxy(6,6);
	cprintf("\4 press1:farenhite to kalvin\n");
	gotoxy(6,7);
	cprintf("\4 press2:frenhite to celcius\n");
	gotoxy(6,8);
	cprintf("\4 press3:kalvin to farenhite\n");
	gotoxy(6,9);
	cprintf("\4 press4: kalvin to celcius\n");
	gotoxy(6,10);
	cprintf("\4 press5:celcius to farenhite\n");
	gotoxy(6,11);
	cprintf("\4 press6:celcius to kalvin\n");
	textcolor(RED+BLINK);
    gotoxy(1,12);
	cprintf("Please select your choice");
	fflush(stdin);
	scanf("%f",&ch);
	clrscr();
	if(ch==1)
	{
		textcolor(RED);
	    gotoxy(2,2);
		cprintf("Please Enter value in farenhite:");
		fflush(stdin);
		scanf("%f",&f);
		clrscr();
		res=((f-32)*5)/9+273.15;
		textcolor(YELLOW);
		cprintf("kalvin is:%f",res);
	    delay(2800);
	    clrscr();
	    main();
	}
	else if(ch==2)
	{
		textcolor(RED);
	    gotoxy(2,2);
		cprintf("Please Enter value in farenhite:");
		fflush(stdin);
		scanf("%f",&f);
		clrscr();
		res=((f-32)*5)/9;
		textcolor(YELLOW);
		cprintf("celcius is:%f",res);
		delay(2800);
	    clrscr();
	    main();
	}
	else if(ch==3)
	{
		textcolor(RED);
	    gotoxy(2,2);
		cprintf("Please Enter value in kalvin:");
		fflush(stdin);
		scanf("%f",&k);
		res=(((k-273.15)*9)/5)+32;
		textcolor(YELLOW);
		cprintf("farenhite is:%f",res);
		delay(2800);
	    clrscr();
	    main();
	}
	else if(ch==4)
	{
	    textcolor(RED);
	    gotoxy(2,2);
		cprintf("Please Enter value in kalvin:");
		fflush(stdin);
		scanf("%f",&k);
		res=k-273.15;
		textcolor(YELLOW);
		cprintf("celcius is:%f",res);
		delay(2800);
	    clrscr();
	    main();
	}
	else if(ch==5)
	{
		textcolor(RED);
	    gotoxy(2,2);
		printf("Please Enter value in celcius:");
		fflush(stdin);
		scanf("%f",&c);
		res=((9*c)/9)+32;
		textcolor(YELLOW);
		cprintf("farenhite is:%f",res);
		delay(2800);
	    clrscr();
	    main();
	}
	else if(ch==6)
	{
		textcolor(RED);
	    gotoxy(2,2);
		printf("Please Enter value in celcius:");
		fflush(stdin);
		scanf("%f",&c);
		res=((5*c)/5)+273.15;
		textcolor(YELLOW);
		cprintf("kalvin is:%f",res);
		delay(2800);
	    clrscr();
	    main();
	}
	else {
		textcolor(RED+BLINK);
	    gotoxy(2,2);
		cprintf("INVALID ACTION");
	    delay(2800);
	    clrscr();
	    main();
	}
}

/*.. Currency Converter section created by Mr. Raghhu..*/

void currency()
{
 //   char category;
	int currencyChoice;
	int userinputUSDtoEuro;
    int userinputUSDtoJPY;
    int userinputUSDtoRMB;
	int userinputINRtoUSD;
    int userinputUSDtoINR;
    int userinputINRtoJPY;
    int userinputJPYtoUSD;
    int userinputINRtoEuro;
    int userinputJPYtoINR;
    int userinputEurotoINR;

	float USDtoEURO ;
    float USDtoJPY;
    float USDtoRMB;
    float USDtoINR;
    float INRtoUSD;
    float JPYtoUSD;
    float INRtoJPY;
    float INRtoEuro;
    float JPYtoINR;
    float EurotoINR;

	  textcolor(LIGHTGREEN);
      gotoxy(30,2);
      cprintf("\20:WELCOME TO CURRENCY CONVERTER:\21 \n");
	  gotoxy(26,3);
	  cprintf("__________________________________________: \n");
	  textcolor(LIGHTRED);
	  gotoxy(1,5);
      cprintf("\31 Here is a list of conversation to choose from -\n");
      textcolor(YELLOW);
	  gotoxy(6,6);
      cprintf("\4 press:1 USD to Euro. \n");
	  gotoxy(6,7);
      cprintf("\4 press:2 USD to JPY. \n");
	  gotoxy(6,8);
      cprintf("\4 press:3 USD to RMB. \n");
	  gotoxy(6,9);
      cprintf("\4 press:4 USD to INR. \n");
	  gotoxy(6,10);
      cprintf("\4 press:5 INR to USD. \n");
	  gotoxy(6,11);
      cprintf("\4 press:6 INR to JPY. \n");
	  gotoxy(6,12);
      cprintf("\4 press:7 INR to Euro. \n");
	  gotoxy(6,13);
      cprintf("\4 press:8 JPY to USD. \n");
	  gotoxy(6,14);
      cprintf("\4 press:9 JPY to India\n");
	  gotoxy(6,15);
      cprintf("\4 press:10 Euro to India. \n");

	  textcolor(RED+BLINK);
	  gotoxy(1,16);
	  cprintf("Enter your convertor :");
	  fflush(stdin);
      scanf("%d",&currencyChoice);
	  clrscr();
      if(currencyChoice == 1){
	  textcolor(RED);
	  cprintf("Please enter the USD amount:");
	  fflush(stdin);
	  scanf("%d",&userinputUSDtoEuro);
	  clrscr();
	  USDtoEURO = userinputUSDtoEuro * 1.016;
	  printf("Euro: %.4f",USDtoEURO);
	  delay(2800);
	  clrscr();
	  main();
      }
      else if(currencyChoice == 2){
	  textcolor(RED);
	  cprintf("Please enter the USD amount:");
	  fflush(stdin);
	  scanf("%d",&userinputUSDtoJPY);
	  clrscr();
	  USDtoJPY = userinputUSDtoJPY * 111.09;
	  printf("JPY: %.2f",USDtoJPY);
	  delay(2800);
	  clrscr();
	  main();
      }

	  else if(currencyChoice == 8){
	  textcolor(RED);
	  printf("Please enter the USD amount:");
	  fflush(stdin);
	  scanf("%d",&userinputJPYtoUSD);
	  clrscr();
	  JPYtoUSD = userinputJPYtoUSD * 143.09;
	  printf("USD: %.2f",JPYtoUSD);
	  delay(2800);
	  clrscr();
	  main();
      }

      else if(currencyChoice == 3) {
	  textcolor(RED);
	  cprintf("Please enter the USD amount:");
	  fflush(stdin);
	  scanf("%d",&userinputUSDtoRMB);
	  clrscr();
	  USDtoRMB = userinputUSDtoRMB * 6.82;
	  printf("RMB: %.2f",USDtoRMB);
	  delay(2800);
	  clrscr();
	  main();
	  }

	else if(currencyChoice == 4) {
    textcolor(RED);
    printf("Please enter the USD amount: \n");
	fflush(stdin);
	scanf("%d",&userinputUSDtoINR);
	USDtoINR = userinputUSDtoINR * 79.23;
	cprintf("INR: %.2f",USDtoINR);
	delay(2800);
	clrscr();
	main();
    }

    else if(currencyChoice == 5) {
	textcolor(RED);
	cprintf("Please enter the INR amount:");
	fflush(stdin);
	scanf("%d",&userinputINRtoUSD);
	clrscr();
	INRtoUSD = userinputINRtoUSD * 1/79.23;
	printf("USD: %.2f",INRtoUSD);
	delay(2800);
	clrscr();
	main();
    }

    else if(currencyChoice == 6) {
    textcolor(RED);
	cprintf("Please enter the INR amount: \n");
	fflush(stdin);
	scanf("%d",&userinputINRtoJPY);
	INRtoJPY = userinputINRtoJPY * 1.75;
	printf("JPY: %.2f",INRtoJPY);
	delay(2800);
	clrscr();
	main();
    }

    else if(currencyChoice == 7)
    {
	textcolor(RED);
	cprintf("Please enter the INR amount:");
	fflush(stdin);
	scanf("%d",&userinputINRtoEuro);
	clrscr();
	INRtoEuro = userinputINRtoEuro /79.66;
	printf("Euro: %0.3f",INRtoEuro);
	delay(2800);
	clrscr();
	main();
    }

    else if(currencyChoice == 9)
	{
	textcolor(RED);
	cprintf("Please enter the JPY amount: \n");
	fflush(stdin);
	scanf("%d",&userinputJPYtoINR);
	JPYtoINR = userinputJPYtoINR / 1.75;
	printf("INR: %.2f",JPYtoINR);
	delay(2800);
	clrscr();
	main();
    }

    else if(currencyChoice == 10)
    {
	textcolor(RED);
	cprintf("Please enter the Euro amount: \n");
	fflush(stdin);
	scanf("%d",&userinputEurotoINR);
	EurotoINR = userinputEurotoINR *79.66;
	printf("INR: %0.3f",EurotoINR);
	delay(2800);
	clrscr();
	main();
    }
    else {
	 textcolor(RED+BLINK);
	 cprintf("Please enter correct choice");
	 delay(2800);
	 clrscr();
	 main();
	 }
    }


/*.. Distance converter Section Created by Ms. vaishnavi..*/

void distance()
{
	float km,mm,cm,m,feet,inch,con;
	textcolor(LIGHTGREEN);
	gotoxy(30,2);
	cprintf("\20:WELCOME  TO OUR DISTANCE CONVERTER:\21\n");
	textcolor(LIGHTGREEN);
	gotoxy(26,3);
	cprintf("______________________________________________\n");
	textcolor(LIGHTRED);
	gotoxy(1,4);
	cprintf("\31 Here is a list of conversation to choose from -\n");
	gotoxy(4,5);
	textcolor(YELLOW);
	cprintf("\4 press 1:cm to mm\n");
	gotoxy(4,6);
	cprintf("\4 press 2:mm to cm\n");
	gotoxy(4,7);
	cprintf("\4 press 3:m to mm\n");
	gotoxy(4,8);
	cprintf("\4 press 4:km to mm\n");
	gotoxy(4,9);
	cprintf("\4 press 5:m to cm\n");
	gotoxy(4,10);
	cprintf("\4 press 6:km to cm\n");
	gotoxy(4,11);
	cprintf("\4 press 7:mm to m\n");
	gotoxy(4,12);
	cprintf("\4 press 8:cm to m\n");
	gotoxy(4,13);
	cprintf("\4 press 9:km to m\n");
	gotoxy(4,14);
	cprintf("\4 press 10:m to km\n");
	gotoxy(4,15);
	cprintf("\4 press 11:cm to km\n");
	gotoxy(4,16);
	cprintf("\4 press 12:mm to km\n");
	gotoxy(4,17);
	cprintf("\4 press 13:m to feet\n");
	gotoxy(4,18);
	cprintf("\4 press 14:inch to feet\n");
	gotoxy(4,19);
	cprintf("\4 press 15:cm to inch\n");
	textcolor(RED+BLINK);
	gotoxy(1,20);
	cprintf("Enter your convertor:");
	fflush(stdin);
	scanf("%f",&con);
	clrscr();
	if(con==1)
	{
		textcolor(RED);
		cprintf("Please enter a value in cm:");
		fflush(stdin);
		scanf("%f",&cm);
		delay(1000);
		clrscr();
		mm=cm*10;
		textcolor(YELLOW);
		cprintf("value of mm is:%f",mm);
		delay(2800);
	    clrscr();
	    main();
	}

	else if(con==2)
	{
		textcolor(RED);
		cprintf("Please enter a value in mm:");
		fflush(stdin);
		scanf("%f",&mm);
		delay(1000);
		clrscr();
		cm=mm*0.1;
		textcolor(YELLOW);
		cprintf("value of cm is:%f",cm);
	    delay(2800);
	    clrscr();
	    main();
	}
	else if(con==3)
	{
		textcolor(RED);
		printf("Please enter a value in m:");
		fflush(stdin);
		scanf("%f",&m);
		delay(1000);
		clrscr();
		mm=m*1000;
		textcolor(YELLOW);
		cprintf("value of mm is:%f",mm);
		delay(2800);
	    clrscr();
	    main();
	}
	else if(con==4)
	{
		textcolor(RED);
		cprintf("Please enter a value in km:");
		fflush(stdin);
		scanf("%f",&km);
		delay(1000);
		clrscr();
		mm=km*1000000;
		textcolor(YELLOW);
		cprintf("value of mm is:%f",mm);
		//delay(1500);
	    delay(2800);
	    clrscr();
	    main();
	}
	else if(con==5)
	{
		textcolor(RED);
		printf("Please enter a value in m:");
		fflush(stdin);
		scanf("%f",&m);
		cm=m*100;
		textcolor(YELLOW);
		cprintf("value of cm is:%f",cm);
		delay(2800);
	    clrscr();
	    main();
	}
	else if(con==6)
	{
		textcolor(RED);
		cprintf("Please enter a value in km:");
		fflush(stdin);
		scanf("%f",&km);
		delay(1000);
		clrscr();
		cm=km*100000;
		textcolor(YELLOW);
		cprintf("value of cm is:%f",cm);
		delay(2800);
	    clrscr();
	    main();
	}
	else if(con==7)
	{
		textcolor(RED);
		cprintf("Please enter a value in mm:");
		fflush(stdin);
		scanf("%f",&mm);
		clrscr();
		m=mm*0.001;
		textcolor(YELLOW);
		cprintf("value of m is:%f",m);
		delay(2800);
	    clrscr();
	    main();
	}
	else if(con==8)
	{
		textcolor(RED);
		printf("Please enter a value in cm:");
		fflush(stdin);
		scanf("%f",&cm);
		delay(1000);
		clrscr();
		m=cm*0.01;
		textcolor(YELLOW);
		cprintf("value of m is:%f",m);
		delay(2800);
	    clrscr();
	    main();
	}
	else if(con==9)
	{
		textcolor(RED);
		cprintf("Please enter a value in km:");
		fflush(stdin);
		scanf("%f",&km);
		delay(1000);
		clrscr();
		m=km*1000;
		textcolor(YELLOW);
		cprintf("value of m is:%f",m);
		delay(2800);
		clrscr();
	    main();
	}
	else if(con==10)
	{
		textcolor(RED);
		printf("Please enter a value in m:");
		fflush(stdin);
		scanf("%f",&m);
		delay(1000);
		clrscr();
		km=m*1000;
		textcolor(YELLOW);
		cprintf("value of km is:%f",km);
		delay(2800);
	    clrscr();
	    main();
	}
	else if(con==11)
	{
		textcolor(RED);
		cprintf("Please enter a value in cm:");
		fflush(stdin);
		scanf("%f",&cm);
		delay(1000);
		clrscr();
		km=cm*0.00001;
		textcolor(YELLOW);
		cprintf("value of km is:%f",km);
		delay(2800);
	    clrscr();
	    main();
	}
	else if(con==12)
	{
		textcolor(RED);
		cprintf("Please enter a value in mm:");
		fflush(stdin);
		scanf("%f",&mm);
		delay(1000);
		clrscr();
		km=mm*0.000001;
		textcolor(YELLOW);
		cprintf("value of km is:%f",km);
		delay(2800);
	    clrscr();
	    main();
	}
	else if(con==13)
	{
		textcolor(RED);
		cprintf("Please enter a value in m:");
		fflush(stdin);
		scanf("%f",&m);
		delay(1000);
		clrscr();
		feet=m*3.28084;
		textcolor(YELLOW);
		cprintf("value of feet is:%f",feet);
		delay(2800);
	    clrscr();
	    main();
	}
	else if(con==14)
	{
		textcolor(RED);
		cprintf("Please enter a value in inch:");
		fflush(stdin);
		scanf("%f",&inch);
		delay(1000);
		clrscr();
		feet=inch/12;
		textcolor(YELLOW);
		cprintf("value of feet is:%f",feet);
		delay(2800);
	    clrscr();
	    main();
	}
	else if(con==15)
	{
		textcolor(RED);
		cprintf("Please enter a value in cm:");
		fflush(stdin);
		scanf("%f",&cm);
		delay(1000);
		clrscr();
		inch=cm*0.393701;
		textcolor(YELLOW);
		cprintf("value of inch is:%f",inch);
	    delay(2800);
	    clrscr();
	    main();
	}
	else{
		textcolor(RED);
		cprintf("invailid ACTION");
		delay(2800);
	    clrscr();
	    main();
	   }
}

/*..Time Converter Section started, created by Mr. Arun..*/

void getTime()
{
   int res,sec,min,hh,input;
   int num;
   clrscr();
   textcolor(LIGHTGREEN);
   gotoxy(30,2);
   cprintf("\20:Welcome to time conversion:\21\n ");
   gotoxy(27,3);
   cprintf("___________________________________\n");
   gotoxy(1,5);
   textcolor(LIGHTRED);
   cprintf("\31 Here is a list of conversion to choose from -\n");
   textcolor(YELLOW);
   gotoxy(5,6);
   cprintf("\4 press 1: Second to Minutes\n");
   gotoxy(5,7);
   cprintf("\4 press 2: Minutes to Seconds\n");
   gotoxy(5,8);
   cprintf("\4 press 3: Minutes to Hours\n");
   gotoxy(5,9);
   cprintf("\4 press 4: Hours to Minutes\n");
   gotoxy(5,10);
   cprintf("\4 press 5: Hours to Seconds\n");
   gotoxy(5,11);
   cprintf("\4 press 6: Second to Hours, Minutes and Seconds\n");
   gotoxy(5,12);
   cprintf("\4 press 7 Minutes to Hours, Minutes and Seconds\n");
   textcolor(RED+BLINK);
   gotoxy(1,13);
   cprintf("Enter your convertor:");
   scanf("%d",&num);
   clrscr();
   switch(num)
   {
    case 1:
    textcolor(RED);
    gotoxy(1,2);
    cprintf("Enter the Second:");
    scanf("%d",&input);
	clrscr();
    min=input/60;
	textcolor(YELLOW);
    cprintf("Minutes is: %d",min);
	delay(2800);
	clrscr();
	main();
    break;

    case 2:
	textcolor(RED);
    gotoxy(1,2);
    cprintf("Enter the Minutes:");
    scanf("%d",&input);
    clrscr();
    sec=input*60;
	textcolor(YELLOW);
    cprintf("Seconds: %d",sec);
	delay(2800);
    clrscr();
	main();
    break;

	case 3:
	textcolor(RED);
    gotoxy(1,2);
    cprintf("Enter the Minutes:");
    scanf("%d",&input);
	clrscr();
    hh=input/60;
	textcolor(YELLOW);
    cprintf("Hours: %d",hh);
	delay(2800);
	clrscr();
	main();
    break;

	case 4:
	textcolor(RED);
    gotoxy(1,2);
    cprintf("Enter the Hours:");
    scanf("%d",&input);
	clrscr();
    min=input*60;
	textcolor(YELLOW);
    cprintf("Minutes : %d",min);
	delay(2800);
	clrscr();
	main();
    break;

	case 5:
	textcolor(RED);
	cprintf("Enter the Hours");
	scanf("%d",&input);
	clrscr();
	sec=input*60*60;
	textcolor(YELLOW);
	cprintf("Seconds: %d",sec);
	delay(2800);
	clrscr();
	main();
	break;

	case 6:
	textcolor(RED);
    gotoxy(1,2);
	cprintf("Enter the Seconds:");//120=1
    scanf("%d",&input);
	clrscr();
    hh = input/3600;
    min = (input-hh*3600)/60;
    sec = input-hh*3600-min*60;
	textcolor(YELLOW);
    cprintf("%d hours : %d minutes : %d seconds",hh,min,sec);
	delay(2800);
	clrscr();
	main();
    break;

	case 7:
	textcolor(RED);
    gotoxy(1,2);
    cprintf("Enter the Minutes:");
    scanf("%d",&input);
    clrscr();
    /*hh = input/3600;
    min = (input-hh*3600)/60;
    sec = input-hh*3600-min*60;
	*/
    hh= input/60;//130  //130%60
    input=input%60;
    min=input;
    min=min%60;
    sec=min/3600;
    // sec=input/3600;
    textcolor(YELLOW);
    cprintf("%d hours : %d minutes : %d seconds",hh,min,sec);
	delay(2800);
	clrscr();
	main();
    break;

	default :
	textcolor(RED);
    gotoxy(1,2);
	cprintf("Invalid ACTION.");
	delay(2800);
	clrscr();
	main();
    break;
   }

  }

/*..Volume/Weight Converter Section start, Created by Anupma .. */
void Volume()
{
	float kg,gm,cg, mg,res;
	int choice;
    textcolor(LIGHTGREEN);
    gotoxy(30,2);
	cprintf("\20:WELCOME TO VOLUME CONVERTER:\21\n");
	gotoxy(26,3);
	cprintf("____________________________________\n");
	textcolor(LIGHTRED);
    gotoxy(1,5);
	cprintf("\31 Here is a list of conversion to choose from -\n");
	textcolor(YELLOW);
    gotoxy(6,6);
    cprintf("\4 press 1: To convert kilogram to  gram\n");
	gotoxy(6,7);
    cprintf("\4 press 2: To convert kilogram to centi gram\n");
	gotoxy(6,8);
    cprintf("\4 press 3: To convert kilogram to mili gram\n");
	gotoxy(6,9);
    cprintf("\4 press 4: to convert gram to kilogram\n");
	gotoxy(6,10);
    cprintf("\4 press 5: to convert gram to centigram\n");
	gotoxy(6,11);
    cprintf("\4 press 6: to convert gram to miligram\n");
	gotoxy(6,12);
    cprintf("\4 press 7: to convert centigram to kilogram\n");
	gotoxy(6,13);
    cprintf("\4 press 8: to convert centigram to gram\n");
	gotoxy(6,14);
    cprintf("\4 press 9: to convert centigram to miligram\n");
	gotoxy(6,15);
    cprintf("\4 press 10: to convert miligram to kilogram\n");
	gotoxy(6,16);
    cprintf("\4 press 11: to convert miligram to gram\n");
	gotoxy(6,17);
    cprintf("\4 press 12: to convert miligram to centigram\n");
    textcolor(RED+BLINK);
	gotoxy(1,18);
	cprintf("Enter your convertor:");
	scanf("%d",&choice);
	clrscr();

	switch(choice)
    {
	case 1:
	    textcolor(RED);
		cprintf("Please enter value in kilogram:");
		scanf("%f",&kg);
		clrscr();
		res=kg*1000;
		textcolor(YELLOW);
		cprintf("%.2f ",res);
		cprintf("gm");
		delay(2800);
	    clrscr();
	    main();
		break;

	case 2:
		textcolor(RED);
		cprintf("Please enter value in kilogram:");
		scanf("%f",&kg);
		clrscr();
		res=kg*100000;
		textcolor(YELLOW);
		cprintf("%f ",res);
		cprintf("cg");
		delay(2800);
	    clrscr();
	    main();
	break;

	case 3:
		textcolor(RED);
	cprintf("Please enter value in kilogram:");
		scanf("%f",&kg);
		clrscr();
		res=kg*1000000;
		textcolor(YELLOW);
		cprintf("%.2f ",res);
		cprintf("mg");
		delay(2800);
	    clrscr();
	    main();
		break;
	case 4:
		textcolor(RED);
		cprintf("Please enter value in gram:");
		scanf("%f",&kg);
	    clrscr();
		res=kg/1000;
		textcolor(YELLOW);
		cprintf("%.2f ",res);
	    cprintf("kg");
		delay(2800);
	    clrscr();
	    main();
		break;

	case 5:
		textcolor(RED);
		cprintf("Please enter value in gram:");
		scanf("%f",&kg);
	    clrscr();
		res=kg*100;
		textcolor(YELLOW);
		cprintf("%.2f ",res);
		cprintf("cg");
		delay(2800);
	    clrscr();
	    main();
		break;

	case 6:
		textcolor(RED);
		cprintf("Please enter value in gram:");
		scanf("%f",&kg);
		clrscr();
		res=kg*1000;
		textcolor(YELLOW);
		cprintf("%.2f ",res);
		cprintf("mg");
		delay(2800);
	    clrscr();
	    main();
	break;

	case 7:
		textcolor(RED);
	    cprintf("Please enter value in centigram:");
	    scanf("%f",&kg);
		clrscr();
	    res=kg/100000;
		textcolor(YELLOW);
	    cprintf("%.2f ",res);
		cprintf("kg");
		delay(2800);
	    clrscr();
	    main();
	break;

	case 8:
		textcolor(RED);
	    cprintf("Please enter value in centigram:");
	    scanf("%f",&kg);
		clrscr();
	    res=kg/100;
		textcolor(YELLOW);
	    cprintf("%.2f ",res);
		cprintf("gm");
		delay(2800);
	    clrscr();
	    main();
	break;

	case 9:
		textcolor(RED);
	    cprintf("Please enter value in centigram:");
	    scanf("%f",&kg);
		clrscr();
	    res=kg*10;
		textcolor(YELLOW);
	    cprintf("%.2f ",res);
		cprintf("mg");
		delay(2800);
	    clrscr();
	    main();
	break;

	case 10:
		textcolor(RED);
	    cprintf("Please enter value in miligram:");
	    scanf("%f",&kg);
		clrscr();
	    res=kg/1000000;
		textcolor(YELLOW);
	    cprintf("%.2f ",res);
		cprintf("kg");
		delay(2800);
	    clrscr();
	    main();
	break;

    case 11:
		textcolor(RED+BLINK);
	    cprintf("Please enter value in miligram:");
	    scanf("%f",&kg);
		clrscr();
	    res=kg/1000;
		textcolor(YELLOW);
	    cprintf("%.2f ",res);
		cprintf("gm");
		delay(2800);
	    clrscr();
	    main();
	break;

	case 12:
		textcolor(RED);
	    cprintf("Please enter value in miligram:");
	    scanf("%f",&kg);
		clrscr();
	    res=kg/10;
		textcolor(YELLOW);
	    cprintf("%.2f ",res);
		cprintf("cg");
		delay(2800);
	    clrscr();
	    main();
	    break;

	 }
}

/* End of the code ..*/

