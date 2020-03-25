#include <iostream>

using namespace std;

int main()
{
    double dblAmountP ;
	double dblInterestR ;
    double dblFinalAmount ;
	
	cin >> dblAmountP;
	cin >> dblInterestR;
	cin >> dblFinalAmount;
	
	dblFinalAmount = dblFinalAmount + dblAmountP * (1 + dblInterestR);
	cout << dblAmountP << endl;
	cout << dblInterestR << endl;
	cout << dblFinalAmount << endl ;
	
	
	
    return 0;
}
