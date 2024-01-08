 #include<stdio.h>
int main(){
	int dizi[456],eleman,ara,sol,sag,ort,yedek,min;
	printf("eleman sayisi: ");
	scanf("%d",&eleman);
	printf("%d elemani sirali gir:",eleman);
	printf("\n");
	for(int i=0;i<eleman;i++){
		scanf("%d",&dizi[i]);
	}
	printf("aranan elemani gir: ");
	scanf("%d",&ara);
	for(int i=0;i<eleman-1;i++){
		min=i;
		for(int j=i+1;j<eleman;j++){
			if(dizi[j]<dizi[min]){
				min=j;
			}
		}
		yedek=dizi[i];
		dizi[i]=dizi[min];
		dizi[min]=yedek;
	}
	for(int i=0;i<eleman;i++){
		printf("%d ",dizi[i]);
	}
	printf("\n");
	sol=0;
	sag=eleman-1;
	while(sol<=sag){
		ort=(sol+sag)/2;
		if(dizi[ort]==ara){
			printf("%d aranan eleman %d. indis %d. terimde bulunmustur.",ara,ort,ort+1);
			break;
		}
		else if(dizi[ort]<ara){
			sol=ort+1;
		}
		else{
			sag=ort-1;
		}
		if(sol>sag){
			printf("Arnan eleman bulunamadý");
		}
	}
	return 0;
}
