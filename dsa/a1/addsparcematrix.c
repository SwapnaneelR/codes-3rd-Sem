#include <stdio.h>

typedef struct element {
    int row, col, val;
} element;

typedef struct sparsemat {
    int no_of_nonzero_elements;
    int no_of_rows, no_of_cols;
    element a[100];
} sparsemat;
int i ,j;
void inputSparseMatrix(sparsemat* mat) {
    printf("Enter the number of rows: ");
    scanf("%d", &mat->no_of_rows);
    printf("Enter the number of columns: ");
    scanf("%d", &mat->no_of_cols);
    printf("Enter the number of non-zero elements: ");
    scanf("%d", &mat->no_of_nonzero_elements);

    for ( i = 0; i < mat->no_of_nonzero_elements; i++) {
        printf("Enter row, column, and value for element %d: ", i + 1);
        scanf("%d %d %d", &mat->a[i].row, &mat->a[i].col, &mat->a[i].val);
    }
}

void displaySparseMatrix(sparsemat mat) {
    printf("Sparse Matrix non zero elements (%d x %d):\n", mat.no_of_rows, mat.no_of_cols);
    for (i = 0; i < mat.no_of_nonzero_elements; i++) {
        printf("row: %d, column: %d, value: %d\n", mat.a[i].row, mat.a[i].col, mat.a[i].val);
    }
}

int  addSparseMatrices(sparsemat mat1, sparsemat mat2, sparsemat* result) {
    if (mat1.no_of_rows != mat2.no_of_rows || mat1.no_of_cols != mat2.no_of_cols) {
        printf("Matrices cannot be added due to incompatible dimensions.\n");
        return 0;
    }

    result->no_of_rows = mat1.no_of_rows;
    result->no_of_cols = mat1.no_of_cols;
    result->no_of_nonzero_elements = 0;

    int i = 0, j = 0, k = 0;

    while (i < mat1.no_of_nonzero_elements && j < mat2.no_of_nonzero_elements) {
        if (mat1.a[i].row < mat2.a[j].row ||
           (mat1.a[i].row == mat2.a[j].row && mat1.a[i].col < mat2.a[j].col)) {
            result->a[k++] = mat1.a[i++];
        } else if (mat1.a[i].row > mat2.a[j].row ||
                  (mat1.a[i].row == mat2.a[j].row && mat1.a[i].col > mat2.a[j].col)) {
            result->a[k++] = mat2.a[j++];
        } else {
            // Same row and column
            result->a[k] = mat1.a[i];
            result->a[k++].val = mat1.a[i++].val + mat2.a[j++].val;
        }
    }

    // Add remaining elements from mat1
    while (i < mat1.no_of_nonzero_elements) {
        result->a[k++] = mat1.a[i++];
    }

    // Add remaining elements from mat2
    while (j < mat2.no_of_nonzero_elements) {
        result->a[k++] = mat2.a[j++];
    }

    result->no_of_nonzero_elements = k;

return 1;
}

int main() {
    sparsemat mat1, mat2, result;

    printf("Enter details for the first sparse matrix:\n");
    inputSparseMatrix(&mat1);

    printf("Enter details for the second sparse matrix:\n");
    inputSparseMatrix(&mat2);

   
if( addSparseMatrices(mat1, mat2, &result));
    printf("Resultant Sparse Matrix:\n");
    displaySparseMatrix(result);

    return 0;
}
