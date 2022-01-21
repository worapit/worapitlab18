#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

vector<int> randomVector(unsigned int N){	
    vector<int> v;
    for(unsigned int i = 0; i < N; i++) v.push_back(rand()%10);
    return v;
}

void showVector(vector<int> z){
	cout << "[";
	for(unsigned int i = 0; i < z.size(); i++){
		cout << z[i] ;
		if(i == z.size()-1) cout << "]";
		else cout << " ";
	}
}

int dotProduct(vector<int> x,vector<int> y){
	int sum = 0;
	for(unsigned int i = 0; i < x.size(); i++) sum += x[i]*y[i];	
	return sum;
}