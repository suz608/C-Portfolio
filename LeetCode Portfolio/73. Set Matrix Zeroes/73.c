// Zican Hao
// CS5008 Spring 2023

// 73. Set Matrix Zeroes (medium)
// https://leetcode.com/problems/set-matrix-zeroes/description/

void setZero(int** matrix, int i,int j,int RowSize, int ColSize){
    int x,y;
    for(x=0;x<ColSize;x++){
        matrix[i][x]=0;
    }
    for(y=0;y<RowSize;y++){
        matrix[y][j]=0;
    }
}

void setZeroes(int** matrix, int matrixSize, int* matrixColSize){
    if(matrix!=NULL){
        int i,j;
        int arr[80000];
        for(i=0;i<80000;i++){arr[i]=-1;}
        int z=0;
        for(i=0;i<matrixSize;i++){
            for(j=0;j<*matrixColSize;j++){
                if(matrix[i][j]==0){
                    arr[z]=i;
                    arr[z+1]=j;
                    z+=2;
                }
            }
        }
        j=0;
        while(arr[j]!=-1){
            setZero(matrix,arr[j],arr[j+1],matrixSize,*matrixColSize);
            j+=2;
        }
    }  
}
