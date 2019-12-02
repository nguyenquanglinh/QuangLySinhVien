#include <iostream>
#include <string>
using namespace std;
class SinhVien{
	private: 
		string maSv="";
		string hoTenSv="";
		string diaChi="";
		string namSinh="";
	public:
		string GetMaSv(){
			return maSv;
		}
		string GetHoTen(){
			return hoTenSv;
		}
		string GetDiaChi(){
			return diaChi;
		}
		string GetNamSinh(){
			return namSinh;
		}
		void SetMaSv(string maSv){
			this->maSv=maSv;
		}
		void SetHoTen(string tenSv){
			this->hoTenSv=tenSv;
		}
		void SetDiaChi(string diaChi){
			this->diaChi=diaChi;
		}
		void SetNamSinh(string namSinh){
			this->namSinh=namSinh;
		}
		void NhapThongTinSinhVien(){
			cout<<"Nhap ma sinh vien: ";
			getline(cin,this->maSv);
			cout<<"Nhap ho ten sinh vien: ";
			getline(cin,this->hoTenSv);
			cout<<"Nhap dia chi sinh vien: ";
			getline(cin,this->diaChi);
			cout<<"Nhap nam sinh sinh vien: ";
			getline(cin,this->namSinh);
			cout<<endl;
		}
		string ToString(){
			return "Thong tin sinh vien: \nMaSV: "+GetMaSv()+"\nHoTen: "+GetHoTen()+"\nDiaChi: "+GetDiaChi()+"\nNamSinh: "+GetNamSinh()+"\n";
		}
};

class Lop{
	private:
		int n=0;
		string tenLop="";
		string tenKhoa="";
		string nienKhoa="";
		SinhVien* dsSV=new SinhVien[n];
	public:
		string GetTenLop(){
			return tenLop;
		}
		string GetTenKhoa(){
			return tenKhoa;
		}
		string GetNienKhoa(){
			return nienKhoa;
		}
		void SetTenLop(string tenLop){
			this->tenLop=tenLop;
		}
		void SetTenKhoa(string tenKhoa){
			this->tenKhoa=tenKhoa;
		}
		void SetNienKhoa(string nienKhoa){
			this->nienKhoa=nienKhoa;
		}
		int GetSoThanhVienTrongLop(){
			return n;
		}
		void SetSoThanhVienTrongLop(int n){
			this->n=n;
			dsSV=new SinhVien[n];
		}
		void NhapThanhVienTrongLop(){
			for(int i=0;i<n;i++)	{
				SinhVien sv;
				sv.NhapThongTinSinhVien();
				dsSV[i]=sv;
			}
		}
		string LayDsThongTinSv(){
			string s="";
			for(int i=0;i<n;i++){
				s+=dsSV[i].ToString();
			}
			return s;
		}
		string LayThongTinTrongLop(){
			return "Thong tin lop:\nTenLop: "+GetTenLop()+"TenKhoa: "+GetTenKhoa()+"\nNienKhoa: "+GetNienKhoa()+LayDsThongTinSv();
		}
};
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//	SinhVien sv;
//	sv.SetMaSv("1234");
//	sv.SetHoTen("nguyen van a");
//	sv.SetDiaChi("nam dinh");
//	sv.SetNamSinh("1999");
//	cout<<sv.ToString();

	Lop lop;
	lop.SetTenLop("cntt16b");
	lop.SetTenKhoa("cntt");
	lop.SetNienKhoa("2017-2022");
	lop.SetSoThanhVienTrongLop(2);
	lop.NhapThanhVienTrongLop();
	cout<<lop.LayDsThongTinSv();
	cout<<lop.LayThongTinTrongLop();
	return 0;
}
