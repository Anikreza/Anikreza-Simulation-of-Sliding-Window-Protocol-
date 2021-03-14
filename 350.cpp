#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;

int xtb[100],xtw[100],Xrb[100],Xrw[100],n,w,i,r=1,f,j,k,xt=0,yt=0;
int main()
{
    system("color 2f");
    int c=0;
    cout<<"enter the number of frames: ";
    cin>>n;
    while (n != 0)
    {
        r *= 2;
        --n;
    }
    f=r-1;
    Sleep(200);
    cout<<endl<<"frame range is: ";
    Sleep(200);
    cout<<" [ ";
    Sleep(100);
    for(i=0; i<=f; i++)
    {
        Sleep(100);
        cout<<i<<" ";
    }
    Sleep(100);
    cout<<"]";
    Sleep(200);
    cout<<endl<<endl<<"enter the size of window: ";
    cin>>w;
    Sleep(200);
    cout<<endl<<"At first: "<<endl;
    Sleep(200);
    cout<<endl<<"____________________________________"<<endl;
    cout<<"X transmitting buffer: ";
    for(i=0; i<=f; i++)
    {
        xtb[i]=i;
        c++;
        Sleep(100);
        cout<<xtb[i]<<" ";
        if(c>=w)
            break;
    }
    c=0;
    cout<<endl;
    cout<<"X transmitting window: ";
    Sleep(100);
    for(i=0; i<=f; i++)
    {
        xtw[i]=i;
        c++;
        Sleep(100);
        cout<<xtw[i]<<" ";
        if(c>=w)
            break;
    }
    cout<<endl;
    cout<<"X receiving buffer:    ";
    Sleep(100);
    c=0;
    for(i=0; i<=f; i++)
    {
        Xrb[i]=i;
        c++;
        Sleep(100);
        cout<<Xrb[i]<<" ";
        if(c>=w)
            break;
    }
    c=0;
    cout<<endl;
    cout<<"X receiving window:    ";
    Sleep(100);

    for(i=0; i<=f; i++)
    {
        Xrw[i]=i;
        c++;
        Sleep(100);
        cout<<Xrw[i]<<" ";
        if(c>=w)
            break;
    }
    cout<<endl<<"____________________________________"<<endl;
    c=0;
    cout<<endl;

    int t[100],n;
    char e[100];
    // cout<<endl<<"enter the number of events: ";
    //cin>>n;
    for(j=1; j<=100; j++)
    {
        Sleep(200);
        cout<<endl<<"Enter transmission entity  and number of transmission of event: "<<j<<endl<<endl;
        cin>>e[j]>>t[j];
        if( e[j]=='x' && t[j]>0)
        {
            Sleep(200);
            cout<<endl<<"after event "<<j<<": ";
            Sleep(300);
            cout<<endl<<"____________________________________"<<endl;
            cout<<"X Transmitting Buffer: "<<" ";
            for(i=xt; i<=f; i++)
            {
                xtb[i]=i;
                c++;
                Sleep(100);
                cout<<xtb[i]<<" ";
                if(c>=w)
                    break;
            }
            c=0;
            cout<<endl;
            Sleep(200);
            cout<<"X transmitting window: "<<" ";
            Sleep(200);

            for(i=xt; i<=f; i++)
            {
                xtw[j]=xtw[i+t[j]];
                Sleep(100);
                cout<<xtw[j]<<" ";
                c++;

                if(c>=w-t[j])
                    break;
            }
            c=0;
            cout<<endl;
            Sleep(200);
            cout<<"X receiving Buffer:    "<<" ";
            Sleep(200);
            for(i=yt; i<=f; i++)
            {
                Xrb[i]=i;
                c++;
                Sleep(100);
                cout<<Xrb[i]<<" ";
                if(c>=w)
                    break;
            }
            c=0;

            cout<<endl;
            Sleep(200);
            cout<<"X receiving window:    "<<" ";
            Sleep(200);
            for(i=yt; i<=f; i++)
            {
                Xrw[i]=i;
                c++;
                Sleep(100);
                cout<<Xrw[i]<<" ";
                if(c>=w)
                    break;
            }
            cout<<endl<<"____________________________________"<<endl;
            cout<<endl;
            c=0;

            xt=xt+t[j];
            //cout<<endl<<"xt is: "<<xt<<endl;

        }
        else if( e[j]=='y' && t[j]>0)
        {
            Sleep(200);
            cout<<endl<<"after event "<<j<<": ";
            Sleep(200);
            cout<<endl;
            Sleep(200);
            cout<<endl<<"____________________________________"<<endl;
            cout<<"x Transmitting buffer: ";
            Sleep(200);
            for(i=xt; i<=f; i++)
            {
                xtb[i]=i;
                c++;
                Sleep(100);
                cout<<xtb[i]<<" ";
                if(c>=w)
                    break;
            }
            c=0;
            cout<<endl;
            Sleep(200);
            cout<<"x Transmitting Window: ";
            Sleep(200);
            for(i=xt; i<f; i++)              ///[i=t1 cause Y transmitted rr2 too, which is equivalant to 2]  put c=1 to change w to 4 okayly
            {
                xtw[i]=i;
                c++;
                Sleep(100);
                cout<<xtw[i]<<" ";

                if(c>=w)
                    break;
            }
            c=0;
            cout<<endl;
            Sleep(200);
            cout<<"X receiving Buffer:    ";
            Sleep(200);
            for(i=yt; i<=f; i++)
            {
                Xrb[i]=i;
                c++;
                Sleep(100);
                cout<<Xrb[i]<<" ";
                if(c>=w)
                    break;
            }
            c=0;
            cout<<endl;
            Sleep(200);
            cout<<"X Receiving window:    ";
            Sleep(200);

            for(i=yt; i<(w-t[j]); i++)
            {
                Xrw[i]=Xrw[i+t[j]];
                Sleep(100);
                cout<<Xrw[i]<<" ";
            }
            cout<<endl<<"____________________________________"<<endl;
            cout<<endl;
            c=0;
            yt=yt+t[j];
            //cout<<endl<<"yt is: "<<yt<<endl;
        }
        else if(( e[j]=='y' && t[j]==0))
        {
            int x=0,I=0,y=0;
            Sleep(200);
            cout<<"after event "<<j<<": "<<endl;
            Sleep(200);
            cout<<endl;
            Sleep(200);
            cout<<endl<<"____________________________________"<<endl;
            cout<<"X transmitting Buffer: "<<" ";
            Sleep(200);
            for(i=xt; i<=f; i++)
            {
                xtb[i]=i;
                c++;
                Sleep(100);
                cout<<xtb[i]<<" ";
                x=xtb[i];
                if(c>=w)
                    break;
            }

            if(x==f)
            {
                for(i=0; i<w-c; i++)
                {
                    Sleep(100);
                    cout<<xtb[i]<<" ";
                }

            }
            c=0;
            cout<<endl;
            Sleep(200);
            cout<<"X transmitting Window: "<<" ";
            Sleep(200);



            for(i=xt; i<=f; i++)
            {
                xtw[i]=i;
                c++;
                Sleep(100);
                cout<<xtw[i]<<" ";
                y=xtw[i];
                if(c>=w)
                    break;
            }

            if(y==f)
            {
                for(i=0; i<w-c; i++)
                {
                    Sleep(100);
                    cout<<xtb[i]<<" ";
                }

            }

            c=0;
            cout<<endl;
            Sleep(200);
            cout<<"x receiving buffer:    ";
            Sleep(200);
            for(i=yt; i<=f; i++)
            {
                Xrb[i]=i;
                c++;
                Sleep(100);
                cout<<Xrb[i]<<" ";
                if(c>=w)
                    break;
            }
            c=0;
            cout<<endl;
            Sleep(200);
            cout<<"x receiving Window:    ";
            Sleep(200);
            for(i=yt; i<f; i++)
            {
                Xrw[i]=i;
                c++;
                Sleep(100);
                cout<<Xrw[i]<<" ";
                if(c>=w)
                    break;
            }
            cout<<endl<<"____________________________________"<<endl;
            c=0;
        }
        else if(( e[j]=='x' && t[j]==0))
        {
            int x=0,I=0,y=0;
            Sleep(200);
            cout<<"after event "<<j<<": "<<endl;
            Sleep(200);
            cout<<endl;
            Sleep(200);
            cout<<endl<<"____________________________________"<<endl;
            cout<<"X transmitting Buffer: "<<" ";
            Sleep(200);

            for(i=yt; i<=f; i++)
            {
                Sleep(100);
                xtb[i]=i;
                c++;
                cout<<xtb[i]<<" ";

                if(c>w)
                    break;
            }
            c=0;
            cout<<endl;
            Sleep(200);
            cout<<"X transmitting Window: "<<" ";
            Sleep(200);
            for(i=yt; i<=f; i++)
            {
                xtw[i]=i;
                c++;
                Sleep(100);
                cout<<xtw[i]<<" ";
                if(c>=w)
                    break;
            }
            c=0;
            cout<<endl;
            Sleep(200);
            cout<<"x receiving buffer:    ";
            Sleep(200);
            for(i=xt; i<=f; i++)
            {
                Xrb[i]=i;
                c++;
                Sleep(100);
                cout<<Xrb[i]<<" ";
                x=Xrb[i];
                if(c>=w)
                    break;
            }
            if(x==f)
            {
                for(i=0; i<=w-c; i++)
                {
                    cout<<Xrb[i]<<" ";
                }
            }
            c=0;
            cout<<endl;
            Sleep(200);
            cout<<"x receiving Window:    ";
            Sleep(200);
            for(i=xt; i<f; i++)
            {
                Xrw[i]=i;
                c++;
                Sleep(100);
                cout<<Xrw[i]<<" ";
                y=Xrw[i];
                if(c>=w)
                    break;
            }
            if(y==f)
            {
                for(i=0; i<=w-c; i++)
                {
                    Sleep(100);
                    cout<<Xrw[i]<<" ";
                }
            }
            cout<<endl<<"____________________________________"<<endl;
            c=0;
        }
        else if(e[j]=='e'|| t[j]==-1)
        {
            Sleep(200);
            cout<<endl<<"____________________________________"<<endl;
            cout<<"          QUITTING PROGRAM";
            cout<<endl<<"____________________________________"<<endl;
            exit(1);
        }
        else
        {
            cout<<endl<<"Enter the input correctly"<<endl;
            continue;
        }
    }

}
