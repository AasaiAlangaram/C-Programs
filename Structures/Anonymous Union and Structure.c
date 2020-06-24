// C Program to demonstrate working of anonymous union 
// The code is taken from geeks website
#include<stdio.h> 
struct Scope 
{ 
    // Anonymous union 
    union
    { 
        char alpha; 
        int num; 
    }; 
}; 
  
int main() 
{ 
    struct Scope x; 
    x.num = 65; 
  
    printf("Address of struct :%p\n",&x);
    printf("Address of alpha :%p\n",&x.alpha);
    printf("Address of num :%p\n",&x.num);
    
    printf("Size of struct :%zd\n",sizeof(x));
    printf("Size of alpha :%zd\n",sizeof(x.alpha));
    printf("Size of num :%zd\n",sizeof(x.num));
    
    // Note that members of union are accessed directly 
    printf("x.alpha = %c, x.num = %d", x.alpha, x.num); 
  
    return 0; 
} 