// #include<stdio.h>
void main(){
    int num,val;
    for(num=1;num<=10;num++){
        for(val=1;val<=5;val++){
            printf(val);
        }
        printf("\n");
    }
}

// sort

// #include<stdio.h>
void main(){
    int arr[]={1,3,6,2,8,0};
    int len,temp;
    len=sizeof(arr)/sizeof(arr[0]);
    printf("%d",len);
    printf("\n");
    for(int i=0;i<=len;i++){
        for(int j=i+1;j<=len;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
           
        }  
         
    }
    for(int i=0;i<len;i++){
                printf("%d",arr[i]);
            }
}