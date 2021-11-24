#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include<windows.h>
#include<ctype.h>
#define M 300
#include<conio.h>
#include<time.h>
#define GetCurrentDir _getcwd
int kk[1]={0};
int q[1]={0};
 int rr[1]={0};

 FILE *fp;
 FILE *uc,*uc1;

struct user
{
    char *name;
    char *username;
    char *password;
    float accuracy;
    int pou;//the number of problem of each user
    int un[1];//user number
    int cof[1];//counter of open folder by each user
     int unf[1];//user number of folder
}u[M];

char passo[M];
int cu[1]={0};//counter of user
clock_t clock(void);


int main(void)//**************main
{

int sq=0;
    for(sq=1;sq<10;sq++)
    {
     free(u[sq].name);
     free(u[sq].username);
     free(u[sq].password);

    }

    fp=fopen("C:\\Users\\TejaratPooya\\Desktop\\project\\project2\\users\\users.txt","a+");
    uc=fopen("C:\\Users\\TejaratPooya\\Desktop\\project\\project2\\users\\uc.txt","a+");
     ffread();


int qq=0;
for(qq=0;qq<M;qq++)
{
    u[qq].cof[0]=0;
}

    lable3:
    welcome();

    int cw[1]={0};//counter of wrong
    float acuar=0;
    u[0].name="pasha";
    u[0].username="phapsa";
     u[0].password="1379";
      u[0].un[0]=0;

    /*fp=fopen("C:\\Users\\TejaratPooya\\Desktop\\project\\project2\\pgs\\console.bin","ab");
    fwrite("phapsa",7,1,fp);
    fwrite("1379",5,1,fp);*/

    printf("\033[0;33m");
    printf("\n\npleas Enter your username and password:\n\n");
    printf("username:");

    char user[M];
     char password[M];
      gets(user);


 printf("password:");
    int p=0;
    do{
        password[p]=getch();
        //acuarcy
        if(islower(password[p])) acuar+=0.02;
        if(isupper(password[p])) acuar+=0.04;
        if(isdigit(password[p])) acuar+=0.03;
        if(ispunct(password[p])) acuar+=0.08;
        if(password[p]==' ') acuar+=0.01;



        if(password[p]!='\r'){
            printf("*");
        }
        p++;
    }while(password[p-1]!='\r');
    password[p-1]='\0';

if(!(strcmp(user,u[0].username) || strcmp(password,u[0].password)))//**************************************************
{

    puts("\n            \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 welcome admin \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("your accuracy is: %0.2f\n\n\n",acuar);
    t();
    Sleep(4000);
    system("cls");
     welcome();u[0].un[0]=0;
     char scd[6]="users";
              chdir(scd);chdir(u[0].username);
     acaunt(u[0].un[0]);kk[0]=0;
    //comands();

 }
    else{
    int i;int r=0;
        for(i=0;i<=cu[0];)
        {
           if(!(strcmp(user,u[i].username) || strcmp(password,u[i].password)) )
            {

                 r++;break;
            }

          i++;
        }
            if(r>0)
            {
                  kk[0]=i;
              system("cls");
             char scd[6]="users";
              chdir(scd);chdir(u[i].username);
            acaunt(i);

            }

           else
          {puts("\nError(not found)");Sleep(2000);system("cls"); goto lable3;} }


    /*int i,j,r=0;
    char p[M];
    mkdir("pgs");*/

}
int t(void) //for time
{
	time_t t;
	time(&t);
	printf("Date and time:%s\n", ctime(&t));

	return 0;
}
void welcome() //for welcome option
{
	system("cls");
	char d[25] = "Welcome Pasha Ahmadi";
	char ch, pass[10];
	int i = 0, j;
	//textbackground(WHITE);
	//textcolor(RED);
	//gotoxy(10, 4);
	printf("\033[1;32m");
	for (j = 0; j < 29; j++)
	{
		Sleep(50);
		printf("*");
	}
	for (j = 0; j < 20; j++)
	{
		Sleep(50);
		printf("%c", d[j]);
	}
	for (j = 0; j < 30; j++)
	{
		Sleep(50);
		printf("*");
	}}
	void finish(void) //for finish option
{
	system("cls");
	char d[27] = "The Console Is Finished";
	char ch, pass[10];
	int i = 0, j;
	//textbackground(WHITE);
	//textcolor(RED);
	//gotoxy(10, 4);
	printf("\033[0;35m");
	for (j = 0; j < 29; j++)
	{
		Sleep(50);
		printf("*");
	}
	for (j = 0; j < 20; j++)
	{
		Sleep(50);
		printf("%c", d[j]);
	}
	for (j = 0; j < 27; j++)
	{
		Sleep(50);
		printf("*");
	}}
	void acaunt(int m)//***********************for acaunt
	{
	    printf("\033[1;34m");
	    printf("\n%s",u[m].username);
       // chdir("..");
       chdir(u[m].username);//change diroctory
	    printf("@pgs2000-user:~$ ");comands();
	    printf("\033[0m;");

	}


	void acaunt1(int m)//***********************for acaunt1
	{
	    printf("\033[1;34m");
	    printf("\n%s",u[m].username);
       // chdir("..");
       //chdir(u[m].username);//change diroctory
	    printf("@pgs2000-user:~$ ");comands();
	    printf("\033[0m;");

	}


	void check(char chus[],char chpass[])//*********************for checking
	{
	    /*int i,r=0;
	    for(i=0;i<cu[0];)
        {
            if(!(strcmp(chus,u[i].username)))
                {r++;break;}
            i++;
        }

        int j;
	    for(j=0;j<cu[0];)
        {
            if(!(strcmp(chpass,u[j].password)))
                {r++;break;}
            j++;
        }

	    if((i==j) && (r==2))
        {
            u[0].un[0]=i;
            acaunt(u[0].un[0]);
        }
	    else
        {
            puts("Error(username or password wrong.)");
            Sleep(5000);
            system("cls");
            welcome();
            acaunt(u[0].un[0]);
        }*/
        int i;int r=0;
        for(i=0;i<=cu[0];)
        {
           if(!(strcmp(chus,u[i].username) || strcmp(chpass,u[i].password)) )
            {

                 r++;break;
            }

            i++;
        }
            if(r>0)
            {
                u[kk[0]].cof[0]=0;//this kk[0] is for befor user

                  kk[0]=i;//this kk[0] is for new user
                   chdir("C:\\Users\\TejaratPooya\\Desktop\\project\\project2\\users");
             chdir(u[i].username);
              // if(u[i].un[0]!=0)/////
   //*****************************           u[0].un[0]=i;
             /* else
              {u[0].un[0]=0;}*/
              system("cls");
            acaunt(i);
           // int pp=usnum2(chus);
            //return pp;
            }

           else
           {
               puts("Error(username or password wrong.)");
            Sleep(5000);
            system("cls");
            welcome();
            acaunt(kk[0]);
            return kk[0];
           }
	}

	float acuarcy(char passo[],int lp1)//******************for acuarcy
	{
	   int i;
	   for(i=0;i<lp1;i++)
       {
        if(islower(u[cu[0]].password[i])) u[cu[0]].accuracy+=0.02;
        if(isupper(u[cu[0]].password[i])) u[cu[0]].accuracy+=0.04;
        if(isdigit(u[cu[0]].password[i])) u[cu[0]].accuracy+=0.03;
        if(ispunct(u[cu[0]].password[i])) u[cu[0]].accuracy+=0.08;
        if(u[cu[0]].password[i]==' ') u[cu[0]].accuracy+=0.01;


       }printf("\033[0;35m");
       if(u[cu[0]].accuracy>=0.33 && u[cu[0]].accuracy<=1)
        {
            puts("\nNew accaunt is creat succesfuly. ");
        printf("your accuracy is: %.2f",u[cu[0]].accuracy);
        int tt=cu[0];rr[0]++;u[cu[0]].pou=0;u[cu[0]].cof[0]=0;
        u[tt].un[0]=tt;usnum1(u[cu[0]].username); chdir("..");mkdir(u[cu[0]].username);
         ffwrite();


        }
       else
       {
           puts("\nError:(Creating a new accaunt is failed.) ");
           u[cu[0]].name=NULL;
           u[cu[0]].username=NULL;
           u[cu[0]].password=NULL;
           u[cu[0]].accuracy=0;
           cu[0]--;
       }
	}




	float acuarcy_of_new_password(char passo[],int lp1,int i4,char *recentpass,float acu)//****************** acuarcy  of new password
	{


	   int i;
	   for(i=0;i<lp1;i++)
       {
        if(islower(u[i4].password[i])) u[i4].accuracy+=0.02;
         if(isupper(u[i4].password[i])) u[i4].accuracy+=0.04;
         if(isdigit(u[i4].password[i])) u[i4].accuracy+=0.03;
         if(ispunct(u[i4].password[i])) u[i4].accuracy+=0.08;
         if(u[i4].password[i]==' ') u[i4].accuracy+=0.01;

       }printf("\033[0;35m");
       if((u[i4].accuracy)>=0.33 && (u[i4].accuracy)<=1)
        { puts("\nChanges made successfully. ");
        printf("your nwe accuracy is: %.2f",u[i4].accuracy);Sleep(4000);
        }//printf("your nwe accuracy is: %.2f",u[i4].accuracy);

       else
       {
           puts("\nError:(Changes made failed.) ");
            Sleep(500);
           free(u[i4].password);
            u[i4].password=(char *)malloc(60*sizeof(char));
            strcpy(u[i4].password,recentpass);
           u[i4].accuracy=acu;

       }
	}

///////////////////////////////////////////////////////////////////
struct usernum1
	    {
	        char user[M];
	        int usernum;

	    }u1[M];




	int usnum1(char user1[])/////***********for usnum1
	{


	    strcpy((u1[cu[0]].user),user1);

	    }

	    int usnum2(char user1[])/////***********for usnum2
	    {
	        int i1;
	    for(i1=1;i1<=cu[0];)
        {     strcpy(u1[i1].user,u[i1].username);
              u1[i1].usernum=u[i1].un[0];
            if(!(strcmp(u1[i1].user,user1)))
                {return i1;}
                i1++;
        }


	}

	void ffwrite(void)//name/username/password/accuracy/pou/un[1]
	{
	    fseek(uc,0,SEEK_END);
      fprintf(uc,"%d",cu[0]);
  fprintf(fp,"%s\t%s\t%s\t%f\t%d\t%d\n",u[cu[0]].name,u[cu[0]].username,u[cu[0]].password,u[cu[0]].accuracy,u[cu[0]].pou,u[cu[0]].un[0]);
	}
   void ffread(void)
   {

       fseek(uc,-1,SEEK_END);
	   cu[0]=fgetc(uc)-48;

       int ii=1;
       for(ii=1;ii<=cu[0];ii++)
       {

               u[ii].name=(char *)malloc(100*sizeof(char));
    u[ii].username=(char *)malloc(100*sizeof(char));
    u[ii].password=(char *)malloc(100*sizeof(char));
    fscanf(fp,"%s\t%s\t%s\t%f\t%d\t%d\n",u[ii].name,u[ii].username,u[ii].password,&u[ii].accuracy,&u[ii].pou,&u[ii].un[0]);

       }
   }



	void comands()//*******for command
	{
	    char cmd[M];
	    char cmd1[11]="creat user";
	    char cmd2[5]="exit";
	    char cmd3[30]="chgr username";
	    char cmd4[30]="su username";
	    char cmd5[30]="passwd username";
	    char cmd6[5]="pwd";
	    char cmd7[20]="mkdir dirname";
	    char cmd8[20]="cd dirname";
	    char cmd9[20]="cat dirname";
	    char cmd10[20]="rm dirname";
	    char cmd11[20]="rm-r dirname";
	    char cmd12[3]="ls";
	    char cmd13[400]="cp file1 file2";
	    char cmd14[400]="mv file1 file2";
	    char cmd15[40]="filenamexif";
	    char cmd16[40]="diff file1 file2";
	    char cmd17[100]="disappear";
	    char cmd18[100]="appear";
	    char cmd19[100]="search";
	    char cmd20[100]="show";
	    char cmd21[100]="help";

	    //cmd16 is (> , >>)//

	    while(1)
        {
            printf("\033[0;31m");
            gets(cmd);
            int lp2=strlen(cmd);
            if(!(strcmp(cmd,cmd1)))//cmd1
            {
                chdir("C:\\Users\\TejaratPooya\\Desktop\\project\\project2\\users");
                chdir(u[kk[0]].username);
                //if(rr[0]==0){
                 if(u[kk[0]].un[0]==0){lable1:
                cu[0]++;
                puts("Enter new name: ");
                u[cu[0]].name=(char *)malloc(30*sizeof(char));
                gets(u[cu[0]].name);
                puts("Enter new username: ");
                u[cu[0]].username=(char *)malloc(60*sizeof(char));
                gets(u[cu[0]].username);//********************

                int i3=0;
                for(i3=0;i3<cu[0];i3++)
                {
                 if(!(strcmp(u[cu[0]].username,u[i3].username)))
                    {
                        puts("Error: This username is exist.");
                        //Sleep(1000);
                        free(u[cu[0]].username);
                        free(u[cu[0]].name);cu[0]--;goto lable1;
                        //system("cls");acaunt(kk[0]);
                    }
                }
                puts("Enter new password (Notice:your accuracy of password should be more than 33 persent): ");
                u[cu[0]].password=(char *)malloc(60*sizeof(char));
                //gets(u[cu[0]].password);
                    int p=0;//***** as password
                    do{
                        u[cu[0]].password[p]=getch();
                        if(u[cu[0]].password[p]!='\r'){
                        printf("*");
                      }
                        p++;
                       }while(u[cu[0]].password[p-1]!='\r');
                       u[cu[0]].password[p-1]='\0';

                int lp1=strlen(u[cu[0]].password)+1;
                acuarcy(u[cu[0]].password,lp1);
                acaunt(kk[0]);}
                else{
                        printf("\033[0;35m");
                       puts("You cant creat user because you are not admin.");printf("\033[0;31m");
                      Sleep(3000);
                      system("cls");
                      acaunt(kk[0]);

               // }
                }
            }
            if(!(strcmp(cmd,cmd2)))//cmd2
            {



                 fclose(fp);fp=fopen("C:\\Users\\TejaratPooya\\Desktop\\project\\project2\\users\\users.txt","w+");//retrieval
                    int zq=0;
                    for(zq=1;zq<=cu[0];zq++){
                    fprintf(fp,"%s\t%s\t%s\t%f\t%d\t%d\n",u[zq].name,u[zq].username,u[zq].password,u[zq].accuracy,u[zq].pou,u[zq].un[0]);
                    }
                    fclose(fp);
                    fp=fopen("C:\\Users\\TejaratPooya\\Desktop\\project\\project2\\users\\users.txt","a+");//end of retrieval


                system("cls");//finish();
                int j1;
                /*for(j1=0;j1<cu[0];j1++)
                {
                free(u[j1].name);
                free(u[j1].username);
                free(u[j1].password);}*/fclose(fp);fclose(uc);//fclose(uc1);
                exit(0);getch();
            }
            if(!(strncmp(cmd,cmd3,4)))//cmd3
            {
                if((u[kk[0]].un[0]==0) ){//&& rr[0]>0
                  int j;
                  char us[lp2-4];//chgr phapsa

                    strcpy(us,cmd);
                    for(j=0;j<lp2;j++)
                    {
                        us[j]=us[j+5];
                    }
                    us[lp2-4]='\0';

                  int g=usnum2(us);//to find the number of username that entered
                  if(((u[g].accuracy)>=0.75) && (u[g].pou<11) )
                   {
                      // printf("%d  %f\n",g,u[g].accuracy);
                       u[g].un[0]=0;
                       printf("\033[0;35m");
                    printf("\nThe username: [%s] convert to the admin.\n",us);printf("\033[0;31m");

                   /* fclose(fp);fp=fopen("users.txt","w+");//retrieval
                    int zz=0;
                    for(zz=1;zz<=cu[0];zz++){
                    fprintf(fp,"%s\t%s\t%s\t%f\t%d\t%d\n",u[zz].name,u[zz].username,u[zz].password,u[zz].accuracy,u[zz].pou,u[zz].un[0]);
                    }
                    fclose(fp);
                    fp=fopen("users.txt","a+");//end of retrieval*/

                    }
                    else
                    {
                        printf("\033[0;35m");
                        puts("\nIt cant be possible.");
                         printf("\033[0;31m");
                    }

                       acaunt(kk[0]);

                  }
                  else
                  {
                      printf("\033[0;35m");
                      puts("You cant chgr because you are not admin.");printf("\033[0;31m");
                      Sleep(3000);
                      system("cls");
                      acaunt(kk[0]);
                  }
            }

            if(!(strncmp(cmd,cmd4,2)))//cmd4
            {


                if(u[kk[0]].un[0]!=0){
                char chus[lp2-2];char chpass[M];
                strcpy(chus,cmd);
                int jj=0;
                for(jj=0;jj<lp2;jj++)
                    {
                        chus[jj]=chus[jj+3];
                    }
                    chus[lp2-2]='\0';
                printf("password:");
                //chpass=(char *)malloc(30*sizeof(char));
                //gets(chpass);
                            int p=0;
                do{
                    chpass[p]=getch();
                    if(chpass[p]!='\r'){
                        printf("*");
                    }
                    p++;
                }while(chpass[p-1]!='\r');
                chpass[p-1]='\0';
                puts("");

           check(chus,chpass);}
          // q[0]=check(chus,chpass);
                //acaunt();

                else
                {

                   char chus[lp2-2];char chpass[M];
                strcpy(chus,cmd);
                int jj=0;
                for(jj=0;jj<lp2;jj++)
                    {
                        chus[jj]=chus[jj+3];
                    }
                    chus[lp2-2]='\0';


                    int i;int r=0;
              for(i=0;i<=cu[0];)
               {
                if(!(strcmp(chus,u[i].username) ))
                  {r++;break;}
                  i++;
               }
              if(r>0)
            {
                   u[kk[0]].cof[0]=0;//this kk[0] is for befor user
                  kk[0]=i;//this kk[0] is for new user
                   chdir("C:\\Users\\TejaratPooya\\Desktop\\project\\project2\\users");
             chdir(u[i].username);
                 system("cls");
               acaunt(i);
            }
            else
            {
                printf("\033[0;35m");
                puts("This username is not exist.");Sleep(2000);printf("\033[0;31m");
               system("cls");acaunt(kk[0]);
            }

                }
            }
             if(!(strncmp(cmd,cmd5,6)))//cmd5
             {
                 if((u[kk[0]].un[0]==0)){

                 int jj;
                  char upass[lp2-6];//passwd phapsa

                    strcpy(upass,cmd);
                    for(jj=0;jj<lp2;jj++)
                    {
                        upass[jj]=upass[jj+7];
                    }
                    upass[lp2-6]='\0';

                int i4=0;
                for(i4=0;i4<=cu[0];)
                {
                 if(!(strcmp(upass,u[i4].username)))
                    {
                        char *recentpass; float carefull=u[i4].accuracy;
                        recentpass=(char *)malloc(60*sizeof(char));
                        strcpy(recentpass,u[i4].password);
                        free(u[i4].password);
                       u[i4].password=(char *)malloc(60*sizeof(char));
                        puts("Please Enter new password: ");
                         //printf("\033[0;31m");
                         int p=0;//***** as password
                          do{
                        u[i4].password[p]=getch();
                        if(u[i4].password[p]!='\r'){
                        printf("*");
                      }
                        p++;
                       }while(u[i4].password[p-1]!='\r');
                       u[i4].password[p-1]='\0';u[i4].accuracy=0;
                       int lp3=strlen(u[i4].password);
                       acuarcy_of_new_password(u[i4].password,lp3,i4,recentpass,carefull);
                       break;

                    }

                   i4++;
                 }


                /* fclose(fp);fp=fopen("users.txt","w+");//retrieval
                    int zz=0;
                    for(zz=1;zz<=cu[0];zz++){
                    fprintf(fp,"%s\t%s\t%s\t%f\t%d\t%d\n",u[zz].name,u[zz].username,u[zz].password,u[zz].accuracy,u[zz].pou,u[zz].un[0]);
                    }
                    fclose(fp);
                    fp=fopen("users.txt","a+");//end of retrieval*/

                 //Sleep(1000);
                        system("cls");
                         acaunt(kk[0]);
              }
                    else
                     {

                    int jj;
                    char upass[lp2-6];//passwd phapsa

                    strcpy(upass,cmd);
                    for(jj=0;jj<lp2;jj++)
                    {
                        upass[jj]=upass[jj+7];
                    }
                    upass[lp2-6]='\0';
                   int i4= usnum2(upass);
                   if(i4==kk[0])
                   {
                       char *recentpass; float carefull=u[i4].accuracy;
                        recentpass=(char *)malloc(60*sizeof(char));
                        strcpy(recentpass,u[i4].password);
                        free(u[i4].password);
                       u[i4].password=(char *)malloc(60*sizeof(char));
                        puts("Please Enter new password: ");
                           //printf("\033[0;31m");
                         int p=0;//***** as password
                          do{
                        u[i4].password[p]=getch();
                        if(u[i4].password[p]!='\r'){
                        printf("*");
                      }
                        p++;
                       }while(u[i4].password[p-1]!='\r');
                       u[i4].password[p-1]='\0';u[i4].accuracy=0;
                       int lp3=strlen(u[i4].password);
                       acuarcy_of_new_password(u[i4].password,lp3,i4,recentpass,carefull);

                        system("cls");acaunt(kk[0]);
                   }
                    else
                    {
                        printf("\033[0;35m");
                        puts("You cant change password.");
                        printf("\033[0;31m");
                        Sleep(2000);system("cls");acaunt(kk[0]);
                    }
                     }
           }//end of cmd5

            if(!(strcmp(cmd,cmd12)))//cmd12 for showing the contents of direction
            {
                printf("\033[0;35m");
                puts("Your current path is as follows: \n\n");
                printf("\033[0;31m");
                system("DIR");

                Sleep(10000);

                system("cls");acaunt1(kk[0]);

            }//end of cmd6

            if(!(strncmp(cmd,cmd7,5)))//cmd7 for make folder
            {
               int jjj;
                  char dirname[lp2-5];//mkdir aref

                    strcpy(dirname,cmd);
                    for(jjj=0;jjj<lp2;jjj++)
                    {
                        dirname[jjj]=dirname[jjj+6];
                    }
                    dirname[lp2-5]='\0';


                 if(!mkdir(dirname))
                 {
                     printf("\033[0;35m");
                     puts("Folder is made successful. ");
                     printf("\033[0;31m");
                      Sleep(2000);
                       system("cls");
                      acaunt(kk[0]);

                 }
                 else
                 {
                     printf("\033[0;35m");
                   puts("Unfortunately, file can not be made. ");
                   printf("\033[0;31m");
                    Sleep(2000);
                   system("cls");
                    acaunt(kk[0]);

                 }

            }//end of cmd7

            if(!(strncmp(cmd,cmd8,2)))//cmd8 for change directory //cd ..
            {

                if(cmd[3]=='.' && cmd[4]=='.')
                {

                  if(u[kk[0]].un[0]==0)
                {
                   chdir("..");
                   //puts("admin.");Sleep(5000);
                   system("cls");
                    acaunt1(kk[0]);


                }
                    else
                    {
                       if(u[kk[0]].cof[0]>0)
                       {
                         chdir("..");
                         //puts("goos.");Sleep(5000);
                          u[kk[0]].cof[0]--;
                          system("cls");
                           acaunt1(kk[0]);

                       }
                       else
                       {
                           printf("\033[0;35m");
                           puts("It cant be possibel.");Sleep(2500);
                           printf("\033[0;31m");
                           system("cls");
                           acaunt1(kk[0]);
                       }


                    }

                }

                else
                    {

                    int chh;
                  char dirname[lp2-2];//chdir

                    strcpy(dirname,cmd);
                    for(chh=0;chh<lp2;chh++)
                    {
                        dirname[chh]=dirname[chh+3];
                    }
                    dirname[lp2-2]='\0';
                     u[kk[0]].cof[0]++;
                   // printf("%s",dirname);
                     chdir(dirname);
                     system("cls");
                    acaunt1(kk[0]);

                    }

            }//end of cmd8

              if(!(strncmp(cmd,cmd9,3)))//cmd9 for showing contents of a file
                {

                    int jj;
                  char dirname[lp2-3];//passwd phapsa

                    strcpy(dirname,cmd);
                    for(jj=0;jj<lp2;jj++)
                    {
                        dirname[jj]=dirname[jj+4];
                    }
                    dirname[lp2-3]='\0';



                    FILE *fptr;char c;
                    // Open file
                    fptr = fopen(dirname, "r");
                    if (fptr == NULL)
                    {
                        printf("\033[0;35m");
                        printf("Cannot open file \n");
                        printf("\033[0;31m");
                        Sleep(2500);
                         system("cls");
                         acaunt(kk[0]);

                    }

                    // Read contents from file
                    else{
                            printf("\033[0;35m");
                            puts("Enter 0 to exit.\n\n\n");
                            printf("\033[0;31m");
                    c = fgetc(fptr);
                    while (c != EOF)
                    {
                        printf ("%c", c);
                        c = fgetc(fptr);
                    }

                    fclose(fptr);
                    char e;
                     e=getchar();
                     if(e=='0'){
                    system("cls");
                    acaunt(kk[0]);}

                    }
                }



                    if(!(strncmp(cmd,cmd10,2)) && cmd[2]!='-')//cmd10 for remove file
                {

                    int jj;
                  char dirname[lp2-2];

                    strcpy(dirname,cmd);
                    for(jj=0;jj<lp2;jj++)
                    {
                        dirname[jj]=dirname[jj+3];
                    }
                    dirname[lp2-2]='\0';


                 if(remove(dirname))
                 {

                  printf("\033[0;35m");
                 puts("Removing failed.");
                 printf("\033[0;31m");
                 }
                 else
                 {printf("\033[0;35m");
                 puts("File is removed.");
                 printf("\033[0;31m");}
                 Sleep(2500);
                 system("cls");
                    acaunt(kk[0]);
                    }//end of cmd10




                 if(!(strncmp(cmd,cmd11,4)))//cmd11 for remove folder
                 {

                     int jj;
                  char dirname[lp2-4];//rm-r dirname//system("rmdir /S direname")

                    strcpy(dirname,cmd);
                    for(jj=0;jj<lp2;jj++)
                    {
                        dirname[jj]=dirname[jj+5];
                    }
                    dirname[lp2-4]='\0';
                    char str1[30]="rmdir /S ";
                    strcat(str1,dirname);


                     if(system(str1))
                     {
                          printf("\033[0;35m");
                            puts("Removing failed.");
                            printf("\033[0;31m");
                     }
                     else
                     {
                        printf("\033[0;35m");
                         puts("Folder is removed.");
                         printf("\033[0;31m");
                     }
                            Sleep(2500);
                            system("cls");
                            acaunt(kk[0]);



                 }//end of cmd11


                 if(!(strcmp(cmd,cmd6)))//cmd6 for showing the current direction

                  {

                      char buff[FILENAME_MAX];
                      GetCurrentDir( buff, FILENAME_MAX );
                      printf("\033[0;35m");
                      printf("Current working dir: %s\n", buff);
                        printf("\033[0;31m");
                        Sleep(10000);
                            system("cls");
                            acaunt(kk[0]);

                  }

                  if(!(strncmp(cmd,cmd13,2)))//cmd13 for copy file
                  {


                     int jj;
                  char dirname[400];//cp file1 file2
                    strcpy(dirname,cmd);
                    for(jj=0;jj<lp2;jj++)
                    {
                        dirname[jj]=dirname[jj+3];
                    }
                    dirname[lp2-2]='\0';
                    char scopy[400]="copy ";
                    strcat(scopy,dirname);

                     if(!system(scopy))
                     {
                          printf("\033[0;35m");
                         puts("Copy completed successfully.");
                         printf("\033[0;31m");
                         Sleep(2500);
                            system("cls");
                            acaunt(kk[0]);

                     }
                     else
                     {

                         printf("\033[0;35m");
                         puts("Unfortunately, the operation failed.");
                         printf("\033[0;31m");
                         Sleep(2500);
                            system("cls");
                            acaunt(kk[0]);

                     }

                }//end of cmd13



                if(!(strncmp(cmd,cmd14,2)))//cmd14 for cut file
                  {


                     int jj;
                  char dirname[400];//mv file1 file2
                    strcpy(dirname,cmd);
                    for(jj=0;jj<lp2;jj++)
                    {
                        dirname[jj]=dirname[jj+3];
                    }
                    dirname[lp2-2]='\0';
                    char scopy[400]="move ";
                    strcat(scopy,dirname);

                     if(!system(scopy))
                     {
                          printf("\033[0;35m");
                         puts("Move completed successfully.");
                         printf("\033[0;31m");
                         Sleep(3000);
                            system("cls");
                            acaunt(kk[0]);

                     }
                     else
                     {

                         printf("\033[0;35m");
                         puts("Unfortunately, the operation failed.");
                         printf("\033[0;31m");
                         Sleep(3000);
                            system("cls");
                            acaunt(kk[0]);

                     }

                }//end of cmd14

                   if(strchr(cmd,'>')!=NULL){//cmd16
                int l3=strlen(cmd);//cmd 15 for > ,>>
                int i5=0,r1=0,r2=0;char file1[40];char file2[40];int m;
                for(i5=0;i5<l3;i5++)
                {
                    if(cmd[i5]=='>')
                    {

                        if(cmd[i5+1]=='>')
                        {
                             r2++;


                            int v=0;
                            for(v=0;v<i5;v++)
                            {
                                file1[v]=cmd[v];

                            }
                            printf("\n\n%s\n\n",file1);
                            for(v=i5+2,m=0;v<l3;v++,m++)
                            {
                                file2[m]=cmd[v];

                            }
                         printf("\n\n%s\n\n",file2);
                            break;
                        }
                        else
                        {
                            r1++;


                            int v=0;
                            for(v=0;v<i5;v++)
                            {
                                file1[v]=cmd[v];
                            }
                            for(v=i5+1,m=0;v<l3;v++,m++)
                            {
                                file2[m]=cmd[v];

                            }

                            break;
                        }


                    }
                }

                if(r1>0)//for checking (>)
                {

                    FILE *fp1, *fp2;
                    char ch;
                   if((fp1 = fopen(file1, "r"))==NULL)

                   {
                        fp2 = fopen(file2, "w");
                       fprintf(fp2,"%s",file1);
                     printf("\033[0;35m");
                       puts("The expression was dumped into the  file.");
                       printf("\033[0;31m");

                    }
                   else
                   {

                        fp2 = fopen(file2, "w");
                        while((ch = getc(fp1)) != EOF)
                        putc(ch, fp2);
                        fclose(fp1);
                        fclose(fp2);
                        printf("\033[0;35m");
                        puts("The first file was dumped into the second file.");
                        printf("\033[0;31m");

                   }


                   r1=0;
                }

                 if(r2>0)//for checking (>)
                {

                    FILE *fp3, *fp4;
                    char ch;
                   if((fp3 = fopen(file1, "r"))==NULL)

                   {
                        fp4 = fopen(file2, "a");
                       fprintf(fp4,"%s",file1);
                     printf("\033[0;35m");
                       puts("The expression was added into the  file.");
                       printf("\033[0;31m");

                    }
                   else
                   {

                        fp4 = fopen(file2, "a");
                        while((ch = getc(fp3)) != EOF)
                        putc(ch, fp4);
                        fclose(fp3);
                        fclose(fp4);
                        printf("\033[0;35m");
                        puts("The first file was added into the second file.");
                        printf("\033[0;31m");

                   }


                   r2=0;
                }

                }  //end of cmd15


                 int l4=strlen(cmd);//cmd15

                  if(cmd[l4-1]=='f' && cmd[l4-2]=='i' && cmd[l4-3]=='x' && cmd[l4-4]=='e')
                  {

                      char ex[l4-3];
                      strncpy(ex,cmd,l4-4);
                      char exif[20]="dir /t:c ";
                      strcat(exif,ex);
                      system(exif);

                      printf("\nFile access: read write");

                       Sleep(10000);
                            system("cls");
                            acaunt(kk[0]);


                  }

                  //if(strchr(cmd,'>')!=NULL)
                  /*{
                      char transfer[30];
                      strcpy(transfer, "echo ");
                         strcat(transfer,cmd);
                      system(transfer);//strchr(string,'>')
                       Sleep(2500);
                            system("cls");
                            acaunt(kk[0]);

                  }*/


                if(!(strncmp(cmd,cmd16,4)))//cmd16 for compare

                  {                            //diff file1 file2
                       char diff[400]="fc /b/c/a/l/n/u ";
                        int jj;
                  //char dirname[400];//mv file1 file2
                  char ss[300];

                    for(jj=0;jj<lp2;jj++)
                    {
                        ss[jj]=cmd[jj+5];
                    }
                    ss[lp2-4]='\0';

                       strcat(diff,ss);
                      // printf("%s",diff);
                      system(diff);
                      Sleep(15000);
                            system("cls");
                            acaunt(kk[0]);
                        }

                        //cmd17
                       if(!(strcmp(cmd,cmd17)))//cmd17 hidden file
                       {

                           puts("Enter the addres of file:");
                           char a[100];
                           gets(a);
                           char aa[200]="attrib +h ";
                           strcat(aa,a);

                           system(aa);

                           Sleep(3000);
                            system("cls");
                            acaunt(kk[0]);

                       }
                       if(!(strcmp(cmd,cmd18)))//cmd18 unhide file
                       {

                           puts("Enter the addres of file:");
                           char a[100];
                           gets(a);
                           char aa[200]="attrib -h ";
                           strcat(aa,a);
                           system(aa);

                         Sleep(3000);
                            system("cls");
                            acaunt(kk[0]);

                       }

                          if(!(strcmp(cmd,cmd19)))//cmd19 search file

                            {

                           puts("Enter the name of file:");
                           char a[100];
                           gets(a);
                           char aa[200]="dir ";char aaa[200]=" /s";
                           strcat(aa,a);
                           strcat(aa,aaa);
                           system(aa);

                           Sleep(15000);
                            system("cls");
                            acaunt(kk[0]);

                            }

                             if(!(strcmp(cmd,cmd20)))//cmd20 show hidden file

                            {

                                system("dir /ah");
                                Sleep(15000);
                                system("cls");
                            acaunt(kk[0]);


                            }

                          if(!(strcmp(cmd,cmd21)))//cmd21 help

                          {

                              FILE *fptr5;char c;
                    // Open file
                    fptr5 = fopen("C:\\Users\\TejaratPooya\\Desktop\\project\\project2\\users\\phapsa\\help.txt", "r");
                    if (fptr5 == NULL)
                    {
                        printf("\033[0;35m");
                        printf("Cannot open file \n");
                        printf("\033[0;31m");
                        Sleep(2500);
                         system("cls");
                         acaunt(kk[0]);

                    }

                    // Read contents from file
                    else{
                            printf("\033[0;35m");
                            puts("Enter 0 to exit.\n\n\n");
                            printf("\033[0;31m");
                    c = fgetc(fptr5);
                    while (c != EOF)
                    {
                        printf ("%c", c);
                        c = fgetc(fptr5);
                    }

                    fclose(fptr5);



                    }
                          }






        else //pou
                  {
                      u[kk[0]].pou++;



                  }


        }

	}
