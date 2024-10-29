#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define USER_MAX 20

int login_Reg();
int secend_menu();
void writeToFile();
int exist();
void registerUser();
int menu();
void Change_Password();
int delete_row();
int type_testing();



typedef struct
{
    char name[10];
    char password[10];
}User;
// definition of the structure of a user storing
User list[USER_MAX];
// define a global array, type User, size is USER_MAX
char *filename = "user.txt";
// user.txt need to create a file in your application directory

// Log function
User login()
{
    char name[10];
    static char password[10];
    User lg;
    printf("Enter Your Name: ");
    scanf("%s", name);
    strcpy(lg.name, name);
    printf("Enter Your Password: ");
    scanf("%s", password);
    strcpy(lg.password, password);
    return lg;
}

int main()
{
    login_Reg();
}

int login_Reg(){
    printf("\n\n----------  Welcom  ----------\n\n");
    User test[USER_MAX];
    FILE *fp = fopen(filename, "r");
    int i = 0;
    User u;
    //if(NULL == fp)
    //{
       // printf("FILE NOT FOUND");
       // return -1;
    //}
    for(i = 0; i < USER_MAX; i++)
    {
        char uname[10];
        char upassword[10];
        fscanf(fp,"%s%s", uname, upassword);
        strcpy(list[i].name, uname);
        strcpy(list[i].password, upassword);
    }

    int choice = menu();
        if(1 == choice)
        {
            u = login();
            if(1 == exist(u))
            {
                secend_menu();
            }
            else
            {
                printf("WRONG USER OR PASS . . . \n\n");
                login_Reg();
            }
        }
        else if(2 == choice)
        {
            registerUser();
        }
        else
        {
            return 0;
        }
}
int secend_menu(){
    int n;
    printf("\n\n----------  Main Menu  ----------\n\n");
    printf("1. Type Testing\n");
    printf("2. View Sorted Statistical Info\n");
    printf("3. Search Users By Their Best Score\n");
    printf("4. Search Users By names\n");
    printf("5. Change Password\n");
    printf("6. Logout\n\n");  
    printf("Enter Your Choice : ");
    scanf("%d", &n);
    switch (n)
    {
        case 1:
            type_testing();
            break;
        case 2:
            printf("22");
            break;
        case 3:
            printf("33");
            break;
        case 4:
            printf("44");
            break;
        case 5:
            Change_Password();
            break;
        case 6:
            printf("\nLogout Successful.\n");
            main();
            break;
        default:
            printf("\nInput Is Worng . . .\nTry Again . . .\n\n");
            secend_menu();
            break;
    }
}
// write txt file, there is a row for each user
void writeToFile(User u)
{
    FILE *fw = fopen(filename, "a+");
    fprintf(fw, "%s", u.name);
    fprintf(fw, "\t");
    fprintf(fw, "%s", u.password);
    fprintf(fw,"\n");
}
// determine whether the user exists
int exist(User u)
{
    for(int i = 0; i < USER_MAX; i++)
    {
        if(0 == strcmp(list[i].name , u.name) && 0 == strcmp(list[i].password , u.password))
        {
            return 1;
        }
    }
    return -1;
}
//registered user
void registerUser()
{
    char name[10];
    char password[10];
    char password1[10];
    User user;
    int i;
    printf("Enter Your Name: ");
    scanf("%s", name);
    strcpy(user.name , name);
    // determine whether there has been a registered user
    for(i = 0; i< USER_MAX; i++)
    {
        if(0 == strcmp(list[i].name , name))
        {
            printf("USER ALREADY EXIST . . . \n");
            login_Reg();
        }
    }
    printf("Enter Your Password: ");
    scanf("%s", password);
    printf("Repeat Your Password: ");
    scanf("%s", password1);
    if(0 == strcmp(password1, password))
    {
        strcpy(user.password , password);
        writeToFile(user);
        printf("\nYour Sign up Completly Done.\n\n");  
    }
    else
    {
        printf("\nYour Password Not Matched . . .!\nTry Again . . .\n\n");
        registerUser();
    }      
}
int menu()
{
    int choice;
    printf("1. Sign in\n");
    printf("2. Sign up\n");
    printf("3. Exit\n");
    printf("\nEnter Your Choice : ");
    scanf("%d", &choice);
    printf("\n");
    if(choice >= 1 && choice <= 3)    
    {
        return choice;
    }
    else
    {
        printf("Out Of Range . . .!\n\nEnter Number 1-3 : ");
        scanf("%d", &choice);
    }
}
// Change Password
void Change_Password()
{   
    int flag = 0, k = 0;
    char input_pass[20];
    char input_name[20];
    char new_pass[20];
    User new_user;
    while (flag == 0)
    {
        flag = 1;
        printf("\nEnter Your Name: ");
        scanf("%s", input_name);
        printf("Enter Your Password : ");
        scanf("%s", input_pass);
        for(int i = 0; i < USER_MAX; i++)
        {
            if (strcmp(list[i].password, input_pass) == 0 && strcmp(list[i].name, input_name) == 0)
            {
                flag = 1;
                k++;
                break;
            }
            else
                flag = 0;
        }
        switch(flag)
        {
            case 0:
                printf("\nWRONG USER OR PASS . . . \nTry Again . . .\n");
                break;
            case 1:
                printf("\nYou Can Change Your Password . . .\n");
                break;
        } 
    } 
    printf("\nEnter New Password : ");
    scanf("%s", new_pass);
    strcpy(new_user.password , new_pass);
    strcpy(new_user.name , input_name);
    FILE *fptr1, *fptr2;
    char file1[] ="user.txt";
    char file2[] ="user2.txt";
    char curr;
    int line_number = 0;
    fptr1 = fopen(file1,"r");
    fptr2 = fopen(file2, "w");
    curr = getc(fptr1);
    if(curr!=EOF) {line_number =1;}
    while(1){
      if(k + 1 != line_number)
        putc(curr, fptr2);
        curr = getc(fptr1);
        if(curr =='\n') line_number++;
        if(curr == EOF) break;
    }
    fclose(fptr1);
    fclose(fptr2);
    FILE *fw = fopen(file2, "a+");
    fprintf(fw, "%s", new_user.name);
    fprintf(fw, "\t");
    fprintf(fw, "%s", new_user.password);
    fprintf(fw,"\n");    printf("\nYour Password Change Successfuly.\n\n");
}
int type_testing(){
    int choice_typing;
    float score_type = 0;
    char input_pg[100];
    int i = 0, j = 0, k = 0, p = 0, correct = 0, count_word = 0;
    char *arr_word_1[150], *arr_word_2[150], *arr_word_3[150];
    char *arr_word1[150];
    double time_spent;

    printf("\n---------  Measure typing speed  ----------\n");
    printf("-> Write The Below Paragraph <-\n\n");
    int lower_range = 1, upper_range = 3; 
    srand(time(0));  
    int num = (rand() % (upper_range - lower_range + 1)) + lower_range;  
    switch(num)
    {
    case 1:
        printf("\nlorem ipsum dolor sit amet consectetur adipiscing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua ut.\n\n");
        break;
    case 2:
        printf("\nthis is a progeam to measure your typing speed and tell your score and correct words good luck my freind\n\n");
        break;
    case 3:
        printf("\nhi my name is robot i am here to measure your type speed iknow you will get good score.\n\n");
        break;    
    }
    char string_1[150] = "lorem ipsum dolor sit amet consectetur adipiscing elit sed do eiusmod tempor incididunt ut labore et dolore magna aliqua ut";
    char *token_1 = strtok(string_1, " ");
    while(token_1 != NULL){
        arr_word_1[i++] = token_1;
        token_1 = strtok(NULL, " ");
    }
    char string_2[150] = "this is a progeam to measure your typing speed and tell your score and correct words good luck my freind";
    char *token_2 = strtok(string_2, " ");
    while(token_2 != NULL){
        arr_word_2[j++] = token_2;
        token_2 = strtok(NULL, " ");
    }
    char string_3[150] = "hi my name is robot i am here to measure your type speed iknow you will get good score";
    char *token_3 = strtok(string_3, " ");
    while(token_3 != NULL){
        arr_word_3[k++] = token_3;
        token_3 = strtok(NULL, " ");
    }
    printf("when you click enter it will be start . . .");
    scanf("\n");
	char name[200];

    time_t start, end;
	time(&start);
	gets(name);
	time(&end);
	printf("Time taken to print sum is %.2f seconds", difftime(end, start));

    // time_spent = difftime(end, start);
    // printf("\n\nYou Write In : %.2f Second\n", time_spent);
    // printf("\n\nYou Write In : %.2f Second\n", difftime(end, start));

    printf("You Write : %s\n", name);
    char *token1 = strtok(name, " ");
    while(token1 != NULL){
        arr_word1[p++] = token1;
        token1= strtok(NULL, " ");
        count_word++;
    }
    if(num == 1)
    {
        for(int i = 0; i < count_word; ++i){
            if (strcmp(arr_word_1[i], arr_word1[i]) == 0)
                correct++;
        }
    }
    if(num == 2)
    {
        for(int i = 0; i < count_word; ++i){
            if (strcmp(arr_word_2[i], arr_word1[i]) == 0)
                correct++;
        }
    }
    if(num == 3)
    {
        for(int i = 0; i < count_word; ++i){
            if (strcmp(arr_word_3[i], arr_word1[i]) == 0)
                correct++;
        }
    } 
    printf("\nCorrect Words You Write Is : %d\n", correct);
    score_type = ((100 * (correct / 20)) + ((2 * count_word) / (time_spent / 60)));
    printf("Your Score Is : %f\n", score_type);



    FILE *fw = fopen("score_typing",  "a+");
    // fprintf(fw, "%s", u.name);
    fprintf(fw, "\t");
    fprintf(fw, "Score : %f", score_type);
    fprintf(fw, "\t");
    fprintf(fw, "Paragragh : %d", num);
    fprintf(fw,"\n");

    printf("\n---------------------------\n");
    printf("1. Try Again\n2. Back to menu\n");
    printf("Enter Your Choice : ");
    scanf("%d", &choice_typing);
    switch (choice_typing)
    {
    case 1:
        type_testing();
        break;
    case 2:
        secend_menu();
        break;
    }
}
    
