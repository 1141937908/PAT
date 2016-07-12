#include <iostream>
#include <cstring>
using namespace std;
char max_unlock[]="23:59:59",min_lock[]="00:00:00";
int main()
{
    int m;
    char id[15],unlock[8],lock[8],unlock_id[15],lock_id[15];
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>id>>unlock>>lock;
        if(max_unlock[0]>unlock[0] || max_unlock[0]==unlock[0] && max_unlock[1]>unlock[1] || max_unlock[0]==unlock[0] && max_unlock[1]==unlock[1])
        {
            if(max_unlock[3]>unlock[3] || max_unlock[3]==unlock[3] && max_unlock[4]>unlock[4] || max_unlock[3]==unlock[3] && max_unlock[4]==unlock[4])
            {
                if(max_unlock[6]>unlock[6] || max_unlock[6]==unlock[6] && max_unlock[7]>unlock[7] || max_unlock[6]==unlock[6] && max_unlock[7]==unlock[7])
                {
                    strcpy(max_unlock,unlock);
                    strcpy(unlock_id,id);
                }
            }
        }
        if(min_lock[0]<lock[0] || min_lock[0]==lock[0] && min_lock[1]<lock[1])
        {
            if(min_lock[3]<lock[3] || min_lock[3]==lock[3] && min_lock[4]<lock[4])
            {
                if(min_lock[6]<lock[6] || min_lock[6]==lock[6] && min_lock[7]<lock[7])
                {
                    strcpy(min_lock,lock);
                    strcpy(lock_id,id);
                }
            }
        }
    }
    cout<<max_unlock<<endl<<min_lock;
    cout<<unlock_id<<' '<<lock_id;
    return 0;
}
