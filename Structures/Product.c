#include <stdio.h>

struct product
{
    char name[20];
    float costPrice, sellingPrice, pol;
    
};
int main()
{
    struct product Reynolds;
    
    printf("Enter the name of the Product : ");
    scanf("%s", Reynolds.name);
    
    printf("Enter the CostPrice of the product : ");
    scanf("%f", &Reynolds.costPrice);
    
    printf("Enter the SellingPrice of the product : ");
    scanf("%f", &Reynolds.sellingPrice);
    
    Reynolds.pol = Reynolds.costPrice - Reynolds.sellingPrice;
    
    printf("The loss or gain in selling the product is %.2f", Reynolds.pol);
    return 0;
}
