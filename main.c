#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int raiseToPower(int num, int pow);

int *valueToBinary(int i, int rank);

int *elemsForN(int size);

int *binaryElements(int *arr, int size, int count);

int *massToBooleanFunc(int *arr, int *arr2, int size, int count, int t);

int *toANF(const int *func, int size);

int HammingWeight(const int *function, int size);

int funcIsBalanced(int weight, int pow);

int algebraicDeg(const int *func, int size, int count);

int HammingDistance(const int *func1, const int *func2, int size);

int funcsIsEqual(const int *func1, const int *func2, int size);

int NLinearity(int *func, int size, int count);

int *toPolarTable(const int *function, int size);

int myModulus(int number, int mod);

int *HadamardCoefficients(const int *func, int size, int count);

int HadamardMax(const int *arr, int size);

int HadamardNLinearity(int max, int count);

int *autoCorrelation(int *func, int size, int count);

int autoCorrelationMax(const int *arr, int size);

int expansionCriterion(const int *func, int size, int k);

int *WHT1PlusSet(const int *func, int size, int newSize, int max);

int *WHT1MinusSet(const int *func, int size, int newSize, int max);

int *WHT2PlusSet(const int *func, int size, int newSize, int max);

int *WHT2MinusSet(const int *func, int size, int newSize, int max);

int arrayUnion(const int a[], int n1, const int b[], int n2, int c[]);

int *linearFunctions(int size, int count, int t);

int *arrayAdd(const int *arr1, int size1, const int *arr2, int size2);

int *improvementSet(const int func[], const int *linearFunctions, int size, int linearMassSize, int WHTPlusSize);

int *HillClimbing(const int f[], const int *improvementSet, int size, int count);

int *roundableHillClimbing(const int f[], int size, int count);

int *SBoxToBooleanFunc(int *sbox, int size, int count);

int *booleanFunctionsToSBox(const int *arr, int size, int count);

int *propertiesOfBooleanFunc(int *arr, int size, int count);

int *linearCombinations(int *arr, int size, int count);

int *propertiesOfLinearCombinations(int *arr, int size, int count);

int *SBoxGenerating(int n, int m);

int *propertiesOfSBox(int *sbox, int size, int count);

int costFunction(int *sbox, int size, int count);

int NLOfSBox(int *sbox, int size, int count);

int ACOfSBox(int *sbox, int size, int count);

int *simulatedAnnealing(int *sbox, int size, int count);

int testNL(int *sbox, int size, int count);

