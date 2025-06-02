#include <iostream>
using namespace std;

double totsum(double arr[], int size)
{
    double tot = 0;
    for (int i = 0; i < size; i++)
    {
        tot += arr[i];
    }
    return tot;
}

double totavg(double arr[], int size)
{
    double tot = totsum(arr, size);
    return tot / size;
}

int main()
{
    int size = 5;
    double student[5];

    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << "번째 학생 점수 : ";
        cin >> student[i];
    }
    double tot = totsum(student, size);
    double avg = totavg(student, size);

    cout << "총점 : " << tot << endl;
    cout << "평균 : " << avg << endl;

    return 0;
}