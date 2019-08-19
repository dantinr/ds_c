//冒泡排序

#include <stdio.h>
#include <stdlib.h>
#define MAX 10          //存储元素个数


typedef struct
{
    int key;            //排序键值
} RecordType;

typedef RecordType List[MAX+1];


//冒泡排序
void BubbleSort(List R,int n)
{
    int i,j,endsort;
    for(i=1;i<=n;i++)
    {
        endsort = 0;
        for(j=1;j<=n-i;j++)
        {
            if(R[j].key > R[j+1].key)
            {
                R[0] = R[j];
                R[j] = R[j+1];
                R[j+1] = R[0];
                endsort = 1;
            }
        }

        if(endsort==0){break;}
    }
}


int main()
{
    printf("\n数组长度 %d\n",MAX);
    //待排序序列 arr
    List arr;      //
    //初始化序列
    for(int i=1;i<=MAX;i++)
    {
        int rd = rand()%100;
        //printf("%d ",rd);
        arr[i].key = rd;
    }

    printf("\n******************************\n");
    for(int j=1;j<=MAX;j++)
    {
        printf("[%d]=%d ",j,arr[j].key);
    }

    printf("\n");

    printf("\n************冒泡排序***********\n");
    //冒泡排序
    int length = 5;
    printf("\n数组长度 %d\n",MAX);
    printf("\n存储元素个数 %d\n",length);
    BubbleSort(arr,length);

    for(int j=1;j<length;j++)
    {
        printf("[%d]=%d ",j,arr[j].key);
    }

    printf("\n");


}
