
/*
Name:Navaneet Pillai    
Student ID:201939018
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // max: 10 args × 4 chars + 9 '-' + '\0'
    char buffer[50] = "";

    // skip argv[0]
    for (int i = 1; i < argc; i++) {

        strcat(buffer, argv[i]);

        // add '-' if not last
        if (i < argc - 1) {
            strcat(buffer, "-");
        }
    }

    printf("%s\n", buffer);

    return 0;
}
