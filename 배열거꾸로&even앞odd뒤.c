#include <stdio.h>

int main_1(void){
  //3.거꾸로 출력
  int arr3[5],m=0;
  
  for (int i = 0; i < 5; i++) {
  	arr3[i] = i + 1;
  	printf("%d ", arr3[i]);
  }
  printf("\n");
  
  int tem;//임시변수
  
  //반복문을 배열길이의 반까지만 실행
  for (int i = 0; i < 5 / 2; i++) {
  	tem = arr3[i];
  	arr3[i] = arr3[4 - i];
  	arr3[4 - i] = tem;
  }
  for (int i = 0; i < 5; i++) {
  	printf("%d ", arr3[i]);
  }
  
  printf("\n");
  
  for (int i = 0; i < 5; i++) {
  	for (int j = i+1; j < 5; j++) {
  		if (arr3[i] < arr3[j]) {
  			m = arr3[j];
  			arr3[j] = arr3[i];
  			arr3[i] = m;
  		}
  	}
  	
  	
  }
  for (int i = 0; i < 5; i++) {
  	printf("%d ", arr3[i]);
  }
  printf("\n");
  printf("----------------------\n");
  //4. 정수 배열 int arr[10]에서 짝수와 홀수를 분리해서 순서대로 배열에 저장
  //배열값 1~10 채우기 -> {2,4,6,8,10,1,3,5,7,9}
  
  int arr5[10], temp = 0,k1=0,k2=0;
  int len_arr5 = sizeof(arr5) / sizeof(arr5[0]);
  int result[10];
  int evenIndex = 0, oddIndex = 0;
  
  for (int i = 0; i < len_arr5; i++) {
  	arr5[i] = i + 1;
  }
  
  for (int i = 0; i < len_arr5; i++) {
  
  	if (arr5[i] % 2 == 0) {
  		result[evenIndex] = arr5[i];
  		evenIndex++;
  	}
  	else {
  		result[5+oddIndex] = arr5[i];
  		oddIndex++;
  	}
  	
  
  }
  
  
  for (int i = 0; i < len_arr5; i++) {
  	printf("%d ", result[i]);
  }
}
