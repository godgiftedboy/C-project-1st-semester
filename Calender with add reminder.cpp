#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
void nepday(int a, int b);
void engday(int a, int b);
void view();
void calendar();
void converter();
void leftrect();
void rightrect();
void bstoad();
void loop1();
void loop2();
void adtobs();
void bstoad();
int leap(int a);
void exit();
void setremainder();
void viewremainder();
struct Date{
    int mm;
    int yy;
    int dd;
};
struct Date date,remdate;
	
int check;
char filename[20];

void gotoxy(short x, short y) 
 {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void setbc(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);;
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
     return;
}


int main()
{
		char take;
	SetConsoleTitle("Calender");
	int i;
system("cls");
		char wlc[50]=" Sample Calender Project ";
gotoxy(6,2);
for(i=0;i<20;i++)
{
 Sleep(30);
printf("\4");
}
for(i=0;i<27;i++)
{
Sleep(30);
	printf("%c",wlc[i]);
}
for(i=0;i<20;i++)
{
 Sleep(30);
printf("\4");
}
gotoxy(6,6);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
for(i=7;i<10;i++)
{
gotoxy(6,i);
printf("\xb2\xb2");   
}
gotoxy(6,8);
printf("\xb2\xb2   a. Calendar");
gotoxy(6,10);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
for(i=7;i<10;i++)
{
gotoxy(27,i);
printf("\xb2\xb2");
}
gotoxy(45,6);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
for(i=7;i<10;i++)
{
gotoxy(45,i);
printf("\xb2\xb2");
}
gotoxy(45,8);
printf("\xb2\xb2   b. Converter");
gotoxy(45,10);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
for(i=7;i<10;i++)
{
gotoxy(66,i);
printf("\xb2\xb2");
}
gotoxy(29,12);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
for(i=13;i<16;i++)
{
gotoxy(29,i);
printf("\xb2\xb2");
}
gotoxy(29,14);
printf("\xb2\xb2 c. EXIT");
gotoxy(29,16);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
for(i=13;i<16;i++)
{
gotoxy(43,i);
printf("\xb2\xb2");
}
gotoxy(6,18);
printf("Enter your choice: ");
gotoxy(26,18);
scanf("%c",&take);
switch(take)
{
	case 'a':
		calendar();
		break;
		case 'b':
			converter();
			break;
			case 'c':
				exit();
				break;
				default:
					system("cls");
			gotoxy(6,6);
				printf("\aInvalid Input!!!\n\n");
				printf("\tPlease Enter 1,2 or 3. Starting the main module in 3 seconds>>>>");
Sleep(3000);
main();
}
return 0;
}

void calendar()
{
	remdate.dd=0;
	SetConsoleTitle("Calendar");
	char dis[]={" Welcome to sample calendar "};
	int i;
	system("cls");
	gotoxy(13,2);
	for(i=0;i<13;i++)
	{
	printf("\3");
	Sleep(30);
}
	for(i=0;dis[i]!='\0';i++)
	{
		printf("%c",dis[i]);
	Sleep(30);
	}
		for(i=0;i<13;i++)
	{
	printf("\3");
	Sleep(30);
}
	printf("\n\n\n\nIn which format do you want to see:\na)English\nb)Nepali\nc)Previous Page\nd)Exit\n->");
	switch (getche())
{
case 'a':
	getch();
printf("\n\n\nEnter the year:");
scanf("%d",&date.yy);
if(date.yy<1943 || date.yy>2033)
{
	system("cls");
	gotoxy(6,10);
	printf("Invalid Year!!! Year only valid from 1943-2033 AD.");
	printf("Redirecting the page in 3 seconds>>>");
Sleep(3000);
calendar();
}
printf("\nEnter the month:");
scanf("%d",&date.mm);
if(date.mm>12||date.mm<1)
{
	system("cls");
	gotoxy(6,10);
	printf("Invalid Month!!! Month is at least 1 and at most 12.");
	printf("Redirecting the page in 3 seconds>>>");
Sleep(3000);
calendar();
}
	engday(date.yy,date.mm);
break;
	case 'b':
		getch();
		printf("\n\n\nEnter the year:");
scanf("%d",&date.yy);
if(date.yy<2000 || date.yy>2090)
{
	system("cls");
	gotoxy(6,10);
	printf("Invalid Year!!! Year only valid from 2000-2090 BS.");
	printf("Redirecting the page in 3 seconds>>>");
Sleep(3000);
calendar();
}
printf("\nEnter the month:");
scanf("%d",&date.mm);
if(date.mm>12||date.mm<1)
{
	system("cls");
	gotoxy(6,10);
	printf("Invalid Month!!! Month is at least 1 and at most 12.");
	printf("Redirecting the page in 3 seconds>>>");
Sleep(3000);
calendar();
}	
	nepday(date.yy,date.mm);
break;
case 'd':
	getch();
	exit();
	break;
	case 'c':
		getch();
	main();
	break;
	default:
		system("cls");
		gotoxy(6,10);
		printf("Invalid Input!!Redirecting the page in 3 seconds>>>");
		Sleep(3000);
		calendar();
}
}

