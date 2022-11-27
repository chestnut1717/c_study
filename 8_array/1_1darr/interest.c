# include <stdio.h>

int main(void){
    
    int rate;
    int years;

    printf("Enter interest rate: ");
    scanf("%d", &rate);
    printf("Enter number of years");
    scanf("%d", &years);

    int rate_arr[years];
    
    printf("Years  ");
    for (int r; r < rate+5; r++){
        printf("  %-4.d\%", r);
    }
    // printf("years     %-4.d\%  %-4.d\%  %-4.d\%  %-4.d\%  %-4.d\%", rate, rate+1, rate+2, rate);



    return 0;
}