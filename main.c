#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <windows.h>

int raiseToPower(int num, int pow);

int *valueToBinary(int i, int rank);

int *elemsForN(int size);

int *binaryElements(int *func, int size, int count);

int *massToBooleanFunc(int *arr, int *arr2, int *arr3, int size, int count, int t);

char *to_ANF(int *func, int size);

int log2int(int n);

int *GF(int n);


int main(int args, char **argv) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int n = 3;
    int size = raiseToPower(2, n);
    int *binElems = elemsForN(size);
    int f[] = {1, 1, 0, 0, 1, 1, 0, 1};

    for (int i = 0; i < size; ++i) {
        printf("%d ", binElems[i]);
    }
    printf("\nBooleans\n");
    int *ar = binaryElements(binElems, size, n);
    for (int i = 0; i < n; ++i) {
        printf("x%d = ", i + 1);
        for (int j = 0; j < size; ++j) {
            printf("%d ", ar[i * size + j]);
        }
        printf("\n");
    }

    int *ar3 = calloc(size, sizeof(int));
    int modulus = 0;
    for (int t = 0; t < size; ++t) {
        int *ar2 = massToBooleanFunc(binElems, ar, f, size, n, t);
        for (int i = 0; i < size; ++i) {
            if(f[i]!=0) {
                //printf("%d ", ar2[i]);
                modulus = modulus^ar2[i];
            }
        }
        //printf("modulus = %d ", modulus);
        ar3[t]=modulus;
        modulus = 0;
    }

    printf("\n");
    printf("\n");
    printf("BOOLEAN FUNCTION\n");

    for (int i = 0; i < size; ++i) {
        printf("%d ", ar3[i]);
    }

    printf(to_ANF(ar3, size));

    return 0;
}

int *binaryElements(int *arr, int size, int count) {
    int *result = calloc(size * count, sizeof(int));
    for (int i = 0; i < size; ++i) {
        int *bin = valueToBinary(arr[i], count);
        for (int j = 0, k = count - 1; j < count; ++j, k--) {
            result[j * size + i] = bin[k];
            //printf("%d\n",bin[j]);
        }
    }
    return result;
}

int *massToBooleanFunc(int *arr, int *arr2, int *arr3, int size, int count, int t){
    int calc = 0;
    int calc2 = 1;
    int calc3 = 0;
    int calculationFunc = 0;
    //printf("\n");
    //printf("t = %d", t);
    //printf("\n");
    int *calculation = calloc(size, sizeof(int));
    for (int i = 0; i < size; ++i) {
        int *bin = valueToBinary(arr[i], count);
        for (int j = 0, k = count - 1; j < count; ++j, k--) {
            //printf("\n");
            //printf("bin k = %d", bin[k]);
            //printf("\n");
            //printf("arr2 i = %d", arr2[j*size+t]);
            calc = raiseToPower(arr2[j*size+t],bin[k]);
            //printf("\n");
            //printf("raised to power = %d", calc);
            //printf("%d\n",bin[j]);
            calc2 = calc2*calc;
            //printf("\n");
            //printf("calc2 = %d", calc2);
            calculation[arr[i]] = calc2;
        }
        calc2 = 1;
        /*for (int r = 0; r<size; ++r){
            if(arr3[r]!=0){
                printf(" rrr %d", calculation[r]);
                calc3 = calc3^calculation[r];
                printf("\n");
                printf("calc3 = %d", calc3);
            }
        }*/
        calc3 = 0;
        //printf("\n");
        //printf("calc3 = %d", calc3);
        //printf("\n");
    }
    return calculation;
}



int *valueToBinary(int i, int rank) {
    int *res = calloc(rank, sizeof(int));
    for (int j = 0; j < rank; ++j) {
        res[rank - 1 - j] = i >> j & 1u;
    }
    return res;
}

int raiseToPower(int num, int pow) {
    int res = 1;
    for (int i = 0; i < pow; ++i) {
        res *= num;
    }
    return res;
}

int *elemsForN(int size) {
    int *result = calloc(size, sizeof(int));
    for (int i = 0; i < size; ++i) {
        result[i] = i;
    }
    return result;
}

int *anfRepresentation(int *func, int sizeOfF) {
    int newSize = sizeOfF;
    int *result = calloc(newSize, sizeof(int));
    int j;
    for (int i = 0; i < newSize; ++i) {
        if (func[i] != 0) {
            result[i] = i;
            ++j;
        } else if (func[i] == 0) {
            result[i] = -1;
        }
    }
    printf("\n");
    return result;
}


int log2int(int n) {
    for (int i = 0; i < n; ++i) {
        if (raiseToPower(2, i) == n) return i;
    }
    return -1;
}

int *GF(int n) {
    int *arr = malloc(n * raiseToPower(2, n) * sizeof(int));
    for (int i = 0; i < raiseToPower(2, n); ++i) {
        for (int j = n - 1; j >= 0; --j) {
            *(arr + i * n + j) = (i >> (n - j - 1)) & 1u;
        }
    }
    return arr;
}

char *to_ANF(int *func, int size) {
    int n = log2int(size);
    int length = 0;
    int *table = GF(n);
    int *matrix = malloc(sizeof(int) * size * size);
    for (int i = 0; i < size; ++i) {
        *(matrix + i) = *(func + size - 1 - i);
    }
    for (int i = 1; i < size; ++i) {
        for (int j = 0; j < size - i; ++j) {
            *(matrix + i * size + j) = (*(matrix + size * (i - 1) + j) + *(matrix + size * (i - 1) + (j + 1))) % 2;
        }
    }
    /*for (int i = 0; i < size; ++i) {
        if (*(matrix + i * size)) {
            for (int j = 0; j < n; ++j) {
                if ((table + i * n + j)) {
                    length += 2;
                }
            }
            length++;
        }
    }*/
    int *coefs = malloc(size * sizeof(int));
    for (int i = 0; i < size; ++i) {
        coefs[i] = *(matrix + i * size);
        if (coefs[i]) {
            for (int j = 0; j < n; ++j) {
                if (*(table + i * n + j)) {
                    length += 2;
                }
            }
            length++;
        }
    }

    char *result = malloc(sizeof(char) * length - 1);
    sprintf(result, "");
    for (int i = 0; i < size; ++i) {
        coefs[i] = *(matrix + i * size);
        if (i == 0 && coefs[i] == 1) {
            sprintf(result, "1");
        }
        if (coefs[i]) {
            for (int j = 0; j < n; ++j) {
                if (*(table + i * n + j)) {
                    sprintf(result, "%sx%d", result, n - j);
                }
            }
            sprintf(result, "%s+", result);
        }
    }
    result[strlen(result) - 1] = '\0';
    free(coefs);
    free(table);
    free(matrix);
    return result;
}

