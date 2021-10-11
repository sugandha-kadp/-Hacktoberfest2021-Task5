#include <iostream>
using namespace std;

int main() {
	// your code goes here
 long long  int t;
    cin >> t;
    while (t--) 
    {
      long long int M, N, K;
        cin >> M >> N >> K;
        if (M > (N * K))
        {
            cout << "yes"<<endl;
        }
        else
        {
            cout << "no"<<endl;
        }
    }
	return 0;
}
