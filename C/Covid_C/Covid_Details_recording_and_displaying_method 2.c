#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
void viewCases();
void update();
char Date[10];
int condition=0;

typedef struct{
	char District[50];
	int TotalCase,Deaths,Recovered;
}CovidCases;

CovidCases districts[77]={
	{"Westernrukum",0,0,0},
	{"Udaypur",0,0,0},
	{"Tehrathum",0,0,0},
	{"Taplejung",0,0,0},
	{"Tanahu",0,0,0},
	{"Arghakhanchi",0,0,0},
	{"Baglung",0,0,0},
	{"Baitadi",0,0,0},
	{"Bajhang",0,0,0},
	{"Bajura",0,0,0},
	{"Banke",0,0},
	{"Bara",0,0,0},
	{"Bardiya",0,0,0},
	{"Bhaktapur",0,0,0},
	{"Bhojpur",0,0,0},
	{"Chitwan",0,0,0},
	{"Dadeldhura",0,0,0},
	{"Dailekh",0,0,0},
	{"Dang",0,0,0},
	{"Darchula",0,0,0},
	{"Dhading",0,0,0},
	{"Dhankuta",0,0,0},
	{"Dhanusa",0,0,0},
	{"Dolakha",0,0,0},
	{"Dolpa",0,0,0},
	{"Doti",0,0,0},
	{"Easternrukum",0,0,0},
	{"Gorkha",0,0,0},
	{"Gulmi",0,0,0},
	{"Humla",0,0,0},
	{"Ilam",0,0,0},
	{"Jajarkot",0,0,0},
	{"Jhapa",0,0,0},
	{"Jumla",0,0,0},
	{"Kailali",0,0,0},
	{"Kalikot",0,0,0},
	{"Kanchanpur",0,0,0},
	{"Kapilvastu",0,0,0},
	{"Kaski",0,0,0},
	{"Kathmandu",0,0,0},
	{"Kavrepalanchowk",0,0,0},
	{"Khotang",0,0,0},
	{"Lalitpur",0,0,0},
	{"Lamjung",0,0,0},
	{"Mahottari",0,0,0},
	{"Makwanpur",0,0,0},
	{"Manang",0,0,0},
	{"Morang",0,0,0},
	{"Mugu",0,0,0},
	{"Mustang",0,0,0},
	{"Myagdi",0,0,0},
	{"Nawalpur",0,0,0},
	{"Nuwakot",0,0,0},
	{"Okhaldhunga",0,0,0},
	{"Palpa",0,0,0},
	{"Panchthar",0,0,0},
	{"Parasi",0,0,0},
	{"Parbat",0,0,0},
	{"Parsa",0,0},
	{"Pyuthan",0,0,0},
	{"Ramechhap",0,0,0},
	{"Rasuwa",0,0,0},
	{"Rautahat",0,0,0},
	{"Rolpa",0,0,0},
	{"Rupandehi",0,0,0},
	{"Salyan",0,0,0},
	{"Sankhuwasabha",0,0,0},
	{"Saptari",0,0,0},
	{"Sarlahi",0,0,0},
	{"Sindhuli",0,0,0},
	{"Sindhupalchok",0,0,0},
	{"Siraha",0,0,0},
	{"Solukhumbu",0,0,0},
	{"Sunsari",0,0,0},
	{"Surkhet",0,0,0},
	{"Syangja",0,0,0}
};
int main()
{
	system("cls");
	char choice;
	viewCases();
	printf("Do you want to update the table?(y/n) \n");
	scanf("%c",&choice);
	if(choice=='y')
	{
		update();
		viewCases();
		choice='n';
		printf("IF YOU WANT TO UPDATE ANY MORE, PRESS (y/n)");
		scanf("%c",&choice);
		main();	
	}
	else
	{
		printf("I DON'T WANT TO UPDATE!");
	}
}
void update()
{
	char districtName[50];
	printf("ENTER DISTRICT NAME:");
	scanf("%s%*c",districtName);
	for(int i=0;i<76;i++)
	{
		if(strcmp(districts[i].District,districtName)==0)
		{
			printf("HOW MANY CASES IN %s:",districts[i].District);
			scanf("%d",&districts[i].TotalCase);
			printf("HOW MANY RECOVERED CASES IN %s:",districts[i].District);
			scanf("%d%*c",&districts[i].Recovered);
			printf("Enter The Date(**/**/****):");
			scanf("%s",Date);
			condition=1;
			break;
		}
	}
		if(condition==0)
		{
			char error;
			printf("DISTRICT NOT FOUND. SEARCH AGAIN? FIRST LETTER MUST BE CAPITAL AND REST SMALL\n");
			printf("PRESS ANY CHARACTER:");
			scanf("%c",&error);
		}
}
void viewCases()
{
	if(condition==1)
	{
		printf("Date:%s",Date);
		printf("\n");
	}
	printf("District\t Total_Case\tTotal_Active_Case\t RecoveredCase\n");
	
	for(int i=0;i<76;i++)
	{
		for(int j=i;j<76;j++)
		{
			if(districts[i].TotalCase<districts[j].TotalCase)
			{
				char copyString[50];
				int copyDeaths;
				int totalCase;
				int recovered;
				
				strcpy(copyString,districts[i].District);
				strcpy(districts[i].District,districts[j].District);
				
				copyDeaths=districts[i].Deaths;
				districts[i].Deaths=districts[j].Deaths;
				districts[j].Deaths=copyDeaths;
				
				totalCase=districts[i].TotalCase;
				districts[i].TotalCase=districts[j].TotalCase;
				districts[j].TotalCase=totalCase;
				
				recovered=districts[i].Recovered;
				districts[i].Recovered=districts[j].Recovered;
				districts[j].Recovered=recovered;
			}
		}
	}
	for(int i=0;i<76;i++)
	{
		printf("%-18s\t%d\t%8d\t%15d\n",districts[i].District,districts[i].TotalCase,districts[i].TotalCase-districts[i].Recovered,districts[i].Recovered);
	}
}

