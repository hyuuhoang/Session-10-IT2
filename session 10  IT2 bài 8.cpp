#include <stdio.h>
int main(){
	int arr[]={1,3,5,2,7,4,9};
	int size=sizeof(arr)/sizeof(int);
	int n;
	printf("Moi ban nhap vao phan tu muon tim: ");
	scanf("%d", &n);
	int flag=-1;
	for(int i=0;i<size;i++){
		if(arr[i]==n){
			flag=i;
		break;
		}
	}
	if(flag!=-1){
		printf("Phan tu o vi tri thu %d", flag);
	}else{
		printf("Phan tu khong co trong mang ");
	}
	return 0;
}