int main(__attribute__((unused)) int args, __attribute__((unused)) char **argv) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int n = 5;
    int size = raiseToPower(2, n);
    //int *binElems = elemsForN(size);
    //int f[] = {0, 0, 1, 0, 0, 1, 1, 0};

    /*int *ar = binaryElements(binElems, size, n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("%d ", ar[i*size+j]);
        }
        printf("\n");
    }/*

    /*int *ar3 = calloc(size, sizeof(int));
    int modulus = 0;
    for (int t = 0, k = size - 1; t < size; ++t, k--) {
        int *ar2 = massToBooleanFunc(binElems, ar, size, n, t);
        for (int i = 0; i < size; ++i) {
            //printf("%d ", ar2[i]);
            if (f[i] != 0) {
                //printf("%d ", ar2[i]);
                modulus = modulus ^ ar2[i];
            }
        }
        //printf("modulus = %d ", modulus);
        ar3[k] = modulus;
        modulus = 0;
    }

    printf("\n");
    printf("TRUTH TABLE FOR FUNCTION\n");

    for (int i = 0; i < size; ++i) {
        printf("%d ", ar3[i]);
    }

    printf("\n");
    printf("\n");
    printf("ANF REPRESENTATION\n");
    int *ar4 = toANF(ar3, size);

    for (int i = 0; i < size; ++i) {
        printf("%d ", ar4[i]);
    }

    printf("\n");
    printf("\n");

    int weight;
    weight = HammingWeight(ar3, size);
    printf("HAMMING WEIGHT = %d ", weight);
    printf("\n");
    int flag = funcIsBalanced(weight, n);

    int dec = algebraicDeg(f, size, n);
    printf("\n\nALGEBRAIC DEGREE = %d ", dec);

    printf("\n");

    int fun11[] = {1, 1, 1, 1};
    int nel = NLinearity(fun11, 4, 2);
    printf("\nNON LINEARITY (DISTANCE) = %d", nel);

    printf("\n");

    printf("\nPOLAR TABLE");
    printf("\n");
    int *polFunc = toPolarTable(fun11, 4);
    for (int i = 0; i < 4; ++i) {
        printf("%d ", polFunc[i]);
    }

    int *ar5 = HadamardCoefficients(fun11, 4, 2);

    int max = HadamardMax(ar5, 4);

    int nl = HadamardNLinearity(max, 2);
    printf("\nHADAMARD NON LINEARITY = %d", nl);
    printf("\n");

    int fun22[] = {1, 0, 1, 1};

    int *ar6 = autoCorrelation(fun22, 4, 2);

    printf("\nAUTO CORRELATING FUNCTION");
    printf("\n");
    for (int i = 3; i >= 0; i--) {
        printf("%d ", ar6[i]);
    }
    printf("\n");

    int AC = autoCorrelationMax(ar6, 4);
    printf("\nAUTO CORRELATION = %d", AC);
    printf("\n");

    int ec = expansionCriterion(fun22, 4, 1);
    printf("\n");
    printf("\nW = %d", ec);
    printf("\n");

    n = 8;
    size = raiseToPower(2, n);
    int fx[size];

    srand(time(NULL));

    for (int i = 0; i < size; ++i) {
        fx[i] = rand() % 2;
    }

    printf("\nMY FUNCTION 2^8");
    printf("\n");
    for (int i = 0; i < size; ++i) {
        printf("%d, ", fx[i]);
    }
    printf("\n");*/

    //int fx[] = {0, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1};
    //int fx[] = {1,0,1,1};
    //int fx[] = {1,0,0,0,1,0,0,0,0,0,1,1,1,1,1,0};
    /*int fx[] = {0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0,
                1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 0, 1, 1, 1, 1, 0, 1,
                0, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 1, 0, 1,
                0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1,
                0, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0,
                1, 1, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1,
                1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0};*/
    /*printf("\nTRUTH TABLE");
    printf("\n");
    //size = 256;
    //size = 16;
    //n = 4;
    //size = 4;
    //n = 2;
    //n = 8;
    for (int i = 0; i < size; ++i) {
        printf("%d ", fx[i]);
    }
    int *fxarr = HadamardCoefficients(fx, size, n);
    printf("\nHADAMARD COEFFICIENTS");
    printf("\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", fxarr[i]);
    }
    int max1 = HadamardMax(fxarr, size);
    //printf("\n max = %d", max1);
    int nl2 = HadamardNLinearity(max1, n);
    printf("\n");
    printf("\nHADAMARD NON LINEARITY = %d", nl2);
    printf("\n");
    int sizeWHT1P = 0;
    for (int i = 0; i < size; ++i) {
        if (fxarr[i] == max1) {
            sizeWHT1P++;
        }
    }
    printf("\nW1 PLUS");
    printf("\n");
    int *WHT1Plus = WHT1PlusSet(fxarr, size, sizeWHT1P, max1);
    if (WHT1Plus) {
        for (int i = 0; i < sizeWHT1P; ++i) {
            printf("%d ", WHT1Plus[i]);
        }
    } else {
        printf("NULL");
    }
    printf("\n");
    int sizeWHT1M = 0;
    for (int i = 0; i < size; ++i) {
        if (fxarr[i] == -max1) {
            sizeWHT1M++;
        }
    }
    printf("\nW1 MINUS");
    printf("\n");
    int *WHT1Minus = WHT1MinusSet(fxarr, size, sizeWHT1M, max1);
    if (WHT1Minus) {
        for (int i = 0; i < sizeWHT1M; ++i) {
            printf("%d ", WHT1Minus[i]);
        }
    } else {
        printf("NULL");
    }
    printf("\n");
    int sizeWHT2P = 0;
    for (int i = 0; i < size; ++i) {
        if (fxarr[i] == (max1 - 2)) {
            sizeWHT2P++;
        }
    }
    printf("\nW2 PLUS");
    printf("\n");
    int *WHT2Plus = WHT2PlusSet(fxarr, size, sizeWHT2P, max1);
    if (WHT2Plus) {
        for (int i = 0; i < sizeWHT2P; ++i) {
            printf("%d ", WHT2Plus[i]);
        }
    } else {
        printf("NULL");
    }
    printf("\n");
    int sizeWHT2M = 0;
    for (int i = 0; i < size; ++i) {
        if (fxarr[i] == (max1 - 2)) {
            sizeWHT2M++;
        }
    }
    printf("\nW2 MINUS");
    printf("\n");
    int *WHT2Minus = WHT2MinusSet(fxarr, size, sizeWHT2M, max1);
    if (WHT2Minus) {
        for (int i = 0; i < sizeWHT2M; ++i) {
            printf("%d ", WHT2Minus[i]);
        }
    } else {
        printf("NULL");
    }
    printf("\n");
    // Отримання об'єднання WHT1P та WHT2P
    if (!WHT1Plus && !WHT2Plus) {
        printf("SET WHT PLUS IS NULL");
    } else {
        int c1[(sizeWHT1P + sizeWHT2P)];
        //printf("%d ", (sizeWHT1P + sizeWHT1P));
        int m1 = arrayUnion(WHT1Plus, sizeWHT1P, WHT2Plus, sizeWHT2P, c1);
        printf("\nSET WHT PLUS");
        printf("\n");
        for (int i = 0; i < m1; ++i) {
            printf("%d ", c1[i]);
        }
    }
    printf("\n");
    // Отримання об'єднання WHT1M та WHT2M
    if (!WHT1Minus && !WHT2Minus) {
        printf("\nSET WHT MINUS IS NULL");
    } else {
        int c2[(sizeWHT1M + sizeWHT2M)];
        //printf("%d ", (sizeWHT1P + sizeWHT1P));
        int m2 = arrayUnion(WHT1Minus, sizeWHT1M, WHT2Minus, sizeWHT2M, c2);
        printf("\nSET WHT MINUS");
        printf("\n");
        for (int i = 0; i < m2; ++i) {
            printf("%d ", c2[i]);
        }
    }
    printf("\n");
    int c1[(sizeWHT1P + sizeWHT2P)];
    int c2[(sizeWHT1M + sizeWHT2M)];
    int m1 = arrayUnion(WHT1Plus, sizeWHT1P, WHT2Plus, sizeWHT2P, c1);
    int m2 = arrayUnion(WHT1Minus, sizeWHT1M, WHT2Minus, sizeWHT2M, c2);
    int linearMassSize = m1 + m2;
    int *c = arrayAdd(c1, m1, c2, m2);
    //printf("Linear mass size %d ", linearMassSize);
    printf("\nOMEGA LINEAR FUNCTIONS TO FIND");
    printf("\n");
    for (int i = 0; i < linearMassSize; ++i) {
        printf("%d ", c[i]);
    }
    printf("\n");
    int *linearFunctionsMass = calloc(linearMassSize * 16, sizeof(int));
    for (int i = 0; i < linearMassSize; ++i) {
        int t = c[i];
        int *arr = linearFunctions(size, n, t);
        for (int j = 0; j < size; ++j) {
            //printf("%d ", arr[j]);
            linearFunctionsMass[i * size + j] = arr[j];
            //printf("%d ", linearFunctionsMass[j]);
        }
    }
    printf("\nLINEAR FUNCTIONS");
    printf("\n");
    for (int i = 0; i < linearMassSize; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("%d ", linearFunctionsMass[i * size + j]);
        }
        printf("\n");
    }
    printf("\nIMPROVEMENT SET:");
    int *ar8 = improvementSet(fx, linearFunctionsMass, size, linearMassSize, m1);
    printf("\n");
    for (int j = 0; j < size; ++j) {
        printf("%d ", ar8[j]);
    }
    printf("\n");*/


    //HillClimbing(fx, ar8, size, n);

    //n = 4;
    //size = raiseToPower(2,n);

    //int fx2[] = {0, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1};

    //int fx2[] = {1,0,1,1};

    /*n = 8;
    size = raiseToPower(2,n);
    int fx2[] = {1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1,
                     0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0,
                     0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1,
                     0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0,
                     0, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 0, 0, 1,
                     1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1,
                     1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 1, 0, 0,};*/

    /*srand ( time(NULL) );
    for (int i = 0; i < size; ++i){
        fx2[i] = rand() % 2;
    }
    printf("\nMY FUNCTION 2^8");
    printf("\n");
    for (int i = 0; i < size; ++i){
        printf("%d, ", fx2[i]);
    }
    printf("\n");*/

    //int *ar9 = roundableHillClimbing(fx, size, n);

    /*printf("\n");
    int newNonLin = ar9[0];
    printf("\nNEW NON LINEARITY AFTER HILL CLIMBING = ");
    printf("%d ", newNonLin);
    printf("\n");*/

    /*if (ar9 != NULL) {
        for (int j = 0; j < size; ++j) {
            printf("%d ", ar9[j]);
        }
    } else {
        printf("\nIMPROVEMENT SET:");
    }*/

    n = 5;
    size = raiseToPower(2, n);
    int sbox[] = {4, 22, 16, 15, 21, 11, 8, 9, 25, 19, 20, 13, 23, 29, 31, 7, 6, 2, 10, 3, 1, 17, 30, 12, 24, 26, 5, 0,
                  14, 18, 28, 27};
    int *ar7 = SBoxToBooleanFunc(sbox, size, n);

    //int *ar8 = propertiesOfBooleanFunc(ar7,size,n);

    /*int *sboxRev = booleanFunctionsToSBox(ar7,size,n);
    printf("\nS-BOX TO DECIMAL FROM BINARY\n");
    for (int i = 0; i < size; ++i){
        printf("%d ", sboxRev[i]);
    }
    printf("\n");
    int sbox2[] = {4, 4, 3, 5, 2, 0, 7, 6};
    int *ar8 = SBoxToBooleanFunc(sbox2, size, n);
    int *sboxRev2 = booleanFunctionsToSBox(ar8,size,n);
    printf("\nS-BOX TO DECIMAL FROM BINARY\n");
    for (int i = 0; i < size; ++i){
        printf("%d ", sboxRev2[i]);
    }
    printf("\n");*/

    int *ar10 = linearCombinations(ar7, size, n);

    printf("\nLINEAR COMBINATION OF BOOLEAN FUNCTIONS\n");
    for (int i = 0; i < size - 1; ++i) {
        printf("Combination %d = ", i + 1);
        for (int j = 0; j < size; ++j) {
            printf("%d ", ar10[i * size + j]);
        }
        printf("\n");
    }

    int *ar11 = propertiesOfLinearCombinations(ar10, size, n);

    printf("\nNON LINEARITY OF S-BOX IS\n");
    printf("%d ", ar11[0]);
    printf("\n");

    printf("\nAUTO CORRELATION OF S-BOX IS\n");
    printf("%d ", ar11[1]);
    printf("\n");

    printf("\nDEC OF S-BOX IS\n");
    printf("%d ", ar11[2]);
    printf("\n");

    if (ar11[3] == 1) {
        printf("\nS-BOX IS BALANCED\n");
    } else {
        printf("\nS-BOX IS NOT BALANCED\n");
    }
    printf("\n");

    int *ar12 = SBoxGenerating(3, 3);

    int *ar13 = simulatedAnnealing(ar12,8,3);


    //int *psb = propertiesOfSBox(ar12,8,3);

    //int NLofS = testNL(ar12, 8, 3);

    //int ACofS = ACOfSBox(ar12, 8, 3);

    //printf("\n");

    //printf("NL = %d ", NLofS);
    //printf("AC = %d ", ACofS);

    /*int cost = costFunction(ar12,8,3);
    printf("\n");
    printf("\nCOST OF S-BOX IS\n");
    printf("%d ", cost);
    printf("\n");*/


    //free(binElems);
    //free(ar);
    //free(ar3);
    //free(ar4);
    //free(ar5);
    //free(ar6);
    free(ar7);
    //free(ar8);
    //free(fxarr);
    //free(WHT1Plus);
    //free(WHT2Plus);
    //free(WHT1Minus);
    //free(WHT2Minus);
    //free(ar9);
    free(ar10);
    free(ar11);

    return 0;
}

