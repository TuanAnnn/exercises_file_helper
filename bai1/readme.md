# Bài tập: Tính tiền nước

## Mô tả
Chương trình tính tiền nước cho 1 hộ gia đình dựa trên số nước tiêu thụ theo bảng giá lũy tiến.

## Bảng giá nước
| Mức tiêu thụ | Đơn giá |
|--------------|---------|
| 16 số đầu | 7.000đ/số |
| Từ số 17 đến số 50 | 8.500đ/số |
| Từ số 51 trở lên | 100.000đ/số |

## Input
- Nhập vào số nước tiêu thụ của hộ gia đình (số nguyên)

## Output
- Số tiền nước phải trả (đơn vị: đồng)

## Ví dụ

### Test case 1
```
Input: 20
Output: 146000
```

**Giải thích:**
- 16 số đầu: 16 × 7.000 = 112.000đ
- 4 số tiếp theo (17-20): 4 × 8.500 = 34.000đ
- **Tổng**: 112.000 + 34.000 = 146.000đ

## Yêu cầu kỹ thuật
- **Ngôn ngữ:** C/C++
- **Thời gian chạy:** Tối đa 1 giây
- **Bộ nhớ:** Tối đa 256 MB
- **Mã bài:** TNUOC

## Lưu ý
- Cần xử lý chính xác các mức giá khác nhau
- Sử dụng kiểu dữ liệu phù hợp để tránh tràn số