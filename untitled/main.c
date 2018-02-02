//#include <stdio.h>
//#include <mem.h>

/*union hiddenMessage{
    char chars[21];
    int ints[6];

};

int main() {

    union hiddenMessage intCharacters;
    strcpy(intCharacters.chars, "Vim is for nerds");
    for(int i = 0; i < 5; ++i) {
        printf("%i, ", intCharacters.ints[i]);
    }
    printf("%i\n", intCharacters.chars[19]);
    printf("%s\n", intCharacters.chars);

}
*/

/*	#include <stdio.h>

	int main()
	{
	    int intarray[10] = {10,20,30,40,50,0,7,7,7,7};
	    //-----------------------^
	    int *pointer = &intarray[(sizeof(intarray) / sizeof(intarray[0]))/2];

        for(int i = ((sizeof(intarray) / sizeof(intarray[0]))/2); i<(sizeof(intarray) / sizeof(intarray[0])); i++){
            printf("%d\n",*pointer);
            pointer++;
        }
	    return 0;
	}*/


#include <stdio.h>

void f1(int var)
{
    printf("this is f1 and var is: %d\n", var);
}

void f2(int var)
{
    printf("this is f2 and var is: %d\n", var);
}

void f3(int var)
{
    printf("this is f3 and var is: %d\n", var);
}

int main()
{
    void(*pf[])(int) = {f1,f2,f3};


    int c = 0;
    while(c < 3)
    {
        pf[c](c);
        ++c;
    }

    return 0;
}