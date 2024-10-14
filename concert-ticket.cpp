#include<stdio.h>
#include <string.h>
int main(){
	int i=1;
	int pilihan;
	long int tiket[i];
	char nama[i][50];
	printf("--------------------------------------------------\n");
	printf("PENJUALAN TIKET\n");
	printf("\t1. Add Pembelian\n");
	printf("\t2. Lihat history pembelian\n");
	printf("\t3. Exit\n");
    for(;;){
		printf("Pilihan: ");
		scanf("%d", &pilihan);
		if(pilihan==1){
			for(;;){
   				printf("Nama: ");
   				scanf("%s", &nama[i]);
   				int total= strlen(nama[i]);
   				if(total>3 && total<50){
   					for(;;){
   						printf("Jumlah Tiket: ");
						scanf("%d", &tiket[i]);
	   					if(tiket[i]%2 == 0){
	   						printf("Total Pembayaran: %ld\n", tiket[i]*500000);
	   						i++;
	   						break;
	   					}
		   			}break;
	   			}
	   		}
		}else if(pilihan==2){
			if(i != 1){
				char arraynama[100];
				int arraytiket[100];
				printf("_________________________________________________________________________________________\n");
				printf("|\tNo Urut\t|\tNama\t|\tJumlah Tiket\t|\tTotal Pembayaran\t|\n");
				printf("|_______________________________________________________________________________________|\n");
				for(int j=1;j<=i-1;j++){
					printf("|\t%d\t|\t%s\t|\t%d\t\t|\t%ld\t\t\t|\n",j,nama[j],tiket[j],tiket[j]*500000);
					printf("|_______________________________________________________________________________________|\n");
				}
			}
			else{
				printf("tidak ada data\n");
			}
		}
		else if (pilihan == 3){
			break;
		}
	}
	return 0;
}
