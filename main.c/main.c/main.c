#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void delay(int n)
{
    // Converting time into milli_seconds
    int ms = 100000*n;
    // Storing start time
    clock_t start = clock();
    // looping till required time is not achieved
    while (clock() < start + ms)
        ;
}
void virtualcarnivalinfo();
void loopfood();
void looprides();
void loop();
int billpay(float bill);
void mainmenu();
void main();
void main1();
void foodstreetmenu();
void foodstreet();
void pizzeriamenu();
void pizzeria();
void funridesmenu();
void funrides();
void dosa();
void dosamenu();
void chats();
void chatsmenu();
void above_and_beyondmenu();
void above_and_beyond();
void ghosthouse(int);
void fortuneteller();
void loop()
{
    delay(20);
    printf("\n\n");
    delay(20);
    printf("*\n\n");
    delay(20);
    printf("*\n\n");
    delay(20);
    printf("*\n");
    delay(20);
    printf("\n\n");
    delay(20);
}
int billpay(float bill)
{
    int flag1=1, confirm, flagyes=0;
    float payment, extra, remaining;
    printf("do you want to pay this much amount and proceed?\
\n1. yes 2. no : ");
    scanf("%d", &confirm);
    delay(15);
    if(confirm==1)
    {
        flagyes=1;
        do
        {
            delay(10);
            printf("Please pay your amount here: ");
            scanf("%f", &payment);
           
            if(payment==bill)
            {
                flag1=0;
                printf("\n\nYour payment was successful.\n\n");
                delay(10);
            }
            else if(payment>bill)
            {
                flag1=0;
                extra = payment - bill;
                printf("You've paid extra amount.\n");
                delay(10);
                printf("Please take your remaining amount - %0.2f\n\n", extra);
            }
            else if(payment<bill)
            {
                remaining = bill - payment;
                bill = remaining;
                printf("You've paid less amount.\n");
                delay(15);
                printf("Remaining amount to be paid is %0.2f\n", remaining);
                delay(10);
            }
        }while(flag1==1);
    }
    return flagyes;
}
void loopfood()
{
    printf("Your food is being prepared...");
    delay(15);
    printf(" please wait...");
    loop();
    printf("Your food has been prepared!\n");
    delay(15);
    printf("Please collect it.\n\n");
    delay(25);
    printf("Hope you enjoy it!\n");
    delay(15);
}
void looprides()
{
    printf("Hope you enjoy your ride!!");
    loop();
    printf("Your ride has been completed.\n");
    delay(15);
}
void pizzeriamenu()
{
    for(int i=1; i<=36; i++)
    printf("*");
    printf("\n\n");
    printf("sl/no\t\titem\t\tprice(in Rs)\n");
    printf("1.\t\tfarmhouse\t\t\t\t200\n");
    printf("2.\t\tmargherita\t\t\t\t200\n");
    printf("3.\t\tall in one\t\t\t\t200\n");
    printf("4.\t\twhite sauce pasta\t\t170\n");
    printf("5.\t\tred sauce pasta\t\t\t170\n");
    printf("6.\t\tgarlic bread\t\t\t170\n\n");
    for(int i=1; i<=36; i++)
    printf("*");
    printf("\n\n");
}
void pizzeria()
{
    int n, choice, option1, option2, flag=0;
    char name[20];
    float bill=0;
    do
   {
       delay(10);
       pizzeriamenu();
       delay(10);
    do
    {
        printf("\nenter your choice: ");
    scanf("%d", &choice);
    printf("amount of food: ");
    scanf("%d", &n);
    bill+=(choice==1||choice==2||choice==3)?(n*200):(n*170);
        printf("do you want to order more items? 1. yes 2. no : ");
        scanf("%d", &option1);
        if(option1==1)
        {
            delay(5);
            printf("\nHere's your menu: \n\n");
            delay(5);
            pizzeriamenu();
            continue;
        }
        else break;
    }while(option1!=2);
       printf("\nlet's find out if");
       delay(10);
       printf("\nyou'll get 50%% discount! ...\n");
       delay(10);
       printf("enter your name: ");
       scanf("%s", name);
        
        if(name[0]=='I'||name[0]=='M'||name[0]=='B'||\
           name[0]=='D'||name[0]=='A'||name[0]=='i'||\
           name[0]=='m'||name[0]=='b'||name[0]=='d'||\
           name[0]=='a')
        {
            bill=0.5*bill;
            delay(8);
            printf("It's your lucky day!!!");
            delay(10);
            printf("\n*** Here's your reduced bill amount: %0.2f ***\n", bill);
        }
        else
        {
            delay(10);
            printf("It's not your lucky day...\n");
            delay(10);
            printf("\n*** but here's your bill : %0.2f ***\n", bill);
            delay(9);
        }
       int yes;
       yes = billpay(bill);
       if(yes==1) loopfood();
       
        printf("do you want to continue with your food journey? 1. yes 2. no : ");
        scanf("%d", &option2);
        if(option2==1)
        {
            delay(5);
            foodstreet();
            delay(5);
            flag=0;
            continue;
        }
        else
            main1();
        
     }while(flag==0);
}
   
