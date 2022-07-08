#include<stdio.h>
#include<string.h>

int main()
{
     int code, adult, child;
     float price, total, adult_total, child_total;
     char destination[20], return_ticket;

     printf("\n--------------------------------------");
     printf("\n             DESTINATION              ");
     printf("\n--------------------------------------");
     printf("\n  1.  Penang           (RM 45.00)    ");
     printf("\n  2.  Kelantan         (RM 38.00)     ");
     printf("\n  3.  Perlis           (RM 63.00)     ");
     printf("\n--------------------------------------\n");

     printf("Return Ticket [Y/N]     : ");
     scanf("%c", &return_ticket);
     printf("Enter destination code  : ");
     scanf("%d", &code);
     printf("Enter adult             : ");
     scanf("%d", &adult);
     printf("Enter child             : ");
     scanf("%d", &child);

     switch(code)
     {
          case 1: strcpy(destination, "Penang"); price = 45.00; break;
          case 2: strcpy(destination, "Kelantan"); price = 38.00; break;
          case 3: strcpy(destination, "Perlis");  price = 63.00; break;
          default : strcpy(destination, "Invalid Code"); price = 0.00; break;
     }

     adult_total = adult * price;
     child_total = child * (price * 0.5);

     total = adult_total + child_total;

     if (return_ticket == 'Y')
        total = total * 2;


     printf("\n--------------------------------------");
     printf("\n                RECEIPT               ");
     printf("\n--------------------------------------");
     printf("\nDestination   : %s", destination);
     printf("\nPrice         : RM %.2f", price);
     printf("\nAdult         : %d", adult);
     printf("\nChild         : %d", child);
     printf("\nAdult Price   : RM %.2f", adult_total);
     printf("\nChild Price   : RM %.2f", child_total);
     printf("\nReturn Ticket : %c", return_ticket);
     printf("\nPayment       : RM %.2f\n", total);

     return 0;
}
