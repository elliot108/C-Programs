#include <iostream>
using namespace std;
//--------------1-----------------
// int main ()
// {
//     int numbers[10], no, count{0};
//     cout << "Enter ten integers" << endl;
    
//     for (size_t i = 0; i < 10; i++)
//     {
//         cin >> numbers[i];
//     }

//     for (auto num : numbers)
//     cout << num << " ";
    
//     cout << "\nEnter an integer " ;
//     cin >> no;

//     for (size_t i = 0; i < 10; i++)
//     {
//         if (no == numbers[i])
//         {
//             count++;
//         }       
//     }
    
    
//     cout << "The integer " << no << " is found " << count << " times." << endl;
    
//     return 0;
// }

//---------------------------------------------------------------------------------
//----------------------------2---------------------------
#include <iostream>
using namespace std;

int arr[6]={1,2,3,4,5,6};

void relocate_print(int in, int array[6], int nu){
	for(int u=6; u>in;u=u-1){
	 array[u]=array[u-1];
	 }

	array[in]=nu;

	for(int i=0; i<=6; i++){
	 cout << array[i]<<"\n";
	 }
	return;
}


int main()
{
	int num;int index;
	cout<< "Enter a number:";
	cin>>num;
	cout<<"Enter index:";
	cin>>index;
	
    relocate_print(index,arr,num);


	return 0;

}








//---------------------------------3-------------------------------

// int main()
// {
//     int array[]={0,1,2,3};
//     for (auto num : array)
//     cout << num << " " ;
//     cout << endl;
//     for (size_t i = 0; i < 2; i++)
//     {
//         swap(array[i], array[4-i-1]);
//     }
//     for (auto num : array)
//     cout << num << " ";

//     return 0;
// }