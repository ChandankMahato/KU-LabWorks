
#include <stdio.h>
#include <string.h>
void viewDate(char);

typedef struct{
    char District[50];
    int TotalCase;
    int deaths;
    int Recovered;

}CovidCases;

CovidCases districts[77] ={
{"Arghakhanchi",0,0,0},
{"Baglung",2,0,2},
{"Baitadi",0,0,0},
{"Bajhang",0,0,0},
{"Bajura",0,0,0},
{"Banke",0,0},
{"Bara",2,0,0},
{"Bardiya",0,0,0},
{"Bhaktapur",0,0,0},
{"Bhojpur",1,0,0},
{"Chitwan",2,0,1},
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
{"EasternRukum",0,0,0},
{"Gorkha",0,0,0},
{"Gulmi",0,0,0},
{"Humla",0,0,0},
{"Ilam",0,0,0},
{"Jajarkot",0,0,0},
{"Jhapa",2,0,0},
{"Jumla",0,0,0},
{"Kailali",4,0,3},
{"Kalikot",0,0,0},
{"Kanchanpur",1,0,1},
{"Kapilvastu",5,0,0},
{"Kaski",0,0,0},
{"Kathmandu",5,0,5},
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
{"Parsa",0,3},
{"Pyuthan",0,0,0},
{"Ramechhap",0,0,0},
{"Rasuwa",0,0,0},
{"Rautahat",3,0,1},
{"Rolpa",0,0,0},
{"Rupandehi",1,0,0},
{"Salyan",0,0,0},
{"Sankhuwasabha",0,0,0},
{"Saptari",0,0,0},
{"Sarlahi",1,0,0},
{"Sindhuli",0,0,0},
{"Sindhupalchok",0,0,0},
{"Siraha",0,0,0},
{"Solukhumbu",0,0,0},
{"Sunsari",0,0,0},
{"Surkhet",0,0,0},
{"Syangja",0,0,0},
{"Tanahu",0,0,0},
{"Taplejung",0,0,0},
{"Tehrathum",0,0,0},
{"Udayapur",0,14},
{"WesternRukum",0,0,0}
}; //for copiers remove this chunk
char date[10];
 
void viewCases(){
	printf("%s",viewDate(date[10]));
	printf("\n");
printf("District\t TotalCase\t TotalActiveCase\t RecoveredCase\n");
//sorting 
for(int i=0;i<76;i++){
    for(int j=i ;j<76;j++){
        if(districts[i].TotalCase<districts[j].TotalCase){
            char bufferString[50];
            int bufferDeaths;
            int totalCase;
            int recovered;

            strcpy(bufferString,districts[i].District);
            strcpy(districts[i].District,districts[j].District);

            bufferDeaths=districts[i].deaths;
            districts[i].deaths = districts[j].deaths;
            districts[j].deaths = bufferDeaths;

            totalCase=districts[i].TotalCase;
            districts[i].TotalCase = districts[j].TotalCase;
            districts[j].TotalCase = totalCase;


            recovered=districts[i].Recovered;
            districts[i].Recovered = districts[j].Recovered;
            districts[j].Recovered = recovered;
        }
    }
}


for(int i=0;i<76;i++){
    printf("%-18s\t%d\t%10d\t%10d\n",districts[i].District,districts[i].TotalCase,districts[i].TotalCase-districts[i].Recovered,districts[i].Recovered);
}
}
int main(){
viewCases();

printf("Do you want to update the table?(y/n) \n");
char desire;
char date[10];
scanf("%c",&desire);


if(desire == 'y'){
    int flag=0;
    char districtName[50];
    printf("enter district name \n");
    scanf("%s%*c",districtName);
    for(int i=0;i<76;i++){
        if(strcmp(districts[i].District,districtName)==0){
            printf("how many cases in %s",districts[i].District);
            scanf("%d",&districts[i].TotalCase);
            printf("how many Recovered cases in %s",districts[i].District);
            scanf("%d%*c",&districts[i].Recovered);
            
            flag=1;
            break;
        }

    }
   
    if(flag==0){
        char des;
        printf("District Not found. Search again? ");
        scanf("%c",&des);
    }
    main();


}else{
return 0;
}

//till here
}
if(flag==1){
void viewDate(date)
			{
            printf("Enter date:");
            scanf("%s",date);
            return(date);
			}
		}
