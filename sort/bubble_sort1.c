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
    int i,j,endsort;
    RecordType tmp;

    for(i=1;i<=n-1;i++)
    {
        endsort = 0;
        for(j=1;j<=n-i-1;j++)
        {
            if(R[j].key > R[j+1].key)
            {
                tmp = R[j];
                R[j] = R[j+1];
                R[j+1] = tmp;
                endsort = 1;
            }
        }
        if(endsort==0){
            break;
        }
    }
}


int main()
{
    //待排序序列 arr
    RecordType arr[MAX+1];      //
    //初始化序列
    for(int i=1;i<=MAX;i++)
    {
        int rd = rand()%98;
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
    int length = 10;
    BubbleSort(arr,length);

    for(int j=1;j<=MAX;j++)
    {
        printf("%d ",arr[j].key);
    }

    printf("\n");


}