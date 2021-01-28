#include<stdio.h>
void Nhap_pt_mang(int a[]);
int n;
{
  

}
void Hien_thi_pt_mang(int a[])
{
  
  
}
void Hien_thi_tong_chan(int a[])
{
 
}
void Dem_chan_le_0(int a[])
{

}

 //khoi ham main
int main(){
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  int a[n];

  Nhap_pt_mang(a);
  Hien_thi_pt_mang(a);  
  Hien_thi_tong_chan(a);
  Dem_chan_le_0(a);
  return 0;
}
void Nhap_pt_mang(int a[]){
  for(int i = 0; i < n ; i++){
  printf("a[%d] =",i);
    scanf("%d",&a[i]);
  }
}

