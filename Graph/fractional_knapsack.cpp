#include<iostream>
#include<algorithm>
using namespace std;
struct Item {
	int value, weight;
};

bool cmp(struct Item a, struct Item b)
{
	double r1 = (double)a.value / (double)a.weight;
	double r2 = (double)b.value / (double)b.weight;
	return r1 > r2;
}

double fractionalKnapsack(int W, struct Item arr[], int n)
{
	sort(arr, arr + n, cmp);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i].value << " " << arr[i].weight << " :"<< ((double)arr[i].value / arr[i].weight) <<endl;
	}
	

	double finalvalue = 0.0; 
	for (int i = 0; i < n; i++) 
	{
		if (arr[i].weight <= W) {
			W -= arr[i].weight;
			finalvalue += arr[i].value;
		}

		else {
			finalvalue += arr[i].value * ((double)W	/ (double)arr[i].weight);
			break;
		}
	}

	
	return finalvalue;
}


int main()
{
       int n,W;
       cout<<"Enter the no. of items:";
       cin>>n;
       Item a[n];
       cout<<"Enter the items and their weights:\n";
       for(int i=0;i<n;i++)
       {  
          cin>>a[i].value>>a[i].weight;
       }
       
       cout<<"Enter the weight of the bag:";
       cin>>W;
	cout << "Maximum value we can obtain = \n"<< fractionalKnapsack(W, a, n)<<endl;
	return 0;
}
