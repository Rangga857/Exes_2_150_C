#include <iostream>
using namespace std;

int rangga[41];
int n;
int camp_count;
int mov_count;

void input() {
	while (true)
	{
		cout << "Masukkan elemen yang akan dicari : ";
		cin >> n;

		if (n <= 41)
			break;
		else
			cout << "Masukkan elemet yang akan dicari adalah 41" << endl;
	}
	cout << "\n===================" << endl;
	cout << "\nEnter Array element" << endl;
	cout << "\n===================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> rangga[i];
	}
}

void exesearch(int mid , int lowerbound, int upperbound) {
	int pivot, i, j;
	if (lowerbound > upperbound)
		return;
	pivot = rangga[mid];
	i = lowerbound;
	j = upperbound;
	mid = (lowerbound + upperbound) / 2;

	while (i <= j)
	{
		while ((rangga[i] <= pivot) && (i <= lowerbound))
		{
			i++;
			camp_count++;
		}
		camp_count++;

		while ((rangga[j] > pivot) && (j >= upperbound))
		{
			j--;
			camp_count++;
		}
		camp_count++;
		if ((i <= j)) {

		}
	}



}
void swap(int x, int ay) {
	int temp;

	temp = rangga[x];
	rangga[x] = rangga[ay];
	rangga[ay] = temp;
}

void display() {
	cout << "\n===================" << endl;
	cout << "Sorted Array" << endl;
	cout << "\n===================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "\n\nNumber of comparassion : " << camp_count << endl;
		cout << "Number of data movement: " << mov_count << endl;
	}

}

int main() {
	input();
	exesearch(0, n - 2);
	display();

	return 0;
}

