#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

//int Digit(long long m)
//{
//	int i = 0;
//	for (; m > (long long)0; i++) {
//		m /= (long long)10;
//	}
//	return i;
//}
//int IsOnlyOne(long long m)
//{
//	while (1)
//	{
//		if (m % (long long)10 == (long long)1) {
//			m /= (long long)10;
//			if (m < (long long)1) return 1;
//		}
//		else return 0;
//	}
//}
//
//int main(void)
//{
//	int n;
//	long long m;
//	while (cin >> n) {
//		if (n >= 1 || n <= 10000) {
//			for (int i = 1; i < 12000000; i++) {
//				m = (long long)n * (long long)i;
//				if (IsOnlyOne(m)) {
//					cout << Digit(m) << '\n';
//					break;
//				}
//			}
//		}
//	}
//}

/* ���� 4375 */
//int main(void)
//{
//	int n;
//	while (cin >> n) {
//		int num = 0;
//		for (int i = 1;; i++){
//			num = (num * 10 + 1) % n;
//			if (num == 0){
//				cout << i << '\n';
//				break;
//			}
//		}
//	}
//}

/* ���� 1037 */
//int main()
//{
//	int count, min, max;
//	cin >> count;
//	int* real = new int[count];
//	for (int i = 0; i < count; i++) {
//		cin >> real[i];
//	}
//	min = max = real[0];
//	for (int i = 1; i < count; i++) {
//		if (min > real[i]) {
//			min = real[i];
//		}
//		if (max < real[i]) {
//			max = real[i];
//		}
//	}
//	cout << min * max;
//	delete real;
//}

/* ���� 17427 */
//#include <cmath>
//int f(int a) // a�� ������� �� ��ȯ
//{
//	int sum = 0;
//	int root = (int)pow((double)a, 0.5);
//	if (root * root == a){ //�������� ���
//		for (int i = 1; i < root; i++)
//		{
//			if (a % i == 0) {
//				sum += i;
//				sum += a / i;
//			}
//		}
//		sum += root;
//	}
//	else {
//		for (int i = 1; i <= root; i++)
//		{
//			if (a % i == 0) {
//				sum += i;
//				sum += a / i;
//			}
//		}
//	}
//	return sum;
//}
//
//int main()
//{
//	int n;
//	long long sum = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += (long long)(n / i) * i;
//	}
//	cout << sum;
//}

/* �ִ������� �ִ����� */
//int GCD(int a, int b)
//{
//	while (b!=0)
//	{
//		int r = a % b;
//		a = b;
//		b = r;
//	}
//	return a;
//}
//
//int GCD1(int a, int b)
//{
//	if (b == 0)return a;
//	else return GCD1(b, a % b);
//}
//
//int main()
//{
//	int a, b, g;
//	cin >> a >> b;
//	g = GCD1(a, b);
//	cout << g << '\n' << g * (a / g) * (b / g);
//}

/* ���� 1978 */
//bool is_prime(int n)
//{
//	if (n < 2) return false;
//	for (int i = 2; i * i <= n; i++)
//		if (n % i == 0) return false;
//	return true;
//}
//
//int main()
//{
//	int n;
//	int count = 0;
//	cin >> n;
//	int* x = new int[n];
//	for (int i = 0; i < n; i++)
//		cin >> x[i];
//	for (int i = 0; i < n; i++)
//		if (is_prime(x[i])) count++;
//	cout << count;
//}

/* 1929 */
//bool is_prime(int n)
//{
//	if (n < 2) return false;
//	for (int i = 2; i * i <= n; i++)
//		if (n % i == 0) return false;
//	return true;
//}
//
//int main()
//{
//	int n, m;
//	int count = 0;
//	cin >> n >> m;
//	for (int i = n; i <= m; i++)
//		if (is_prime(i)) cout << i << '\n';
//}

///* 1929 ������ӽñ� ü */
//const int MAX = 100000;
//int main()
//{
//	bool check[MAX+1] = { 0, };
//	int a = MAX;
//	check[0] = check[1] = true;
//	for (int i = 2; i <= a; i++) {
//		if (check[i] == false) {
//			for (int j = i * i; j <= a; j += i) {
//				check[j] = true;
//			}
//		}
//	}
//	int n, m;
//	cin >> n >> m;
//	for (int i = n; i <= m; i++) {
//		if (check[i] == false) cout << i << '\n';
//	}
//}

