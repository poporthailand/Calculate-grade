#include <iostream>
using namespace std;
int main()
{
	int score;
	cout << "Enter score (integer 0 - 100) : ";
	cin >> score ;
	
	if (score<=100 && score>=90) cout <<"Grade to be : A" << endl;
	else if (score>=80 && score<=89) cout <<"Grade to be : B" << endl;
	else if (score>=70 && score<=79) cout <<"Grade to be : C" << endl;
	else if (score>=60 && score<=69) cout <<"Grade to be : D" << endl;
	else if (score>=0 && score<=59) cout <<"Grade to be : F" << endl;
	else cout << "Program error << Do not write anything other than an integer >> Please write again ..." << endl;

	return 0;
}