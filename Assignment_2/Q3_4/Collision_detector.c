#include <stdio.h>
#include <string.h>
#include "crc.h"
#include <time.h>

//Build a string and check its CRC with a predefined value.
//The string will go through ascii characters 32-126, which are typable on the keyboard
//Once every possibility has been used, the string expands in size (by shifting the null character over)
int main(void)
{
	char str[100];
	time_t t0, t1;
	crc_t crc;
	int i, j, k, l;
	double timediff;
	t0 = time(0);
	for(i=1; i<100; i++) {
		str[i] = '\0';
		for(j=0; j<i; j++) {
			str[j] = 32;
		}
		while((unsigned char)str[i-1] <= 127) {
			//check, increment any thats above the ascii table
			for(j=0;j<i-1;j++) {
				if((unsigned char)str[j] >= 127) {
						str[j] = 32;
						str[j+1] = str[j+1] + 1;
				}
			}
			crc = crc_init();
			crc = crc_update(crc, (unsigned char *)str, i);
			crc = crc_finalize(crc);
			if((unsigned long) 0xe6e5c283 == crc) { //CRC('123456789') = 0xcbf43926, CRC('b6e98880913adcb24108621903b25f76') = 0xe6e5c283, put in the one you are looking for
				t1 = time(0);
				timediff = difftime(t1,t0);
				printf("time = %f seconds, string = %s value = 0x%lx\n", timediff, str, (unsigned long)crc);
				system("PAUSE");
				return;
			}
			str[0] = str[0] + 1;
		}
	}
	system("PAUSE");
	return 0;
}