/* 6588 �������� ���� */
//int main()
//{
//	const int MAX = 10000;
//	int prime[MAX] = { 0, };
//	int pn = 0;
//	bool check[MAX + 1] = { false, };
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	for (int i = 2; i <= MAX; i++) {
//		if (check[i] == false) {
//			prime[pn++] = i;
//			for (int j = i + i; j <= MAX; j += i) {
//				check[j] = true;
//			}
//		}
//	}
//	while (true) {
//		int n;
//		cin >> n;
//		if (n == 0) break;
//		for (int i = 1; i < pn; i++) {
//			if (check[n - prime[i]] == false) {
//				cout << n << " = " << prime[i] << " + " << n - prime[i] << "\n";
//				break;
//			}
//		}
//	}
//}
//int main()
//{
//
//	const int MAX = 100;
//	int prime[MAX] = { 0, };
//	int pn = 0;
//	bool check[MAX + 1] = { false, };
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	for (int i = 2; i <= MAX; i++) {
//		if (check[i] == false) {
//			prime[pn++] = i;
//			for (int j = i + i; j <= MAX; j += i) {
//				check[j] = true;
//			}
//		}
//	}
//	for (int i = 0; i < MAX; i++) {
//		cout << i << "��° prime[i] = " << prime[i] << "\ncheck[i] = " << check[i] << "\n\n";
//	}
//}

///* 2309 �ϰ� ������ */
//int main()
//{
//	int height[9];
//	int real_height[7];
//	int sum;
//	for (int i = 0; i < 9; i++) {
//		cin >> height[i];
//	}
//	for (int i = 0; i < 8; i++) {
//		for (int j = i + 1; j < 9; j++) {
//			sum = 0;
//			for (int k = 0; k < 9; k++) {
//				if (k != i && k != j) {
//					sum += height[k];
//				}
//			}
//			if (sum == 100) {
//				int l = 0;
//				for (int k = 0; k < 9; k++) {
//					if (k != i && k != j) real_height[l++] = height[k];
//				}
//				int tmp;
//				for (int n = 0; n < 6; n++) {
//					for (int p = 0; p < 6; p++) {
//						if (real_height[p] > real_height[p + 1]) {
//							tmp = real_height[p];
//							real_height[p] = real_height[p + 1];
//							real_height[p + 1] = tmp;
//						}
//					}
//				}
//				for (int q = 0; q < 7; q++) {
//					cout << real_height[q] << '\n';
//				}
//				return 0;
//			}
//		}
//	}
//}

///* 3085�� ���� ���� */
//
//void swap(char &a, char &b)
//{
//	char temp = a;
//	a = b;
//	b = temp;
//}
//
///* ���̺��� ������ �ް� ���� �� �ִ� ������ �ִ� ������ ��ȯ */
//int Max_Eatable(string* table, int n)
//{
//	int max = 1;
//	int count;
//	int i = 0;
//	for (int i = 0; i < n; i++) {
//		count = 1;
//		for (int j = 0; j < n - 1; j++) {
//			if (table[i][j] == table[i][j + 1]) {
//				count += 1;
//			}
//			else {
//				count = 1;
//			}
//			if (count > max)max = count;
//		}
//		count = 1;
//		for (int j = 0; j < n - 1; j++) {
//			if (table[j][i] == table[j + 1][i]) {
//				count += 1;
//			}
//			else {
//				count = 1;
//			}
//			if (count > max)max = count;
//		}
//	}
//	return max;
//}
//
//int main()
//{
//	int n;
//	int max = 1;
//	int tmp;
//	cin >> n;
//	/* ���̺� �迭 ���� */
//	string* table = new string [n];
//	/* ���� ��ġ */
//	for (int i = 0; i < n; i++) {
//		cin >> table[i];
//	}
//	/* ���� ���� ��ȯ�ϸ鼭 ���� �� �ִ� �ִ� ���� ���� �˻� */
//	tmp = Max_Eatable(table, n);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (i + 1 < n) {
//				swap(table[i][j], table[i + 1][j]);
//				tmp = Max_Eatable(table, n);
//				if (max < tmp) {
//					max = tmp;
//				}
//				swap(table[i][j], table[i + 1][j]);
//			}
//			if (j + 1 < n) {
//				swap(table[i][j], table[i][j + 1]);
//				tmp = Max_Eatable(table, n);
//				if (max < tmp) {
//					max = tmp;
//				}
//				swap(table[i][j], table[i][j + 1]);
//			}
//		}
//	}
//	cout << max;
//}

///* 1476 */
//int main()
//{
//	int E, S, M, e = 0, s = 0, m = 0;
//	cin >> E >> S >> M;
//	for (int year = 1; year < 10000; year++) {
//		e += 1;
//		s += 1;
//		m += 1;
//		if (e > 15) e = 1;
//		if (s > 28) s = 1;
//		if (m > 19) m = 1;
//		if (e == E && s == S && m == M) {
//			cout << year;
//			break;
//		}
//	}
//}

/* 1107 */
//bool broken[10];
//
//int possible(int c) // ä�μ��ڸ� �޾Ƽ� ���� �Ұ����ϸ� 0, �����ϸ� c�� �ڸ��� ��ȯ
//{
//	if (c == 0)
//	{
//		if (broken[0]) return 0;
//		else return 1;
//	}
//	int len = 0;
//	while (c > 0)
//	{
//		if (broken[c % 10]) return 0;
//		len += 1;
//		c /= 10;
//	}
//	return len;
//}
//
//int main()
//{
//	int n, m; // n: �̵��Ϸ��� ä�� m: ���峭 ��ư�� ����
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) { // broken[x]�� true�� ���峭 ��ư
//		int x;
//		cin >> x;
//		broken[x] = true;
//	}
//	int ans = n - 100;
//	if (n < 100) {
//		ans = -ans;
//	}
//	for (int i = 0; i <= 1000000; i++) {
//		int len = possible(i);
//		if (len > 0) {
//			int press = i - n;
//			if (press < 0)press = -press;
//			if (press + len < ans) ans = press + len;
//		}
//	}
//	cout << ans;
//}

///* 14500�� */
//int paper[500][500];
////int block[19][3][2] = {
////	{{1,0},{2,0},{3,0}}, // ��
////	{{0,1},{0,2},{0,3}}, // ��
////	{{1,0},{0,1},{1,1}}, // ��
////	{{1,0},{2,0},{2,1}}, //��
////	{{1,0},{2,0},{2,-1}}, //
////	{{0,1},{0,2},{1,2}}, //
////	{{0,1},{0,2},{-1,2}}, //
////	{{-1,0},{-2,0},{-2,1}}, //
////	{{-1,0},{-2,0},{-2,-1}}, //
////	{{0,-1},{0,-2},{-1,-2}}, //
////	{{0,-1},{0,-2},{1,-2}}, //
////	{{1,0},{1,1},{2,1}}, //����
////	{{1,0},{1,-1},{2,-1}}, //
////	{{0,1},{-1,1},{-1,2}}, //
////	{{0,1},{1,1},{1,2}}, //
////	{{0,1},{1,1},{0,2}}, //��
////	{{0,1},{-1,-1},{0,2}}, //��
////	{{-1,0},{-1,1},{-2,0}}, //��
////	{{-1,0},{-1,-1},{-2,0}}, //��
////};
//
//int block[19][3][2] = {
//	{{0,1}, {0,2}, {0,3}},
//	{{1,0}, {2,0}, {3,0}},
//	{{1,0}, {1,1}, {1,2}},
//	{{0,1}, {1,0}, {2,0}},
//	{{0,1}, {0,2}, {1,2}},
//	{{1,0}, {2,0}, {2,-1}},
//	{{0,1}, {0,2}, {-1,2}},
//	{{1,0}, {2,0}, {2,1}},
//	{{0,1}, {0,2}, {1,0}},
//	{{0,1}, {1,1}, {2,1}},
//	{{0,1}, {1,0}, {1,1}},
//	{{0,1}, {-1,1}, {-1,2}},
//	{{1,0}, {1,1}, {2,1}},
//	{{0,1}, {1,1}, {1,2}},
//	{{1,0}, {1,-1}, {2,-1}},
//	{{0,1}, {0,2}, {-1,1}},
//	{{0,1}, {0,2}, {1,1}},
//	{{1,0}, {2,0}, {1,1}},
//	{{1,0}, {2,0}, {1,-1}},
//};
//
//int MaxSum(int paper[][500], int n, int m, int i, int j)
//{
//	int max = 0;
//	for (int k = 0; k < 19; k++) { // ����� ��� ����
//		bool ok = true;
//		int sum = paper[i][j]; // �հ躯�� �ʱ�ȭ
//		for (int l = 0; l < 3; l++) {
//			int x = i + block[k][l][0];
//			int y = j + block[k][l][1];
//			if (x >= 0 && x < n && y >= 0 && y < m) {
//				sum += paper[x][y];
//			}
//			else {
//				ok = false;
//				break;
//			}
//		}
//		if (ok && max < sum)max = sum;
//	}
//	return max;
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	//int** paper = new int*[n];
//	//for (int i = 0; i < n; i++) { // �Ʒ��� nĭ, ������ mĭ�� ������ �迭 ����
//	//	paper[i] = new int[m];
//	//}
//	for (int i = 0; i < n; i++) { // �� ĭ�� ���� �Է�
//		for (int j = 0; j < m; j++) {
//			cin >> paper[i][j];
//		}
//	}
//	int max = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			int tmp = MaxSum(paper, n, m, i, j);
//			if (tmp > max)max = tmp;
//			/*for (int k = 0; k < 19; k++) {
//				bool ok = true;
//				int sum = paper[i][j];
//				for (int l = 0; l < 3; l++) {
//					int x = i + block[k][l][0];
//					int y = j + block[k][l][1];
//					if (x >= 0 && x < n && y >= 0 && y < m) {
//						sum += paper[x][y];
//					}
//					else {
//						ok = false;
//						break;
//					}
//				}
//				if (ok && max < sum)max = sum;
//			}*/
//		}
//	}
//	cout << max;
//	//for (int i = 0; i < n; i++) {
//	//	delete [] paper[i];
//	//}
//	//delete [] paper;
//}

/* 6064 */
//int main()
//{
//	/*int attempt;
//	cin >> attempt;
//	for (int j = 0; j < attempt; j++) {
//		int m, n, x, y, OK = 0;
//		cin >> m >> n >> x >> y;
//		int yearX = 0, yearY = 0;
//		for (int i = 1; i <= m * n; i++) {
//			yearX += 1;
//			yearY += 1;
//			if (yearX > m)yearX = 1;
//			if (yearY > n)yearY = 1;
//			if (x == yearX && y == yearY) {
//				OK = i;
//				break;
//			}
//		}
//		if (OK) cout << OK;
//		else cout << -1;
//		cout << '\n';
//	}*/
//	int t;
//	cin >> t;
//	while (t--) {
//		int m, n, x, y, OK = 0;
//		cin >> m >> n >> x >> y;
//		for (int i = x - 1; i <= m * n; i += m) {
//			if (i % m == x - 1 && i % n == y - 1) {
//				OK = i + 1;
//				break;
//			}
//		}
//		if (OK) cout << OK;
//		else cout << -1;
//		cout << '\n';
//	}
//}

/* 1748 */
//#include <cmath>
//int main()
//{
//	int n, len = 0;
//	int count = 0;
//	cin >> n;
//	int m = n;
//	for (int i = 1; i <= 10; i++) {
//		m /= 10;
//		if (m == 0) {
//			len = i; // num = n�� �ڸ���
//			break;
//		}
//	}
//	for (int i = 1; i <= len - 1; i++) { // count = n�� ���� �ڸ���(num-1)������ ��� �ڸ����� ��
//		count += i * (int)(pow(10, i) - (int)pow(10, i - 1));
//	}
//	count += (n - (int)pow(10, len - 1) + 1) * len;
//	cout << count;
//}

///* 15649 */
//bool c[10]; int a[10];
//void go(int index, int n, int m)
//{
//	if (index == m) {
//		for (int i = 0; i < 10; i++) {
//			if (a[i] != 0)cout << a[i] << " ";
//		}
//		cout << "\n";
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (c[i])continue; // i�� ��������� true �̹Ƿ� i�� ��������� �Ʒ����� �������� �ʰ� �������� ����
//		c[i] = true;
//		a[index] = i;
//		go(index + 1, n, m);
//		c[i] = false;
//	}
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	go(0, n, m);
//}

//bool c[10];
//int a[10];
//void go(int index, int n, int m)
//{
//	if (index == m) {// �� �� ä�������� �迭 ���
//		for (int i = 0; i < m; i++)
//			cout << a[i] << " ";
//		cout << '\n';
//		return;
//	}
//
//	for (int i = 1; i <= n; i++) {
//		if (c[i] == false){
//			c[i] = true;
//			a[index] = i;
//			go(index + 1, n, m);
//			c[i] = false;
//		}
//	}
//
//}
//
//int main()
//{
//	int n, m; // 1���� n���� �ڿ��� �߿��� �ߺ� ���� m���� �� ������ ��� ����Ѵ�.
//	cin >> n >> m;
//	go(0, n, m);
//}

//�ߺ�����
//#define endl "\n"
//#define MAX 5
//
//int Arr[MAX];
//int Select[MAX];
//
//void DFS(int Cnt)
//{
//    if (Cnt == 3)
//    {
//        cout << " { ";
//        for (int i = 0; i < 3; i++)
//        {
//            cout << Select[i] << " ";
//        }
//        cout << "} " << endl;
//        return;
//    }
//
//    for (int i = 0; i < MAX; i++)
//    {
//        Select[Cnt] = Arr[i];
//        DFS(Cnt + 1);
//    }
//}
//
//int main(void)
//{
//    for (int i = 0; i < MAX; i++) Arr[i] = i + 1;
//    DFS(0);
//}

///* 15650 15649�� �������� ���� �߰� -> c[10] �迭 �ƹ��ǹ� X */
//int a[10];
//void go(int index, int start, int n, int m)
//{
//	if (index == m) {
//
//		for (int i = 0; i < 10; i++) {
//			if (a[i] != 0)cout << a[i] << " ";
//		}
//		cout << "\n";
//		return;
//	}
//	for (int i = start; i <= n; i++) {
//		a[index] = i;
//		go(index + 1, i + 1 , n, m);
//	}
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	go(0, 1, n, m);
//}

//int a[10];
//void go(int index, int selected, int n, int m) {
//	if (selected == m) {
//		for (int i = 0; i < 10; i++) {
//			if (a[i] != 0)cout << a[i] << " ";
//		}
//		cout << "\n";
//		return;
//	}
//	if (index > n)return;
//	a[selected] = index;
//	go(index + 1, selected + 1, n, m);
//	a[selected] = 0;
//	go(index + 1, selected, n, m);
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	go(1, 0, n, m);
//}

/* 9095 */
//int cnt;
////void go(int index, int sum, int n)
//void go(int sum, int n)
//{
//	//if (index > 10) return;
//	if (sum > n) return; // �̷��� �ص� �˾Ƽ� �� ��. index�� �ʿ� ������
//	if (sum == n) {
//		cnt += 1; return;
//	}
//	for (int j = 1; j <= 3; j++)
//	{
//		//go(index + 1, sum + j, n);
//		go(sum + j, n);
//	}
//	sum = 0;
//}
//
//int main()
//{
//	int test_case, n;
//	cin >> test_case;
//	for (int i = 0; i < test_case; i++) {
//		cnt = 0;
//		cin >> n;
//		//go(0, 0, n);
//		go(0, n);
//		cout << cnt << '\n';
//	}
//}
//

/* 1759 */
// ��ȣ�� C���� ���ĺ��߿� ���� �ٸ� L���� ���ĺ� �ҹ��ڵ�� ����
// 3 <= L <= C<= 15
//char a[15];
//int L, C;
//void go(int index, int start, char* alpha)
//{
//	if (index == L) {
//		int vowel = 0;
//		int consonant = 0;
//		for (int i = 0; i < L; i++) { // �ּ� �Ѱ��� ����, �ּ� �ΰ��� ���� �־�ߵ�
//			if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
//				vowel += 1;
//			else
//				consonant += 1;
//		}
//		if (vowel >= 1 && consonant >= 2) {
//			/*for (int i = 0; i < 15; i++) {
//				if (a[i] != 0)cout << a[i] << " ";
//			}*/
//			cout << a << '\n';
//		}
//		return;
//	}
//	else if (index > L) return;
//	else {
//		for (int i = start; i < C; i++) {
//			a[index] = alpha[i];
//			go(index + 1, i + 1, alpha);
//		}
//	}
//}
//
//int main()
//{
//	cin >> L >> C; // (3 <= L <= C <= 15)
//	char* alpha = new char[C];
//	for (int i = 0; i < C; i++)
//	{
//		cin >> alpha[i];
//	}
//	// alpha�� ���������� �������� �����ؾߵ�
//	for (int i = 0; i < C; i++) {
//		for (int j = i; j < C; j++) {
//			if (alpha[i] > alpha[j]) {
//				int tmp = alpha[i];
//				alpha[i] = alpha[j];
//				alpha[j] = tmp;
//			}
//		}
//	}
//	go(0, 0, alpha);
//}

/* 14501 */
//int n;
//int total_Pay;
//void go(int** timeline, int Pay, int Date)
//{
//	if (Date > n) {
//		if (total_Pay < Pay) {
//			total_Pay = Pay;
//		}
//		return;
//	}
//	if (Date + timeline[Date - 1][0] <= n + 1) // �Ѵ�
//		go(timeline, Pay + timeline[Date - 1][1], Date + timeline[Date - 1][0]);
//	go(timeline, Pay, Date + 1);
//}
//
//int main()
//{
//	cin >> n;
//	int **timeline = new int*[n];
//	for (int i = 0; i < n; i++) {
//		timeline[i] = new int[2];
//		cin >> timeline[i][0] >> timeline[i][1];
//	}
//	go(timeline, 0, 1);
//	cout << total_Pay;
//
//
//
//	for (int i = 0; i < n; i++) {
//		delete[] timeline[i];
//	}
//	delete [] timeline;
//}

/* 14889 */
//void status_gap(int**, int*, int, int&, int&);
//int teams[20];
//int MIN = 10000000;
//int my_abs(int a)
//{
//	if (a < 0) return -a;
//	else return a;
//}
//
//void divide_team(int **arr, int index, int count1, int count2, int n) // ���� ������ �Լ�(1, 2 �� ����)
//{
//	if (index >= n) {
//		int sum1 = 0, sum2 = 0;
//		status_gap(arr, teams, n, sum1, sum2);
//		int gap = my_abs(sum1 - sum2);
//		if (MIN > gap) MIN = gap;
//		return;
//	}
//	if (count1 < n / 2) {
//		teams[index] = 1;
//		divide_team(arr, index + 1, count1 + 1, count2, n);
//	}
//	if (count2 < n / 2) {
//		teams[index] = 2;
//		divide_team(arr, index + 1, count1, count2 + 1, n);
//	}
//}
//
//void status_gap(int** arr, int* teams, int n, int& sum1, int& sum2)
//{
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (teams[i] == 1 && teams[j] == 1) {
//				sum1 += arr[i][j] + arr[j][i];
//			}
//			if (teams[i] == 2 && teams[j] == 2) {
//				sum2 += arr[i][j] + arr[j][i];
//			}
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n; // 4 ~ 20 ������ ¦��
//	int** arr = new int* [n];
//	for (int i = 0; i < n; i++) {
//		arr[i] = new int[n];
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	divide_team(arr, 0, 0, 0, n);
//	cout << MIN;
//
//	for (int i = 0; i < n; i++) {
//		delete[] arr[i];
//	}
//	delete[] arr;
//}

/* 2529 �ε�ȣ */
//#include <cmath>
//int n;
//int c[10];
//long long MAX, MIN;
//void go(int* ine, int* arr, int index)
//{
//	if (index == n + 1) {
//		// �ε�ȣ �´��� �˻�
//		/*int cnt = 0;
//		for (int i = 0; i < n; i++) {
//			if (ine[i] == 1) {
//				if (arr[i] < arr[i + 1]) cnt += 1;
//			}
//			else if (ine[i] == 2) {
//				if (arr[i] > arr[i + 1]) cnt += 1;
//			}
//		}
//		if (cnt == n) {*/
//			long long sum = 0;
//
//			/*cout << "arr = ";
//			for (int i = 0; i < n + 1; i++) {
//				cout << arr[i];
//			}
//			cout << '\n';*/
//
//			for (int i = 0; i < n + 1; i++) {
//				sum += (long long)arr[i] * (long long)pow(10, n - i);
//			}
//			if (MAX == 0 && MIN == 0) { // ó������
//				MAX = MIN = sum;
//			}
//			//cout << "sum = " << sum << '\n'; // �ӽ�
//			if (MAX < sum)MAX = sum;
//			if (MIN > sum)MIN = sum;
//		//}
//		return;
//	}
//	for (int i = 0; i <= 9; i++) {
//		if (c[i])continue;
//		if (index > 0) {
//			if (ine[index - 1] == 1) { // <
//				if (arr[index - 1] > i) continue;
//			}
//			else if (ine[index - 1] == 2) { // >
//				if (arr[index - 1] < i) continue;
//			}
//		}
//		arr[index] = i;
//		c[i] = 1;
//		go(ine, arr, index + 1);
//		c[i] = 0;
//	}
//}
//
//int main()
//{
//	cin >> n;
//	int* ine = new int[n];
//	int* arr = new int[n + 1];
//	for (int i = 0; i < n; i++) {
//		char c;
//		cin >> c;
//		if (c == '<') ine[i] = 1; // ine[i]�� 1�̸� �ε�ȣ <
//		else if (c == '>') ine[i] = 2; // ine[i]�� 2�� �ε�ȣ >
//		else ine[i] = 0;
//	}
//	go(ine, arr, 0);
//	char* CMIN = new char[n + 2];
//	char* CMAX = new char[n + 2];
//	for (int i = n; i >= 0; i--) {
//		CMIN[i] = (MIN % 10) + '0';
//		MIN /= 10;
//		CMAX[i] = (MAX % 10) + '0';
//		MAX /= 10;
//	}
//	for (int i = 0; i < n + 1; i++) {
//		cout << CMAX[i];
//	}
//	cout << '\n';
//	for (int i = 0; i < n + 1; i++) {
//		cout << CMIN[i];
//	}
//}

/* 1248 */
//int n;
//void go(char** s, int* a, int index)
//{
//	if (index >= n) return;
//
//	//int x = -1, y = -2, pos = 0;
//	//for (int i = 0; i < n; i++) { // ���� index�� �迭s������ ��ġ�� x, y�� ����
//	//	for (int j = i; j < n; j++) {
//	//		if (pos == index) {
//	//			x = i;
//	//			y = j;
//	//			break;
//	//		}
//	//		pos += 1;
//	//	}
//	//	if (pos == index)break;
//	//}
//	//if (x == y) cout << "���� index��" << index << '\n';
//	int pos = 0, x = -1, y = -1;
//	for (int i = 0; i < n; i++) {
//		for (int j = i; j < n; j++) {
//			if (pos == index) {
//				x = i; y = j;
//				break;
//			}
//			pos += 1;
//		}
//		if (pos == index)break;
//	}
//	int min = -10;
//	int max = 10;
//
//	if (x != -1 && y != -1 && x == y) { // x, y�� ���� ���� �ư�, x == y�� ���
//		if (s[x][y] == '+') { // �ش� ĭ(a[index])�� ���� ���
//			min = 1;
//		}
//		else if (s[x][y] == '-') { // �ش� ĭ�� ���� ����
//			max = -1;
//		}
//		else if (s[x][y] == '0') { // �ش� ĭ�� ���� 0
//			min = 0;
//			max = 0;
//		}
//	}
//	else if (x != -1 && y != -1){
//		if (s[x][y] == '+') {
//			int sum = 0;
//			for (int l = x; l <= y - 1; l++) {
//				sum += a[l];
//			}
//			a[index]>
//
//		}
//		else if (s[x][y] == '-') {
//			max = -1;
//		}
//		else if (s[x][y] == '0') {
//			min = 0;
//			max = 0;
//		}
//	}
//
//
//	for (int i = min; i <= max; i++) {
//		a[index] = i;
//		go(s, a, index + 1);
//	}
//}
//int main()
//{
//	cin >> n;
//	int* a = new int[n];
//	char** s = new char*[n];
//	for (int i = 0; i < n; i++) {
//		s[i] = new char [n];
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = i; j < n; j++) {
//			char c;
//			cin >> c;
//			s[i][j] = c;
//		}
//	}
//	go(s, a, 0);
//}

/* 1248 ���� */
//int n;
//int go(char** s, int* a, int a_index)
//{
//	if (a_index >= n) {
//		//int count = 0;
//		//for (int i = 0; i < n; i++) { //s�迭 ����
//		//	for (int j = i; j < n; j++) {
//		//		int sum = 0;
//		//		for (int k = i; k <= j; k++)
//		//			sum += a[k];
//		//		if (s[i][j] == '+' && sum > 0)count += 1;
//		//		else if (s[i][j] == '0' && sum == 0) count += 1;
//		//		else if (s[i][j] == '-' && sum < 0)count += 1;
//		//	}
//		//}
//		//if (count == (n * (n + 1)) / 2)
//		{
//		for (int i = 0; i < n; i++) {
//				cout << a[i] << ' ';
//			}
//			cout << '\n';
//			return 1;
//		}
//		return 0;
//	}
//	//int x = -1, y = -1;
//	//return_pos(index, x, y); // index ��° ���Ұ� s���� ��ǥ�� ��� �Ǵ����� x,y�� �־���
//	int start = -10, end = 10;
//	int y = a_index;
//	for (int x = 0; x < n; x++) {
//		if (x == y) { // s[x][y] = a[x]�� ���� ��ȣ
//			if (s[x][y] == '+') { // a[x]�� ����̹Ƿ� 1���� 10���� �˻�
//				if (start < 1)start = 1;
//			}
//			else if (s[x][y] == '0') { // a[x]�� 0�̴�
//				a[a_index] = 0;
//				return 0;
//				/*start = 0;
//				end = 0;*/
//			}
//			else if (s[x][y] == '-') { // a[x]�� �����̹�ȣ -10���� -1����
//				if (end > -1)end = -1;
//			}
//		}
//		else {
//			int sum = 0;
//			for (int i = x; i <= y - 1; i++) sum += a[i];
//			if (s[x][y] == '+') {
//				if (start < -1 * sum)start = -1 * sum;
//			}
//			else if (s[x][y] == '0') {
//				start = -1 * sum;
//				end = -1 * sum;
//			}
//			else if (s[x][y] == '-') {
//				if (end > -1 * sum)end = -1 * sum;
//			}
//		}
//	}
//	for (int i = start; i <= end; i++) {
//		a[a_index] = i;
//		if (go(s, a, a_index + 1) == 1) break;
//	}
//}
//
//int main()
//{
//	cin >> n;
//	int* a = new int[n]; // �迭a ����
//	char** s = new char* [n];
//	for (int i = 0; i < n; i++) { // �迭s ����
//		s[i] = new char[n];
//	}
//	for (int i = 0; i < n; i++) { // �迭s�� �� �ֱ�
//		for (int j = i; j < n; j++) {
//			char c;
//			cin >> c;
//			s[i][j] = c;
//		}
//	}
//	go(s, a, 0); // s�� �̿��ؼ� a�� ���� ������ �ȴ�. a�� ũ��� n
//}

/* 10972 */
//#include <algorithm>
//#include <vector>
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> a(n);
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	if (next_permutation(a.begin(), a.end())) {
//		for (int i = 0; i < n; i++) {
//			cout << a[i] << ' ';
//		}
//	}
//	else {
//		cout << "-1";
//	}
//	cout << '\n';
//}
//
//void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//bool next_permutation(int* a, int n)
//{
//	int i = n - 1; // a[n-1]�� �迭�� ������
//	while (i > 0 && a[i] <= a[i - 1]) i--;
//	if (i <= 0) return false;
//	int j = n - 1;
//	while (a[i - 1] >= a[j]) j--;
//	swap(a[j], a[i - 1]);
//	j = n - 1;
//	while (i < j)
//	{
//		swap(a[j], a[i]);
//		i += 1; j -= 1;
//	}
//	return true;
//}
//
////
//bool previous_permutation(int* a, int n)
//{
//	int i = n - 1; // a[n-1]�� �迭�� ������
//	while (i > 0 && a[i] >= a[i - 1]) i--;
//	if (i <= 0) return false;
//	int j = n - 1;
//	while (a[i - 1] <= a[j]) j--;
//	swap(a[j], a[i - 1]);
//	j = n - 1;
//	while (i < j)
//	{
//		swap(a[j], a[i]);
//		i += 1; j -= 1;
//	}
//	return true;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int* a = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	if (next_permutation(a, n)) {
//		for (int i = 0; i < n; i++) {
//			cout << a[i] << ' ';
//		}
//	}
//	else cout << "-1";
//}

/* 10974 */
//void swap(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//bool my_next_permutation(int* a, int n)
//{
//	int i = n - 1; // a[n-1]�� �迭�� ������
//	while (i > 0 && a[i] <= a[i - 1]) i--;
//	if (i <= 0) return false;
//	int j = n - 1;
//	while (a[i - 1] >= a[j]) j--;
//	swap(a[j], a[i - 1]);
//	j = n - 1;
//	while (i < j)
//	{
//		swap(a[j], a[i]);
//		i += 1; j -= 1;
//	}
//	return true;
//}
/* 10974 �����Լ� �̿� */
//#include <algorithm>
//#include <vector>
//int main(){
//	int n;cin >> n;vector<int>a(n);
//	for (int i = 0; i < n; i++)a[i] = i + 1;
//	do{
//		for (int i = 0; i < n; i++)cout << a[i] << ' ';
//		cout << '\n';
//	} while (next_permutation(a.begin(), a.end()));
//}
/* 10974 ����Լ� �̿� */
//int n;
//bool c[9];
//void go(int* a, int index)
//{
//	if (index == n) {
//		for (int i = 0; i < n; i++) {
//			cout << a[i] << ' ';
//		}
//		cout << '\n';
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (c[i])continue;
//		a[index] = i;
//		c[i] = true;
//		go(a, index + 1);
//		c[i] = false;
//	}
//}
//
//int main()
//{
//	cin >> n;
//	int* a = new int[n];
//	for (int i = 0; i < n; i++) {
//		a[i] = i + 1;
//	}
//	go(a, 0);
//}

//#include <vector>
//#include <algorithm>
//#include <cstdlib>
//int n;
//int main()
//{
//	cin >> n; // n = 3~8)
//	vector<int>a(n);
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	sort(a.begin(), a.end());
//	int sum = 0;
//	while (next_permutation(a.begin(), a.end())) {
//		//for (int i = 0; i < n; i++)cout << a[i] << ' '; cout << '\n';
//		int sum1 = 0;
//		for (int i = 0; i <= n - 2; i++) {
//			sum1 += abs(a[i] - a[i + 1]);
//		}
//		if (sum1 > sum)sum = sum1;
//	}
//	cout << sum;
//}

/* 10971 TSP ���ǿ� ���� */
//int n;
//int MIN = 2147483647;
//bool c[10];
//void go(int **w, int *a, int index)
//{
//	if (index >= n)
//	{
//		int sum = 0;
//		for (int i = 0; i < n - 1; i++)
//		{
//			if (w[a[i]][a[i + 1]] == 0)
//				return; // i���ÿ��� i + 1 ���ñ��� ���� ����
//			sum += w[a[i]][a[i + 1]];
//		}
//		if (w[a[n - 1]][a[0]] == 0)
//			return;
//		sum += w[a[n - 1]][a[0]];
//		if (sum < MIN)
//			MIN = sum;
//		return;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (c[i])
//			continue;
//		a[index] = i;
//		c[i] = true;
//		go(w, a, index + 1);
//		c[i] = false;
//	}
//}
//
//int main()
//{
//
//	cin >> n;
//	int **w = new int *[n];
//	for (int i = 0; i < n; i++)
//		w[i] = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> w[i][j];
//		}
//	}
//	int *a = new int[n];
//	go(w, a, 0);
//	cout << MIN;
//}
/* TSP���� �����Լ� �̿�, �ð����� */
//#include <algorithm>
//#include <vector>
//int n;
//int MIN = 2147483647;
//int main()
//{
//	cin >> n;
//	int** w = new int*[n];
//	for (int i = 0; i < n; i++)
//		w[i] = new int[n];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> w[i][j];
//		}
//	}
//	vector<int>a(n);
//	for (int i = 0; i < n; i++)a[i] = i;
//	do {
//		int sum = 0;
//		bool ok = true;
//		for (int i = 0; i < n - 1; i++) {
//			if (w[a[i]][a[i + 1]] == 0)ok = false;
//			sum += w[a[i]][a[i + 1]];
//		}
//		if (w[a[n - 1]][a[0]] == 0)ok = false;
//		sum += w[a[n - 1]][a[0]];
//		if (ok == true && sum < MIN) MIN = sum;
//	} while (next_permutation(a.begin() + 1, a.end())); // ��ȯ�ϹǷ� ù ���ø� �����ص� �ȴ�.
//	cout << MIN;
//}

///* 6603 permutation�� �̿��� ���չ��� Ǯ�� */
//#include <vector>
//#include <algorithm>
//int n;
//int main()
//{
//	while (cin >> n) {
//		if (n == 0)break;
//		int* a = new int[n];
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//		}
//		vector<int>OK;
//		/*for (int i = 0; i < n; i++) {
//			if (i < 6)OK[i] = 1;
//			else OK[i] = 0;
//		}*/
//		for (int i = 0; i < 6; i++)OK.push_back(1);
//		for (int i = 0; i < n - 6; i++)OK.push_back(0);
//		int* ary = new int[6];
//		do {
//			int cnt = 0;
//			for (int i = 0; i < n; i++) {
//				if (OK[i] == 1) {
//					ary[cnt++] = a[i];
//				}
//			}
//			for (int i = 0; i < 6; i++)cout << ary[i] << ' '; cout << '\n';
//		} while (prev_permutation(OK.begin(), OK.end()));
//		cout << '\n';
//	}
//}

/* 11723 ��Ʈ����ũ */
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int s = 0;
//	char str[7] = { 0, };
//	int i;
//	while (n--)
//	{
//		scanf("%s", &str);
//		if (str[1] == 'd') { // add
//			scanf("%d", &i);
//			s |= (1 << i);
//		}
//		else if (str[0] == 'r') { // remove
//			scanf("%d", &i);
//			s &= ~(1 << i);
//		}
//		else if (str[0] == 'c') { // check
//			scanf("%d", &i);
//			if ((s & (1 << i)) == 0) cout << 0 << '\n';
//			else cout << 1 << '\n';
//		}
//		else if (str[0] == 't') { // toggle
//			scanf("%d", &i);
//			s ^= (1 << i);
//		}
//		else if (str[1] == 'l') { // all
//			s = 2097150;
//		}
//		else if (str[0] == 'e') { // empty
//			s = 0;
//		}
//	}
//}

/* 1182 */
//#include <vector>
//using namespace std;
//int main()
//{
//	int n, s, cnt = 0;
//	cin >> n >> s;
//	vector<int>arr(n);
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 1; i < (1 << n); i++) {
//		int sum = 0;
//		for (int k = 0; k < n; k++) {
//			if (i & (1 << k)) {
//				sum += arr[k];
//			}
//		}
//		if (sum == s)cnt += 1;
//	}
//	cout << cnt;
//}

/* 14391 ��Ʈ����ũ �̿� */
//#include <vector>
//#include <cstdio>
//int main()
//{
//	int n, m, MAX = 0;
//	cin >> n >> m;
//	vector<vector<int>>arr(n, vector<int>(m,0)); // arr[n][m]�� ���� ����
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%1d", &arr[i][j]);
//		}
//	}
//	/*for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++)
//			cout << arr[i][j];
//		cout << '\n';
//	}*/
//	for (int int_arr = 0; int_arr <= (1 << (n * m)); int_arr += 1) {
//		int sum = 0;
//		//�ϴ� ���κ���
//		for (int i = 0; i < n; i++) {
//			int cur = 0;
//			for (int j = 0; j < m; j++) {
//				if ((int_arr & (1 << (i * m + j))) == 0) {
//					cur = cur * 10 + arr[i][j];
//				}
//				else {
//					sum += cur;
//					cur = 0;
//				}
//			}
//			sum += cur;
//		}
//		for (int j = 0; j < m; j++) {
//			int cur = 0;
//			for (int i = 0; i < n; i++) {
//				if ((int_arr & (1 << (i * m + j))) != 0) {
//					cur = cur * 10 + arr[i][j];
//				}
//				else {
//					sum += cur;
//					cur = 0;
//				}
//			}
//			sum += cur;
//		}
//		MAX = max(sum, MAX);
//	}
//	cout << MAX;
//}

//#include <vector>
//#include <algorithm>
//int main()
//{
//	vector<int> a = { 0,1,0,1,0,1,0,1 };
//	int b = 0;
//	do {
//		b += 1;
//	} while (next_permutation(a.begin(), a.end()));
//	cout << b;
//}

/* 1463 ���̳��� ���α׷��� */
//#include <vector>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	vector<int>memo(3000001, 1000000);
//	//int ans = Myfunc(n, 0);
//	memo[1] = 0;
//	for (int i = 1; i <= n; i++) {
//		memo[i + 1] = min(memo[i + 1], memo[i] + 1);
//		memo[i * 2] = min(memo[i * 2], memo[i] + 1);
//		memo[i * 3] = min(memo[i * 3], memo[i] + 1);
//	}
//	printf("%d", memo[n]);
//}

/* 11726 */
//int d[1001] = { 0, 1, 2, };
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 3; i <= n; i++) {
//		d[i] = (d[i - 1]  + d[i - 2] ) % 10007 ;
//	}
//	cout << d[n];// % (long long)10007;
//}

/* 11727 */
//int d[1000] = { 0, 1, 3 };
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 3; i <= n; i++) {
//		d[i] = (d[i - 1] + 2 * d[i - 2]) % 10007;
//	}
//	cout << d[n];
//}

//#include <time.h>
//#include <vector>
//int main()
//{
//	//clock_t start, end;
//	int n;
//	cin >> n;
//	vector<int>a(n);
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	vector<int>b(2 * n + 1, 0);
//	bool check = false;
//	for (int i = 0; i < n; i++) {
//		if (b[a[i] - n]) check = true;
//		else b[a[i] - n] = 1;
//	}
//	if (check) cout << "no";
//	else cout << "yes";
//}

/* 9095 */
//int main()
//{
//	int T, n;
//	int a[11] = { 0,1,2,4, };
//	cin >> T;
//	for (int i = 0; i < T; i++) {
//		cin >> n;
//		for (int j = 4; j <= n; j++) {
//			if (!a[j]) {
//				a[j] = a[j - 3] + a[j - 2] + a[j - 1];
//			}
//		}
//		cout << a[n] << '\n';
//	}
//}

/* 11052 */
//int main()
//{
//	int n;
//	cin >> n;
//	int* P = new int[n + 1];
//	P[0] = 0;
//	for (int i = 1; i <= n; i++) {
//		cin >> P[i];
//	}
//	int* price = new int[n + 1];
//	for (int i = 1; i <= n; i++) {
//		price[i] = P[i];
//		for (int j = 1; j <= i; j++) {
//			price[i] = max(price[i], P[j] + price[i - j]);
//		}
//	}
//	cout << price[n];
//}

///* 16194 �������� �ּҷ� ���� */
//int main()
//{
//	int n;
//	cin >> n;
//	int* P = new int[n + 1];
//	P[0] = 0;
//	for (int i = 1; i <= n; i++) {
//		cin >> P[i];
//	}
//	int* price = new int[n + 1];
//	for (int i = 1; i < n + 1; i++) {
//		price[i] = 10000000;
//	}
//	price[0] = 0;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			price[i] = min(price[i], P[j] + price[i - j]);
//		}
//	}
//	cout << price[n];
//}

///* 15990 */
//#include <cstdio>
//const int limit = 100001;
//long long D[limit + 1][4];
//const long long mod = 1000000009LL;
//int main()
//{
//	int T;
//	scanf("%d",&T);
//	D[1][1] = 1;
//	D[2][2] = 1;
//	D[3][3] = 1;
//	for (int i = 3; i <= limit; i++) {
//		if (D[i][1] == 0)D[i][1] = (D[i - 1][2] + D[i - 1][3]) % mod;
//		if (D[i][2] == 0)D[i][2] = (D[i - 2][1] + D[i - 2][3]) % mod;
//		if (D[i][3] == 0)D[i][3] = (D[i - 3][1] + D[i - 3][2]) % mod;
//	}
//	while (T--) {
//		int n;
//		scanf("%d",&n);
//		printf("%lld\n",(D[n][1] + D[n][2] + D[n][3]) % mod);
//	} // �ð� 4ms
//	/*while (T--) {
//		int n;
//		cin >> n;
//		cout << (D[n][1] + D[n][2] + D[n][3]) % mod << '\n';
//	}*/ // �ð� 104ms
//}

/* 10844 */
//const long long mod = 1000000000LL;
//int a[101][10];
//int main()
//{
//	for (int i = 1; i <= 9; i++)a[1][i] = 1;
//
//	for (int n = 2; n <= 100; n++) {
//		a[n][1] += a[n - 1][0] % mod;
//		for (int i = 1; i <= 8; i++) {
//			a[n][i - 1] += a[n - 1][i] % mod;
//			a[n][i + 1] += a[n - 1][i] % mod;
//		}
//		a[n][8] += a[n - 1][9] % mod;
//	}
//
//	int N;
//	cin >> N;
//	long long sum = 0;
//	for (int i = 0; i < 10; i++)sum += a[N][i];
//	cout << sum % mod;


/* 2193 */
//long long a[91][2];
//int main()
//{
//	a[1][1] = 1;
//	for (int n = 2; n <= 90; n++) {
//		a[n][0] = a[n - 1][0] + a[n - 1][1];
//		a[n][1] = a[n - 1][0];
//	}
//	int N;
//	cin >> N;
//	cout << a[N][0] + a[N][1];
//}

/* 11053 */
//#include <vector>
////int b[1000][2];
//int main()
//{
//	int N;
//	cin >> N;
//	vector<int>a(N);
//	vector<vector<int>>b(N, vector<int>(2, 0));
//	for (int i = 0; i < N; i++) {
//		cin >> a[i];
//	}
//	b[0][0] = 1;
//	b[0][1] = a[0];
//	int j = 0;
//	for (int i = 1; i < N; i++) {
//		cout << '\n';
//		cout << i << "��° �κ� �˻���\n";
//		if (a[i - 1] > a[i]) { // ���� ���� �۾������� b[]���� �迭 ����
//			j += 1;
//			cout << j << "��° ���ο� ���� �˻� ����\n";
//		} 
//		b[j][0] += 1;
//		b[j][1] = a[i];
//		for (int q = 0; q <= j; q++) {
//			if (a[i] > b[q][1]) {
//				b[q][0] += 1;
//				b[q][1] = a[i];
//				cout << "b[" << q << "][0]�� +1�Ǿ�   " << b[q][0] << "�� ��.\n";
//				cout << "b[" << q << "][1]�� a[i]���� " << b[q][1] << "�� ��.\n";
//			}
//		}
//	}
//	int MAX = 0;
//	int p;
//	for (int i = 0; i < N; i++) {
//		if (MAX < b[i][0]) {
//			MAX = b[i][0];
//			p = i;
//		}
//	}
//	cout << "b[" << p << "][0]�� �ִ��̰�, ���� " << MAX;
//}

/* 14002 */
//#include <vector>
//int main()
//{
//	int N;
//	cin >> N;
//	vector<int>a(N);
//	vector<int>d(N);
//	vector<int>c(N, -1);
//	int k = 0;
//	bool cnt = false;
//	for (int i = 0; i < N; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < N; i++) {
//		int MAX = 0;
//		int x = -1;
//		int j;
//		for (j = 0; j < i; j++) {
//			if (a[j] < a[i]) {
//				if (MAX < d[j]) {
//					MAX = d[j];
//					x = j;
//				}
//			}
//		}
//		//���⼭ d[x]�� MAX�϶��� x�� ���� ������ d�ִ��� ���� index, max�� 0�̸� ����
//		c[i] = x;
//		d[i] = MAX + 1;
//	}
//	int ans = 0;
//	int ans_index = -1;
//	for (int i = 0; i < N; i++) {
//		if (ans < d[i]) {
//			ans = d[i];
//			ans_index = i;
//		}
//	}
//	cout << ans << '\n';
//	vector<int>arr(ans);
//	for (int i = 0; i < ans; i++) {
//		arr[i] = a[ans_index];
//		ans_index = c[ans_index];
//	}
//	for (int i = ans - 1; i >= 0; i--) {
//		cout << arr[i] << ' ';
//	}
//}

/* 1912 */
//#include <vector>
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int>a(n);
//	vector<int>d(n);
//	for (int i = 0; i < n; i++)cin >> a[i];
//	int ans = d[0] = a[0];
//	for (int i = 1; i < n; i++) {
//		d[i] = a[i];
//		if (d[i - 1] > 0)d[i] += d[i - 1];
//		if (ans < d[i])ans = d[i];
//	}
//	cout << ans;
//} 

/* 1699 */
//#include <vector>
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int>d(100001);
//	d[0] = 0;
//	for (int i = 1; i <= 100000; i++) {
//		int MIN = d[i - 1];
//		for (int j = 1; j <= 316; j++) {
//			if (i >= j * j) {
//				MIN = min(MIN, d[i - j * j]);
//			}
//		}
//		d[i] = MIN + 1;
//	}
//	cout << d[n];
//}

/* 2225 */
//#include <vector>
//// ��ȭ�� : d[n][k] += d[t][k-1] (0 <= t <= n)
//const int mod = 1000000000;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	int n, k;
//	cin >> n >> k;
//	vector<vector<int>>d(n + 1, vector<int>(k + 1, 0));
//	/*for (int i = 0; i < n + 1; i++) {
//		d[i][1] = 1;
//	}*/
//	d[0][0] = 1;
//	for (int i = 0; i < n + 1; i++) {
//		for (int j = 1; j < k + 1; j++) {
//			for (int p = 0; p < i + 1; p++) {
//				d[i][j] += d[p][j - 1];
//				d[i][j] %= mod;
//			}
//		}
//	}
//	cout << d[n][k] % mod;
//}

/* 14501 */
//int a[16][2];
//int d[16];
//// ��ȭ�� : d[n] = max(a[k][1] + d[k - 1]) (1 <= t <= n)
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i][0] >> a[i][1];
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= i; j++) {
//			if (a[j][0] + j - 1 <= i) {
//				d[i] = max(d[i], a[j][1] + d[j - 1]);
//			}
//		}
//	}
//	cout << d[n];
//}

/* 15988 */
//#include <cstdio>
//long long a[1000001] = { 0, 1, 2, 4, };
//const long long mod = 1000000009LL;
//int main()
//{
//	int t, n;
//	scanf("%d", &t);
//	for (int i = 4; i <= 1000000; i++) {
//		a[i] = (a[i - 1] + a[i - 2] + a[i - 3]) % mod;
//	}
//	while (t--)
//	{
//		scanf("%d", &n);
//		printf("%lld\n", a[n]);
//	}
//}

/* 1149 */
//int a[1001][3];
//int d[1001][3];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i][0] >> a[i][1] >> a[i][2];
//	}
//	for (int i = 1; i <= n; i++) {
//		d[i][0] = min(d[i - 1][1], d[i - 1][2]) + a[i][0];
//		d[i][1] = min(d[i - 1][0], d[i - 1][2]) + a[i][1];
//		d[i][2] = min(d[i - 1][0], d[i - 1][1]) + a[i][2];
//	}
//	cout << min(d[n][0], min(d[n][1], d[n][2]));
//}

/* 1309 */
//#include <vector>
//const int mod = 9901;
//int main()
//{
//	int n;
//	cin >> n;
//	vector<vector<int>>d(n + 1, vector<int>(3, 0));
//	d[1][0] = 1;
//	d[1][1] = 1;
//	d[1][2] = 1;
//	for (int i = 2; i <= n; i++) {
//		d[i][0] = d[i - 1][1] + d[i - 1][2] % mod; // ���� ĭ�� ���� �ִ� ���
//		d[i][1] = d[i - 1][0] + d[i - 1][2] % mod; // ������ ĭ�� ���� �ִ� ���
//		d[i][2] = d[i - 1][0] + d[i - 1][1] + d[i - 1][2] % mod; // ���ڰ� ���� ���
//	}
//	cout << (d[n][0] + d[n][1] + d[n][2]) % mod;
//}

/* 11057 */
//int d[1001][10];
//const int mod = 10007;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 0; j <= 9; j++) {
//			if (i == 1) {
//				d[i][j] = 1;
//				continue;
//			}
//			for (int k = j; k <= 9; k++) {
//				d[i][j] = (d[i][j] + d[i - 1][k]) % mod;
//			}
//		}
//	}
//	int sum = 0;
//	for (int i = 0; i <= 9; i++) {
//		sum += d[n][i];
//	}
//	cout << sum % mod;
//}

/* 2156 */
//#include <vector>
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int>a(n + 1);
//	vector<vector<int>>d(n + 1, vector<int>(3, 0));
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	d[1][0] = 0;
//	d[1][1] = a[1];
//	for (int i = 2; i <= n; i++) {
//		d[i][0] = max(d[i - 1][0], max(d[i - 1][1], d[i - 1][2]));
//		d[i][1] = d[i - 1][0] + a[i];
//		d[i][2] = d[i - 1][1] + a[i];
//	}
//	cout << max(d[n][0], max(d[n][1], d[n][2]));
//}

/* 1932 */
//int a[500][500];
//int d[500][500];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j <= i; j++) {
//			cin >> a[i][j];
//		}
//	}
//	d[0][0] = a[0][0];
//	for (int i = 1; i < n; i++) {
//		for (int j = 0; j <= i; j++) {
//			if (j == 0) {
//				d[i][j] = d[i - 1][j] + a[i][j];
//			}
//			else if (j == i) {
//				d[i][j] = d[i - 1][j - 1] + a[i][j];
//			}
//			else {
//				d[i][j] = max(d[i - 1][j - 1], d[i - 1][j]) + a[i][j];
//			}
//		}
//	}
//	int MAX = 0;
//	for (int i = 0; i < n; i++) {
//		if (MAX < d[n-1][i])MAX = d[n-1][i];
//	}
//	cout << MAX;
//}

/* 11055 */
//int a[1000];
//int d[1000];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++) {
//		int MAX = 0;
//		for (int j = 0; j < i; j++) {
//			if (a[j] < a[i]) {
//				if (d[j] > MAX)MAX = d[j];
//			}
//		}
//		d[i] = MAX + a[i];
//	}
//	int MAX = 0;
//	for (int i = 0; i < n; i++) {
//		if (d[i] > MAX)MAX = d[i];
//	}
//	cout << MAX;
//}

/* 11722 d[i] = a[i]���� ������ ���� �� �����ϴ� ���� */
//int main()
//{
//	int n;
//	int a[1000];
//	int d[1000];
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++) {
//		int MAX = 0;
//		for (int j = 0; j < i; j++) {
//			if (a[j] > a[i] && d[j] > MAX) {
//				MAX = d[j];
//			}
//		}
//		d[i] = MAX + 1;
//	}
//	int MAX = 0;
//	for (int i = 0; i < n; i++) {
//		if (MAX < d[i])MAX = d[i];
//	}
//	cout << MAX;
//}

/* 11722 d[i] = a[i]���� �����ϴ� ���� �� �����ϴ� ���� */
//int main()
//{
//	int n;
//	int a[1000];
//	int d[1000];
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	d[n - 1] = 1;
//	for (int i = n - 2; i >= 0; i--) {
//		int MAX = 0;
//		for (int j = i + 1; j < n; j++) {
//			if (a[i] > a[j] && d[j] > MAX) {
//				MAX = d[j];
//			}
//		}
//		d[i] = MAX + 1;
//	}
//
//	int MAX = 0;
//	for (int i = 0; i < n; i++) {
//		if (MAX < d[i])MAX = d[i];
//	}
//	cout << MAX;
//}

/* 11054 */
//int a[1000];
//int d1[1000];
//int d2[1000];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++) // a[i]�� ������ �����ϴ� ����
//	{
//		int MAX = 0;
//		for (int j = 0; j < i; j++) {
//			if (a[j] < a[i] && d1[j] > MAX) {
//				MAX = d1[j];
//			}
//		}
//		d1[i] = MAX + 1;
//	}
//
//	for (int i = n - 1; i >= 0; i--) // a[i]�� �����ϴ� �����ϴ� ����
//	{
//		int MAX = 0;
//		for (int j = i + 1; j < n; j++) {
//			if (a[i] > a[j] && d2[j] > MAX) {
//				MAX = d2[j];
//			}
//		}
//		d2[i] = MAX + 1;
//	}
//	int MAX = 0;
//	for (int i = 0; i < n; i++) {
//		MAX = max(MAX, d1[i] + d2[i]);
//	}
//	cout << MAX - 1;
//}

/* 13398 */
//int main()
//{
//	int n;
//	cin >> n;
//	int* d1 = new int[n];
//	int* d2 = new int[n];
//	int* a = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	d1[0] = a[0];
//	d2[n - 1] = a[n - 1];
//	for (int i = 1; i < n; i++) {
//		d1[i] = a[i];
//		if (d1[i - 1] > 0)d1[i] += d1[i - 1];
//	}
//	for (int i = n - 2; i >= 0; i--) {
//		d2[i] = a[i];
//		if (d2[i + 1] > 0)d2[i] += d2[i + 1];
//	}
//	int ans = a[0];
//	for (int i = 0; i < n; i++) {
//		if (ans < d1[i])ans = d1[i];
//		if (ans < d2[i])ans = d2[i];
//	}
//	for (int i = 0; i < n - 2; i++) {
//		if (ans < d1[i] + d2[i + 2])ans = d1[i] + d2[i + 2];
//	}
//	cout << ans;
//}

/* 2133 */
//int main()
//{
//	int n;
//	cin >> n;
//	int* d = new int[n + 1]();
//	d[0] = 1;
//	for (int i = 2; i <= n; i++) {
//		d[i] = d[i - 2] * 3;
//		for (int j = 4; j <= i; j+=2) {
//			d[i] += d[i - j] * 2;
//		}
//	}
//	cout << d[n];
//}

///* queue ���� */
//void push(int) ;
//int pop(void);
//int front(void);
//int back(void);
//bool empty(void);
//int size(void);
//
//// ť�� ���ԵǾ��ִ� ������ begin���� end-1 ���� �̴�.
//int queue[10000];
//int Begin = 0;
//int End = 0;
//
//int main()
//{
//	int n;
//	while (1) {
//		cout << "/*************************************************/\n";
//		cout << "1. queue����\n2. qush\n3. pop\n4. front\n5. back\n6. empty\n7. size\n8. exit\n";
//		cout << "/*************************************************/\n";
//		cout << "���ڸ� �Է��Ͻÿ�: ";
//		cin >> n;
//		switch (n) {
//		case 1:
//			cout << '\n';
//			for (int i = Begin; i < End; i++) {
//				cout << queue[i] << ' ';
//			}
//			cout << "\n\n";
//			break;
//		case 2:
//			int data;
//			cout << "push�� data�� �Է��ϼ���: ";
//			cin >> data;
//			push(data);
//			cout << '\n';
//			break;
//		case 3:
//			cout << pop() << "�� push�Ǿ� ���Խ��ϴ�.\n";
//			break;
//		case 4:
//			cout << "front���� " << front() << "�Դϴ�.\n";
//			break;
//		case 5:
//			cout << "back���� " << back() << "�Դϴ�.\n";
//			break;
//		case 6:
//			if (empty() == true)cout << "����ֽ��ϴ�";
//			else cout << "������� �ʽ��ϴ�";
//			cout << '\n';
//			break;
//		case 7:
//			cout << "queue�� �������" << size() << "�Դϴ�.\n";
//			break;
//		case 8:
//			return 0;
//		}
//	}
//}
//
//void push(int data)
//{
//	queue[End++] = data;
//}
//
//int pop(void)
//{
//	if (size() == 0)return 0;
//	int data = queue[Begin];
//	queue[Begin] = 0;
//	Begin += 1;
//	return data;
//}
//// ������ 0��° ���� ����� ��ĭ �� ������ �̵��ϴ� ������ O(N)�� �ǹǷ�, ����� �ȵȴ�.
//// vector�� �����ؼ� pop�� ���� ����� ������ �ϹǷ� vector�� queue ���� X
//
//int front(void)
//{
//	return queue[Begin];
//}
//
//int back(void)
//{
//	return queue[End - 1];
//}
//
//bool empty(void)
//{
//	if (End == Begin)return true;
//	else return false;
//}
//
//int size(void)
//{
//	return End - Begin;
//}

/* 13023 */
//#include <vector>
//#include <algorithm>
//bool b[2000][2000];
//vector<int>a[2000];
//vector<pair<int, int>>edges;
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		int from, to;
//		cin >> from >> to;
//		edges.push_back({ from,to });
//		edges.push_back({ to,from });
//		// ��� ���� ����
//		a[from].push_back(to);
//		a[to].push_back(from);
//		// ���� ����Ʈ
//		b[from][to] = b[to][from] = true;
//		// ���� ���
//	}
//	m *= 2; // ������ ������̹Ƿ� (m = ������ ����)
//	/* ã�ƾ� �ϴ� ����: A -> B -> C -> D -> E */
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < m; j++) {
//			int A = edges[i].first;
//			int B = edges[i].second;
//			//i��° ������ A: ��߳�� B: �������
//			int C = edges[j].first;
//			int D = edges[j].second;
//			//j��° ������ A: ��߳�� B: �������
//			if (A == B || A == C || A == D || B == C || B == D || C == D)
//				continue; // ���տ� ���� ��� ��尡 �� �ٸ� ��忩����
//			// ���⼭ A -> B �� C -> D �� �ϼ�
//			if (!b[B][C])continue; // B -> C ���� ���ҽ� continue
//			// ���⼭ A -> B -> C -> D �ϼ�
//			for (int E : a[D]) {
//				if (A == E || B == E || C == E || D == E) continue;
//				// D���� ����ϴ� ���� �߿� A, B, C, D�� �����ϴ°��� �ѱ�� E�� �ִ°��̴�
//				cout << 1 << '\n';
//				return 0;
//			}
//		}
//	}
//	cout << 0 << '\n';
//}

//#include <algorithm>
//int main()
//{
//	pair<int, char>p1;
//	pair<int, char>p2;
//	p1 = make_pair( 1, 'c' );
//	p2 = { 4, 'a' };
//	cout << p1.first;
//	cout << p2.second;
//	pair<pair<int, int>, int>p3;
//	p3 = { { 4, 2 }, 1 };
//}

/* 1260 dfs bfs*/
//#include <algorithm>
//#include <cstdio>
//#include <queue> // DFS���� queue ��� ����
//#include <vector> // ���� ����Ʈ���� ���
//#include <cstring>
//bool check[1001];
//vector<int>g[1001]; // ���� ����Ʈ ����
//void DFS(int x) // x���� �̵�
//{
//	check[x] = true;
//	printf("%d ", x);
//	for (int i = 0; i < (int)g[x].size(); i++) {
//		int y = g[x][i]; // x�� ���� y���� �� �� �ִ�.
//		if (check[y] == false) { // y�� ��带 �湮 ���ߴٸ�
//			DFS(y); // y�� �̵�
//		}
//	}
//}
//
//void BFS(int x)
//{
//	queue<int>q;
//	check[x] = true;
//	printf("%d ", x);
//	q.push(x);
//	while (!q.empty()) { // q�� ������� �ʴٸ�
//		int x = q.front(); q.pop(); // �� ���� ���� �������� ����
//		for (int i = 0; i < (int)g[x].size(); i++) {
//			int y = g[x][i];
//			if (check[y] == false) {
//				check[y] = true; q.push(y);
//				printf("%d ", y);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int n, m, v;
//	scanf("%d %d %d", &n, &m, &v);
//	int from, to;
//	for (int i = 0; i < m; i++) {
//		scanf("%d %d", &from, &to);
//		g[from].push_back(to);
//		g[to].push_back(from);
//	}
//	for (int i = 1; i <= n; i++) {
//		sort(g[i].begin(), g[i].end());
//	}
//	DFS(v);
//	printf("\n");
//
//	memset(check, false, sizeof(check)); // DFS���� ����� check�� �����ϱ� ���� �ʱ�ȭ
//	BFS(v);
//}

/* 11724 */
//#include <vector>
//#include <queue>
//vector<int>a[1001];
//bool check[1001];
//bool check1[1001];
//queue<int>q;
//
//int main()
//{
//	int n, m, count = 0;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		int u, v;
//		cin >> u >> v;
//		a[u].push_back(v);
//		a[v].push_back(u);
//	}
//	for (int i = 1; i <= n; i++) {
//		if (check1[i] == true)continue;
//		q = queue<int>(); // queue �ʱ�ȭ
//		memset(check, false, sizeof(check)); // check �ʱ�ȭ
//		check[i] = true; check1[i] = true; q.push(i);
//		while (!q.empty()) {
//			int x = q.front(); q.pop();
//			for (int j = 0; j < a[x].size(); j++) {
//				int y = a[x][j];
//				if (check[y] == false) {
//					check[y] = true; check1[y] = true; q.push(y);
//				}
//			}
//		}
//		count += 1;
//	}
//	cout << count;
//}

/* 1707 */ // �� �׷����� ��� ��忡������ �����ؼ� �� �˻��ؾ� �ߴ�. �ѱ����� �ϸ� �ȵ�
//#include <vector>
//#include <cstdio>
//#include <algorithm>
//bool dfs(int, int);
//
//vector<int>a[20001];
//int color[20001]; // 0�̸� �湮����, 1�̸� A, 2�� B
//int main()
//{
//	int k;
//	scanf("%d\n", &k);
//	while (k--) {
//		int v, e;
//		scanf("%d %d", &v, &e);
//		for (int i = 1; i <= v; i++) {
//			a[i].clear();
//			color[i] = 0;
//		}
//		for (int i = 0; i < e; i++) {
//			int from, to;
//			scanf("%d %d", &from, &to);
//			a[from].push_back(to);
//			a[to].push_back(from);
//		}
//		bool OK = true;
//		for (int i = 1; i <= v; i++) {
//			if (color[i] == 0) {
//				if (dfs(i, 1) == false)OK = false;
//			}
//		}
//		printf("%s\n", OK ? "YES" : "NO");
//	}
//}
//
//bool dfs(int x, int col)
//{
//	color[x] = col;
//	for (int i = 0; i < a[x].size(); i++) {
//		int y = a[x][i];
//		// ���� ����Ʈ�� ����������� ������ �ִ°��̹Ƿ� �׳� �̵�
//		if (color[y] == 0) {
//			if (!dfs(y, 3 - col)) {
//				return false;
//			}
//		}
//		else if (color[y] == color[x]) {
//			return false;
//		}
//	}
//	return true;
//}

/* 2667 ȥ���غ��� */
//#include <vector>
//#include <cstdio>
//#include <queue>
//#include <cstring>
//#include <algorithm>
//char ary[26][26];
//vector<int>a[26 * 26];
//int k, cnt;
//bool check[26 * 26];
//bool check1[26 * 26];
//queue<int>q;
//
//// �� ���� ��ȣ�� ((i+1) * k) + j+1
//int num(int i, int j)
//{
//	return (i * k) + j;
//}
//
//int main()
//{
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++) {
//		scanf("%s", ary[i]);
//	}
//	for (int i = 0; i < k; i++) {
//		for (int j = 0; j < k; j++) {
//			if (ary[i][j] == '1') {
//				if (i > 0 && ary[i - 1][j] == '1')a[num(i,j)].push_back(num(i-1,j));
//				if (i < k - 1 && ary[i + 1][j] == '1')a[num(i, j)].push_back(num(i + 1, j));
//				if (j > 0 && ary[i][j - 1] == '1')a[num(i, j)].push_back(num(i,j - 1));
//				if (j < k - 1 && ary[i][j + 1] == '1')a[num(i, j)].push_back(num(i, j + 1));
//				a[num(i, j)].push_back(num(i, j));
//			}
//		}
//	}
//	//for (int i = 0; i < k * k; i++) {
//	//	printf("a[%d]�� ũ��� %d.\n", i, a[i].size());
//	//	for (int j = 0; j < a[i].size(); j++) {
//	//		printf("%d�� %d�� �����.\n", i, a[i][j]);
//	//	}
//	//}
//	vector<int>cntary;
//	for (int i = 0; i < k * k; i++) {
//		if (check1[i] == true || a[i].size() == 0) continue;
//		int counting_house = 1;
//		q = queue<int>(); // queue �ʱ�ȭ
//		memset(check, false, sizeof(check)); // check �ʱ�ȭ
//		check[i] = true; check1[i] = true; q.push(i);
//		while (!q.empty()) {
//			int x = q.front(); q.pop();
//			for (int j = 0; j < a[x].size(); j++) {
//				int y = a[x][j];
//				if (check[y] == false) {
//					check[y] = true; check1[y] = true; q.push(y);
//					counting_house += 1;
//				}
//			}
//		}
//		//printf("%d�� ī��Ʈ��\n", i);
//		cntary.push_back(counting_house);
//		cnt += 1;
//	}
//	sort(cntary.begin(), cntary.end());
//	printf("%d\n", cnt);
//	for (int i = 0; i < cnt; i++) {
//		printf("%d\n", cntary[i]);
//	}
//}

/* 2667 ��Ʈ���� �Ѱ� */
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <cstdio>
//int A[30][30];
//int group[30][30]; // check
//int ans[25 * 25];
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { 1,-1,0,0 };
//int k;
//void bfs(int a, int b, int m)
//{
//	int countt = 0;
//	queue<pair<int, int>>q;
//	group[a][b] = m; q.push(make_pair(a, b));
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			if (nx >= 0 && ny >= 0 && nx < k && ny < k) {
//				if (A[nx][ny] == 1 && group[nx][ny] == 0) {
//					group[nx][ny] = m;
//					q.push(make_pair(nx, ny));
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	scanf("%d", &k);
//	for (int i = 0; i < k; i++) {
//		for (int j = 0; j < k; j++) {
//			scanf("%1d", &A[i][j]);
//		}
//	}
//	int cnt = 0;
//	for (int i = 0; i < k; i++) {
//		for (int j = 0; j < k; j++) {
//			if (A[i][j] == 1 && group[i][j] == 0) {
//				bfs(i, j, ++cnt);
//			}
//			ans[group[i][j]] += 1;
//		}
//	}
//	printf("%d\n", cnt);
//	sort(ans+1, ans + 1 + cnt);
//	for (int i = 1; i <= cnt; i++) {
//		printf("%d\n", ans[i]);
//	}
//}

/* 2178 �̷� �ִܰ�� */
//#include <queue>
//#include <cstdio>
//int a[100][100]; // �̷� ���
//bool check[100][100];
//int dist[100][100]; // ���������� �Ÿ� ���
//queue<pair<int, int>>q;
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//int main()
//{
//	//�Է¹ް�, bfs�� �̿��ؼ� dist�迭�� ä����, dist[n-1][m-1]�� ���ڸ�����Ѵ�.
//	int n, m;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%1d", &a[i][j]);
//		}
//	}
//	int x = 0, y = 0;
//	dist[x][y] = 1;
//	check[x][y] = true; q.push(make_pair(x, y));
//	while (!q.empty()) {
//		x = q.front().first;
//		y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
//				if (a[nx][ny] == 1 && check[nx][ny] == false) {
//					check[nx][ny] = true;
//					dist[nx][ny] = dist[x][y] + 1;
//					q.push(make_pair(nx, ny));
//				}
//			}
//		}
//	}
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < m; j++) {
//	//		printf("%02d ", dist[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	printf("%d", dist[n - 1][m - 1]);
//}

///* 7576 */
//#include <queue>
//#include <cstdio>
//#include <cstring>
//#include <vector>
//int a[1000][1000];
//int days[1000][1000]; // ������
//int days1[1000][1000]; // �� ���������� �����Ҷ� ���� ����� �迭
//vector<pair<int, int>>rotten;
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%d", &a[i][j]);
//			if (a[i][j] == 1)rotten.push_back(make_pair(i, j));
//		}
//	}
//	memset(days, -1, sizeof(days));
//
//	for (int k = 0; k < rotten.size(); k++) {
//		memset(days1, -1, sizeof(days));
//		queue<pair<int, int>>q;
//
//		int x = rotten[k].first;
//		int y = rotten[k].second;
//		q.push(make_pair(x, y));
//		days1[x][y] = 0;
//
//		while (!q.empty()) {
//			x = q.front().first;
//			y = q.front().second;
//			q.pop();
//			for (int i = 0; i < 4; i++) {
//				int nx = x + dx[i];
//				int ny = y + dy[i];
//				if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
//					if (a[nx][ny] == 0 && days1[nx][ny] == -1) {
//						q.push(make_pair(nx, ny));
//						days1[nx][ny] = days1[x][y] + 1;
//					}
//				}
//			}
//			printf("\n");
//			printf("\n%d��° days1\n", k);
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < m; j++) {
//					printf("%02d ", days1[i][j]);
//				}
//				printf("\n");
//			}
//		}
//		if (k == 0) {
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < m; j++) {
//					days[i][j] = days1[i][j];
//				}
//			}
//		}
//		else {
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < m; j++) {
//					if (days[i][j] == -1) {
//						days[i][j] = days1[i][j]; continue;
//					}
//					else if (days1[i][j] == -1) {
//						continue;
//					}
//					days[i][j] = min(days[i][j],days1[i][j]);
//				}
//			}
//		}
//		// �������� days�� days1 ���� ĭ���� �������� days�� �־������(��������)
//	}
//	printf("\n");
//	printf("\n������\n");
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			printf("%02d ", days[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	printf("\n");
//
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (days[i][j] == -1 && a[i][j] != -1) {
//				printf("%d", -1);
//				return 0;
//			}
//			ans = max(ans, days[i][j]);
//		}
//	}
//	printf("%d", ans);
//}

///* 2178 �̷� �ִܰ�� */
//#include <queue>
//#include <cstring>
//bool check[301][301];
//int dist[301][301];
//queue<pair<int, int>>q;
//int dx[8] = { 1,2,-1,-2,-1,-2,1,2 };
//int dy[8] = { 2,1,2,1,-2,-1,-2,-1 };
//
//int main()
//{
//	int k;
//	cin >> k;
//	while (k--) {
//		memset(check, 0, sizeof(check));
//		memset(dist, 0, sizeof(dist));
//		int l, x, y, destx, desty, count = 0;
//		cin >> l;
//		cin >> x >> y >> destx >> desty;
//
//		check[x][y] = true; q.push(make_pair(x, y));
//		while (!q.empty()) {
//			x = q.front().first;
//			y = q.front().second;
//			q.pop();
//			for (int i = 0; i < 8; i++) {
//				int nx = x + dx[i];
//				int ny = y + dy[i];
//				if (nx >= 0 && ny >= 0 && nx < l && ny < l) {
//					if (check[nx][ny] == false) {
//						check[nx][ny] = true;
//						q.push(make_pair(nx, ny));
//						dist[nx][ny] = dist[x][y] + 1;
//					}
//				}
//			}
//		}
//		//for (int i = 0; i < l; i++) {
//		//	for (int j = 0; j < l; j++) {
//		//		printf("%02d ", dist[i][j]);
//		//	}
//		//	printf("\n");
//		//}
//		cout << dist[destx][desty] << '\n';
//	} // while�� ����
//}

/* 1697 */
//#include <queue>
//#define MAX 200000
//int a[MAX + 1];
//bool check[MAX + 1];
//int dist[MAX + 1];
//queue<int>q;
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	int x = n;
//	q.push(x); check[x] = true;
//	while (!q.empty())
//	{
//		x = q.front(); q.pop();
//		int nx;
//		if (x < MAX) {
//			nx = x + 1;
//			if (check[nx] == false) {
//				q.push(nx); check[nx] = true;
//				dist[nx] = dist[x] + 1;
//			}
//		}
//		if (x > 0) {
//			nx = x - 1;
//			if (check[nx] == false) {
//				q.push(nx); check[nx] = true;
//				dist[nx] = dist[x] + 1;
//			}
//		}
//		if (x * 2 <= MAX) {
//			nx = x * 2;
//			if (check[nx] == false) {
//				q.push(nx); check[nx] = true;
//				dist[nx] = dist[x] + 1;
//			}
//		}
//	}
//	cout << dist[k];
//}

/* 13913 */
//#include <queue>
//#include <stack>
//#define MAX 200000
//int a[MAX + 1];
//bool check[MAX + 1];
//int dist[MAX + 1];
//queue<int>q;
//int from[MAX + 1];
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	int x = n;
//	q.push(x); check[x] = true;
//	while (!q.empty())
//	{
//		x = q.front(); q.pop();
//		int nx;
//		if (x < MAX) {
//			nx = x + 1;
//			if (check[nx] == false) {
//				q.push(nx); check[nx] = true;
//				dist[nx] = dist[x] + 1;
//				from[nx] = x;
//				if (nx == k)break;
//			}
//		}
//		if (x > 0) {
//			nx = x - 1;
//			if (check[nx] == false) {
//				q.push(nx); check[nx] = true;
//				dist[nx] = dist[x] + 1;
//				from[nx] = x;
//				if (nx == k)break;
//			}
//		}
//		if (x * 2 <= MAX) {
//			nx = x * 2;
//			if (check[nx] == false) {
//				q.push(nx); check[nx] = true;
//				dist[nx] = dist[x] + 1;
//				from[nx] = x;
//				if (nx == k)break;
//			}
//		}
//	}
//	stack<int> ans;
//	cout << dist[k] << endl;
//	int l = k;
//	for (int i = k; i != n; i = from[i]) {
//		ans.push(i);
//	}
//	ans.push(n);
//	while(!ans.empty()) {
//		cout << ans.top() << ' ';
//		ans.pop();
//	}
//}

// �ϴ� bfs-2���� ���Ǹ� ��

/* 14449 */ // tmp�ϰ� ���ڰ� �ű涧 ���� ��������. �� �ϸ� �̻��Ѱ� ����
// map[r][c] = ������ ��ǥ
// �ֻ����� ��ǥ = [x][y];
// map�� ũ��� [n][m];
// 
//  �ֻ����� ��������, ������ ĭ�� 0�� �����־����� �ֻ��� �ٴڸ��� ���� ĭ�� ����ȴ�.
// ĭ�� ���ڰ� 0�� �ƴϿ����� ĭ�� ���ڰ� �ֻ��� �ٴڸ����� ����Ǹ� ĭ�� ���ڴ� 0�̵ȴ�.
// �ֻ����� ���� ������ �����϶� ���� �ֻ����� �� ĭ�� ��ȣ�� ���϶�.
//
//#include <vector>
//int dice[6];
//int n, m, x, y;
//bool dice_move(int direc)
//{
//	int tmp;
//	switch (direc)
//	{
//	case 1: // ����
//		if (y + 1 > m - 1)return false;
//		else y += 1;
//		tmp = dice[0];
//		dice[0] = dice[3];
//		dice[3] = dice[5];
//		dice[5] = dice[2];
//		dice[2] = tmp;
//		break;
//	case 2: //��
//		if (y - 1 < 0)return false;
//		else y -= 1;
//		tmp = dice[0];
//		dice[0] = dice[2];
//		dice[2] = dice[5];
//		dice[5] = dice[3];
//		dice[3] = tmp;
//		break;
//	case 3: //��
//		if (x - 1 < 0)return false;
//		else x -= 1;
//		tmp = dice[0];
//		dice[0] = dice[4];
//		dice[4] = dice[5];
//		dice[5] = dice[1];
//		dice[1] = tmp;
//		break;
//	case 4: //�Ʒ�
//		if (x + 1 > n - 1)return false;
//		else x += 1;
//		tmp = dice[0];
//		dice[0] = dice[1];
//		dice[1] = dice[5];
//		dice[5] = dice[4];
//		dice[4] = tmp;
//		break;
//	default:
//		break;
//	}
//	return true;
//}
////   1
//// 3 0 2
////   4
////   5
//int main()
//{
//	int k;
//	cin >> n >> m >> x >> y >> k;
//	vector<vector<int>>map(n, vector<int>(m, 0));
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//
//	while (k--)
//	{
//		// �ٴڸ��� dice[5];
//		int move;
//		scanf("%d", &move); // ������, ����, ����, �Ʒ���
//		if (dice_move(move) == false) {
//			continue;
//		}
//		if (map[x][y] == 0) {
//			map[x][y] = dice[5];
//		}
//		else {
//			dice[5] = map[x][y];
//			map[x][y] = 0;
//		}
//		printf("%d\n", dice[0]);
//	}
//}