#include <stdio.h>
#include <stdlib.h>
#include "string.h"


int main (void) {
	char ciphertext[] = "YARYPNMDDBNEQMPJPNFPKQGJLDQKVNCCNEYPNMDIQKNKQYPNBYCYKKYBHQBLYNMDFQSDQKDQMKEQEYKKJMELJOYDSIJMKGYCSPJMYPPQHFQSBCYKKYBPVQLLNQBFQSAAANMDJMKBQSCAYKQQCJEHQBFQSVQLLNJPNFPKQGJLDQKNMDJLJEGKPNFJKKQQKGYBPVQLLNGYNDDYDUJKGNAQQWNKKGYPKBNMEYBNMDKGYLJAAYBDQKCSKKGYENHHYBDJDMQKVQMRJMVYGJPNSDJYMVYDQKKGYAYEYMDQHCJACQPUYNAKGUNPMQUKQQHJBLAFHJOYDJMKGYLJMDPQHKGYFQSMEYBEYMYBNKJQMQHGQCCJKPDQKNGVQLLNCSKGYGNPAJWYAFYMQSEGCYYMNDDJMEKQUGNKGYCBQSEGKNKHJBPKVQLLNNBESYDKGYLJAAYBVQLLNRQJVJMEVQLLQMQIJMJQM";
	//char key[] = "ABCD";
	char plaintext[]= "YARYPNMDDBNEQMPJPNFPKQGJLDQKVNCCNEYPNMDIQKNKQYPNBYCYKKYBHQBLYNMDFQSDQKDQMKEQEYKKJMELJOYDSIJMKGYCSPJMYPPQHFQSBCYKKYBPVQLLNQBFQSAAANMDJMKBQSCAYKQQCJEHQBFQSVQLLNJPNFPKQGJLDQKNMDJLJEGKPNFJKKQQKGYBPVQLLNGYNDDYDUJKGNAQQWNKKGYPKBNMEYBNMDKGYLJAAYBDQKCSKKGYENHHYBDJDMQKVQMRJMVYGJPNSDJYMVYDQKKGYAYEYMDQHCJACQPUYNAKGUNPMQUKQQHJBLAFHJOYDJMKGYLJMDPQHKGYFQSMEYBEYMYBNKJQMQHGQCCJKPDQKNGVQLLNCSKGYGNPAJWYAFYMQSEGCYYMNDDJMEKQUGNKGYCBQSEGKNKHJBPKVQLLNNBESYDKGYLJAAYBVQLLNRQJVJMEVQLLQMQIJMJQM";
	int freq[26];
	int i, j, k;

	/*
	//Attempting ceaser cipher
	for(j=1; j<=25; j++) {
		for(i=0; i< strlen(ciphertext); i++) {
			if((ciphertext[i]-j)<65) {
				printf("%c",(ciphertext[i]-j) + 26);
			} else {
				printf("%c",ciphertext[i]-j);
			}
		}
		printf("\n");
	}
	*/
	
	// Monoalphabetic cipher
	for(i=0;i<strlen(ciphertext);i++) {
		if(ciphertext[i] == 'A') plaintext[i] = 'L';
		if(ciphertext[i] == 'B') plaintext[i] = 'R';
		if(ciphertext[i] == 'C') plaintext[i] = 'B';
		if(ciphertext[i] == 'D') plaintext[i] = 'D';
		if(ciphertext[i] == 'E') plaintext[i] = 'G';
		if(ciphertext[i] == 'F') plaintext[i] = 'Y';
		if(ciphertext[i] == 'G') plaintext[i] = 'H';
		if(ciphertext[i] == 'H') plaintext[i] = 'F';
		if(ciphertext[i] == 'I') plaintext[i] = 'P';
		if(ciphertext[i] == 'J') plaintext[i] = 'I';
		if(ciphertext[i] == 'K') plaintext[i] = 'T';
		if(ciphertext[i] == 'L') plaintext[i] = 'M';
		if(ciphertext[i] == 'M') plaintext[i] = 'N';
		if(ciphertext[i] == 'N') plaintext[i] = 'A';
		if(ciphertext[i] == 'O') plaintext[i] = 'X';
		if(ciphertext[i] == 'P') plaintext[i] = 'S';
		if(ciphertext[i] == 'Q') plaintext[i] = 'O';
		if(ciphertext[i] == 'R') plaintext[i] = 'V';
		if(ciphertext[i] == 'S') plaintext[i] = 'U';
		if(ciphertext[i] == 'T') plaintext[i] = '_';
		if(ciphertext[i] == 'U') plaintext[i] = 'W';
		if(ciphertext[i] == 'V') plaintext[i] = 'C';
		if(ciphertext[i] == 'W') plaintext[i] = 'K';
		if(ciphertext[i] == 'X') plaintext[i] = '_';
		if(ciphertext[i] == 'Y') plaintext[i] = 'E';
		if(ciphertext[i] == 'Z') plaintext[i] = '_';
	}
	printf("%s\n",plaintext);
	
	/*
	//Polyalphabetic cipher using key
	k=strlen(key);
	for(j=0; j<k; j++) {
		key[j] = key[j]-65;
	}

	for(i=0, j=0; i<strlen(ciphertext); i++, j++) {
		if(j>= k) {
			j -= k;
		}
		if((ciphertext[i]-key[j])<65) {
			printf("%c",(ciphertext[i]-key[j]) + 26);
		} else {
			printf("%c",ciphertext[i]-key[j]);
		}
	}
	printf("\n");
	
	*/

	//Frequency analysis of every letter
	
	for(i=0;i<26;i++){
		freq[i] = 0;
	}

	for(i=0;i<strlen(ciphertext);i++){
		freq[ciphertext[i]-65]++;
	}

	//Print all the frequencies
	for(i=0;i<26;i++){
		printf("%c = %g \n", 65+i, (double)freq[i]/strlen(ciphertext));
	} 
	system("PAUSE");
	return 1;
}