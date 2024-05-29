#include<stdio.h>
#include<stdlib.h>
void knapsack(int n,int w[],int p[],int c){
    float x[20],total;
    int remain=c,i;
    for(int i=0;i<n;i++){
        x[i]=0.0;
    }
    for(i=0;i<n;i++){
        if(w[i]>remain){
            break;
        }
        else{
            x[i]=1.0;
            total=total+p[i];
            remain=remain-w[i];
        }
    }
    if(i<n){
        x[i]=(float)remain/w[i];
        total=total+(x[i]*p[i]);
    }
    printf("Maximum profit is %f",total);
}
int main(){
    int w[10],p[10],n,c;
    float r[10],temp;
    printf("Enter no of items\n");
    scanf("%d",&n);
    printf("Enter profits and weights of the items\n");
    for(int i=0;i<n;i++){
        printf("Enter profit of item %d: ",i+1);
        scanf("%d",&p[i]);
        printf("Enter weight of item %d: ",i+1);
        scanf("%d",&w[i]);
        r[i]=(float)p[i]/(float)w[i];
    }
    printf("Enter capacity\n");
    scanf("%d",&c);
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++)
        {
            if(r[i]<r[j])
            {
                temp = r[i];
                r[i]=r[j];
                r[j]=temp;

                temp = p[i];
                p[i]=p[j];
                p[j]=temp;

                temp = w[i];
                w[i]=w[j];
                w[j]=temp;
            } 
        }
    }
    knapsack(n,w,p,c);
}
