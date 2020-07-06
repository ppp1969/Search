//순차 탐색은 순서가 없는 리스트일 때, 사용 = 정렬된 상태아닐 경우
//순차 탐색은 리스트가 작거나, 가끔 한번씩 탐색할 경우에만 사용한다.
//정렬된 상태라면 이진 탐색이 훨씬 빠르다.

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
	int length = sizeof arr / sizeof arr[0];	//int배열이므로 int로 크기를 나누면 길이값이 나옴.
	int data = 0; 
	int index = 0; 

	printf("데이터 :\n");
	for(int i = 0; i<max;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");

	for(;;){

	printf("찾으시는 데이터를 입력해주세요( 0 입력시 검색종료 ): "); 
	scanf("%d", &data);
	if (data==0){break;}
	index = sequentialSearch(arr, length, data);

	if(index == -1) printf("데이터를 찾지 못했습니다.\n");
	else printf("데이터는 %d번째에 있습니다.\n", index); 

	} 

	return 0; 
}
