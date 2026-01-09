#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char kitap_ad[50];
	char yazar[50];
	int sayfa;
	float fiyat;
}kutuphane;

int main(int argc, char *argv[]) {
	
	kutuphane kut[100];
	int x,i=0,j;
	char ya[50];
	printf("**************Kutuphane Yonetim Sistemi************\n");
	
	do
	{
		printf("1.Kitap bilgisi ekleyin\n");
		printf("2.Kitap bilgilerini goster\n");
		printf("3.Yazara ait tum kitaplari goster\n");
		printf("4.Kutuphanedeki toplam kitap sayisini goster\n");
		printf("5.Cikis\n");
		do
		{
			printf("lutfen seciminizi yapiniz:");
			scanf("%d",&x);
			getchar();
		}
		while(x<1 || x>5);
		if(x==1)
		{
			printf("kitap adi:");
			gets(kut[i].kitap_ad);
			printf("yazar adi:");
			gets(kut[i].yazar);
			printf("sayfa sayisi:");
			scanf("%d",&kut[i].sayfa);
			printf("fiyati:");
			scanf("%f",&kut[i].fiyat);
			getchar();
			i=i+1;
		}
		else if(x==2)
		{
			for(j=0;j<i;j++)
			{
				printf("%d.kitap bilgileri\n",j+1);
				printf("kitap adi:%s\nyazar adi:%s\nsayfa sayisi:%d\nfiyat:%f\n",kut[j].kitap_ad,kut[j].yazar,kut[j].sayfa,kut[j].fiyat);
			}
		}
		else if(x==3)
		{
			printf("hangi yazara ait kitaplari gormek istersin:");
			gets(ya);
			for(j=0;j<i;j++)
			{
				if(strcmp(kut[j].yazar,ya)==0)
				{
					printf("%s\n",kut[j].kitap_ad);
				}
			}
		}
		else if(x==4)
		{
			printf("kutuphanedki toplam kitap sayisi:%d\n",i);
		}
	}
	while(x!=5);
	
	
	
	
	
	return 0;
}
