#include <stdio.h>
void tampil(char isi[2][3][6]);
main(){
	char data[2][3][6] = {"1", "soto", "5000", "2", "bakso", "3500"};
	tampil(data);
}
void tampil(char isi[2][3][6]){
	for(int x=0;x<2;x++){
		for(int y=0;y<3;y++){
			printf("\t%s",isi[x][y]);
		}
		printf("\n");
	}
}
