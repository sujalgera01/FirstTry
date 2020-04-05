#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector< vector<int> > mat(n,vector<int>(n,0));
    int i;
    int j;
    int flag=1;
    vector<int> column;
    for(j=0;j<n;j++)
    {
        column.clear();
        int p;
        for(i=0;i<n;i++)
        {
            cin>>p;
            mat[j][i]=p;
            column.push_back(p);
        }
        mat.push_back(column);
    }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(mat[i][j]!=mat[j][i] && flag==1)
                {
                    cout<<"Not symmetric";
                    flag=0;
                    break;
                    
                }
            }
        }
        if(flag==1)
        cout<<"Symmetric";
        return 0;
}