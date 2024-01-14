#0x09. C - Static libraries
A library is not a luxury but one of the necessities of life
Without libraries what have we? We have no past and no future




C static libraries

Build your own C static library

ubuntu@ip-172-31-63-244:~/julien$ l
total 44

ubuntu@ip-172-31-63-244:~/julien$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ubuntu@ip-172-31-63-244:~/julien$ 
ubuntu@ip-172-31-63-244:~/julien$ ar -rc libschool.a *.o
ubuntu@ip-172-31-63-244:~/julien$ ar -t libschool.a
0-print_z.o
1-print_alphabet.o
2-print_tebahpla.o
3-print_base16.o
4-positive_or_not.o
5-print_number.o
print_char.o
ubuntu@ip-172-31-63-244:~/julien$ ranlib libschool.a
ubuntu@ip-172-31-63-244:~/julien$ cat main.c
void print_alphabet(void);

int main(void)
{
        print_alphabet();
        return (0);
}
ubuntu@ip-172-31-63-244:~/julien$ gcc main.c
/tmp/ccQa2r6L.o: In function `main':
main.c:(.text+0x5): undefined reference to `print_alphabet'
collect2: error: ld returned 1 exit status
ubuntu@ip-172-31-63-244:~/julien$ gcc main.c -L. -lschool -o alpha
ubuntu@ip-172-31-63-244:~/julien$ ./alpha
abcdefghijklmnopqrstuvwxyzubuntu
ubuntu@ip-172-31-63-244:~/julien$
