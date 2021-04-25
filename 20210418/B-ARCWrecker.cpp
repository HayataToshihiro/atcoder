#include <iostream>
#include <vector>

int main(void)
{
    int N;
    int mod = 1000000007;
    int answer = 1;
    std::vector<int> A,Q;
    std::cin >> N;
    for(int i=1;i<=N;i++){
        int Ai;
        std::cin >> Ai;
        A.push_back(Ai);
    }
    std::sort(A.begin(), A.end());

    Q.push_back(A[0]);
    for(int i=1;i<N;i++){
        Q.push_back(A[i]-A[i-1]);
    }
    
    for(int i=0;i<N;i++){
        answer *= (Q[i] + 1);
        answer %= mod;
    }




    /* std::cout << "A:"; */
    /* for(int i=0;i<N;i++){ */
    /*     std::cout << A[i] << " "; */
    /* } */
    /* std::cout << std::endl; */

    /* std::cout << "Q:"; */
    /* for(int i=0;i<N;i++){ */
    /*     std::cout << Q[i] << " "; */
    /* } */
    /* std::cout << std::endl; */


    std::cout << answer << std::endl;
    return 0;

}
