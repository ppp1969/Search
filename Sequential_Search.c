//���� Ž���� ������ ���� ����Ʈ�� ��, ��� = ���ĵ� ���¾ƴ� ���
//���� Ž���� ����Ʈ�� �۰ų�, ���� �ѹ��� Ž���� ��쿡�� ����Ѵ�.
//���ĵ� ���¶�� ���� Ž���� �ξ� ������.

#include <stdio.h> 
#define max 9
int sequentialSearch(int dataArr[], int length, int findData){
	for(int i = 0; i < length; i++)
		if (dataArr[i] == findData)
			return i; 
	return -1; 
} 

int main(void) { 
	int arr[] = {789, 99, 41, 3, 56, 100, 132, 4, 51};
	int length = sizeof arr / sizeof arr[0];	//int�迭�̹Ƿ� int�� ũ�⸦ ������ ���̰��� ����.
	int data = 0; 
	int index = 0; 

	printf("������ :\n");
	for(int i = 0; i<max;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	for(;;){

	printf("ã���ô� �����͸� �Է����ּ���( 0 �Է½� �˻����� ): "); 
	scanf("%d", &data);
	if (data==0){break;}
	index = sequentialSearch(arr, length, data);

	if(index == -1) printf("�����͸� ã�� ���߽��ϴ�.\n");
	else printf("�����ʹ� %d��°�� �ֽ��ϴ�.\n", index); 

	} 

	return 0; 
}
