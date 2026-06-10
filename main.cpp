    #include <iostream>

    using namespace std;

    int main()
    {
        int num;

        int sum=0;
        do{
            cout<<"Enter your Number";
        cin>>num;
            if(num>0)
            {
           sum=sum+num;


           }
    }
        while(num!=0);
        cout<<sum;

        return 0;
    }
