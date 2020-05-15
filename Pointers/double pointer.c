#include <stdio.h> 
  
int main() 
{ 
  
    // Null pointer 
    char* np = NULL; 
  
    // Pointer to null pointer 
    char** pnp = &np; 
  
    if (*pnp == NULL) { 
        printf("Pointer to a null pointer is valid\n"); 
    } 
    else { 
        printf("Pointer to a null pointer is invalid\n"); 
    } 
  
    return 0; 
}