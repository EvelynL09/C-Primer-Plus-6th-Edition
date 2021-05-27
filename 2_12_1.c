#include <stdio.h>

int main(void)
{
    
    printf("Gustav Mahler\n");/*调用一次printf()函数，把你的名和姓打印在一行。*/
    printf("Gustav\nMahler\n");/*再调用一次printf()函数，把你的名和姓分别打印在两行。*/
    printf("Gustav ");/*然后，再调用两次printf()函数，把你的名和姓打印在一行。*/
    printf("Mahler\n");
    /*输出应如下所示（当然要把示例的内容换成你的名字）:
    Gustav Mahler
    Gustav
    Mahler
    Gustav Mahler
    */
    return 0;
}