//Функція приведення числа за модулем дуякого числа

int myModulus(int number, int mod) {
    if (number < 0) {
        while (number < 0) {
            number = number + mod;
        }
    }
    return number % 2;
}

//Функція перетворення елементів з десяткової СЧ у двійкову СЧ, для певного ступеня N

int *binaryElements(int *arr, int size, int count) {
    int *result = calloc(size * count, sizeof(int));
    for (int i = 0; i < size; ++i) {
        int *bin = valueToBinary(arr[i], count);
        for (int j = 0, k = count - 1; j < count; ++j, k--) {
            result[j * size + i] = bin[k];
        }
    }
    return result;
}

//Функція перетворення масиву чисел у двійковій системі до таблиці істиності

int *massToBooleanFunc(int *arr, int *arr2, int size, int count, int t) {
    int calc;
    int calc2 = 1;
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
            calc = raiseToPower(arr2[j * size + t], bin[k]);
            //printf("\n");
            //printf("raised to power = %d", calc);
            //printf("%d\n",bin[j]);
            calc2 = calc2 * calc;
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
        //printf("\n");
        //printf("calc3 = %d", calc3);
        //printf("\n");
    }
    return calculation;
}

//Функція перетворення числа з десяткової СЧ у двійкову СЧ

int *valueToBinary(int i, int rank) {
    int *res = calloc(rank, sizeof(int));
    for (int j = 0; j < rank; ++j) {
        res[rank - 1 - j] = i >> j & 1;
    }
    return res;
}

//Функція зведення до ступеня

int raiseToPower(int num, int pow) {
    int res = 1;
    for (int i = 0; i < pow; ++i) {
        res *= num;
    }
    return res;
}

//Функція генерації чисел для вхідних векторів ступеня N

int *elemsForN(int size) {
    int *result = calloc(size, sizeof(int));
    for (int i = 0; i < size; ++i) {
        result[i] = i;
    }
    return result;
}

//Функція переведення з таблиці істиності до АНФ

int *toANF(const int *func, int size) {
    int *matrix = calloc(size * size, sizeof(int));
    for (int i = 0; i < size; ++i) {
        matrix[i] = func[size - 1 - i];
    }
    /*for (int k = 0; k < size; ++k) {
        for (int l = 0; l < size; ++l) {
            printf(" %d", matrix[k*size+l]);
        }
        printf("\n");
    }*/
    for (int i = 1; i < size; ++i) {
        for (int j = 0; j < size - i; ++j) {
            matrix[i * size + j] = (matrix[size * (i - 1) + j] + matrix[size * (i - 1) + (j + 1)]) % 2;
            //printf(" %d", matrix[i * size + j]);
        }
        //printf("\n");
    }
    int *coefficients = malloc(size * sizeof(int));
    for (int i = 0; i < size; ++i) {
        coefficients[i] = matrix[i * size];
    }
    free(matrix);
    return coefficients;
}

//Функція обчислення ваги Хеммінга

int HammingWeight(const int *function, int size) {
    int weight = 0;
    for (int i = 0; i < size; ++i) {
        if (function[i]) {
            weight++;
        }
    }
    return weight;
}

//Функція визначення збалансованості функції

int funcIsBalanced(int weight, int pow) {
    int flag = 1;
    if (weight == raiseToPower(2, pow - 1)) {
        printf("\nFunction is BALANCED!");
        return flag;
    } else {
        printf("\nFunction is NOT BALANCED!");
        flag = 0;
        return flag;
    }
}

//Функція визначення алгебраїчного ступеня функції

