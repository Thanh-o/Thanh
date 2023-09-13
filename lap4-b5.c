#include <stdio.h>
int main() 
{  
    int choice;
    printf("\t\t\t\tMENU");
    printf("\n===================================");
    printf("\n1. CF");
    printf("\n2. C");
    printf("\n3. HDJ");
    printf("\n4. DreamWeaver");
    printf("\n5. RDBMS");
    printf("\n6. Learn Java By Example");
    printf("\n===================================");
    printf("\nChon: ");
    scanf("%d", &choice);
     printf("Ban chon ");
    switch (choice)
    {
        case 1: 
            printf("CF");
            break;
        case 2: 
            printf("C");
            break;
        case 3: 
            printf("HDJ");
            break;
        case 4: 
            printf("DreamWeaver");
            break;
        case 5: 
            printf("RDBMS");
            break;
        case 6: 
            printf("Learn Java By Example");
            break;
        default:
            printf("Khong ton tai");
    }

    return 0;
}
