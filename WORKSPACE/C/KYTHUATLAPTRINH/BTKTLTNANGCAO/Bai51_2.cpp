#include <stdio.h>
#include <string.h>
void xxd(char x[]){
    size_t len = strlen(x);
    if (x[len-1]=='\n')
    {
        x[len-1] == '\0';
    }
    
}

void xuatCacTuPhanBiet(char s[100]){
    char *token;
    char delim[] = " \t\n";
    token = strtok(s, delim);
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }
    
}

void findLongestWord(char s[100]) {
    char longest_word[100];
    int longest_length = 0;

    char *token = strtok(s, " ");
    while (token != NULL) {
        int len = strlen(token);
        if (len > longest_length) {
            longest_length = len;
            strcpy(longest_word, token);
        }
        token = strtok(NULL, " ");
    }

    printf("Tu co do dai lon nhat la: %s", longest_word);
}

void daoNguocChuoi(char s[100]){
    char *token;
    char delim[] = " \t\n";
    char s1[100][100];
    int dem_tu = 0;
    token = strtok(s, delim);
    while (token != NULL && dem_tu < 100)
    {
        strcpy(s1[dem_tu], token);
        dem_tu++;
        token = strtok(NULL, delim);
    }

    printf("\nCac tu da luu vao chuoi s1: ");
    for (int i = 0; i < dem_tu; i++)
    {
        printf("%s\n", s1[i]);
    }
    
}

int main() {
    char s[100]; printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin); xxd(s);
    printf("Cac tu phan biet la: \n");
    xuatCacTuPhanBiet(s);
    printf("\nTu co do dai max la: ");
    findLongestWord(s);
    return 0;
}
