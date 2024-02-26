

#include <iostream>
using namespace std;
int tinhtong(int so1, int so2) {
	//int sotong = so1 + so2;
	//return sotong;
	return so1 / so2;
}

int main() {
	//khai báo biến
	int so1, so2, tong;

	//nhập dữ liệu vào biến
	cout << "TRUONG TRINH TINH TONG 2 SO\n";
	cout << "nhap so thu nhat:";
	cin >> so1;
	cout << "Nhap so thu hai:";
	cin >> so2;

	// Tính toán
	tong = tinhtong(so1, so2);
	// Xuất dữ liệu
	cout << so1 << "/" << so2 << " = " << tong << endl;
	return 0;
}