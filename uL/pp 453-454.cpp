// ���� �����̳��� insert�� erase �Լ�
// pp 453-454

#include <iostream>
#include <vector>

using namespace std;

template <typename T>

void print_vector_all(vector<T>& vec) {
	cout << "���� �� ���� ���� : " << vec.size() << endl;

	for (typename vector<T>::iterator it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl << "---------------" << endl;
}

int main() {
	vector<int> vec;
	vec.push_back(0);
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	
	cout << "����" << endl;
	print_vector_all(vec);

	vec.insert(vec.begin() + 3, 25);
	cout << "insert ���" << endl;
	print_vector_all(vec);

	vec.erase(vec.begin() + 3);
	cout << "erase ���" << endl;
	print_vector_all(vec);

	return 1;
}