void wafflesmenu()
{
    for(int i=1; i<=36; i++)
    printf("*");
    printf("\n\n");
    printf("sl/no\t\titem\t\tprice(in Rs)\n");
    printf("1.\t\tassorted box of 2\t\t100\n");
    printf("2.\t\tassorted box of 3\t\t150\n");
    printf("3.\t\tassorted box of 4\t\t200\n\n");
    for(int i=1; i<=36; i++)
    printf("*");
    printf("\n\n");
}
void waffles()
{
    int n, choice, option1, option2, flag=0;
    float bill=0;
    do
    {
        delay(10);
        wafflesmenu();
        delay(10);
    do
    {
        printf("\nenter your choice: ");
    scanf("%d", &choice);
    printf("amount of food: ");
    scanf("%d", &n);
    bill+=(choice==1)?(n*100):(choice==2)?(n*150):(n*200);
        printf("do you want to order more items? 1. yes 2. no : ");
        scanf("%d", &option1);
        if(option1==1)
        {
            delay(5);
            printf("\nHere's your menu: \n\n");
            delay(5);
            wafflesmenu();
            continue;
        }
        else break;
    }while(option1!=2);
    printf("*** your bill amount: %0.2f ***\n", bill);
        int yes;
        yes = billpay(bill);
        if(yes==1) loopfood();
    printf("\n\ndo you want to continue with your food journey? 1. yes 2. no : ");
    scanf("%d", &option2);
    if(option2==1)
    {
        delay(5);
        foodstreet();
        delay(5);
        flag=0;
        continue;
    }
    else
        main1();
 }while(flag==0);
}
void dosamenu()
{
    for(int i=1; i<=36; i++)
    printf("*");
    printf("\n\n");
    printf("sl/no\t\titem\t\tprice(in Rs)\n");
    printf("1.\t\tpaper dosa\t\t\t50\n");
    printf("2.\t\tmasala dosa\t\t\t50\n");
    printf("3.\t\tset dosa\t\t\t50\n");
    printf("4.\t\trava dosa\t\t\t70\n");
    printf("5.\t\tbenne dosa\t\t\t70\n");
    printf("6.\t\tonion dosa\t\t\t70\n");
    printf("7.\t\tcheese dosa\t\t\t80\n");
    printf("8.\t\tchinese dosa\t\t80\n");
    printf("9.\t\tpizza dosa\t\t\t80\n\n");
    for(int i=1; i<=36; i++)
    printf("*");
    printf("\n\n");
}
void dosa()
{
    int n, choice, option1, option2, flag=0;
    float bill=0;
    do
    {
        delay(5);
        dosamenu();
        delay(5);
    do{
    printf("\nenter your choice: ");
    scanf("%d", &choice);
    printf("amount of food: ");
    scanf("%d", &n);
    bill+=(choice==1||choice==2||choice==3)?(n*50):(choice==4||\
           choice==5||choice==6)?(n*70):(n*80);
        printf("do you want to order more items? 1. yes 2. no : ");
        scanf("%d", &option1);
        if(option1==1)
        {
            delay(5);
            printf("\nHere's your menu: \n\n");
            delay(5);
            dosamenu();
            continue;
        }
        else break;
    }while(option1!=2);
    
    if(bill>200.00)
    {
        printf("you get free kesari bhath!!!\n");
    }
    printf("*** your bill amount: %0.2f ***\n", bill);
        int yes;
        yes = billpay(bill);
        if(yes==1) loopfood();
        
    printf("\n\ndo you want to continue with your food journey? 1. yes 2. no : ");
    scanf("%d", &option2);
    if(option2==1)
    {
        delay(5);
        foodstreet();
        delay(5);
        flag=0;
        continue;
    }
    else
        exit(0);
    }while(flag==0);
}
void chatsmenu()
{
    for(int i=1; i<=36; i++)
    printf("*");
    printf("\n\n");
    printf("sl/no\t\titem\t\tprice(in Rs)\n");
    delay(5);
    printf("CHATS\n");
    delay(5);
    printf("01.\t\tPani Puri\t\t\t\t50\n");
    printf("02.\t\tMasala Puri\t\t\t\t50\n");
    printf("03.\t\tBhel Puri\t\t\t\t50\n");
    printf("04.\t\tSev Puri\t\t\t\t50\n");
    printf("05.\t\tBoti Masala\t\t\t\t50\n");
        delay(5);
    printf("JUICE & SODA\n");
        delay(5);
    printf("06.\t\tWatermelon\t\t\t\t60\n");
    printf("07.\t\tOrange\t\t\t\t\t60\n");
    printf("08.\t\tMusambi\t\t\t\t\t60\n");
    printf("09.\t\tSugarcane\t\t\t\t60\n");
    printf("10.\t\tLime Soda\t\t\t\t60\n");
    printf("11.\t\tMasala Soda\t\t\t\t60\n");
    printf("12.\t\tJeera Soda\t\t\t\t60\n\n");
        delay(5);
    for(int i=1; i<=36; i++)
    printf("*");
    printf("\n\n");
    delay(5);
}
void chats()
{
    int n, choice, option1, option2, flag=0;
    float bill=0;
    do
    {
        chatsmenu();
    do{
    printf("\nenter your choice: ");
    scanf("%d", &choice);
    printf("amount of food: ");
    scanf("%d", &n);
    bill+=(choice==1||choice==2||choice==3||choice==4||\
           choice==5)?(n*50):(choice==6||choice==7||choice==8||\
           choice==9||choice==10||choice==11||choice==12)?(n*70):(n*80);
        printf("do you want to order more items? 1. yes 2. no : ");
        scanf("%d", &option1);
        if(option1==1)
        {
            printf("\nHere's your menu: \n\n");
            chatsmenu();
            continue;
        }
        else break;
    }while(option1!=2);
        printf("your bill is being generated! please wait...");
        delay(15);
    
    printf("\n*** your bill amount: %0.2f ***\n", bill);
    delay(5);
        int yes;
        yes = billpay(bill);
        if(yes==1) loopfood();
    printf("do you want to continue with your food journey? 1. yes 2. no : ");
    scanf("%d", &option2);
    if(option2==1)
    {
        delay(5);
        foodstreet();
        delay(5);
        flag=0;
        continue;
    }
    else
        main1();
    }while(flag==0);
}
void foodstreetmenu()
{
    printf("\n\n");
    for(int i=1; i<=36; i++)
    printf("*");
    printf("\n");
    printf("\n1. Mama Mia's Pizzeria\n2. Waff's Up\n\
3. Namm Dose Angdi\n4. Bangarpet Delicacies\n\n");
    for(int i=1; i<=36; i++)
    printf("*");
    printf("\n\n");
}
void foodstreet()
{
    delay(5);
    printf("\n\nWELCOME TO FOODSTREET!\n\n");
    delay(12);
    printf("We've got the following food stalls!\n");
    delay(15);
    int option1, option2, flag;
    do
    {
    delay(16);
    foodstreetmenu();
        delay(10);
        printf("\nChoose by entering the corresponding number: \n");
    scanf("%d", &option1);
    switch(option1)
    {
        case 1: delay(5); pizzeria();
            break;
        case 2: delay(5); waffles();
            break;
        case 3: delay(5); dosa();
            break;
        case 4: delay(5); chats();
            break;
        default: printf("\nplease enter the appropriate number: \n\n"); continue;
    }
    printf("do you want to continue with your food journey? 1. yes 2. no\n");
    scanf("%d", &option2);
    if(option2==1)
    {
        delay(5);
        foodstreet();
        delay(5);
        flag=0;
        continue;
    }
    else main1();
 }while(flag==0);
}
void funridesmenu()
{
    printf("choose from the following rides: \n\n");
    for(int i=1; i<=36; i++)
    printf("*");
    printf("\n");
   printf("\n1. Ferris Wheel\n2. Roller Coaster\n3. Bumper Cars\
\n4. Carousel\n5. Pendulum Ride\n\n");
    for(int i=1; i<=36; i++)
    printf("*");
    printf("\n\n");
}
void funrides()
{
    int p=0;
    int choice, option1, n, flag=0;
    float bill=0;
    delay(5);
    printf("Welcome to FUNRIDES!\n");
    delay(12);
    printf("We've got the following rides for you to check out!\n\n\n");
    delay(15);
    do{
        delay(16);
        funridesmenu();
        printf("\nChoose by entering the corresponding numbers: ");
    scanf("%d", &choice);
        delay(10);
        if(choice==1||choice==4||choice==3) printf("\n\n[ Each ticket costs Rs. 50 ]\n\n");
        else printf("\n\n[ Each ticket costs Rs. 100 ]\n\n");
        printf("enter number of people taking the ride: ");
        scanf("%d", &n);
        delay(10);
        bill+=(choice==1||choice==4||choice==3)?(n*50):(n*100);
        printf("\n\n*** here's your bill amount: %0.2f ***\n\n", bill);
        delay(15);
        int yes;
        yes = billpay(bill);
        if(yes==1)
        looprides();
        printf("\n\ndo you want to check out the other rides? 1. yes 2. no : \n");
        scanf("%d", &option1);
        if(option1==1)
        {
            delay(5);
            funrides();
            delay(5);
            flag=0;
            continue;
        }
        else main1();
    }while(option1!=2);
}
void above_and_beyondmenu()
{
    printf("\n1. Ghost House\n2. Fortune Teller\n3. Headhunter's Dark Ride\n");
}
void above_and_beyond()
{
    int option1, option2, flag, n=1;
    float bill=0;
    delay(5);
    printf("\n\nWelcome to ABOVE AND BEYOND!\n");
    delay(12);
    printf("We've got the following places for you to check out!\n");
    delay(15);
    do
    {
        above_and_beyondmenu();
        printf("\n");
        printf("Choose by entering the corresponding numbers: ");
    scanf("%d", &option1);
        if(option1==1||option1==3)
        {
            printf("enter number of people: ");
            scanf("%d", &n);
        }
    switch(option1)
    {
        case 1: ghosthouse(n);
            break;
        case 2: fortuneteller();
            break;
        case 3: delay(15);
            bill+=(n*70);
            printf("Welcome to Headhunter's Dark Ride!!\n\n");
            printf("\n*** your bill amount is: %0.2f ***\n\n", bill);
            delay(15);
            int yes;
            yes= billpay(bill);
            
            if(yes==1)
            {
                printf("Hope you enjoy your ride!\n\n");
                delay(20);
                printf("*\n\n");
                delay(20);
                printf("*\n\n");
                delay(20);
                printf("*\n");
                delay(20);
                printf("\n\nYour ride has been completed...\n");
                delay(15);
            }
            printf("Hope you visit us again!\n\n");
            delay(15);
            break;
        default: printf("\nplease enter the appropriate number: \n\n"); continue;
    }
    printf("do you want to continue with your above and beyond journey? 1. yes 2. no\n");
    scanf("%d", &option2);
    if(option2==1)
    {
        delay(5);
        above_and_beyond();
        delay(5);
        flag=0;
        continue;
    }
    else main1();
 }while(flag==0);
}
void ghosthouse(int n)
{
    float bill=0;
    int flag=0, option2;
    printf("Welcome to GHOST HOUSE!\n\n");
    do
    {
        bill+=n*70;
        int ran= rand()%10;
        
        delay(15);
        printf("\n*** your bill amount: %0.2f ***\n", bill);
        delay(20);
        int yes;
        yes = billpay(bill);
        if(yes==1)
        {
            printf("Hope you enjoy your visit to the ghost house!\n\n");
            delay(20);
            printf("Let's find out if you were caught by any of our ghosts!!!\n\n\n");
            loop();
            printf("\n\nYour visit has been completed...\n");
            delay(15);
            printf((ran==3||ran==5||ran==7||ran==9)?"\nYou were \
caught by the ghost!!!\n":"You are safe and the ghost did not catch you!\n");
                delay(50);
        }
            printf("\nHope you visit us again!\n\n");
            delay(15);
    printf("do you want to continue with your above and beyond journey? 1. yes 2. no : ");
    scanf("%d", &option2);
    
    if(option2==1)
    {
        flag=0;
        above_and_beyond();
    }
    else
        main1();
        
    }while(flag==0);
}
void fortuneteller()
{
    int flag1=1, ran=0;
    int n, option2, flag=0;
    float bill=0;
    printf("\n\nWant to know what message you might need for your future?\n\n");
    delay(10);
    printf("You've come to the right place!\n\n");
    delay(14);
    printf("enter number of people: ");
    scanf("%d", &n);
        bill= (n*50);
        printf("\n*** your bill amount: %0.2f ***\n\n", bill);
    int yes;
    yes = billpay(bill);
    if(yes==1)
    {
    printf("Let's find out what message you've got!\n");
            delay(15);
            printf("But before that...\n\n");
            delay(13);
    for(int i=1; i<=n; i++)
    {
        printf("1. Aries\n2. Taurus\n3. Gemini\n4. Cancer\n5. Leo\n6. Virgo\n7. Libra \
\n8. Scorpio\n9. Saggitarius\n10. Capricorn\n11. Aquarius\n12. Pisces\n\n");
        delay(10);
        do
        {
            printf("enter your zodiac sign by choosing apt number from above list : ");
            int zodiacsign;
            scanf("%d", &zodiacsign);
            printf("\n\nHere's something interesting about ");
            switch(zodiacsign)
            {
                case 1: ran = (rand()%10) + 2;
                printf("Aries: \n\n");
                delay(10);
                printf("Aries is that they are born with a sense of entitlement, \
which helps them achieve great things but can also be off-putting sometimes.\n\n");
                break;
                case 2: ran = (rand()%3) + 1;
                    printf("Taurus: \n\n");
                    delay(10);
                    printf("Taurus likes to steady things, making sure they and the people around them are secure.\n\n");
                    break;
                case 3: ran = (rand()%9);
                    printf("Geminis: \n\n");
                    delay(10);
                    printf("Geminis are resourceful, charming, wise, and adventurous. One of the interesting \
zodiac sign facts about Geminis is that they tend to be more comfortable with change");
                    break;
                    case 4: ran = (rand()%4) + 4;
                    printf("Cancers: \n\n");
                    delay(10);
                    printf("Cancers are intuitive, nurturing, and sensitive. They tend to be loyal friends and\
are always willing to offer their shoulder to cry on.\n\n");
                    break;
                case 5: ran = (rand()%6) + 1;
                    printf("Leos: \n\n");
                    delay(10);
                    printf("Leos are passionate and creative. They are natural leaders who love to put on a show.\n\n");
                    break;
        case 6: ran = (rand()%5) + 3;
        printf("Virgos: \n\n");
            delay(20);
        printf("Virgos are analytical (sometimes a little too analytical). They are dedicated, resourceful, and hardworking.\n\n");
            break;
        case 7: ran = (rand()%10) + 1;
        printf("Libra: \n\n");
            delay(20);
        printf("If you are a Libra you have expensive taste. They are the trendsetters and generally\
    the ones to get a party started.\n\n");
            break;
        case 8: ran = (rand()%7);
        printf("Scorpio: \n\n");
            delay(20);
        printf("Scorpios are by far the most passionate of the signs. They also tend to be secretive and shadowy. One of the interesting zodiac sign facts about Scorpio is that they are easily overlooked.\n\n");
            break;
        case 9: ran = (rand()%10) -1;
        printf("Saggitariius: \n\n");
            delay(20);
        printf("Sagittarius is a free spirit who is happiest in open spaces with plenty of adventure. They tend to be optimistic and open-minded. Sagittarians are often some of the funniest people you know.\n\n");
            break;
        case 10: ran = (rand()%8);
        printf("Capricorn: \n\n");
            delay(20);
        printf("Capricorns are loyal, family-minded, and hardworking. Capricorns like the simplest and straightest route when making a plan. They are also not ones to deviate from the plan once it is set.\n\n");
            break;
        case 11: ran = (rand()%4) + 2;
        printf("Aquarius: \n\n");
            delay(20);
        printf("Aquarius is a quirky sign. It is ruled by the planet Uranus, the only planet that spins on its side, so Aquarius tends to march to the beat of its own drum. That is not to say they stand out in a crowd.");
            break;
        case 12: ran = (rand()%8) - 2;
        printf("Pisces: \n\n");
            delay(20);
        printf("Pisces has the luxury of having experienced the energy of all the signs that came before it, so they are the old soul of the zodiac.");
            break;
        default: flag1=0; printf("\nplease enter the appropriate number: \n\n");
    }
    }while(flag1==0);
    delay(40);
    printf("\n\nHere's your fortune message!\n\n");
    delay(40);
    switch(ran)
    {
        case 1: printf("\n\nNow is the time to try something new.\n\n");
            break;
        case 2: printf("\n\nThere is no greater pleasure than seeing your loved \
ones prosper.\n\n");
            break;
        case 3: printf("\n\nBe on the lookout for coming events; They cast\
 their shadows beforehand.");
            break;
        case 4: printf("\n\nA dream you have will come true.\n\n");
            break;
        case 5: printf("\n\nWealth awaits you very soon.\n\n");
            break;
        case 6: printf("\n\nIf you feel you are right, stand firmly by your convictions.\n\n");
            break;
        case 7: printf("\n\nThe greatest risk is not taking one.\n\n");
            break;
        case 8: printf("\n\nAn exciting adventure awaits you.\n\n");
            break;
        case 9: printf("\n\nIf you can dream it, you can become it!\n\n");
            break;
        default: printf("The best way to know the future is to create it.\n\n");
    } } }
    printf("\n\ndo you want to continue with your above and\
 beyond journey? 1. yes 2. no : ");
    scanf("%d", &option2);
    if(option2==1)
    {
        delay(5);
        above_and_beyond();
        delay(5);
        flag=0;
    }
    else main1();
               
}
void mainmenu()
{
    printf("\n\nwhere do you want to go? ");
    delay(7);
    printf("\n1. foodstreet");
    delay(7);
    printf("\n2. fun rides");
    delay(6);
    printf("\n3. above and beyond");
    delay(6);
    printf("\n4. exit\n\n");
    delay(5);
}