void nepday(int year,int month )
{
	check=1;
	int nepdays[]={30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,31,32,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,31,29,30,30,29,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,31,32,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,31,29,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,31,32,32,31,30,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30,31,31,32,31,31,30,30,30,29,30,30,30,31,31,32,31,31,30,30,30,29,30,30,30,31,32,31,32,30,31,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30,31,31,32,31,31,31,30,30,29,30,30,30,30,31,32,32,30,31,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30};
	int i=1,j,w=4,yea=2000,mont=1,nod,d=1,days=0;
view();
gotoxy(20,4);
switch (month)
{
	case 1:
		printf("Baishak,");
		break;
		case 2:
			printf("Jestha,");
			break;
			case 3:
				printf("Ashar,");
				break;
				case 4:
					printf("Shrawan,");
					break;
					case 5:
						printf("Bhadra,");
						break;
						case 6:
							printf("Ashoj,");
							break;
							case 7:
								printf("Kartik,");
								break;
								case 8:
									printf("Mangshir,");
									break;
									case 9:
										printf("Poush,");
										break;
										case 10:
											printf("Magh,");
											break;
											case 11:
												printf("Falgun,");
												break;
												case 12:
													printf("Chaitra,");
}
printf("%d",year);
while(yea!=year || month!=mont)
{
	days+=nepdays[i-1];
	if (i%12==0)
	{
	yea++;
	mont=1;
}
else
mont++;
i++;
}

w=days%7+w;
w=w%7;
if(w==0)
w=1;
nod=nepdays[i-1];

for(i=7;i<12;i++)
{
	for(j=9;j<40;j+=5)
	{
		if ((w*5+4)==j)
		{
		gotoxy(j,i);
		if(remdate.dd==d && remdate.yy==year && remdate.mm==month)
		setbc(15,12);
		else if (j==39)
		setbc(12,0);
		else
		setbc(7,0);
		printf("%d",d);
		setbc(7,0);
	if (w%7==0)
	w=1;
	else
	w++;
		d++;
		if(d>nod)
		break;
	}
	else 
	continue;
}
}
gotoxy(0,21);
switch (getch())
{
	case 'r':
		setremainder();
		break;
		case 'v':
			viewremainder();
			break;
	case 'w':
		if(year==2090)
		{
			printf("\a");
			nepday(year,month);
		}
		else
		nepday(year+1,month);
		break;
		case 's':
			if(year==2000)
			{
				printf("\a");
				nepday(year,month);
			}
			else
			nepday(year-1,month);
			break;
			case 'd':
				if(month==12)
				{
					if (year==2090)
					{
						printf("\a");
						nepday(year,month);
					}
					else
					nepday(year+1,1);
				}
				else
				nepday(year,month+1);
				break;
				case 'a':
						if(month==1)
				{
					if(year == 2000)
				{
					printf("\a");
					nepday(year,month);
				}
				else
				nepday(year-1,12);
			}
				else
				nepday(year,month-1);
				break;
								case 'q':
					getch();
					calendar();
					break;
					case 'e':
						getch();
						main();
						break;
				default:
					system("cls");
					gotoxy(15,2);
					printf("\a Error value entered!! Redirecting in 3 seconds-->");
					Sleep(3000);
					nepday(date.yy,date.mm);
}
}

