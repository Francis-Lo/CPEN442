#include <stdio.h>
#include <stdlib.h>
#include "string.h"


//Instead of using the actual ascii values for the letters, I tend to store the offsets from 65 instead.
//Hence, 'A' would be 0 and 'Z' 25.
int main (void) {
	char ciphertext[] = "OVSFSLUWZEAZWONRBDLNYCTPGOXZPUWOOZWOZHRXWOZVCQNHVPPWVPFKWAPZIBZHRXSQPWGDZKMKMPGOXZFUZEHGOZMTMWXZSFCLXZGAWYYAWLFUNITGZVNWWGPZGTLCUNVKFVVLPSFWNDDYOVZGRSWPHNNWLXCFVQQBACBFVLKBGZTAADXYFNYCCRVGLWYXZPOWMYVKFVVLWLHNIGQUBKKBIPQYARFVVLOZMKBKATSUGTHGHGXZAVLWCUSZPURYBWAZZKZVULCAFVVLCYHQIXYFYWGTAUVKFVVLQYNQXHOKFVVLQYARFVPZTGAZMKVWKMAXNUXHPUCYHQGTWUCYPGRMPKKFTFZKZVUQTGVLZPWBYIGHASFVVLCYHQNRBDPGTGEZWPPZGTKMACEPSQGZTGAVWGZXVPONLPSCHGKEVWRYBWYZOZWLNVMPWYDYFNTOTCWOIXYFNQTGNWZXCYHQIXYFARFVVLAGGKLYBKYBGCQUWOZVKFZVZPWOZVWOMKKXTOTCZXAGVXINUBTCPZTGNRBDLWPGIXYFYRYHGUTOGHIBVWPGWMXGHGGOOZMKBKGTXGZVPLTAQUGVMPQHWGCAOVQSCKFVVLWYWMOSPMGXFCOVSFSLACBFVLAZFCPBYHWPIUOWPGDYUGTGOZBKNGZPYGWPYSCYPGACBMWMKZWPYSCXGQVWOZNWKYZXZOZVQMZSVWMUBKPWKVHGXZEPFTGOGTFTGTCAFVVLCYHQOVSFSLHGGOKZPDYHSCTXKXLCFWPZBWBKAFTCPZWOZHPQTGHGWGVPYXYFYAACBFVLOVSFSLACBFVLCYHQQLUITGEZYCWMASFVVLAZWOLCBWGCOWWRDYONVXKGHSWLXKOWAIMKPZTGZVSRISVPQZXYXTKMZVNHZXNWUBSQKUYQPUNOYHAUFVVLZVOVGPTGDCKFYQWZOZXYXTLQFCZKOVLWWBLCHGXWGCKMWYYQPGWLTPKLZHWMQBZVKMHGXZHGWGNWWGPSGZGAXEBKXCQYYACYHQQLUITGEZYCWMNITGOZZEOCWMVGDYGTXGGADXZONWKXTFZKAXCDMKBKLOMWASFVVLWLZGOVWUFTGHWPYSYXKEFCWZIGHGOWPGRMPKSCNOKMPZGTTPFELCSQPZZVKMCLOZMKOZWLDYRLWLKVACBFVLEZEPLCCLPUPZPEMKWXZHPUCXOZWOEZAVLWYFYROWWXTFZKZVCLPGAFTCLOKZSLGCCIPZHQAGGKPGMKKXWLIUZVNWRBWCDYODQBTMMWATSCVKFVVLAGXEZKKZUQTGQXHCNQPBFCGXDYIUGCXZVQMKPVKGAZBYOCRNQZVWCUPZQLUITGEZYCWMNITGOZMKVWKMNHTHPWMNVABKAXRPDXZOVPAGAKFVVLOVSFSLACBFVLCYHQQLHGKEVWRYBWHGOZBKFTGWTAWATXUWTADYTNZHAOCYTMOCRCBWGCKMDYHGXZXKAGFEBZELFCSQPZXTSCYHQZLCSLHGKEZWAGEKOVOKFVVLCYHQQLHGKEVWRYBWDRZBFWASFVVLPSXZKEGCNQVLWZGCKMXOXTKFKXGADXZOKBPBCLOZMKVGDYFWBKYXXLGCWMXGHGXWMKAGGFXHLWLAAZMKVKFVVLFUTAWMQZNOSQIGHGXEYQBPASFVVLOVSFSLACBFVLLOKZCLYFYNZEPWOZCFNUZOMKTPXWGCZVKMWBVOACBFVLAZWOYVGCFEBIWMPZDYTPLCCYHQTPFCTPACBFVLOCXYXZPUZHBRMWGRVGADXYKRCIHXYUHGXZUWTAOZWOVLZPWBATRNGPKEWLXZUWTAOVSFSLVPYFAFEZIGHGOZMTMWXEMWVWUNMKPZWLIPYWKUVLQYPZHGGZHQOZBWOZDYCZPZHQAGKWAGYTAZWOOZBWOVIGHGWPXTCQQBACBFVLQHGPGOOZBWNPZPSCOWPGOZWOZXNWRXFCMUVKXYMWWXOVFKVWCXWGOVOZZEWLKZZGTFGATAACBFVLVPXTKMOZBWOVZGXCRGTMCLLAVFKMGAZHYIVZWYXGZVKMNWCYAFPUWLHNEWNWUQYXWMAUBZLNZHAOZHYSCKLCACWGDYKPZGGVSQKUWMWLZGQCXVACBFVLWLZNZHAONWYICFWZLWFWYCXELBSCHGKEVWRYBWHGKEZVKMCIPZYZOUFVVLOVSFSLCIBKYHHUCVSXPUYAHGKEVKWLDNOZMKNDYZOZBDZNHQTPGAWLGUHBVZMKCXBPOZDYFGTVWOHGOZXYDYYXZPCKWMAUZVQNZSVWXQKXHGOZVKGCNQAGGOKZYFAQMKOZZKSROZHGOZPZCLWUOZMWYCGTOQXYXQKMAZXYSWGTVHXHHNYUEZSQPUHGKEYHGOXZYFYQGFZKCXKGWBZQHQZXNOYHAUFVVLOVSFSLACBFVLCYHQOVFUHQHGKZCKNVPZZHVRFVVLXTNUZOZHVFXOTLZVADZEYCSQODGTWGGVTXWBZHKEYCWGBPACBFVLCYHQOVSFSLRMWOYAHGXZKEYCBLNWPGHGFEANWLHNKOPZTXZXCXNLVAACUQHGOWXGMKLOZEVFBPWGCKFVVLZVLQHXWPCYHQTPWGYAACBFVLPSGOOZWOYXBMXCYXMYVKFVVLOVSFSL";
	char plaintext[] = "OVSFSLUWZEAZWONRBDLNYCTPGOXZPUWOOZWOZHRXWOZVCQNHVPPWVPFKWAPZIBZHRXSQPWGDZKMKMPGOXZFUZEHGOZMTMWXZSFCLXZGAWYYAWLFUNITGZVNWWGPZGTLCUNVKFVVLPSFWNDDYOVZGRSWPHNNWLXCFVQQBACBFVLKBGZTAADXYFNYCCRVGLWYXZPOWMYVKFVVLWLHNIGQUBKKBIPQYARFVVLOZMKBKATSUGTHGHGXZAVLWCUSZPURYBWAZZKZVULCAFVVLCYHQIXYFYWGTAUVKFVVLQYNQXHOKFVVLQYARFVPZTGAZMKVWKMAXNUXHPUCYHQGTWUCYPGRMPKKFTFZKZVUQTGVLZPWBYIGHASFVVLCYHQNRBDPGTGEZWPPZGTKMACEPSQGZTGAVWGZXVPONLPSCHGKEVWRYBWYZOZWLNVMPWYDYFNTOTCWOIXYFNQTGNWZXCYHQIXYFARFVVLAGGKLYBKYBGCQUWOZVKFZVZPWOZVWOMKKXTOTCZXAGVXINUBTCPZTGNRBDLWPGIXYFYRYHGUTOGHIBVWPGWMXGHGGOOZMKBKGTXGZVPLTAQUGVMPQHWGCAOVQSCKFVVLWYWMOSPMGXFCOVSFSLACBFVLAZFCPBYHWPIUOWPGDYUGTGOZBKNGZPYGWPYSCYPGACBMWMKZWPYSCXGQVWOZNWKYZXZOZVQMZSVWMUBKPWKVHGXZEPFTGOGTFTGTCAFVVLCYHQOVSFSLHGGOKZPDYHSCTXKXLCFWPZBWBKAFTCPZWOZHPQTGHGWGVPYXYFYAACBFVLOVSFSLACBFVLCYHQQLUITGEZYCWMASFVVLAZWOLCBWGCOWWRDYONVXKGHSWLXKOWAIMKPZTGZVSRISVPQZXYXTKMZVNHZXNWUBSQKUYQPUNOYHAUFVVLZVOVGPTGDCKFYQWZOZXYXTLQFCZKOVLWWBLCHGXWGCKMWYYQPGWLTPKLZHWMQBZVKMHGXZHGWGNWWGPSGZGAXEBKXCQYYACYHQQLUITGEZYCWMNITGOZZEOCWMVGDYGTXGGADXZONWKXTFZKAXCDMKBKLOMWASFVVLWLZGOVWUFTGHWPYSYXKEFCWZIGHGOWPGRMPKSCNOKMPZGTTPFELCSQPZZVKMCLOZMKOZWLDYRLWLKVACBFVLEZEPLCCLPUPZPEMKWXZHPUCXOZWOEZAVLWYFYROWWXTFZKZVCLPGAFTCLOKZSLGCCIPZHQAGGKPGMKKXWLIUZVNWRBWCDYODQBTMMWATSCVKFVVLAGXEZKKZUQTGQXHCNQPBFCGXDYIUGCXZVQMKPVKGAZBYOCRNQZVWCUPZQLUITGEZYCWMNITGOZMKVWKMNHTHPWMNVABKAXRPDXZOVPAGAKFVVLOVSFSLACBFVLCYHQQLHGKEVWRYBWHGOZBKFTGWTAWATXUWTADYTNZHAOCYTMOCRCBWGCKMDYHGXZXKAGFEBZELFCSQPZXTSCYHQZLCSLHGKEZWAGEKOVOKFVVLCYHQQLHGKEVWRYBWDRZBFWASFVVLPSXZKEGCNQVLWZGCKMXOXTKFKXGADXZOKBPBCLOZMKVGDYFWBKYXXLGCWMXGHGXWMKAGGFXHLWLAAZMKVKFVVLFUTAWMQZNOSQIGHGXEYQBPASFVVLOVSFSLACBFVLLOKZCLYFYNZEPWOZCFNUZOMKTPXWGCZVKMWBVOACBFVLAZWOYVGCFEBIWMPZDYTPLCCYHQTPFCTPACBFVLOCXYXZPUZHBRMWGRVGADXYKRCIHXYUHGXZUWTAOZWOVLZPWBATRNGPKEWLXZUWTAOVSFSLVPYFAFEZIGHGOZMTMWXEMWVWUNMKPZWLIPYWKUVLQYPZHGGZHQOZBWOZDYCZPZHQAGKWAGYTAZWOOZBWOVIGHGWPXTCQQBACBFVLQHGPGOOZBWNPZPSCOWPGOZWOZXNWRXFCMUVKXYMWWXOVFKVWCXWGOVOZZEWLKZZGTFGATAACBFVLVPXTKMOZBWOVZGXCRGTMCLLAVFKMGAZHYIVZWYXGZVKMNWCYAFPUWLHNEWNWUQYXWMAUBZLNZHAOZHYSCKLCACWGDYKPZGGVSQKUWMWLZGQCXVACBFVLWLZNZHAONWYICFWZLWFWYCXELBSCHGKEVWRYBWHGKEZVKMCIPZYZOUFVVLOVSFSLCIBKYHHUCVSXPUYAHGKEVKWLDNOZMKNDYZOZBDZNHQTPGAWLGUHBVZMKCXBPOZDYFGTVWOHGOZXYDYYXZPCKWMAUZVQNZSVWXQKXHGOZVKGCNQAGGOKZYFAQMKOZZKSROZHGOZPZCLWUOZMWYCGTOQXYXQKMAZXYSWGTVHXHHNYUEZSQPUHGKEYHGOXZYFYQGFZKCXKGWBZQHQZXNOYHAUFVVLOVSFSLACBFVLCYHQOVFUHQHGKZCKNVPZZHVRFVVLXTNUZOZHVFXOTLZVADZEYCSQODGTWGGVTXWBZHKEYCWGBPACBFVLCYHQOVSFSLRMWOYAHGXZKEYCBLNWPGHGFEANWLHNKOPZTXZXCXNLVAACUQHGOWXGMKLOZEVFBPWGCKFVVLZVLQHXWPCYHQTPWGYAACBFVLPSGOOZWOYXBMXCYXMYVKFVVLOVSFSL";
	char key[] = "OTGFXCKURSAWNLYVEPMBHZDQI";
	char alphabet[26] = {0}; //0 means not used yet, 1 means used i=8 j=9
	char letter_1, letter_2;
	int i, j, offset, pos_1, pos_2, diff, do_not_print;
	char nodes[25] = {999};

	//go through the key and setup the digraph
	//We use 'i' to iterate through the characters of the key, and 'j' denotes
	//the next node in the digraph to fill out.
	for(i=0, j=0; i<strlen(key); i++) {
		if(key[i]>= 97){
			offset = key[i] - 97;
		} else if (key[i]>= 65) {
			offset = key[i] - 65;
		} else {
			offset = key[i] - 48;
		}
		//Check to see if the current letter has been used yet
		if(alphabet[offset] == 0) {
			nodes[j] = offset;
			j++;
			if(offset==8 || offset==9) { //If either 'i' or 'j' is used, set both to used
				alphabet[8] = 1;
				alphabet[9] = 1;
			}
			alphabet[offset] = 1;
		}
	}

	//fill in any remaining characters
	while(j<25) {
		i=0;
		while(alphabet[i] != 0) { //find the first letter not used yet
			i++;
		}
		nodes[j] = i;
		alphabet[i] = 1;
		if(i==8 || i==9) {
			alphabet[8] = 1;
			alphabet[9] = 1;
		}
		j++;
	}

	for(i=0; i<25; i++) {
		printf("%c", nodes[i]+65);
		if(i%5==4) printf("\n");
	}


	//Iterate through the cipher, deal with pairs of letters at once
	for(i=0; i<strlen(ciphertext)/2;i++) {
		letter_1 = ciphertext[2*i] - 65;
		letter_2 = ciphertext[2*i+1] - 65;
		//Check positions on the digraph
		for(j=0; j<25; j++) {
			if(nodes[j] == letter_1) pos_1 = j;
			if(nodes[j] == letter_2) pos_2 = j;
		}
		//If same column
		if(pos_1 % 5 == pos_2 % 5) {
			//Shift upwards...the if conditions are for if its in the top row
			if(pos_1<5) {
				pos_1 += 20;
			} else {
				pos_1 -= 5;
			}
			if(pos_2<5) {
				pos_2 += 20;
			} else {
				pos_2 -= 5;
			}
		} else if(pos_1/5 == pos_2/5) {		//If same row
			if((pos_1%5)==0) { //Check to see if its on the very left
				pos_1 += 4;
			} else {
				pos_1 -= 1;
			}
			if((pos_2%5)==0) {
				pos_2 += 4;
			} else {
				pos_2 -= 1;
			}
		} else {
		//Otherwise, swap
				diff = (pos_1%5) - (pos_2%5);
				if(diff<1) diff = -diff; //find the positive horizontal distance between them in the 5x5 digraph
				if((pos_1%5) < (pos_2%5)) { //Add diff to the one thats on the left, minus from the right
					pos_1 += diff;
					pos_2 -= diff;
				} else {
					pos_1 -= diff;
					pos_2 += diff;
				}
		}
		plaintext[2*i] = nodes[pos_1]+65;
		plaintext[2*i+1] = nodes[pos_2]+65;
	}

	//Remove X
	for(i=0; i<strlen(plaintext); i++) {
		do_not_print = 0; 
		if(i!=0 && i!=strlen(ciphertext)-1) { //Not the first or last letters
			if(plaintext[i] == 'X' && (plaintext[i-1] == plaintext[i+1])) { //This is a separation X
				do_not_print = 1;
			}
		} 
		if(!do_not_print) {
			printf("%c",plaintext[i]);
		}
	}
	printf("\n");
	system("PAUSE");
}