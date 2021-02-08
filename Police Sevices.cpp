#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

//Global Broadcast
char name[][50]={"Kudo Shinichi","Edogawa Conan","Mouri Ran","Mouri Kogoro","Yoshida Ayumi","Tsuburaya Mitsuhiko","Kojima Genta","Haibara Ai","Agasa Hiroshi","Suzuki Sonoko","Hattori Heiji","Toyama Kazuha"};
float total[100];
int ans[100];
int NameChk[][100]={
{1,4,4,2,1,4,4,2,1,4,3,3,3,3,3,2},{1,1,2,1,1,4,4,2,1,4,3,3,3,3,3,2},{2,3,1,2,3,4,1,1,1,5,3,3,2}
,{1,4,4,5,4,4,1,1,4,4,2,3,3,3,3,2},{2,1,1,1,1,4,4,2,1,1,3,3,2},{1,1,1,1,3,1,1,1,1,4,3,3,3,3,3,2},
{1,1,2,1,5,4,1,1,4,4,3,3,1,3,3,1},{2,1,1,1,3,4,4,4,1,3,3,3,2},{1,3,2,6,5,4,1,3,1,1,1,3,1,1,3,2},
{2,3,1,2,3,4,23,2,1,2,3,3,2},{1,4,4,2,3,4,4,2,2,3,3,3,3,3,3,2},{2,3,1,2,3,4,3,2,1,3,3,3,2}};
int age[]={17,7,17,38,7,7,7,18,58,17,17,17};
float id_num[]={1000250048,1000260032,1000270016,1000280000,1000289984,1000299968,1000309952,1000319936,1000329920,1000339904,1000349888,1000359872};
int count[]={0,1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
char Gender[][10]={"Male","Male","Female","Male","Female","Male","Male","Female","Male","Female","Male","Female"};
char town[][100]={"Beika Town, Japan","Beika Town, Japan","Beika Town, Japan","Beika Town, Japan","Beika Town, Japan","Beika Town, Japan","Beika Town, Japan","Beika Town, Japan","Beika Town, Japan","Beika Town, Japan","Osaka Town, Japan","Osaka Town, Japan"};

//structer
struct EasyBroadcast{
	int intt;
	float floatt;
	char str[100];
	
};
typedef struct EasyBroadcast all;

//Ask Function
char Function1(){
	printf("\n Please Enter about stole [ If you don\'t know Press : \"0\" ]\n\n");
	printf(" 1.What is The Garden : Man(1) Woman(2) \n The Answer is :");
	scanf("%d",&ans[0]);
	if(ans[0]==1){
		//File Ask For Man   
		FILE *fp;
    	char ch[500];
    	fp=fopen("AskMan.txt","r");
    	for(int i=0;i<15;i++){
    		fgets(ch,500,fp);printf("\n %s The Answer is :",ch);scanf("%d",&ans[i]); 
		}
		
		
	}
	else{
		//File Ask For Girl 
		FILE *fp;
    	char ch[500];
    	fp=fopen("AskGirl.txt","r");
    	for(int i=0;i<12;i++){
    		fgets(ch,500,fp);printf("\n %s The Answer is :",ch);scanf("%d",&ans[i]); 
		}
	return ans[100];
	}
}

//Check Function 1
int FunctionChk1(){
	Function1();
	for(int i=0;i<12;i++){
		if(ans[0]==1){
			if(ans[0]==NameChk[i][0]) total[i]+=100;
			if(ans[1]==NameChk[i][1]) total[i]+=100;
			if(ans[2]==NameChk[i][2]) total[i]+=50;
			if(ans[3]==NameChk[i][3]) total[i]+=40;
			if(ans[4]==NameChk[i][4]) total[i]+=30;
			if(ans[5]==NameChk[i][5]) total[i]+=30;
			if(ans[6]==NameChk[i][6]) total[i]+=70;
			if(ans[7]==NameChk[i][7]) total[i]+=30;
			if(ans[8]==NameChk[i][8]) total[i]+=40;
			if(ans[9]==NameChk[i][9]) total[i]+=30;
			if(ans[10]==NameChk[i][10]) total[i]+=20;
			if(ans[11]==NameChk[i][11]) total[i]+=20;
			if(ans[12]==NameChk[i][12]) total[i]+=40;
			if(ans[13]==NameChk[i][13]) total[i]+=30;
			if(ans[14]==NameChk[i][14]) total[i]+=60;
			if(ans[15]==NameChk[i][15]) total[i]+=100;
			total[i]*=100.0/790;
		}
		else{
			if(ans[0]==NameChk[i][0]) total[i]+=100;
			if(ans[1]==NameChk[i][1]) total[i]+=100;
			if(ans[2]==NameChk[i][2]) total[i]+=50;
			if(ans[3]==NameChk[i][3]) total[i]+=40;
			if(ans[4]==NameChk[i][4]) total[i]+=70;
			if(ans[5]==NameChk[i][5]) total[i]+=50;
			if(ans[6]==NameChk[i][6]) total[i]+=30;
			if(ans[7]==NameChk[i][7]) total[i]+=70;
			if(ans[8]==NameChk[i][8]) total[i]+=30;
			if(ans[9]==NameChk[i][9]) total[i]+=40;
			if(ans[10]==NameChk[i][10]) total[i]+=50;
			if(ans[11]==NameChk[i][11]) total[i]+=60;
			if(ans[12]==NameChk[i][12]) total[i]+=100;
			total[i]*=100.0/790;
		}
	}
	return total[100];
}

//Check Function 2
int FunctionChk2(){
	all id_s;  
	all a;
	a.intt=0;
	fflush(stdin);
	printf("\nPlease enter name :");
	gets(id_s.str);
	for(int i=0;i<12;i++){
		if(strcmp(id_s.str,name[i])== 0){
				a.intt=i;
			}
	}
	printf("\nName : %s\tage :%d\n",name[a.intt],age[a.intt]);
	printf("Gender is : %s\tID Number is : %.0f\n",Gender[a.intt],id_num[a.intt]);
	printf("Address is : %s",town[a.intt]);
	printf("\n");
 	
}

//Check Function 3
int FunctionChk3(){
	all id_n;
	all a;
	a.intt=0;
	printf("\nPlease enter ID Number :");
	scanf("%f",&id_n.floatt);
	for(int i=0;i<12;i++){
		if(id_n.floatt == id_num[i]){
			a.intt=i;
		}
	}
	printf("\nName : %s\tage :%d\n",name[a.intt],age[a.intt]);
	printf("Gender is : %s\tID Number is : %.0f\n",Gender[a.intt],id_num[a.intt]);
	printf("Address is : %s",town[a.intt]);
	printf("\n");
}

//Swap
void SwapFloat(float *a,float *b){
	float tmp=*a;
	*a=*b;
	*b=tmp;
}

//Swap
void SwapInt(int *x,int *y){
	int  tmpp=*x;
	*x=*y;
	*y=tmpp;
}

//The Answer For Function 1
int Ansname(){
	for(int i=0;i<3;i++){
		printf("\nName : %s\tage :%d\n",name[count[i]],age[count[i]]);
		printf("Gender is : %s\tID Number is : %.0f\n",Gender[count[i]],id_num[count[i]]);
		printf("Address is : %s",town[count[i]]);
		printf("\n");
	}
}


Condition(){
	all way;
	printf(" What do you want to check.\n 1.Body \n 2.Name \n 3.ID Number \n");
	printf("\n Answer : ");
	scanf("%d",&way.intt);
	printf("===============================================================================================================================================================\n");
	if(way.intt ==1) {
		FunctionChk1();
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(total[i]>total[j]){
					SwapFloat(&total[j],&total[i]);
					SwapInt(&count[j],&count[i]);
				
				}
			}
		}
		for(int i=0;i<3;i++){
			printf("%d. %.2f%% %s\n",i+1,total[i],name[count[i]]);
		}
		Ansname();
	}
	else if(way.intt ==2){
		FunctionChk2();
	} 
	else {
		FunctionChk3();
	}
}

login(){
	all id[100];
	all pass,way;
	printf(" Plese Login Before Using Program \n\n");
	do{
		printf(" ID : ");
		scanf("%s",&id[100].str);
		printf(" PASSWORD : ");
		scanf("%d",&pass.intt);
		if((strcmp(id[100].str,"Admin"))==0 && pass.intt == 1234){
			printf(" The Answer is Correct\n\n");
			printf("===============================================================================================================================================================\n");

		}else{
			printf(" The Answer is Incorrect\n\n");
		}
	}while(strcmp(id[100].str,"Admin")!=0 || pass.intt != 1234);
	Condition();	

}


main(){

	printf("===============================================================================================================================================================\n");
	printf("                                                                  Police Service Program                                \n");
	printf("===============================================================================================================================================================\n");
	printf("\n");
	for(int i=0;i<12;i++){
		total[i]=0;
	}
	login();
	
}


