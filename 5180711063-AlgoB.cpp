#include <conio.h>
#include <iostream>
using namespace::std;

main()
{
    int data[10];
    int i,j,a,b,k,cari,kelas,baru,ganti,hapus;
    cout<<"program kelas"<<endl;
   cout<<"masukkan jumlah kelas : ";cin>>kelas;
      for(i=0;i<kelas;i++)

 {cout<<"kelas"<<i<<"=";cin>>data[i];
 }
    cout<<endl;


    cout<<"Masukkan kelas yang anda cari : ";
    cin>>cari;


    for(j=0;j<kelas;j++)
    {
    if(data[j]==cari)
    {
        cout<<endl;
    cout<<"kelas yang anda cari terdapat pada index ke-"<<j;
    }
   }
    cout<<endl;
    cout<<"Masukkan index yang ingin anda ganti : ";cin>>ganti;cout<<endl;
    cout<<"Masukkan data pengganti : ";cin>>baru;
    a = ganti;
    data[a] = baru;
    cout<<endl;
    cout<<"Data kelas yang baru  : ";
    for(b=0;b<kelas;b++)
{
    cout<<endl;
    cout<<"kelas"<<b<<"="<<data[b];
}
cout<<endl;
cout<<"Masukkan index kelas yang ingin anda hapus : ";cin>>hapus;
i=hapus;
cout<<endl;
cout<<"kelas yang telah dihapus : ";
cout<<" "<<data[i]<<" pada index ke- "<<i<<" ";cout<<endl;
cout<<"setelah kelas dihapus : ";cout<<endl;
for(j=hapus;j<kelas;j++)
{
 data[j]=data[j+1];
}
for(k=0;k<kelas-1;k++)
{
cout<<endl;
 cout<<"Data"<<k<<" : "<<data[k];
}

}

