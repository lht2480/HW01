#include <iostream>
using namespace std;

int main()
{
    double arr[5];

    cout << "첫번째 학생 점수를 입력해주세요 : ";
    cin >> arr[0];

    cout << "두번째 학생 점수를 입력해주세요 : ";
    cin >> arr[1];

    cout << "세번째 학생 점수를 입력해주세요 : ";
    cin >> arr[2];

    cout << "네번째 학생 점수를 입력해주세요 : ";
    cin >> arr[3];

    cout << "다섯번째 학생 점수를 입력해주세요 : ";
    cin >> arr[4];

    double t = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    double a = t / 5;

    cout << "총점 : " << t << endl;
    cout << "평균 : " << a << endl;

    return 0;
}