void virtualcarnivalinfo()
{
        printf("\n\nHello!");
        delay(20);
        printf("\n\nWe are Karishma, Neha and Rakshitha :)");
        delay(20);
        printf("\n\n\nOur project is based on a Carnival.");
        delay(30);
    printf("\n\nCarnival ");
    delay(15);
    printf("is an annual festival, ");
        delay(15);
    printf("involving");
    delay(15);
    printf("\n* processions,");
    delay(15);
    printf("\n* music,");
    delay(15);
    printf("\n* dancing,");
    delay(15);
    printf("\nand");
    delay(15);
    printf("\n* use of masquerade.");
        delay(30);
        printf("\n\nIt has it's roots honouring the beginning of the new year.");
        delay(30);
    printf("\n\nIt also includes people enjoying at");
    delay(15);
    printf("\n\n* the fun rides,");
    delay(15);
    printf("\n\n* fast food places,");
    delay(15);
    printf("\n\nand other interesting places.\n\n");
        delay(20);
    printf("These activities are suitable for all ages.");
    delay(15);
    printf(" Which is what makes it so special.\n\n");
        delay(30);
    printf("We have tried to ");
    delay(15);
    printf("bring");
    delay(15);
    printf("a live carnival ");
    delay(15);
    printf("on to your laptop screens.\n");
        delay(30);
    printf("Or as you may call it");
    delay(15);
    printf(" a \"virtual\" setup.\n\n\n\n");
        delay(30);
        printf("Now, let's proceed with your Carnival exploration!\n\n\n\n");
        delay(40);
}

