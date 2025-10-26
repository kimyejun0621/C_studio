#include <stdio.h>

//연령대 번호 리턴하기
int ageToGroup(int b){
    int age = 2024 - b ;

    if(age < 7){
        return 0;
    }
    else if(age < 13){
        return 1;
    }
    else if(age < 20){
        return 2;
    }
    else if(age < 30){
        return 3;
    }
    else if(age < 60){
        return 4;
    }
    else {
        return 5;
    }
}


int main(){
    int count_person = 0;
    int count[6] = {0};
    int birth_year = 0;
    int year[100] = {0};
    int age = 0;
    //몇명 받을지
    scanf("%d",&count_person);
    
    //사람들의 년도 작성
    for(int i = 0; i < count_person; i++){
        scanf("%d",&year[i]);
    }

    //나이 출력하기
    for(int i = 0; i < count_person; i++){
        int age = 2024 - year[i];
        printf("Age of person %d is %d\n", i+1, age);
    }

    //구분해서 배열에 넣기
    for(int i = 0; i < count_person; i++){
        switch(ageToGroup(year[i])){
            case 0:
            count[0]++;
            break;

            case 1:
            count[1]++;
            break;

            case 2:
            count[2]++;
            break;

            case 3:
            count[3]++;
            break;

            case 4:
            count[4]++;
            break;
            
            case 5:
            count[5]++;
            break;
        }
    }

    //구분한거 출력하기
    printf("The number of infant is %d\n", count[0]);
    printf("The number of child is %d\n", count[1]);
    printf("The number of teenager is %d\n", count[2]);
    printf("The number of young adult is %d\n", count[3]);
    printf("The number of middle-aged is %d\n", count[4]);
    printf("The number of elderly is %d\n", count[5]);

    return 0;
}
