#include <iostream>

using namespace std;

int main()
{
    float fMoney = 100/*直接在这儿进行输入免得一直不出东西*/,nTemp = 0;
    //cin >> fMoney ;
    float fMoneyp =  fMoney*0.9f;
    //cout << fMoneyp << endl;
    int nMoney = (int) fMoney;
    int nBoom = 0,nAka = 0,nBig = 0;
    int ncount = 0;
    int nBigo = 0;
    //以上，是变量的定义和初始化。
    
    for (nBoom = 10;;nBoom+=2)
    {
        if (nBoom*2>=nMoney || nBoom>99 ) break;
        for (nAka = 1;;++nAka)
        {
            nTemp = nBoom*2 + nAka*6;
            if(nTemp>=nMoney) break;
            nBigo = 10*(nBoom/10)+8;
            if (nAka<nBoom)
            {
                for (nBig=nBigo;;nBig+=10)
                {
                    nTemp = nBoom*2 + nAka*6 + nBig;
                    if (nTemp>nMoney ) break;
                    else if(nTemp>/*=*/fMoneyp && nBig > nBoom ) cout << nBoom << " " << nAka << " " << nBig <<endl , ++ncount;
                    else; //"=" is banned XD
                }
            }
            else if (nAka>nBoom)
            {
                for (nBig=nBigo-10;nBig>=8;nBig-=10)
                {
                    nTemp = nBoom*2 + nAka*6 + nBig;
                    if (nTemp<fMoneyp ) break;
                    else if (nTemp<=nMoney && nBig > nBoom ) cout << nBoom << " " << nAka << nBig << " " << endl , ++ncount;
                    else;
                }
            }
        }
    }
    for (nBoom = 100;;nBoom+=2)
    {
        if((nBoom*2 + 10*6) >= nMoney ) break;
        for (nAka = 10;;++nAka)
            nTemp = nBoom * 2 + nAka * 6;
        if (nTemp >= nMoney) break;
        nBigo = 10*(nBoom/10)+8;
        if (nAka<nBoom)
        {
            nTemp = nBoom * 2 + nAka * 6;
            if (nTemp >= nMoney) break;
            nBigo = 10*(nBoom/10)+8;
            for (nBig = nBigo;;nBig+=10)
            {
                nTemp = nBoom*2 + nAka*6 + nBig;
                if (nTemp>nMoney ) break;
                else if(nTemp>/*=*/fMoneyp && nBig > nBoom ) cout << nBoom << " " << nAka << " " << nBig <<endl , ncount++;
                else;  //"=" is banned XD
            }
        }
        else if (nAka > nBoom)
        {
            for (nBig=nBigo-10;nBig>=8;nBig-=10)
            {
                nTemp = nBoom*2 + nAka*6 + nBig;
                if (nTemp<fMoneyp ) break;
                else if (nTemp<nMoney && nBig > nBoom ) cout << nBoom << " " << nBig << " " << endl , ++ncount;
                else;
            }
        }
        
    }
    if ( 0 == ncount ) cout << "no answer" << endl;
    return 0;
}
