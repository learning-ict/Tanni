#include <stdio.h>

int main(){
    int arr[5][5][5] = {
                    {
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5}
                    },
                    {
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5}
                    },
                    {
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5}
                    },
                    {
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5}
                    },
                    {
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5},
                        {1,2,3,4,5}
                    }
                };

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 5; k++){
                // printf("%d ", arr[i][j][k]);
                printf("%d ", arr[1][2][3]);
                break;
            }
            break;
        }
        break;
    }
    printf("\n");
}