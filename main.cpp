void sapper()
{
    int i,j,count,x,y;
    cin>>i>>j>>count;
    i++;
    j+=2;
    string arr[i][j];
    
    for(int i1=0;i1<i;i1++)
    {
        for(int j1=0;j1<j;j1++)
        {
            
            arr[i1][j1]=to_string(0);
        }
    }
    
    for(int n=0;n<count;n++)
    {
        cin>>x>>y;
        x--;
        y--;
        arr[x+1][y+1]='*';
    }
    if(count==0){
        for(int i1=1;i1<i;i1++)
        {
            for(int j1=1;j1<j-1;j1++)
            {
                cout<<0<<" ";
            }
            cout << endl;
        }
        return;
    }
    
    for(int i1=1;i1<i-1;i1++)
    {
        
        for(int j1=1;j1<j;j1++)
        {
            if(arr[i1][j1]=="*" )
            {
                int number;
                if(arr[i1+1][j1]!="*"){
                    number=atoi(arr[i1+1][j1].c_str())+1;
                    arr[i1+1][j1]=to_string(number);
                }
                if(arr[i1-1][j1]!="*"){
                    number=atoi(arr[i1-1][j1].c_str())+1;
                    arr[i1-1][j1]=to_string(number);
                }
                if(arr[i1][j1+1]!="*"){
                    number=atoi(arr[i1][j1+1].c_str())+1;
                    arr[i1][j1+1]=to_string(number);
                }
                if(arr[i1][j1-1]!="*"){
                    number=atoi(arr[i1][j1-1].c_str())+1;
                    arr[i1][j1-1]=to_string(number);
                }
                if(arr[i1+1][j1+1]!="*"){
                    number=atoi(arr[i1+1][j1+1].c_str())+1;
                    arr[i1+1][j1+1]=to_string(number);
                }
                if(arr[i1-1][j1-1]!="*"){
                    number=atoi(arr[i1-1][j1-1].c_str())+1;
                    arr[i1-1][j1-1]=to_string(number);
                }
                
                if(arr[i1+1][j1-1]!="*"){
                    number=atoi(arr[i1+1][j1-1].c_str())+1;
                    arr[i1+1][j1-1]=to_string(number);
                }
                if(arr[i1-1][j1+1]!="*"){
                    number=atoi(arr[i1-1][j1+1].c_str())+1;
                    arr[i1-1][j1+1]=to_string(number);
                }
                
            }
        }
    }
//хардкор метод проверки
//cout<<"* "<<2<<endl;
//cout<<2<<" *"<<endl;
//cout<<1<<" "<<1<<endl;

    for(int i1=1;i1<i;i1++)
    {
        for(int j1=1;j1<j-1;j1++)
        {
//попробуем конвертировать из string в int
            if(arr[i1][j1]!="*"){
                cout<<atoi(arr[i1][j1].c_str())<<" ";
            }else{
                cout<<arr[i1][j1]<<" ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{

    mina();
return 0;
}