int algebraicDeg(const int *func, int size, int count) {
    int result;
    int flag = 0;
    int k = 0;
    int highestDec;
    int newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (func[i]) {
            newSize++;
        }
    }
    //printf("\n newSize  = %d",newSize);
    int *deg = calloc(newSize, sizeof(int));
    for (int i = 0; i < size; ++i) {
        if (func[i]) {
            //printf("\ni = %d",i);
            int *bin = valueToBinary(i, count);
            for (int j = 0; j < count; ++j) {
                if (bin[j] == 1) {
                    ++flag;
                }
            }
            deg[k] = flag;
            //printf("\n deg k  = %d",deg[k]);
            flag = 0;
            ++k;
        }
    }
    highestDec = deg[0];
    for (int l = 0; l < newSize; ++l) {
        if (deg[l] > highestDec) {
            highestDec = deg[l];
        }
    }
    //printf("\nH deg   = %d",highestDec);
    result = highestDec;
    return result;
}

//Функція визначення відстані Хемінга

int HammingDistance(const int *func1, const int *func2, int size) {
    int res = 0;
    for (int i = 0; i < size; ++i) {
        if ((func1[i] ^ func2[i]) != 0) res++;
    }
    return res;
}

//Функція визначення рівності між функціями

int funcsIsEqual(const int *func1, const int *func2, int size) {
    int flag = 0;
    for (int i = 0; i < size; ++i) {
        if (func1[i] == func2[i]) {
            flag++;
        }
    }
    return flag == size;
}

//Функція визначення нелінійності функції

int NLinearity(int *func, int size, int count) {
    int minimumNL;
    int minimumNL1;
    int minimumNL2;
    int matrixColumns = size;
    int matrixRows = raiseToPower(2, matrixColumns);
    int *functions = calloc(matrixRows * matrixColumns, sizeof(int));
    int *functions2 = elemsForN(matrixRows);
    int *testfunc = calloc(size, sizeof(int));
    /*for (int i = 0; i < matrixRows; ++i) {
        printf(" %d",functions2 [i]);
    }*/
    //printf("\n");
    for (int i = 0; i < matrixRows; ++i) {
        int *bin = valueToBinary(functions2[i], matrixColumns);
        for (int j = 0; j < matrixColumns; ++j) {
            //printf(" bin j = %d", bin[j]);
            //*(functions + i * cols + j) = (i >> cols - j - 1) & 1u;
            functions[i * matrixColumns + j] = bin[j];
            //printf(" %d",functions [i * matrixColumns + j]);
        }
        //printf("\n");
    }
    //minimumNL = HammingDistance(func, functions, size);
    minimumNL1 = HammingDistance(func, functions, size);
    int *bin = valueToBinary(matrixRows - 1, matrixColumns);
    for (int j = 0; j < matrixColumns; ++j) {
        testfunc[j] = bin[j];
    }
    /*for (int i = 0; i < size; ++i) {
        printf(" %d",testfunc[i]);
    }*/
    //printf(" %d",minimumNL1);
    minimumNL2 = HammingDistance(func, testfunc, size);
    minimumNL = minimumNL1;
    if (minimumNL2 < minimumNL1) {
        minimumNL = minimumNL2;
    }
    for (int i = 0; i < matrixRows; ++i) {
        if (algebraicDeg(functions + matrixColumns * i, size, count) <= 1 &&
            !funcsIsEqual(func, functions + matrixColumns * i, size)) {
            int newMinHD = HammingDistance(func, functions + matrixColumns * i, matrixColumns);
            //printf(" NEW MID HD%d",newMinHD);
            if (newMinHD < minimumNL) {
                minimumNL = newMinHD;
            }
        }
    }
    int result = minimumNL;
    return result;
}

//Функція представлення таблиці істиності в полярному вигляді

int *toPolarTable(const int *function, int size) {
    int *res = calloc(size, sizeof(int));
    for (int i = 0; i < size; ++i) {
        res[i] = raiseToPower(-1, function[i]);
    }
    return res;
}

//Функція визначення коефіцієнтів перетворення Уолдша-Адамара

int *HadamardCoefficients(const int *func, int size, int count) {
    int *result = calloc(size, sizeof(int));
    int *test = calloc(size * count, sizeof(int));
    int *functions2 = elemsForN(size);
    /*for (int i = 0; i < size; ++i) {
        printf(" %d",functions2 [i]);
    }*/
    //printf("\n");
    for (int i = 0; i < size; ++i) {
        int *bin = valueToBinary(functions2[i], count);
        for (int j = 0; j < count; ++j) {
            //printf(" bin j = %d", bin[j]);
            //*(functions + i * cols + j) = (i >> cols - j - 1) & 1u;
            test[i * count + j] = bin[j];
            //printf(" %d",test [i * count + j]);
        }
        //printf("\n");
    }
    int *w = calloc(count, sizeof(int));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < count; ++j) {
            w[j] = test[i * count + j];
            //printf("w = %d", w[j]);
        }
        int res = 0;
        for (int j = 0; j < size; ++j) {
            int r = 0;
            for (int k = 0; k < count; ++k) {
                r += myModulus(w[k] * test[j * count + k], 2);
            }
            res += raiseToPower(-1, myModulus(func[j] + r, 2));
        }
        result[i] = res;
    }
    return result;
}

//Функція визначення найбільшого коефіцієнта перетворення Уолдша-Адамара

int HadamardMax(const int *arr, int size) {
    int maxCoefficient = abs(arr[0]);
    for (int i = 0; i < size; ++i) {
        if (abs(arr[i]) > abs(maxCoefficient)) {
            maxCoefficient = abs(arr[i]);
        }
    }
    //printf("max coef %d", maxCoefficient);
    return maxCoefficient;
}

//Функція визначення нелінійності функції через коефіцієнти Уолдша-Адамара

int HadamardNLinearity(int max, int count) {
    int nl = (raiseToPower(2, count) - max) / 2;
    return nl;
}

//Функція обчислення автокореляційної функції

int *autoCorrelation(int *func, int size, int count) {
    int *acFunc = calloc(size, sizeof(int));
    int *polFunc = toPolarTable(func, size);
    acFunc[0] = raiseToPower(2, count);
    for (int i = 1; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            int temp = polFunc[j] * polFunc[j ^ i];
            //printf("j^i = %d", j^i);
            acFunc[i] = acFunc[i] + temp;
        }
        //printf("ac i = %d", acFunc[i]);
    }
    return acFunc;
}

//Функція обчислення автокореляції з функції автокореляції

int autoCorrelationMax(const int *arr, int size) {
    int maxCoefficient = abs(arr[1]);
    for (int i = 1; i < size; ++i) {
        if (abs(arr[i]) > maxCoefficient) {
            maxCoefficient = abs(arr[i]);
        }
    }
    return maxCoefficient;
}

//Функція визначення відповідності критеріям

int expansionCriterion(const int *func, int size, int k) {
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result += func[i] ^ func[i ^ k];
    }
    if (result == size / 2) {
        printf("\nComply with Criterion KP(%d)", k);
    } else {
        printf("\nNot comply with Criterion KP(%d)", k);
    }
    return result;
}