void engday(int year,int month )
{
	check=2;
	int engdays[]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
	int i=1,j,w=6,yea=1943,mont=1,nod,d=1,days=0;
view();
gotoxy(20,4);
switch (month)
{
	case 1:
		printf("January,");
		break;
		case 2:
			printf("February,");
			break;
			case 3:
				printf("March,");
				break;
				case 4:
					printf("April,");
					break;
					case 5:
						printf("May,");
						break;
						case 6:
							printf("June,");
							break;
							case 7:
								printf("July,");
								break;
								case 8:
									printf("August,");
									break;
									case 9:
										printf("September,");
										break;
										case 10:
											printf("October,");
											break;
											case 11:
												printf("November,");
												break;
												case 12:
													printf("December,");
}
printf("%d",year);
while(yea!=year || month!=mont)
{
	days+=engdays[i-1];
	if (i%12==0)
	{
	yea++;
	mont=1;
}
else
mont++;
i++;
}

w=days%7+w;
w=w%7;
if(w==0)
w=1;
nod=engdays[i-1];

for(i=7;i<12;i++)
{
	for(j=9;j<40;j+=5)
	{
		if ((w*5+4)==j)
		{
		gotoxy(j,i);
		if(remdate.dd==d && remdate.yy==year && remdate.mm==month)
		setbc(15,12);
		else if (j==39)
		setbc(12,0);
		else
		setbc(7,0);
		printf("%d",d);
		setbc(7,0);
	if (w%7==0)
	w=1;
	else
	w++;
		d++;
		if(d>nod)
		break;
	}
	else 
	continue;
}
}
gotoxy(0,23);
switch (getche())
{
	case 'r':
		setremainder();
		break;
		case 'v':
			viewremainder();
			break;
	case 'w':
		if (year==2033)
		{
			printf("\a");
			engday(year,month);
		}
		else
		engday(year+1,month);
		break;
		case 's':
			if(year==1943)
			{
				printf("\a");
				engday(year,month);
			}
			else
			engday(year-1,month);
			break;
			case 'd':
				if(month==12)
				{
				if (year==2033)
				{
					printf("\a");
					engday(year,month);
				}
				else
				engday(year+1,1);
			}
				else
				engday(year,month+1);
				break;
				case 'a':
						if(month==1)
						{
								if (year==1943)
							{
								printf("\a");
								engday(year,month);
							}
							else
							engday(year-1,12);
						}
				else
				engday(year,month-1);
				break;
				case 'q':
					calendar();
					break;
					case 'e':
						main();
						break;
				default:
					system("cls");
					gotoxy(15,2);
					printf("\a Error value entered!! Redirecting in 3 seconds-->");
					Sleep(3000);
					engday(date.yy,date.mm);
}
}
	void view()
	{
		system("cls");
gotoxy(8,6);
printf("Sun");
gotoxy(13,6);
printf("Mon");
gotoxy(18,6);
printf("Tue");
gotoxy(23,6);
printf("Wed");
gotoxy(28,6);
printf("Thu");
gotoxy(33,6);
printf("Fri");
gotoxy(38,6);
setbc(12,0);
printf("Sat");
setbc(7,0);
gotoxy(8,5);
printf("---------------------------------");
gotoxy(8,3);
printf("---------------------------------");
gotoxy(0,16);
printf("Press 'r' to set remainder and 'v' to view the remainder,");
gotoxy(0,18);
printf("Press 'a' to go to previous month, 'd' to go to next month,\n'w' to go to next year, 's' to go to previous year.\n'q' to go to previous page, 'e to go to main menu'\n\n");

}




void leftrect()
{
	int i;
		gotoxy(6,6);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
for(i=7;i<15;i++)
{
	gotoxy(6,i);
printf("\xb2\xb2");
}
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
for(i=7;i<15;i++)
{
		gotoxy(37,i);
printf("\xb2\xb2");
}
}

void rightrect()
{
	int i;
		gotoxy(43,6);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
for(i=7;i<15;i++)
{
	gotoxy(43,i);
printf("\xb2\xb2");
}
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
for(i=7;i<15;i++)
{
	gotoxy(76,i);
printf("\xb2\xb2");
}
}

void loop1()
{ 
gotoxy(0,20);
	printf("Press 1 to continue and 2 to go back to date converter \nand 3 to exit to main menu and 4 to exit... ");
	switch(getch())
	{
		case '1':
			bstoad();
			break;
			case '2':
				converter();
				break;
				case '3':
					main();
					break;
					case '4':
						exit();
						break;
				default:
					system("cls");
					gotoxy(2,6);
				printf("\aInvalid Input!!!Returning to date converter in 3 seconds...");
Sleep(3000);
converter();
	}
	
	
}

