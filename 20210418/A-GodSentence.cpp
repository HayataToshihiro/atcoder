#include <iostream>
#include <vector>
int main(void)
{
    int A,B;
    std::cin >> A >> B;
    int num = A + B;
    std::vector<int> vec;
    int sum = 0;

    if(A>=B){
        for(int i=0;i<A;i++){
            vec.push_back(i+1);
            sum += i+1;
        }
        for(int i=0;i<B-1;i++){
            vec.push_back(-i-1);
            sum -= i+1;
        }
        vec.push_back(-sum);
    }else{
        for(int i=0;i<B;i++){
            vec.push_back(-i-1);
            sum -= i+1;
        }
        for(int i=0;i<A-1;i++){
            vec.push_back(i+1);
            sum += i+1;
        }
        vec.push_back(-sum);
    }
    

    for(int i=0;i<num;i++)std::cout << vec[i] << " ";
    std::cout << std::endl;
}   