//Функція визначення множини W1+

int *WHT1PlusSet(const int *func, int size, int newSize, int max) {
    if (newSize != 0) {
        int *result = calloc(newSize, sizeof(int));
        int k = 0;
        for (int j = 0; j < size; ++j) {
            if (func[j] == max) {
                result[k] = j;
                k++;
            }
        }
        return result;
    } else {
        return NULL;
    }
}

//Функція визначення множини W1-

int *WHT1MinusSet(const int *func, int size, int newSize, int max) {
    if (newSize != 0) {
        int *result = calloc(newSize, sizeof(int));
        int k = 0;
        for (int j = 0; j < size; ++j) {
            if (func[j] == -max) {
                result[k] = j;
                k++;
            }
        }
        return result;
    } else {
        return NULL;
    }
}

//Функція визначення множини W2+

int *WHT2PlusSet(const int *func, int size, int newSize, int max) {
    if (newSize != 0) {
        int *result = calloc(newSize, sizeof(int));
        int k = 0;
        for (int j = 0; j < size; ++j) {
            if (func[j] == (max - 2)) {
                result[k] = j;
                k++;
            }
        }
        return result;
    } else {
        return NULL;
    }
}

//Функція визначення множини W2-

int *WHT2MinusSet(const int *func, int size, int newSize, int max) {
    if (newSize != 0) {
        int *result = calloc(newSize, sizeof(int));
        int k = 0;
        for (int j = 0; j < size; ++j) {
            if (func[j] == -(max - 2)) {
                result[k] = j;
                k++;
            }
        }
        return result;
    } else {
        return NULL;
    }
}

//Функція виконання операції "об'єднання" над масивами

int arrayUnion(const int a[], int n1, const int b[], int n2, int c[]) {
    int n = 0, i = 0, j = 0;

    while ((i < n1) && (j < n2)) {
        if (a[i] < b[j])
            c[n++] = a[i++];
        else if (a[i] > b[j])
            c[n++] = b[j++];
        else {
            c[n++] = a[i++];
            ++j;
        }
    }

    while (i < n1)
        c[n++] = a[i++];
    while (j < n2)
        c[n++] = b[j++];
    return n;
}

//Функція обчислення лінійної функції для заданого омега

int *linearFunctions(int size, int count, int t) {
    int calc1 = 0;
    int calc2 = 0;
    int sum = 0;
    int *binElems = elemsForN(size);
    int *ar = binaryElements(binElems, size, count);
    int *bin = valueToBinary(t, count);
    /*for (int i = 0; i < count; ++i) {
        printf("%d ", bin[i]);
    }*/
    //printf("\n");
    int *result = calloc(size, sizeof(int));
    for (int j = 0; j < size; ++j) {
        for (int i = 0, k = count - 1; i < count, k >= 0; ++i, --k) {
            calc1 = ar[i * size + j] * bin[k];
            //printf("%d ", bin[k]);
            //printf("%d ", calc1);
            sum = sum ^ calc1;
            //printf("%d ", sum);
        }
        //printf("%d ", sum);
        result[j] = sum;
        sum = 0;
        //printf("\n");
    }
    return result;
}

//Функція з'єднання двох масивів

int *arrayAdd(const int *arr1, int size1, const int *arr2, int size2) {
    int linearMassSize = size1 + size2;
    int *result = calloc(linearMassSize, sizeof(int));
    for (int i = 0; i < size1; ++i) {
        result[i] = arr1[i];
    }
    if (size2 != 0) {
        for (int j = 0; j < size2; ++j) {
            result[j + size1] = arr2[j];
        }
    }
    return result;
}

//Функція знаходження набору покращень

int *improvementSet(const int func[], const int *linearFunctions, int size, int linearMassSize, int WHTPlusSize) {
    int counter = 0;
    int k = 0;
    int flag = 1;
    int *result = calloc(size, sizeof(int));
    int *result1 = calloc(size, sizeof(int));
    int *result2 = calloc(size, sizeof(int));
    for (int j = 0; j < size; ++j) {
        for (int i = 0; i < WHTPlusSize; ++i) {
            if ((func[j] == linearFunctions[i * size + j])) {
                flag = 1;
            } else {
                flag = 0;
                break;
            }
        }
        //printf("flag %d ", flag);
        if (flag == 1) {
            result1[j] = 1;
        } else {
            result1[j] = 0;
        }

    }
    /*for (int j = 0; j < size; ++j) {
        printf("%d ", result1[j]);
    }*/
    if (WHTPlusSize < linearMassSize) {
        for (int j = 0; j < size; ++j) {
            for (int i = WHTPlusSize; i < linearMassSize; ++i) {
                if ((func[j] != linearFunctions[i * size + j])) {
                    flag = 1;
                } else {
                    flag = 0;
                    break;
                }
            }
            //printf("flag %d ", flag);
            if (flag == 1) {
                result2[j] = 1;
            } else {
                result2[j] = 0;
            }

        }
        /*for (int j = 0; j < size; ++j) {
            printf("%d ", result2[j]);
        }*/
        for (int j = 0; j < size; ++j) {
            if ((result1[j] == 1) && (result2[j] == 1) && (result1[j] == result2[j])) {
                result[j] = 1;
            } else {
                result[j] = 0;
            }
        }
    } else {
        for (int j = 0; j < size; ++j) {
            result[j] = result1[j];
        }
    }
    for (int j = 0; j < size; ++j) {
        if (result[j] == 1) {
            counter++;
        }
    }
    if (counter == 0) {
        printf("\nIMPROVEMENT IS UNAVAILABLE");
    }

    return result;
}

//Функція підвищення нелінійності методом Градієнтного Підйому

int *HillClimbing(const int f[], const int *improvementSet, int size, int count) {
    int *ftemp = calloc(size, sizeof(int));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            ftemp[j] = f[j];
        }
        if (improvementSet[i] == 1) {
            if (ftemp[i] == 0) {
                ftemp[i] = 1;
            } else {
                ftemp[i] = 0;
            }
            printf("\n|---------------------------------|");
            printf("\nCHANGED COEFFICIENT NUMBER %d ", i);
            printf("\n");
            printf("\nNEW TRUTH TABLE");
            printf("\n");
            for (int k = 0; k < size; ++k) {
                printf("%d ", ftemp[k]);
            }
            int *farr = HadamardCoefficients(ftemp, size, count);
            printf("\nNEW HADAMARD COEFFICIENTS");
            printf("\n");
            for (int l = 0; l < size; ++l) {
                printf("%d ", farr[l]);
            }
            int max = HadamardMax(farr, size);
            //printf("\n max = %d", max);
            int nl = HadamardNLinearity(max, count);
            printf("\n");
            printf("\nNEW HADAMARD NON LINEARITY = %d", nl);
            printf("\n");
            return ftemp;
            break;
        }
    }
}