void loop2()
{ 
gotoxy(0,20);
	printf("Press 1 to continue and 2 to go back to date converter \nand 3 to exit to main menu and 4 to exit... ");
	switch(getch())
	{
		case '1':
			adtobs();
			break;
			case '2':
				converter();
				break;
				case '4':
					exit();
					break;
				case '3':
					main();
					break;
				default:
					system("cls");
					gotoxy(2,6);
					printf("\aInvalid Input!!!Returning to date converter in 3 seconds...");			
Sleep(3000);
converter();
	}	
}

void exit()
{
	system("cls");
	int i;
	char thanks[1000]="Thanks for using Sample Calender project !!!";
	char d[100]="Developed By:";
	char v[100]="Raj Prajapati";
	system("cls");
	gotoxy(23,5);

	for(i=0;i<45;i++)
	{	Sleep(30);
	printf("%c",thanks[i]);
	}
	gotoxy(23,8);
	for(i=0;i<31;i++)
	{	Sleep(30);
	printf("%c",d[i]);
	}
	gotoxy(40,8);
	for(i=0;i<16;i++)
	{ Sleep(30);
	printf("%c",v[i]);
}

gotoxy(23,20);
printf("Exiting in 3 seconds......>>>>>>>>");
Sleep(3000);
printf("\a");
exit(0);
	}

