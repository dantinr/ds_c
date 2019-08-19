//冒泡排序

#include <stdio.h>
#include <stdlib.h>
#define MAX 10          //存储元素个数


typedef struct
{
    int key;            //排序键值
    //int node;
} RecordType;

typedef RecordType List[MAX];


//冒泡排序
void BubbleSort(List R,int n)
{
    //变量初始化
    int i,j,endsort;
    RecordType tmp;

    for(i=0;i<=n-1;i++)
    {
        endsort = 0;
        //交换位置
        for(j=0;j<=n-i-1;j++)
        {
            if(R[j].key > R[j+1].key)
            {
                tmp = R[j];
                R[j] = R[j+1];
                R[j+1] = tmp;
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
    RecordType arr[MAX];      //
    //初始化序列
    for(int i=0;i<MAX;i++)
    {
        int rd = rand()%100;
        printf("%d ",rd);
        arr[i].key = rd;
    }

    printf("\n******************************\n");
    for(int j=1;j<=MAX;j++)
    {
        printf("%d ",arr[j].key);
    }

    printf("\n");

    printf("\n************冒泡排序***********\n");
    //冒泡排序
    int length = 9;
    printf("\n数组长度 %d\n",MAX);
    printf("\n存储元素个数 %d\n",length);
    BubbleSort(arr,length);

    for(int j=1;j<=length;j++)
    {
        printf("%d ",arr[j].key);
    }

    printf("\n");


}