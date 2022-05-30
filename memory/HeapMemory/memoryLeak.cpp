#include<iostream>

int main()
{
    //1KB memory leak
    int * ip = new int[250];

    
    // int alloCount=0;
    // std::cout<<"how many?"<<std::endl;
    // std::cin>>alloCount;

    // for(int i =0; i<alloCount; i++)
    // {
    //     int *ip=new int[250]; //1KB
    //     std::cout<<"mem  "<<std::flush;
    //     // delete [] ip;
    // }
}