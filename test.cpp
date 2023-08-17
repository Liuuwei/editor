//
// Created by Liuwei on 2023/8/10.
//

#include <unistd.h>
#include <stdio.h>

int main() {
    char c;
    read(STDIN_FILENO, &c, 1);
    printf("%d\n", c);
}