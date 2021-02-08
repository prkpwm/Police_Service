#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>

char name[][50]={"Kudo Shinichi","Edogawa Conan","Mouri Ran","Mouri Kogoro","Yoshida Ayumi","Tsuburaya Mitsuhiko","Kojima Genta ","Haibara Ai ","Agasa Hiroshi","Suzuki Sonoko ","Hattori Heiji ","Toyama Kazuha "};
float total[100];
int ans[100];
int NameChk[][100]={
{1,4,4,2,1,4,4,2,1,4,3,3,3,3,3,2},{1,1,2,1,1,4,4,2,1,4,3,3,3,3,3,2},{2,3,1,2,3,4,1,1,1,5,3,3,2}
,{1,4,4,5,4,4,1,1,4,4,2,3,3,3,3,2},{2,1,1,1,1,4,4,2,1,1,3,3,2},{1,1,1,1,3,1,1,1,1,4,3,3,3,3,3,2},
{1,1,2,1,5,4,1,1,4,4,3,3,1,3,3,1},{2,1,1,1,3,4,4,4,1,3,3,3,2},{1,3,2,6,5,4,1,3,1,1,1,3,1,1,3,2},
{2,3,1,2,3,4,23,2,1,2,3,3,2},{1,4,4,2,3,4,4,2,2,3,3,3,3,3,3,2},{2,3,1,2,3,4,3,2,1,3,3,3,2}};
int age[]={17,7,17,38,7,7,7,18,58,17,17,17};
double id_num[]={1000250048,1000260032,1000270016,1000280000,1000289984,1000299968,1000309952,1000319936,1000329920,1000339904,1000349888,1000359872};
int count[]={0,1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
char Gender[][10]={"Male","Male","Female","Male","Female","Male","Male","Female","Male","Female","Male","Female"};
char town[][100]={"Beika Town, Japan, Japan","Beika Town, Japan","Beika Town, Japan","Beika Town, Japan","Beika Town, Japan","Beika Town, Japan","Beika Town, Japan","Beika Town, Japan","Beika Town, Japan","Beika Town, Japan","Osaka Town, Japan","Osaka Town, Japan"};


struct EasyBroadcast{
	int intt;
	float floatt;
	char str[100];
	
};
typedef struct EasyBroadcast all;

char Funtion1(){
	printf("\n Please Enter about stole [ If you don\'t know Press : \"0\" ]\n\n");
	printf(" 1.What is sex : Man(1) Woman(2) :");
	scanf("%d",&ans[0]);
	if(ans[0]==1){
		printf("\n 2.How tall are he : Lower 150 (1)    151-160 (2)    161-170 (3)    171-180 (4)    upper 181 (5) :");
		scanf("%d",&ans[1]); 
		printf("\n 3.How body are he : thin(1) fat(2)  bodybuilder(3)  normal(4) : ");
		scanf("%d",&ans[2]);
		printf("\n 4.How old are he : Lower 12 year old(1)   13-18 year old (2)  19-24 year old (3)  25-30 year old (4)  30-40 year old(5)  upper 41 year old(6):");
		scanf("%d",&ans[3]); 
		printf("\n 5.How face Shave are he : oval(1) Rectangle(2) Triangle(3) Square(4)  Round(5) other(6) :");
		scanf("%d",&ans[4]);
		printf("\n 6.How scar are he : nface(1) hand(2) rag(3) other(4) :");
		scanf("%d",&ans[5]);
		printf("\n 7.How eyes color are he : black(1) blown(2) green(3) blue(4) other(5) :");
		scanf("%d",&ans[6]);
		printf("\n 8.How hair color are he : black(1) blown(2) white(3) born(4) other(5) :");
		scanf("%d",&ans[7]);
		printf("\n 9.How Skin color are he : white(1) black(2) yello(3) tan(4) :");
		scanf("%d",&ans[8]);
		printf("\n 10.How hair style are he : curly hair(1) Straight hair(2) Wavy hair(3) Short hair(4) Long hair(5) other(6) :");
		scanf("%d",&ans[9]);
		printf("\n 11.How Mustache are he : big(1) small(2) Have No(3) :");
		scanf("%d",&ans[10]);
		printf("\n 12.How Beard are he : big(1) small(2) Have No(3) :");
		scanf("%d",&ans[11]);
		printf("\n 13.How Nose are he : big(1) small(2) normall(3) :");
		scanf("%d",&ans[12]);
		printf("\n 14.How Glabrous he : big(1) small(2) normall(3)   :");
		scanf("%d",&ans[13]);		
		printf("\n 15.How Lips are he : big(1) small(2) normall(3) :");
		scanf("%d",&ans[14]);
		printf("\n 16.How eyelids are he : Single eyelids(1) double eyelid(2) :");
		scanf("%d",&ans[15]);
	}
	else{

		printf("\n 2.How tall are her : Lower 150 (1)    151-160 (2)    161-170 (3)    171-180 (4)    upper 181 (5) :");
		scanf("%d",&ans[1]); 
		printf("\n 3.How body are her : thin(1) fat(2)  bodybuilder(3)  normal(4) : ");
		scanf("%d",&ans[2]);
		printf("\n 4.How old are her : Lower 12 year old(1)   13-18 year old (2)  19-24 year old (3)  25-30 year old (4)  30-40 year old(5)  upper 41 year old(6):");
		scanf("%d",&ans[3]); 
		printf("\n 5.How face Shave are her : oval(1) Rectangle(2) Triangle(3) Square(4)  Round(5) other(6) :");
		scanf("%d",&ans[4]);
		printf("\n 6.How scar are her : nface(1) hand(2) rag(3) other(4) :");
		scanf("%d",&ans[5]);
		printf("\n 7.How eyes color are her : black(1) blown(2) green(3) blue(4) other(5) :");
		scanf("%d",&ans[6]);
		printf("\n 8.How hair color are her : black(1) blown(2) white(3) born(4) other(5) :");
		scanf("%d",&ans[7]);
		printf("\n 9.How Skin color are her : white(1) black(2) yello(3) :");
		scanf("%d",&ans[8]);
		printf("\n 10.How hair style are her : curly hair(1) Straight hair(2) Wavy hair(3) Short hair(4) Long hair(5) other(6) :");
		scanf("%d",&ans[9]);
		printf("\n 11.How Nose are her : big(1) small(2) normall(3) :");
		scanf("%d",&ans[10]);		
		printf("\n 12.How Lips are her : big(1) small(2) normall(3) :");
		scanf("%d",&ans[11]);
		printf("\n 13.How eyelids are her : Single eyelids(1) double eyelid(2) :");
		scanf("%d",&ans[12]);		
	}
	return ans[100];
}


int FuntionChk1(){
	Funtion1();
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

int FuntionChk2(){
	all id_s[100];  
	fflush(stdin);
	printf("\nPlease enter name :");
	gets(id_s[100].str);
	for(int i=0;i<12;i++){
		if(strcmp(id_s[100].str,name[i])== 0){
			printf("%s",name[i]);
			}
	}
 	
}

int FuntionChk3(){
	all id_n;
	printf("\nPlease enter ID Number :");
	scanf("%lf",&id_n.floatt);
	for(int i=0;i<12;i++){
		if(id_n.floatt == id_num[i]){
			printf("%s",name[i]);
			}
	}
}

void SwapFloat(float *a,float *b){
	float tmp=*a;
	*a=*b;
	*b=tmp;
}

void SwapInt(int *x,int *y){
	int  tmpp=*x;
	*x=*y;
	*y=tmpp;
}

int Ansname(){
	for(int i=0;i<3;i++){
		printf("\nName : %s\tage :%d\n",name[count[i]],age[count[i]]);
		printf("Gender is : %s\tID Number is : %.0lf\n",Gender[count[i]],id_num[count[i]]);
		printf("Address is : %s",town[count[i]]);
		printf("\n");
	}
}



main(){
	
	printf("===============================================================================================================================================================\n");
	printf("                                                                  Police Service Program                                \n");
	printf("===============================================================================================================================================================\n");
	printf("\n");
	for(int i=0;i<12;i++){
		total[i]=0;
	}
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
			printf(" The Answer is Incorrect\n");
		}
	}while(strcmp(id[100].str,"Admin")!=0 || pass.intt != 1234);
	printf(" What do you want to check.\n 1.Body \n 2.Name \n 3.ID Number \n");
	printf("\n Answer : ");
	scanf("%d",&way.intt);
	printf("===============================================================================================================================================================\n");
	if(way.intt ==1) {
		FuntionChk1();
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				if(total[i]>total[j]){
					SwapFloat(&total[j],&total[i]);
					SwapInt(&count[j],&count[i]);
				
				}
			}
		}
		for(int i=0;i<3;i++){
			printf("%.2f%% %s\n",total[i],name[count[i]]);
		}
		Ansname();
	}
	else if(way.intt ==2){
		FuntionChk2();
	} 
	else {
		FuntionChk3();
	}

	/*printf("===============================================================================================================================================================\n");
	printf("                                                                         Answer                                \n");
	printf("===============================================================================================================================================================\n");
	printf("\n\n");*/

}


