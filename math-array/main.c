#include <stdio.h>

void arithmeticProgression() {
    int startValue, gongCha, hang;
    printf("---------등차수열 계산---------\n");
    printf("수열의 시작을 알려주세요.\n");
    scanf("%d",&startValue);
    printf("공차를 알려주세요.\n");
    scanf("%d",&gongCha);
    printf("몇 번째 항까지 구해볼까요?.\n");
    scanf("%d",&hang);
    for(int i=0; i < hang ; i++ ){
        printf(" %d", startValue);
        startValue = startValue + gongCha;
    }
    
}

void geometricSequence() {
    long long startValue;
    int  gongBee, hang;
    printf("---------등비수열 계산---------\n");
    printf("수열의 시작을 알려주세요.\n");
    scanf("%lld",&startValue);
    printf("공비를 알려주세요.\n");
    scanf("%d",&gongBee);
    printf("몇 번째 항까지 구해볼까요?.\n");
    scanf("%d",&hang);
    for(int i=0; i < hang ; i++ ){
        printf(" %lld", startValue);
        startValue = startValue * gongBee;
    }
}


int main() {
    
    int selection;
    
    
    printf("---------등차,등비 수열 계산기---------\n");
    printf("수열의 종류를 선택해주세요.\n");
    printf("1:등차수열\n");
    printf("2:등비수열\n");
    scanf("%d",&selection);
    
    switch (selection) {
        case 1:
            arithmeticProgression();
            break;
        case 2: geometricSequence();
            break;
            
    }return 0;
    
    
    
    
    return 0;
}

