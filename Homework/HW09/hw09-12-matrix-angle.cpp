/*
    ผู้ใช้กรอกค่า Matrix แบบลูกบาศก์ลงใน Matrix พร้อมกับบรรจุค่าลงไปจนครบ และแสดงค่าภายใน Matrix ... จากนั้นรับค่าการแสดงผลการเปลี่ยนแปลง Matrix โดยหากรับค่า 1 จากผู้ใช้ ให้แสดงด้านมุมซ้ายของ Matrix ด้วยเลข 0 ... หากผู้ใช้กรอก -1 ให้แสดงมุมขวาของ Matrix ด้วยเลขศูนย์ (ดูตัวอย่างการแสดงผลได้ใน Test Case)
    
    Test case:
        Input cube size : 
            3
        Input element :
            1 2 3
            4 5 6
            7 8 9
        Show zero (1=Left, -1=Right) :
            1
    Output:
        Matrix =
            1 2 3
            4 5 6
            7 8 9
        Left Matrix =
            1 2 3
            0 5 6
            0 0 9

    Test case:
        Input cube size : 
            4
        Input element :
            1 2 3 3
            2 5 9 9
            7 5 3 4
            2 1 3 1
        Show zero (1=Left, -1=Right) :
            -1
    Output:
        Matrix =
            1 2 3 3
            2 5 9 9
            7 5 3 4
            2 1 3 1
        Left Matrix =
            1 0 0 0
            2 5 0 0
            7 5 3 0
            2 1 3 1
*/#include <stdio.h>

int main() {
    int n;
    
    // รับขนาดของ Matrix
    printf("Input cube size : ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    // รับค่า Element จากผู้ใช้
    printf("Input element :\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // แสดง Matrix
    printf("Matrix =\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // รับค่าการแสดงผลการเปลี่ยนแปลง Matrix
    int showLeft;
    printf("Show zero (1=Left, -1=Right) : ");
    scanf("%d", &showLeft);
    
    // แสดงผลการเปลี่ยนแปลง Matrix
    if (showLeft == 1) {
        printf("Left Matrix =\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j < i) {
                    printf("0 ");
                } else {
                    printf("%d ", matrix[i][j]);
                }
            }
            printf("\n");
        }
    } else if (showLeft == -1) {
        printf("Right Matrix =\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j > i) {
                    printf("0 ");
                } else {
                    printf("%d ", matrix[i][j]);
                }
            }
            printf("\n");
        }
    } else {
        printf("Invalid choice\n");
    }
    
    return 0;
}
