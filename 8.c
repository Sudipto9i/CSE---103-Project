#include<stdio.h>
int main(){
    int n , sum=0,countnearAverage=0;
    printf("enter number of persons : ");
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid number of persons. \n");
        scanf("%d",&n);
        return 0;
    }
    int age[n];
    for(int i=0;i<n;i++){
        printf("enter %d persons age : ",i+1);
        scanf("%d",&age[i]);
        sum = sum + age[i];
    }
    float average = (float)sum/n;
    float lowerBound = average * 0.9;
    float upperBound = average * 1.1;
    for(int i=0;i<n;i++){
        if(age[i]>=lowerBound && age[i]<=upperBound){
            countnearAverage++;
        }
    }
    printf("\n Average age : %.2f\n",average);
    printf("Number of persons near average : %d\n",countnearAverage);
    return 0;
}