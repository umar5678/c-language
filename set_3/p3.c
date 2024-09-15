// 1. Where the taxable salary income does not exceed Rs. 600,000, the rate of income tax is 0%.

// 2. Where the taxable salary income exceeds Rs. 600,000 but does not exceed Rs. 1,200,000, the rate of income tax is 5% of the amount exceeding Rs. 600,000.


// 3. Where the taxable salary income exceeds Rs. 1,200,000 but does not exceed Rs. 2,200,000, the rate of income tax is Rs. 30,000+ 15% of the amount exceeding Rs. 1,200,000.

// 4. Where the taxable salary income exceeds Rs. 2,200,000 but does not exceed Rs. 3,200,000, the rate of income tax is Rs. 180,000 + 25% of the amount exceeding Rs. 2,200,000.

// 5. Where the taxable salary income exceeds Rs. 3,200,000 but does not exceed Rs. 4,100,000, the rate of income tax is Rs. 430,000 + 30% of the amount exceeding Rs. 3,200,000.

// 6. Where the taxable salary income exceeds Rs. 4,100,000, the rate of income tax is Rs. 700,000 + 35% of the amount exceeding Rs. 4,100,000.

#include <stdio.h>

int main()
{
    int income, tex = 0;
    printf("Enter Your annual income: \n" );
    scanf("%d", &income);

    if(income > 600000)
    {
        if(income <= 1200000)
        {
            tex = 0.5 * (income - 600000);

        }
        else if (income <= 2200000)
        {
            tex = 0.15 * (income - 1200000) + 30000;
        }
        else if ( income <= 3200000)
        {
            tex = 0.25 * (income - 2200000) + 180000;
        }
        else if (income <= 4100000)
        {
            tex = 0.30 * (income - 3200000) + 430000;
        }
        else if (income > 4100000)
        {
            tex = 0.35 * (income - 4100000) + 700000;
        }
    }

    printf("Your tax is: %d\n", tex);

    return 0;
}