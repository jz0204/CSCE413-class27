#include <stdio.h>
#include <string.h>


// to bypass the gets function can't use issue
char *gets(char *buffer);

void waitt(){
    
}
void vulnerable_function() {
    char buffer[64]; // 64 bit buffer size
    printf("Enter your message: ");
    gets(buffer); // get will not check the size of the buffer, 
    // we can use it to implmenet buffer overflow
    printf("You entered: %s\n", buffer);
}

int main() {
    vulnerable_function();
    return 0;
}
