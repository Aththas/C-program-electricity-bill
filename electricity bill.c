#include<stdio.h>
int main()
{
    char x[10],y[20],z[50],q[60],w,Q;
    int a,b,c,d,f,i,k,choice;
    float e=0,g=0,h=0,j=0,l=0,T=0;

    printf("\n                 LANKA ELECTRICITY CO.(PRIVATE) LTD.\n\n");
    printf("Bill Print Date(DD/MM/YYYY) : ");
    gets(x);
    printf("Invoice Number : ");
    gets(y);
    printf("Rev./Mr./Ms. : ");
    gets(z);
    printf("Address : ");
    gets(q);

    do
    {
        printf("\n   1-Bill calculations\n   2-Exit\n   select a number :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {

            printf("\n  Meter starts : ");
            scanf("%d",&a);

            printf("  Meter stop : ");
            scanf("%d",&b);
            c=b-a;

            if(0<c)
            {
                printf("  Total units used for this month : %d\n\n",c);


                printf("            \t\t\t\tBill calculation for %d Units\n\n",c);
                printf("  ---------------------------------------------------------------------------------------------\n");
                printf("  | Traffic Block\t|\t Unit Rate\t|\t Units Consumed\t|\tTotal Charges |\n");
                printf("  ---------------------------------------------------------------------------------------------\n  |   0 -  62     \t|\t   7.85   \t|\t");

                if(c<63)
                {
                    printf("      %d      \t|",c);
                    printf("\t      %.2f  |",c*7.85);
                    printf("\n  ---------------------------------------------------------------------------------------------\n  |  63 -  93     \t|\t   10.00  \t|\t");
                    printf("      --      \t|");
                    printf("\t      ------  |");
                    printf("\n  ---------------------------------------------------------------------------------------------\n  |  94 - 124     \t|\t   27.75  \t|\t");
                    printf("      --      \t|");
                    printf("\t      ------  |");
                    printf("\n  ---------------------------------------------------------------------------------------------\n  | 125 - 149     \t|\t   32.00  \t|\t");
                    printf("      --      \t|");
                    printf("\t      ------  |");
                    printf("\n  ---------------------------------------------------------------------------------------------\n  |     149+      \t|\t   45.00  \t|\t");
                    printf("      --      \t|");
                    printf("\t      ------  |");
                    printf("\n  ---------------------------------------------------------------------------------------------\n");


                    printf("\n          Final Electricity Bill : %.2f",c*7.85);

                }
                else if(c<94)
                {

                    printf("      62      \t|");
                    printf("\t      %.2f  |",62*7.85);
                    printf("\n  ---------------------------------------------------------------------------------------------\n  |  63 -  93     \t|\t   10.00  \t|\t");
                    d=c-62;
                    printf("      %d      \t|",d);
                    e = d*10;
                    printf("\t      %.2f  |",e);
                    printf("\n  ---------------------------------------------------------------------------------------------\n  |  94 - 124     \t|\t   27.75  \t|\t");
                    printf("      --      \t|");
                    printf("\t      ------  |");
                    printf("\n  ---------------------------------------------------------------------------------------------\n  | 125 - 149     \t|\t   32.00  \t|\t");
                    printf("      --      \t|");
                    printf("\t      ------  |");
                    printf("\n  ---------------------------------------------------------------------------------------------\n  |     149+      \t|\t   45.00  \t|\t");
                    printf("      --      \t|");
                    printf("\t      ------  |");
                    printf("\n  ---------------------------------------------------------------------------------------------\n");

                    T= (62*7.85)+e;
                    printf("\n          Final Electricity Bill : %.2f",T);
                }
                else if(c<125)
                {

                    printf("      62      \t|");
                    printf("\t      %.2f  |",62*7.85);
                    printf("\n  ---------------------------------------------------------------------------------------------\n  |  63 -  93     \t|\t   10.00  \t|\t");
                    printf("      31      \t|");
                    h=31*10;
                    printf("\t      %.2f  |",h);
                    printf("\n  ---------------------------------------------------------------------------------------------\n  |  94 - 124     \t|\t   27.75  \t|\t");
                    f=c-93;
                    printf("      %d      \t|",f);
                    g = f*27.75;
                    printf("\t      %.2f  |",g);
                    printf("\n  ---------------------------------------------------------------------------------------------\n  | 125 - 149     \t|\t   32.00  \t|\t");
                    printf("      --      \t|");
                    printf("\t      ------  |");
                    printf("\n  ---------------------------------------------------------------------------------------------\n  |     149+      \t|\t   45.00  \t|\t");
                    printf("      --      \t|");
                    printf("\t      ------  |");
                    printf("\n  ---------------------------------------------------------------------------------------------\n");

                    T= (62*7.85)+h+g;
                    printf("\n          Final Electricity Bill : %.2f",T);

                }
                else if(c<150)
                {

                    printf("      62      \t|");
                    printf("\t      %.2f  |",62*7.85);
                    printf("\n  ---------------------------------------------------------------------------------------------\n  |  63 -  93     \t|\t   10.00  \t|\t");
                    printf("      31      \t|");
                    h=31*10;
                    printf("\t      %.2f  |",h);
                    printf("\n  ---------------------------------------------------------------------------------------------\n  |  94 - 124     \t|\t   27.75  \t|\t");

                    printf("      31      \t|");
                    g = 31*27.75;
                    printf("\t      %.2f  |",g);
                    printf("\n  ---------------------------------------------------------------------------------------------\n  | 125 - 149     \t|\t   32.00  \t|\t");
                    i=c-124;
                    printf("      %d      \t|",i);
                    j=i*32;
                    printf("\t      %.2f  |",j);
                    printf("\n  ---------------------------------------------------------------------------------------------\n  |     149+      \t|\t   45.00  \t|\t");
                    printf("      --      \t|");
                    printf("\t      ------  |");
                    printf("\n  ---------------------------------------------------------------------------------------------\n");

                    T= (62*7.85)+h+g+j;
                    printf("\n          Final Electricity Bill : %.2f",T);

                }
                else

                {


                    printf("      62      \t|");
                    printf("\t      %.2f  |",62*7.85);
                    printf("\n  ---------------------------------------------------------------------------------------------\n  |  63 -  93     \t|\t   10.00  \t|\t");
                    printf("      31      \t|");
                    h=31*10;
                    printf("\t      %.2f  |",h);
                    printf("\n  ---------------------------------------------------------------------------------------------\n  |  94 - 124     \t|\t   27.75  \t|\t");

                    printf("      31      \t|");
                    g = 31*27.75;
                    printf("\t      %.2f  |",g);
                    printf("\n  ---------------------------------------------------------------------------------------------\n  | 125 - 149     \t|\t   32.00  \t|\t");
                    printf("      25      \t|");
                    j=25*32;
                    printf("\t      %.2f  |",j);
                    printf("\n  ---------------------------------------------------------------------------------------------\n  |     149+      \t|\t   45.00  \t|\t");
                    k=c-149;
                    printf("      %d      \t|",k);
                    l=k*45;
                    if(l<1000)
                    {
                        printf("\t      %.2f  |",l);
                    }
                    else
                    {
                        printf("\t     %.2f  |",l);
                    }

                    printf("\n  ---------------------------------------------------------------------------------------------\n");
                    T= (62*7.85)+h+g+j+l;
                    printf("\n          Final Electricity Bill : %.2f\n",T);

                }




            }
            else
            {
                printf("Unit can not be a Negative");
            }
        }

        break;
        case 2:
        {
            break;
        }
        }
        printf("\n\nTo continue press 'y'\n");
        fflush(stdin);
        scanf("%c",&Q);
    }

    while(Q=='Y' || Q=='y');
    printf("\n          Thanks for Using our service ");
    puts(z);
    getch();
    return 0;

}
