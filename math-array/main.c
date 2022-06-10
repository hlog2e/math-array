#include <stdio.h> //C언어의 기본 입출력 라이브러리

// 등차수열에 관한 계산을 진행하는 함수 입니다.
void arithmeticProgression() {
    int startValue, gongCha, hang; //정수 형식의 수열의 시작 값, 공차, 항의 개수의 변수를 선언한다.
    long long tempStorage = 0; // 나중에 모든 항의 합을 구하기 위한 임시 저장공간의 변수를 선언한다.
    printf("---------등차수열 계산---------\n"); //정보출력
    printf("수열의 시작을 알려주세요.\n"); //정보출력
    scanf("%d",&startValue); //수열의 시작값을 입력받아 변수에 저장한다.
    printf("공차를 알려주세요.\n"); //정보출력
    scanf("%d",&gongCha); //공차를 입력받아 변수에 저장한다.
    printf("몇 번째 항까지 구해볼까요?.\n"); //정보출력
    scanf("%d",&hang); //몇 번째 항까지 구할지 입력받아 변수에 저장한다.
    //for 반복분 : i(인터벌)값을 실행될때 마다 1씩 증가시켜 구하는 항의 수 보다 작을때만 작동하는 반복문이다.
    for(int i=0; i < hang ; i++ ){
        printf(" %d", startValue); //현재 반복횟수에 따른 항을 출력한다.
        tempStorage = tempStorage + startValue; //임시저장소에 항의 값을 누적시켜 합계를 구한다.
        startValue = startValue + gongCha; //기존에 있던 항의 값에 공차만큼 더한다.
    }
    printf("\n등차수열의 합계는 : %lld\n",tempStorage); //등차수열의 항의 최종합계를 구한다.
}

// 등비수열에 관한 계산을 진행하는 함수 입니다.
void geometricSequence() {
    long long startValue; //정수 형식의 수열의 시작 값 (등비수열은 곱하기 이기 때문에 고용량) 선언
    long long tempStorage = 0; //나중에 모든 항의 합을 구하기 위한 임시 저장공간의 변수를 선언한다.
    int  gongBee, hang; //정수 형식의 수열의 시작 값, 공차, 항의 개수의 변수를 선언한다.
    printf("---------등비수열 계산---------\n");//정보출력
    printf("수열의 시작을 알려주세요.\n"); //정보출력
    scanf("%lld",&startValue); //수열의 시작값을 입력받아 변수에 저장한다.
    printf("공비를 알려주세요.\n"); //정보출력
    scanf("%d",&gongBee); //공비를 입력받아 변수에 저장한다.
    printf("몇 번째 항까지 구해볼까요?.\n"); //정보출력
    scanf("%d",&hang); //몇 번째 항까지 구할지 입력받아 변수에 저장한다.
    //for 반복분 : i(인터벌)값을 실행될때 마다 1씩 증가시켜 구하는 항의 수 보다 작을때만 작동하는 반복문이다.
    for(int i=0; i < hang ; i++ ){
        printf(" %lld", startValue); //현재 반복횟수에 따른 항을 출력한다.
        tempStorage = tempStorage + startValue; //임시저장소에 항의 값을 누적시켜 합계를 구한다.
        startValue = startValue * gongBee; //기존에 있던 항의 값에 공비만큼 곱한다.
    }
    printf("\n등비수열의 합계는 : %lld\n",tempStorage); //등비수열의 항의 최종합계를 구한다.
}


int main() {
    int selection; //사용자로부터 입력받는 등차수열의 종류에 관한 변수이다.
    
    printf("---------등차,등비 수열 계산기---------\n"); //정보출력
    printf("수열의 종류를 선택해주세요.\n"); //사용자로부터 입력받을 데이터를 설명
    printf("1:등차수열\n"); //등차수열 출력
    printf("2:등비수열\n"); //등비수열 출력
    scanf("%d",&selection); //사용자로부터 등차수열 종류를 입력받는다.
    
    //switch 문을 통하여 입력에 따른 수열 함수를 실행한다.
    switch (selection) {
        case 1: //1이 입력되었다면
            arithmeticProgression(); //등차수열
            break;
        case 2: //1이 입력되었다면
            geometricSequence(); //등비수열
            break;
    }return 0;
    
    return 0;
}

