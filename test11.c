#include<stdio.h>
#include<stdint.h>

void main()
{
    uint32_t num, neg_num, imm12, sign;
    num = 10;
    neg_num = ~(num) + 1;
    int32_t intnum = (int32_t)neg_num;
    printf("%d\n",intnum);
    //uint64_t num2 = neg_num;
    //printf("%d\n",neg_num);
    //printf("%d\n",num2);
    //imm12 = 0x7FF & num;
    //printf("%d\n",imm12);
    //sign = 1 << 12;
    //imm12 = sign | imm12;
    //printf("%d\n",imm12);

}
