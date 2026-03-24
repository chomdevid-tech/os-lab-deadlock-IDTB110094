#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if(argc != 2) {
        printf("Usage: sign_book 'Chom Devid'\n");
        return 1;
    }

    FILE *file = fopen("/home/g11-chom-devid/guestbook.txt", "a");

    if (file == NULL) {
        printf("Error opening guestbook.\n");
        return 1;
    }

    fprintf(file, "Visitor signed: %s\n", argv[1]);
    fclose(file);

    printf("Successfully signed the VIP guestbook!\n");

    return 0;
}