//Функція циклічного підвищення нелінійності функції методом Градієнтного Підйому, поки це можливо

int *roundableHillClimbing(const int f[], int size, int count) {
    int *result = calloc(size, sizeof(int));
    for (int i = 0; i < size; ++i) {
        result[i] = f[i];
    }
    int counter = 0;
    while (counter < 1) {
        int weight;
        weight = HammingWeight(result, size);
        int flag = funcIsBalanced(weight, count);
        printf("\n");
        printf("\nTRUTH TABLE");
        printf("\n");
        for (int i = 0; i < size; ++i) {
            printf("%d ", result[i]);
        }
        int *fxarr = HadamardCoefficients(result, size, count);
        printf("\nHADAMARD COEFFICIENTS");
        printf("\n");
        for (int i = 0; i < size; ++i) {
            printf("%d ", fxarr[i]);
        }
        int max1 = HadamardMax(fxarr, size);
        //printf("\n max = %d", max1);
        int nl2 = HadamardNLinearity(max1, count);
        printf("\n");
        printf("\nHADAMARD NON LINEARITY = %d", nl2);
        printf("\n");

        int sizeWHT1P = 0;
        for (int i = 0; i < size; ++i) {
            if (fxarr[i] == max1) {
                sizeWHT1P++;
            }
        }

        printf("\nW1 PLUS");
        printf("\n");
        int *WHT1Plus = WHT1PlusSet(fxarr, size, sizeWHT1P, max1);
        if (WHT1Plus) {
            for (int i = 0; i < sizeWHT1P; ++i) {
                printf("%d ", WHT1Plus[i]);
            }
        } else {
            printf("NULL");
        }
        printf("\n");

        int sizeWHT1M = 0;
        for (int i = 0; i < size; ++i) {
            if (fxarr[i] == -max1) {
                sizeWHT1M++;
            }
        }

        printf("\nW1 MINUS");
        printf("\n");
        int *WHT1Minus = WHT1MinusSet(fxarr, size, sizeWHT1M, max1);
        if (WHT1Minus) {
            for (int i = 0; i < sizeWHT1M; ++i) {
                printf("%d ", WHT1Minus[i]);
            }
        } else {
            printf("NULL");
        }
        printf("\n");

        int sizeWHT2P = 0;
        for (int i = 0; i < size; ++i) {
            if (fxarr[i] == (max1 - 2)) {
                sizeWHT2P++;
            }
        }

        printf("\nW2 PLUS");
        printf("\n");
        int *WHT2Plus = WHT2PlusSet(fxarr, size, sizeWHT2P, max1);
        if (WHT2Plus) {
            for (int i = 0; i < sizeWHT2P; ++i) {
                printf("%d ", WHT2Plus[i]);
            }
        } else {
            printf("NULL");
        }
        printf("\n");

        int sizeWHT2M = 0;
        for (int i = 0; i < size; ++i) {
            if (fxarr[i] == (max1 - 2)) {
                sizeWHT2M++;
            }
        }

        printf("\nW2 MINUS");
        printf("\n");
        int *WHT2Minus = WHT2MinusSet(fxarr, size, sizeWHT2M, max1);
        if (WHT2Minus) {
            for (int i = 0; i < sizeWHT2M; ++i) {
                printf("%d ", WHT2Minus[i]);
            }
        } else {
            printf("NULL");
        }
        printf("\n");

        // Отримання об'єднання WHT1P та WHT2P
        if (!WHT1Plus && !WHT2Plus) {
            printf("SET WHT PLUS IS NULL");
        } else {
            int c1[(sizeWHT1P + sizeWHT2P)];
            //printf("%d ", (sizeWHT1P + sizeWHT1P));

            int m1 = arrayUnion(WHT1Plus, sizeWHT1P, WHT2Plus, sizeWHT2P, c1);
            printf("\nSET WHT PLUS");
            printf("\n");
            for (int i = 0; i < m1; ++i) {
                printf("%d ", c1[i]);
            }
        }

        printf("\n");

        // Отримання об'єднання WHT1M та WHT2M
        if (!WHT1Minus && !WHT2Minus) {
            printf("\nSET WHT MINUS IS NULL");
        } else {
            int c2[(sizeWHT1M + sizeWHT2M)];
            //printf("%d ", (sizeWHT1P + sizeWHT1P));

            int m2 = arrayUnion(WHT1Minus, sizeWHT1M, WHT2Minus, sizeWHT2M, c2);
            printf("\nSET WHT MINUS");
            printf("\n");
            for (int i = 0; i < m2; ++i) {
                printf("%d ", c2[i]);
            }
        }

        printf("\n");

        /*int *ar7 = linearFunctions(size, n, 5);
        printf("\nLINEAR FUNCTION");
        printf("\n");
        for (int i = 0; i < size; ++i) {
            printf("%d ", ar7[i]);
        }
        printf("\n");*/

        int c1[(sizeWHT1P + sizeWHT2P)];
        int c2[(sizeWHT1M + sizeWHT2M)];
        int m1 = arrayUnion(WHT1Plus, sizeWHT1P, WHT2Plus, sizeWHT2P, c1);
        int m2 = arrayUnion(WHT1Minus, sizeWHT1M, WHT2Minus, sizeWHT2M, c2);

        //printf("%d ", m1);
        //printf("%d ", m2);

        int linearMassSize = m1 + m2;
        /*int c3[1] = {7};
        int c[linearMassSize];
        for (int i = 0; i < m1; ++i) {
                c[i] = c1[i];
        }
        if (m2!=0) {
            for (int j = 0; j < m2; ++j) {
                c[j + m1] = c3[j];
            }
        }*/

        int *c = arrayAdd(c1, m1, c2, m2);
        printf("Linear mass size %d ", linearMassSize);
        printf("\nOMEGA LINEAR FUNCTIONS TO FIND");
        printf("\n");
        for (int i = 0; i < linearMassSize; ++i) {
            printf("%d ", c[i]);
        }
        printf("\n");

        int *linearFunctionsMass = calloc(linearMassSize * size, sizeof(int));
        for (int i = 0; i < linearMassSize; ++i) {
            int t = c[i];
            int *arr = linearFunctions(size, count, t);
            for (int j = 0; j < size; ++j) {
                //printf("%d ", arr[j]);
                linearFunctionsMass[i * size + j] = arr[j];
                printf("%d ", linearFunctionsMass[j]);
            }
        }

        printf("\nLINEAR FUNCTIONS");
        printf("\n");

        for (int i = 0; i < linearMassSize; ++i) {
            for (int j = 0; j < size; ++j) {
                printf("%d ", linearFunctionsMass[i * size + j]);
            }
            printf("\n");
        }


        printf("\nIMPROVEMENT SET:");
        int *ar8 = improvementSet(result, linearFunctionsMass, size, linearMassSize, m1);
        int k = 0;
        printf("\n");
        for (int j = 0; j < size; ++j) {
            printf("%d ", ar8[j]);
            if (ar8[j] != 0) {
                k++;
            }
        }
        if (k == 0) {
            counter = 1;
            //printf("counter %d ", counter);
            int *nonLin = calloc(1, sizeof(int));
            nonLin[0] = nl2;
            return nonLin;
            break;
        }

        int *ar9 = HillClimbing(result, ar8, size, count);
        printf("\n");
        for (int j = 0; j < size; ++j) {
            result[j] = ar9[j];
            //printf("%d ", result[j]);
        }
        free(fxarr);
        free(WHT1Plus);
        free(WHT1Minus);
        free(WHT2Plus);
        free(WHT2Minus);
        free(c);
        free(linearFunctionsMass);
        free(ar8);
        free(ar9);
    }

    return result;
}

