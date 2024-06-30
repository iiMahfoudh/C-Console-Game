#include <iostream>
#include <vector> //Import Vector library
using namespace std;
int main(){
    vector<int> nums = {10,20,30,40,50};
    vector<int>::iterator it;
    //Loop With iterator:
    cout << "\n========================================\n";
    for(it=nums.begin();it<nums.end();++it){ // ++it : pre-increament for performance !
        cout << *it << " ";
    }
    cout << "\n========================================\n";
    //Ranged Loop With For:
    for(int element : nums){
        cout << element << " ";
    }
    cout << "\n========================================\n";

    return 0;
}
