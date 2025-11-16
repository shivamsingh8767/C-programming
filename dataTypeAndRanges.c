#include<stdio.h>
#include<limits.h>
#include<float.h>

int main()
{
    printf("ranges of different data type in c\n");
    
    //character types
    printf("char: \n");
    printf("size: %zu byte(s)\n", sizeof(char));
    printf("range :%d to %d\n",CHAR_MIN, CHAR_MAX);
    printf("unsigned char : \n");
    printf("size : %zu byte(s)\n",sizeof(unsigned char));
    printf("range : 0 to %u\n\n",UCHAR_MAX);

    //INTEGER TYPES
    printf("short int:\n");
    printf("range : %hd to %hd\n",sizeof(short int));
    printf("range :%hd to %hd\n",SHRT_MIN, SHRT_MAX);
    printf("unsigned short int : \n");
    printf("size : %zu byte(s)\n",sizeof(unsigned short int));
    printf("range :0 to %hu\n\n",USHRT_MAX);
    
printf("int:\n");
    printf("  Size: %zu byte(s)\n", sizeof(int));
    printf("  Range: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int:\n");
    printf("  Size: %zu byte(s)\n", sizeof(unsigned int));
    printf("  Range: 0 to %u\n\n", UINT_MAX);

    printf("long int:\n");
    printf("  Size: %zu byte(s)\n", sizeof(long int));
    printf("  Range: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long int:\n");
    printf("  Size: %zu byte(s)\n", sizeof(unsigned long int));
    printf("  Range: 0 to %lu\n\n", ULONG_MAX);

    printf("long long int:\n");
    printf("  Size: %zu byte(s)\n", sizeof(long long int));
    printf("  Range: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("unsigned long long int:\n");
    printf("  Size: %zu byte(s)\n", sizeof(unsigned long long int));
    printf("  Range: 0 to %llu\n\n", ULLONG_MAX);

    // Floating-point types
    printf("float:\n");
    printf("  Size: %zu byte(s)\n", sizeof(float));
    printf("  Range: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("double:\n");
    printf("  Size: %zu byte(s)\n", sizeof(double));
    printf("  Range: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("long double:\n");
    printf("  Size: %zu byte(s)\n", sizeof(long double));
    printf("  Range: %Le to %Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