//Функція перетворення вхідного S-Box на набір булевих функцій, що його описують

int *SBoxToBooleanFunc(int *sbox, int size, int count) {
    printf("\nS-BOX\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", sbox[i]);
    }
    printf("\n");
    printf("\nS-BOX IN BOOLEAN FUNCTIONS REPRESENTATION\n");
    int *result = binaryElements(sbox, size, count);
    for (int i = 0; i < count; ++i) {
        printf("Function %d = ", i + 1);
        for (int j = 0; j < size; ++j) {
            printf("%d ", result[i * size + j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < count; ++i) {
        int *temp = calloc(size, sizeof(int));
        printf("Function %d", i);
        for (int j = 0; j < size; ++j) {
            temp[j] = result[i * size + j];
        }
        int weight = HammingWeight(temp, size);
        int flag = funcIsBalanced(weight, count);
        printf("\n");
    }
    return result;
}

//Функція перетворення набору булевих функцій на S-Box

int *booleanFunctionsToSBox(const int *arr, int size, int count) {
    int *result = calloc(size, sizeof(int));
    for (int i = 0; i < size; ++i) {
        result[i] = 0;
        for (int j = 0; j < count; ++j) {
            result[i] += arr[j * size + i] * raiseToPower(2, j);
        }
    }
    return result;
}

//Функція знаходження показників булевих функцій S-Box'у

int *propertiesOfBooleanFunc(int *arr, int size, int count) {
    printf("\nFUNCTIONS PROPERTIES\n");
    for (int i = 0; i < count; ++i) {
        int *temp = calloc(size, sizeof(int));
        printf("\nFunction %d", i);
        for (int j = 0; j < size; ++j) {
            temp[j] = arr[i * size + j];
        }
        int weight = HammingWeight(temp, size);
        int flag = funcIsBalanced(weight, count);
        int *fxarr = HadamardCoefficients(temp, size, count);
        printf("\nHADAMARD COEFFICIENTS");
        printf("\n");
        for (int q = 0; q < size; ++q) {
            printf("%d ", fxarr[q]);
        }
        int max1 = HadamardMax(fxarr, size);
        //printf("\n max = %d", max1);
        int nl2 = HadamardNLinearity(max1, count);
        printf("\n");
        printf("\nHADAMARD NON LINEARITY = %d", nl2);
        printf("\n");
        int k = 1;
        int ec = expansionCriterion(temp, size, k);
        printf("\n");
        int *ar = autoCorrelation(temp, size, count);

        printf("\nAUTO CORRELATING FUNCTION");
        printf("\n");
        for (int w = size - 1; w >= 0; w--) {
            printf("%d ", ar[w]);
        }
        printf("\n");

        int AC = autoCorrelationMax(ar, size);
        printf("\nAUTO CORRELATION = %d", AC);
        printf("\n");
        int dec = algebraicDeg(temp, size, count);
        printf("\nALGEBRAIC DEGREE = %d ", dec);
        printf("\n");
    }
    return arr;
}

//Функція знаходження лінійних комбінацій для булевих функцій S-Box'у

int *linearCombinations(int *arr, int size, int count) {
    int *result = calloc(size * size, sizeof(int));
    int *calc = calloc(size, sizeof(int));
    for (int i = 1; i < size; ++i) {
        int *bin = valueToBinary(i, count);
        for (int j = 0, k = count - 1; j < count; ++j, k--) {
            if (bin[k] == 1) {
                for (int w = 0; w < size; ++w) {
                    calc[w] = calc[w] ^ arr[j * size + w];
                    //printf(" %d", arr[j*size]);
                    //printf(" %d", j * size + k);
                    //printf("calc =  %d", calc[k]);
                    //result[(i-1)*size+k] = calc[k];
                    //printf("result  =  %d", (i-1)*size+k);
                }
                //printf("\n");
            }
            for (int r = 0; r < size; ++r) {
                result[(i - 1) * size + r] = calc[r];
            }
            //printf(" %d", bin[j]);
        }
        for (int l = 0; l < size; ++l) {
            //printf("calc =  %d", calc[l]);
            //result[(i-1) * size + l] = calc[l];
            calc[l] = 0;
        }
        //printf("\n");
    }
    return result;
}

//Функція знаходження показників лінійних комбінацій для булевих функцій S-Box'у та знаходження мінімальної нелінійності серед них

int *propertiesOfLinearCombinations(int *arr, int size, int count) {
    int *minimalNL = calloc(size - 1, sizeof(int));
    int *maxAC = calloc(size - 1, sizeof(int));
    int *minDEC = calloc(size - 1, sizeof(int));
    int balancedFlag = 1;
    printf("\nLINEAR COMBINATIONS PROPERTIES\n");
    for (int i = 0; i < size - 1; ++i) {
        int *temp = calloc(size, sizeof(int));
        printf("\nCombination %d", i + 1);
        for (int j = 0; j < size; ++j) {
            temp[j] = arr[i * size + j];
        }
        int weight = HammingWeight(temp, size);
        int flag = funcIsBalanced(weight, count);
        if (flag == balancedFlag) {
        } else {
            balancedFlag = flag;
        }
        int *fxarr = HadamardCoefficients(temp, size, count);
        printf("\nHADAMARD COEFFICIENTS");
        printf("\n");
        for (int q = 0; q < size; ++q) {
            printf("%d ", fxarr[q]);
        }
        int max1 = HadamardMax(fxarr, size);
        //printf("\n max = %d", max1);
        int nl2 = HadamardNLinearity(max1, count);
        printf("\n");
        printf("\nHADAMARD NON LINEARITY = %d", nl2);
        printf("\n");
        minimalNL[i] = nl2;
        int k = 1;
        int ec = expansionCriterion(temp, size, k);
        printf("\n");
        int *ar = autoCorrelation(temp, size, count);

        printf("\nAUTO CORRELATING FUNCTION");
        printf("\n");
        for (int w = size - 1; w >= 0; w--) {
            printf("%d ", ar[w]);
        }
        printf("\n");

        int AC = autoCorrelationMax(ar, size);
        printf("\nAUTO CORRELATION = %d", AC);
        printf("\n");
        maxAC[i] = AC;
        int dec = algebraicDeg(temp, size, count);
        printf("\nALGEBRAIC DEGREE = %d ", dec);
        printf("\n");
        minDEC[i] = dec;
    }
    int min = 0;
    min = minimalNL[0];
    printf("\nNON-LINEARITIES ARRAY");
    printf("\n");
    for (int r = 0; r < size - 1; ++r) {
        printf("%d ", minimalNL[r]);
        if (minimalNL[r] < min) {
            min = minimalNL[r];
        }
    }
    int max;
    max = maxAC[0];
    printf("\nAC ARRAYS");
    printf("\n");
    for (int t = 0; t < size - 1; ++t) {
        printf("%d ", maxAC[t]);
        if (maxAC[t] > max) {
            max = maxAC[t];
        }
    }
    int minD = 0;
    minD = minDEC[0];
    printf("\nDEC ARRAY");
    printf("\n");
    for (int y = 0; y < size - 1; ++y) {
        printf("%d ", minDEC[y]);
        if (minDEC[y] < minD) {
            minD = minDEC[y];
        }
    }
    printf("\n");
    int *result = calloc(1, sizeof(int));
    result[0] = min;
    result[1] = max;
    result[2] = minD;
    result[3] = balancedFlag;
    return result;
}

//Функція генерації S-Box'у

int *SBoxGenerating(int n, int m) {
    srand(time(NULL));
    int size = raiseToPower(2, n);
    int *dec = (int *) malloc(sizeof(int) * size);
    for (int i = 0; i < size;) {
        dec[i] = rand() % size;
        int contains = 0;
        for (int j = 0; j < i; ++j) {
            if (dec[i] == dec[j]) {
                contains = 1;
                break;
            }
        }
        if (!contains) {
            i++;
        }
    }
    printf("Generated s-box: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ,", dec[i]);
    }
    printf("\n");
    int *sb = SBoxToBooleanFunc(dec, size, m);
    free(dec);
    return sb;
}

//Функція знаходження властивойстей S-Box'у

int *propertiesOfSBox(int *sbox, int size, int count) {
    int result;
    int *ar1 = linearCombinations(sbox, size, count);
    int *ar2 = propertiesOfLinearCombinations(ar1, size, count);
    printf("\nNON LINEARITY OF S-BOX IS\n");
    printf("%d ", ar2[0]);
    printf("\nAUTO CORRELATION OF S-BOX IS\n");
    printf("%d ", ar2[1]);
    printf("\nDEGREE OF S-BOX IS\n");
    printf("%d ", ar2[2]);
    //printf("%d ", ar2[3]);
    if (ar2[3] == 1) {
        printf("\nS-BOX IS BALANCED\n");
        result = 1;
    } else {
        printf("\nS-BOX IS NOT BALANCED\n");
        result = 1;
    }
    printf("\n");
    return ar2;
}

int NLOfSBox(int *sbox, int size, int count) {
    int result;
    int *ar1 = linearCombinations(sbox, size, count);
    int *ar2 = propertiesOfLinearCombinations(ar1, size, count);
    result = ar2[0];
    return result;
}

int ACOfSBox(int *sbox, int size, int count) {
    int result;
    int *ar1 = linearCombinations(sbox, size, count);
    int *ar2 = propertiesOfLinearCombinations(ar1, size, count);
    result = ar2[1];
    return result;
}

//Функція "вартості" S-Box'у

int costFunction(int *sbox, int size, int count) {
    int *costArray = calloc(size - 1, sizeof(int));
    int *ar1 = linearCombinations(sbox, size, count);
    for (int i = 0; i < size - 1; ++i) {
        int *temp = calloc(size, sizeof(int));
        //printf("\nCombination %d", i+1);
        for (int j = 0; j < size; ++j) {
            temp[j] = ar1[i * size + j];
        }
        int *fxarr = HadamardCoefficients(temp, size, count);
        /*printf("\nHADAMARD COEFFICIENTS");
        printf("\n");
        for (int q = 0; q < size; ++q) {
            printf("%d ", fxarr[q]);
        }*/
        int max1 = HadamardMax(fxarr, size);
        //printf("\n max = %d", max1);
        costArray[i] = max1;
    }
    int cost;
    cost = costArray[0];
    //printf("\n");
    printf("\nCOST ARRAY");
    printf("\n");
    for (int t = 0; t < size - 1; ++t) {
        printf("%d ", costArray[t]);
        if (costArray[t] > cost) {
            cost = costArray[t];
        }
    }
    return cost;
}

int *simulatedAnnealing(int *sbox, int size, int count) {
    int MIL = 1;
    int *SBoxBest = calloc(size, sizeof(int));
    SBoxBest = booleanFunctionsToSBox(sbox,size,count);
    for (int i = 0; i < size; ++i) {
        printf("%d ", SBoxBest[i]);
    }
    int *S = calloc(size, sizeof(int));
    for (int i = 0; i < size; ++i) {
        S[i] = SBoxBest[i];
    }
        for (int i = 0; i < MIL; ++i) {
            int *Y = calloc(size, sizeof(int));
            srand(time(NULL));
            int first = rand() % (size);
            int second = rand() % (size);
            for (int i = 0; i < size; ++i) {
                Y[i] = S[i];
            }
            int tmp = Y[first];
            Y[first] = Y[second];
            Y[second] = tmp;
            for (int i = 0; i < size; ++i) {
                S[i] = Y[i];
            }
            int *SB = SBoxToBooleanFunc(S,size,count);
            for (int i = 0; i < size*count; ++i) {
                printf("%d ", SB[i]);
            }
            int NLofS = NLOfSBox(SB, size, count);
            printf("NL OF S ===%d ", NLofS);

            /*costY = cost_4_16(Y, count, params->costParams);//стоимость потомка
            costS = cost_4_16(S, count, params->costParams);//текущая стоимость
            delta = costY - costS;//разница стоимости
            //если потомок лучше текущего претендента
            if (delta < 0) {
                for (int j = 0; j < size * count; ++j) {
                    S[j] = Y[j];
                }
            } else {
                //генерируем случайное число 0..1
                double u = (double) (rand() + pthread_self()) / RAND_MAX;
                double t = (double) delta / T;
                if (u < exp(-t)) {
                    //с некой вероятностью принимаем худшего потомка
                    for (int j = 0; j < size * count; ++j) {
                        S[j] = Y[j];
                    }
                }
            }*/
            free(Y);
        //}//кінець внутрішнього циклу
    }
    return S;
}

int testNL(int *sbox, int size, int count){
    int NLofS = NLOfSBox(sbox, 8, 3);
}