void converter()
{
	SetConsoleTitle("Date Converter");
	int i;
system("cls");
		char wlc[50]=" WELCOME TO DATE CONVERTER ";
gotoxy(6,2);
for(i=0;i<20;i++)
{
 Sleep(30);
printf("\3");
}
for(i=0;i<27;i++)
{
Sleep(30);
	printf("%c",wlc[i]);
}
for(i=0;i<20;i++)
{
 Sleep(30);
printf("\3");
}
gotoxy(6,6);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
for(i=7;i<10;i++)
{
gotoxy(6,i);
printf("\xb2\xb2");   
}
gotoxy(6,8);
printf("\xb2\xb2   1. BS TO AD");
gotoxy(6,10);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
for(i=7;i<10;i++)
{
gotoxy(27,i);
printf("\xb2\xb2");
}
gotoxy(45,6);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
for(i=7;i<10;i++)
{
gotoxy(45,i);
printf("\xb2\xb2");
}
gotoxy(45,8);
printf("\xb2\xb2   2. AD TO BS");
gotoxy(45,10);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
for(i=7;i<10;i++)
{
gotoxy(66,i);
printf("\xb2\xb2");
}
gotoxy(29,12);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
for(i=13;i<16;i++)
{
gotoxy(29,i);
printf("\xb2\xb2");
}
gotoxy(29,14);
printf("\xb2\xb2 3. EXIT");
gotoxy(29,16);
printf("\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
for(i=13;i<16;i++)
{
gotoxy(43,i);
printf("\xb2\xb2");
}
gotoxy(6,18);
printf("Enter your choice: ");
gotoxy(26,18);
switch(getche())
{
	case '1':
		getch();
		bstoad();
		break;
		case '2':
			getch();
			adtobs();
			break;
			case '3':
				getch();
				exit();
				break;
				default:
					getch();
					system("cls");
			gotoxy(6,6);
				printf("\aInvalid Input!!!\n\n");
				printf("\tPlease Enter 1,2 or 3. Starting the main module in 3 seconds>>>>");
Sleep(3000);
converter();
}
}
void bstoad()
{
	system("cls");
	int sny=2000,snm=1,snd=1,sey=1943,sem=4,sed=14,j,k,i,totaldayscount=0,nepyear,nepmonth,nepday,nepdiff,months,iey,iem,ied,endday=0,l,day=1;
int nepdays[]={30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,31,32,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,31,29,30,30,29,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,31,32,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,31,29,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,31,32,32,31,30,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30,31,31,32,31,31,30,30,30,29,30,30,30,31,31,32,31,31,30,30,30,29,30,30,30,31,32,31,32,30,31,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30,31,31,32,31,31,31,30,30,29,30,30,30,30,31,32,32,30,31,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30};
int monthsofengyear[]={0,31,28,31,30,31,30,31,31,30,31,30,31 };
int monthsofengleapyear[]={0,31,29,31,30,31,30,31,31,30,31,30,31 };
gotoxy(30,2);
printf("BS TO AD Converter");
gotoxy(6,5);
printf("Enter the Nepali Date in BS:\n");
leftrect();
gotoxy(6,8);
printf("\xb2\xb2 Enter the Year:  ");
scanf("%d",&nepyear);
if(nepyear<2000&&nepyear>2090)
	{
	system("cls");
	printf("\a\n\n\n\n\n\n\n\n\n\n\n\t*_* Sorry! THIS CONVERTER SUPPORTS THE YEAR FROM 2000 BS-2090 BS *_*\n");
	printf("\n\n\n\n\n\n\n\tStarting BS TO AD Converter in 3 seconds.....");
	Sleep(3000);
	bstoad();
}
gotoxy(6,10);
printf("\xb2\xb2 Enter the Month: ");
scanf("%d",&nepmonth);
if(nepmonth<=0||nepmonth>=13)
{
	system("cls");
	printf("\a\n\n\n\n\n\n\n\n\n\n\n\t*_* Sorry! There are only 12 months in a year *_*\n");
	printf("\n\n\n\n\n\n\n\tStarting BS TO AD Converter in 3 seconds.....");
	Sleep(3000);
	bstoad();
}
gotoxy(6,12);
printf("\xb2\xb2 Enter the Day:   ");
scanf("%d",&nepday);
if(nepday<=0||nepday>=33)
{
	system("cls");
	printf("\a\n\n\n\n\n\n\n\n\n\n\n\t*_* Sorry! You have entered invalid number of days *_*\n");
	printf("\n\n\n\n\n\n\n\tStarting BS TO AD Converter in 3 seconds.....");
	Sleep(3000);
	bstoad();
}
nepdiff=nepyear-sny;
if(nepdiff==0)
{
for(k=0;k<(nepmonth-1);k++)
totaldayscount+=nepdays[k];
totaldayscount+=nepday-snd;
}
else
{
months=(nepdiff)*12;
for(i=0;i<months;i++)
{
	totaldayscount+=nepdays[i];


}
for(j=i;j<(i+(nepmonth-1));j++)
{
totaldayscount+=nepdays[j];
}
totaldayscount+=nepday-snd;

}

iey=sey;
iem=sem;
ied=sed;
while(totaldayscount!=0)
{
	l=leap(iey);
	if(l==1)
	endday=monthsofengleapyear[iem];
	else
	endday=monthsofengyear[iem];
	ied++;
	day++;     
	if(ied>endday)
	{iem++;
	ied=1;                
		if(iem>12)
	{iey++;
	iem=1;                 
	}
	}
		if(day>7)
		day=1;
	totaldayscount--;
}
gotoxy(44,5);
printf("The Converted Date in AD:");
    rightrect();
    gotoxy(48,12);
    if(day==1)
	printf("\tWednesday");
	if(day==2)
	printf("\tThursday");
	if(day==3)
	printf("\tFriday");
	if(day==4)
	printf("\tSaturday");
	if(day==5)
	printf("\tSunday");
	if(day==6)
	printf("\tMonday");
	if(day==7)
	printf("\tTuesday");
	gotoxy(48,10);
	if(iem==1)
	printf("\tJanuary");
	if(iem==2)
	printf("\tFebruary");
	if(iem==3)
	printf("\tMarch");
	if(iem==4)
	printf("\tApril");
	if(iem==5)
	printf("\tMay");
	if(iem==6)
	printf("\tJune");
	if(iem==7)
	printf("\tJuly");
	if(iem==8)
	printf("\tAugust");
	if(iem==9)
	printf("\tSeptember");
	if(iem==10)
	printf("\tOctober");
	if(iem==11)
	printf("\tNovember");
	if(iem==12)
	printf("\tDecember");
	gotoxy(43,8);
printf("\xb2\xb2 Year:  %d AD",iey);
gotoxy(43,10);
printf("\xb2\xb2 Month: %d,",iem);
gotoxy(43,12);
printf("\xb2\xb2 Day:   %d,",ied);
loop1();
getch();
}

void adtobs()
{
		int sey=1943,sem=4,sed=14,engmonth,engyear,totaldayscount=0,months,k,i,j,engdiff,nepdiff,engday,sny=2000,snm=1,snd=1,iny,inm,ind,endday=0,var=1,day=1;
	int engdays[]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
int nepdays[]={0,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,31,32,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,31,29,30,30,29,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,31,32,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,30,30,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,30,32,31,32,31,31,29,30,29,30,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,29,31,31,31,32,31,31,31,30,29,30,29,30,30,31,31,32,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,29,30,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,32,31,32,31,30,30,30,29,30,29,31,31,31,31,32,31,31,30,29,30,29,30,30,31,31,32,31,31,31,30,29,30,29,30,30,31,32,31,32,31,30,30,30,29,29,30,30,31,31,32,32,31,30,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30,31,31,32,31,31,30,30,30,29,30,30,30,31,31,32,31,31,30,30,30,29,30,30,30,31,32,31,32,30,31,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30,31,31,32,31,31,31,30,30,29,30,30,30,30,31,32,32,30,31,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30,30,32,31,32,31,30,30,30,29,30,30,30};
system("cls");
gotoxy(30,2);
printf("AD TO BS Converter");
gotoxy(6,5);
printf("Enter the English Date in AD:");
leftrect();
gotoxy(6,8);
printf("\xb2\xb2 Enter the year:  ");
scanf("%d",&engyear);
if(engyear<1943||engyear>2033)
{	system("cls");
	printf("\a\n\n\n\n\n\n\n\n\n\n\n\t*_* Sorry!!! THIS CONVERTER SUPPORTS THE YEAR FROM 1943 AD-2033 AD *_*\n");
	printf("\n\n\n\n\n\n\n\tStarting AD TO BS Converter in 3 seconds.....");
	Sleep(3000);
	adtobs();
}
gotoxy(6,10);
printf("\xb2\xb2 Enter the Month: ");
scanf("%d",&engmonth);
if(engmonth<=0||engmonth>=13)
{
	system("cls");
	printf("\a\n\n\n\n\n\n\n\n\n\n\n\t*_* Sorry invalid input! There are only 12 months in a year *_*\n");
	printf("\n\n\n\n\n\n\n\tStarting AD TO BS Converter in 3 seconds.....");
	Sleep(3000);
	adtobs();
}
gotoxy(6,12);
printf("\xb2\xb2 Enter the Day:   ");
scanf("%d",&engday);
if(engday<=0||engday>=33)
{
	system("cls");
	printf("\a\n\n\n\n\n\n\n\n\n\n\n\t*_* Sorry! You have entered invalid number of days *_*\n");
	printf("\n\n\n\n\n\n\n\tStarting AD TO BS Converter in 3 seconds.....");
	Sleep(3000);
	adtobs();
}
engdiff=engyear-sey;
if(engdiff==0)
{
for(k=3;k<(engmonth-1);k++)
totaldayscount+=engdays[k];
totaldayscount+=engday-sed;
}
else
{
months=(engdiff)*12;
for(i=3;i<months;i++)
	totaldayscount+=engdays[i];
for(j=i;j<(i+(engmonth-1));j++)
totaldayscount+=engdays[j];
totaldayscount+=engday-sed;
}
iny=sny;
inm=snm;
ind=snd;
while(totaldayscount!=0)
{
	endday=nepdays[var];
	ind++;
	day++;
	if(ind>endday)
	{var++;
	inm++;
	ind=1;
	if(inm>12)
	{iny++;
	
	inm=1;
	}
	}
		if(day>7)
		{day=1;
		}
	totaldayscount--;
	
}
gotoxy(43,5);
printf("The Converterd Date in BS:");
rightrect();
gotoxy(48,12);
	if(day==1)
	printf("\tBudhabar");
	if(day==2)
	printf("\tBihibar");
	if(day==3)
	printf("\tSukrabar");
	if(day==4)
	printf("\tSanibar");
	if(day==5)
	printf("\tAeetabar");
	if(day==6)
	printf("\tSombar");
	if(day==7)
	printf("\tMangalbar");
		gotoxy(49,10);
	if(inm==1)
	printf("\t Baishak");
	if(inm==2)
	printf("\t Jestha");
	if(inm==3)
	printf("\t Ashar");
	if(inm==4)
	printf("\t Shrawan");
	if(inm==5)
	printf("\t Bhadra");
	if(inm==6)
	printf("\t Ashoj");
	if(inm==7)
	printf("\t Kartik");
	if(inm==8)
	printf("\t Mangsir");
	if(inm==9)
	printf("\t Poush");
	if(inm==10)
	printf("\t  Magh");
	if(inm==11)
	printf("\t  Falgun");
	if(inm==12)
	printf("\t  Chaitra");
gotoxy(43,8);
printf("\xb2\xb2 Year:  %d BS",iny);
gotoxy(43,10);
printf("\xb2\xb2 Month: %d,",inm);
gotoxy(43,12);
printf("\xb2\xb2 Day:   %d,",ind);
loop2();
getch();
}

int leap(int iey)
{
	int l;
		if(((iey%4==0)&&(iey%100!=0))||(iey%400==0))
		l=1;
		else
		l=0;
	return l;
}

void setremainder()
{
	system("cls");
	gotoxy(8,2);
	printf("Set Remainder");
	gotoxy(15,6);
	printf("-> Enter the year: ");
	scanf("%d",&remdate.yy);
	if(check==1)
	{
		if(remdate.yy<2000 || remdate.yy>2089)
		{
			system("cls");
			gotoxy(6,12);
			printf("\aSorry!!! This converter only supports year between 2000 to 2089 BS");
		gotoxy(6,14);
		printf("Redirecting in 3 seconds...");
		Sleep(3000);
		setremainder();
		}
	}
	else
	{
		if(remdate.yy<1943||remdate.yy>2033)
		{
		system("cls");
			gotoxy(6,12);
			printf("\aInvalid Input!!! Make sure you enter valid date between 1944 to 2033 AD");
		gotoxy(6,14);
		printf("Redirecting in 3 seconds...");
		Sleep(3000);
		setremainder();
	}
	}
	gotoxy(15,8);
	printf("-> Enter the month: ");
	scanf("%d",&remdate.mm);
	if (remdate.mm<1||remdate.mm>12)
	{
		system("cls");
			gotoxy(6,12);
			printf("\aInvalid Input!!! There are at most 12 months in a year.");
		gotoxy(6,14);
		printf("Redirecting in 3 seconds...");
		Sleep(3000);
		setremainder();
	}
	gotoxy(15,10);
	printf("-> Enter the day: ");
	scanf("%d",&remdate.dd);
	
	   char rem[100];
    FILE *stream;
	printf("\n\nTitle of remainder:\n");
	scanf("%s",filename);   
	printf("\n\nText For remainder (Note: Must end with fullstop '.') :\n");
	scanf("%[^.],",rem);
	stream=fopen(filename,"a");
    if((stream=fopen(filename,"w"))==NULL)
    {
        printf("\nError-cannot create file.");
        getch();
        exit();
    }	
    fprintf(stream, "Title:%s\tDate:%d-%d-%d\t%s",filename,remdate.dd,remdate.mm,remdate.yy,rem);
    fclose(stream);
    fflush(stdin);
    if (check==1)
    nepday(date.yy,remdate.mm);
    else
    engday(date.yy,date.mm);
}

void viewremainder()
{
	char charac[100];
	int year,month,day;
	    		system("cls");
	    		gotoxy(8,2);
	    		printf("View remainder:");
	    		gotoxy(15,6);
	    		printf("->Enter the year:");
	    		scanf("%d", &year);
	    		gotoxy(15,8);
	    		printf("->Enter the month:");
	    		scanf("%d",&month);
	    		gotoxy(15,10);
				printf("->Enter the day:");
	    		scanf("%d",&day);
    		if(year==remdate.yy && month==remdate.mm && day==remdate.dd)
    		{
    			FILE *stream;
			stream=fopen(filename,"r");
    		do
    		{	
    		fgets(charac,1000,stream);
    		printf("\n\n\n%s",charac);
    	}while((fgets(charac,1000,stream))!=NULL);
			fclose(stream);
			fflush(stdin);
			gotoxy(4,24);
			printf("Press any key to go to main menu...");
			getch();
main();
}
else
{
	printf("\a\n\n No remainder for that day.. Redirecting in 3 seconds!!");
	Sleep(3000);
	if (check==1)
    nepday(remdate.yy,remdate.mm);
    else
    engday(remdate.yy,remdate.mm);
}
}