void main1()
{
    
    
    int option1, option2, flag=0;
    do
    {
        mainmenu();
        printf("enter here: ");
    scanf("%d", &option1);
        
    switch(option1)
    {
        case 1: foodstreet();
            break;
        case 2: funrides();
            break;
        case 3: above_and_beyond();
            break;
        case 4: exit(0);
        default: printf("\nplease enter the appropriate number: \n\n"); continue;
    }
        printf("do you want to continue with your journey? 1. yes 2. no");
        scanf("%d", &option2);
        
        if(option2==1)
        {
            flag=0;
            continue;
        }
        else
            exit(0);
    }while(flag==0);
}
void main()
{
    int info;
    delay(10);
    for(int i=0; i<35; i++) printf(". ");
    delay(10);
    printf("\n\n.\t\t\t\t\t\tW E L C O M E\t  T O\t\t\t\t\t\t.\n\n");
    delay(10);
    printf(".\t\t\t\t\t\t\tV I R T U A L\t\t\t\t\t\t\t.\n\n");
    delay(10);
    printf(".\t\t\t\t\t\tC A R N I V A L ! ! !\t\t\t\t\t\t.\n\n");
    delay(8);
    for(int i=0; i<35; i++) printf(". ");
    delay(30);
    printf("\n\n\n");
    printf("do you want to know about our project? 1. yes 2. no : ");
    scanf("%d", &info);
    if(info==1) virtualcarnivalinfo();
    
    main1();
}
