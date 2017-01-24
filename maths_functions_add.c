//addition

#include <stdio.h>

int add (int x, int y){ 
    return (x + y);
}

int main ()

{ 
    
    int x, y;
    
    printf("Please enter a value: "); scanf("%i", &x); 
    printf("Please enter second value: "); scanf("%i", &y);  
    printf("your end product:%i\n", add(x , y) );
    
    return 0; 
} 
