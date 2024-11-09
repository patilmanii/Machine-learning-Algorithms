# Practical 1 : Write a program for creation of matrix and perform operation in R Programming

# Create two matrices
matrix1 <- matrix(c(1, 2, 3, 4, 5, 6), nrow = 2, ncol = 3)
matrix2 <- matrix(c(6, 5, 4, 3, 2, 1), nrow = 2, ncol = 3)


print(matrix1)
print(matrix2)

# Matrix Addition
addition_result <- matrix1 + matrix2
cat("\nMatrix Addition (Matrix1 + Matrix2):\n")
print(addition_result)

# Transpose of Matrix 1
transpose_result <- t(matrix1)
cat("\nTranspose of Matrix1:\n")
print(transpose_result)

# Matrix Multiplication
matrix3 <- matrix(c(1, 2, 3, 4), nrow = 2, ncol = 2)
matrix4 <- matrix(c(5, 6, 7, 8), nrow = 2, ncol = 2)

multiplication_result <- matrix3 %*% matrix4
cat("\nMatrix Multiplication (Matrix3 * Matrix4):\n")
print(multiplication_result)