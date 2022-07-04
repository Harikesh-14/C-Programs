#include<stdio.h>
#include<string.h>

int authenticate(char id[], int pass){
    char name1[20] = "vansh";
    char name2[20] = "harikesh";
    char name3[20] = "puranjay";
    char name4[20] = "ritwik";
    char name5[20] = "omkar";
    if ((strcmp(id,name1)==0 || strcmp(id,name2)==0 || strcmp(id,name3)==0 || strcmp(id,name4)==0 || strcmp(id,name5)==0) && pass ==12345){
        return 1;
    }
    else{
        return 0;
    }
}

int mark(){
    int i=1;
    char att[10], date[10];
    printf("\nEnter the date: ");
    scanf("%s", date);
    printf("--------------MARK ATTENDANCE OF %s--------------\n\n", date);
    FILE *fp;
    fp = fopen("file.txt","a");
    fprintf(fp,"\n\t\tList of attendace of date: %s\n", date);
    for (int i=1;i<=5;i++){
        printf("Roll.No %d: ",i);
        scanf("%s",att);
        fprintf(fp,"Roll.No %d: %s\n",i,att);
    }
    fclose(fp);
    return 0;
}

void view(){
    FILE *fp;
    fp = fopen("file.txt", "r");
    char att[1000],c;
    c = fgetc(fp);
    while (c!= EOF){
        printf("%c",c);
        c = fgetc(fp);
    }
    fclose(fp);
}

int main(){
    char id[20];
    int pass;
    printf("Enter ID: ");
    scanf("%s", id);
    printf("Enter Password: ");
    scanf("%d", &pass);     
    if(authenticate(id,pass) == 1){
        printf("\nWELCOME %s!",strupr(id));
        printf("\n--------------------------------------MAIN MENU-----------------------------------------\n");
        printf("\t1: Mark Attendance\n");
        printf("\t2: View Attendance\n");
        printf("\t3: Logout\n");
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice == 1){
            mark();
        } else if(choice==2){
            view();
        } else if(choice==3){
            printf("You have been logged out!");
        }
        else{
            printf("Thanks");
        }
    } else if(authenticate(id,pass)==0){
        printf("Bad Credentials");
    }
    return 0;
}