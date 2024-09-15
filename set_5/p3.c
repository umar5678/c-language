// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2. .: F = mg


#include <stdio.h>

float force_fo_gravity(float m, float g);

int main()
{
    float m = 40.0;
    float g = 9.8;

    float F = force_fo_gravity(m, g);
     printf("Force of gravity for mass %.2f on Earth is %.2f \n", m, F );
     

    return 0;
}

float force_fo_gravity(float m, float g)
{
    return m * g;
}