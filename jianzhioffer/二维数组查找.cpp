/*
��һ����ά�����У�ÿ��һά����ĳ�����ͬ����ÿһ�ж����մ����ҵ�����˳������
ÿһ�ж����մ��ϵ��µ�����˳������
�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
*/

#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
     bool Find(int target, vector<vector<int> > array) {
        if(array.size()==0||array[0].size()==0)
        {
            return false;
        }

        int x=array.size()-1;
        int y=0;
        while(x>=0&&y<=array[0].size()-1)
        {
            if(target<array[x][y])
            {
                x--;
            }
            else if(target>array[x][y])
            {
                y++;
            }
            else
                return true;
        }
        return false;

    }
};
int main()
{
    //1 2 3 4 5 6 7 8 9
    cout<<"hello world!"<<endl;
    int n[]={1,2,3,4,5};
    int n1[]={6,7,8,9,10};
    vector<int> a(n,n+5);
    vector<int> b(n1,n1+5);
    vector<vector<int> > m;
    m.push_back(a);
    m.push_back(b);
    Solution s;
    if(s.Find(8,m))
        cout<<"ok"<<endl;
    else
        cout<<"no"<<endl;
    return 0;

}

/*vector���÷�*/
/*
#include <iostream>
#include <vector>
using namespace std;
int main()
{     vector< vector<int> > intVV;
      vector<int> intV;
      int i,j;
      for(i=0;i<10;++i){
        intV.clear();
        for(j=0;j<10;++j)
        intV.push_back(i*10+j);
        intVV.push_back(intV);
      }

      for(i=0;i<10;++i){
        for(j=0;j<10;++j)
        cout<<intVV[i][j]<<' ';
        cout<<endl;
      }
      return 0;
}*/
