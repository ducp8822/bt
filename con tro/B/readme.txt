Bài 1
p3 = &d;
*p3 = B, p3 = 0x5678

p3 = p1;
*p3 = A, p3 = 0x1234

*p1 = *p2;
*p1 = B, p1 = 0x1234
Bài 2
Lệnh *p=5 gán giá trị 5 cho biến i
Bài 3
Đoạn code trên lỗi là do xung đột kiểu dữ liệu do c có kiểu là char còn con trỏ p chỏ vào c lại có kiểu double