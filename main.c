#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char date[11], name[51];
    int net, grand, tax, dis, sub;
    printf("Welcome to Tilak's Cafe\n");
    printf("Enter the date: ");
    scanf("%10s", date);
    printf("Enter the First Name: ");
    getchar();  // Consume newline character
    scanf("%50[^\n]", name);

    printf("Press Enter to Know the Menu\n");
    printf("coffee       Rs 50/-\n");
    printf("tea          Rs 20/-\n");
    printf("samosa       Rs 10/-\n");
    printf("pizza        Rs 150/-\n");
    printf("burger       Rs 100/-\n");
    printf("\nEnter number of items do you want to order?\n");
    int n;
    scanf("%d", &n);
  printf ("Enter the item name then its quantity\n");

    char item[n][20];
    int quantity[n];
    int price[n];

    for (int i = 0; i < n; i++) {
        scanf("%s %d", item[i], &quantity[i]);
        if (strcmp(item[i], "pizza") == 0) {
            price[i] = 50 * quantity[i];
        } else if (strcmp(item[i], "coffee") == 0) {
              price[i] = 50 * quantity[i];
        } else if (strcmp(item[i], "tea") == 0) {
            price[i] = 20 * quantity[i];
        } else if (strcmp(item[i], "samosa") == 0) {
            price[i] = 10 * quantity[i];
        } else if (strcmp(item[i], "pizza") == 0) {
            price[i] = 150 * quantity[i];
        } else if (strcmp(item[i], "burger") == 0) {
            price[i] = 100 * quantity[i];
        } else {
            printf("Invalid choice\n");
            return 1;
        }
    }

    // Calculate subtotal
    sub = 0;
    for (int i = 0; i < n; i++) {
        sub += price[i];
    }

    dis = (sub / 100) * 5;
    net = sub - dis;
    tax = (net / 100) * 18;
    grand = net + tax;

    printf("\n\n\n\n\n\n\n\t\t\t\t\tTilak Cafe\n------------------------------------------------\n");
    printf("Date: %s\nInvoice to: %s\n", date, name);
    printf("------------------------------------------------\n");
    printf("Items\t\t\t\tQty\t\t\t\tTotal\n");
    printf("------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%s\t\t\t\t%d\t\t\t\t%d\n", item[i], quantity[i], price[i]);
    }

    printf("\n------------------------------------------------\n");
    printf("Sub Total\t\t\t\t\t\t\t%d\n", sub);
    printf("Discount(5%%)\t\t\t\t\t\t%d\n", dis);
    printf("\nNet Total\t\t\t\t\t\t\t%d\n", net);
    printf("\nTax(18%%)\t\t\t\t\t\t\t%d\n", tax);
    printf("------------------------------------------------\n");
    printf("Grand Total\t\t\t\t\t\t\t%d\n", grand);
    printf("------------------------------------------------\n");

    return 0;
}
