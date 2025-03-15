#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);  // Đọc từ file input.txt
    freopen("output.txt", "w", stdout); // Ghi ra file output.txt

    // Nhập số lượng phần tử N và số cần tìm K
    long long n, k;
    cin >> n;
    cin >> k;

    // Khai báo mảng động với kích thước n
    long long* A = new long long[n];
    for (long long i = 0; i < n; i++) {
        cin >> A[i]; // Nhập các phần tử của mảng
    }

    // Tìm vị trí của K bằng chặt nhị phân
    long long left = 0;       // Chỉ số bắt đầu
    long long right = n - 1;  // Chỉ số kết thúc
    while (left <= right) {
        long long mid = left + (right - left) / 2; // Tính chỉ số giữa
        if (A[mid] == k) {
            cout << mid + 1 << endl; // In vị trí (đánh số từ 1)
            return 0;
        } else if (A[mid] < k) {
            left = mid + 1; // Tìm ở nửa bên phải
        } else {
            right = mid - 1; // Tìm ở nửa bên trái
        }
    }

    // Nếu không tìm thấy K
    cout << "Lam gi co so nao dou" << endl;
    return 0;
}
