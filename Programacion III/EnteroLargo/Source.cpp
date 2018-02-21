
#include <iostream>
#include <string>
#include <cstdlib>
#define size 50
using namespace std;

class EnteroLargo {

	friend istream &operator>>(istream &in, EnteroLargo &num);
	friend ostream &operator<<(ostream &out, const EnteroLargo &num);
	private:
	char *num;
	int  *numlargo;
public:
	bool operator==(const EnteroLargo &) const;
	bool operator<(const EnteroLargo &derecha) const;
	bool operator>(const EnteroLargo &derecha) const;
	bool operator<=(const EnteroLargo &derecha) const;
	bool operator>=(const EnteroLargo &derecha) const;
	EnteroLargo &operator=(EnteroLargo &derecha);
	EnteroLargo &operator+(EnteroLargo &derecha);
	EnteroLargo &operator-(EnteroLargo &derecha);

	EnteroLargo(){
		num= new char[size];
		numlargo= new int[size];
		for(int i=0; i<size; i++){
			num[i]='a';
			numlargo[i]=0;
		}
	}
};

istream &operator>>(istream &in, EnteroLargo &ptr) {
	in >> ptr.num;
	int cont=0, fin=size-1;
	for(int i=0;i<size; i++) {
		//cout <<ptr.num[i];
		if(ptr.num[i]!='a')
			cont++;
	}
	//cout<<"\n";

	for(int i=cont-1; i>=0; i--) {
		switch(ptr.num[i]) {
			case '1': ptr.numlargo[fin]=1;
				fin--;
				break;
			case '2': ptr.numlargo[fin]=2;
				fin--;
				break;
			case '3': ptr.numlargo[fin]=3;
				fin--;
				break;
			case '4': ptr.numlargo[fin]=4;
				fin--;
				break;
			case '5': ptr.numlargo[fin]=5;
				fin--;
				break;
			case '6': ptr.numlargo[fin]=6;
				fin--;
				break;
			case '7': ptr.numlargo[fin]=7;
				fin--;
				break;
			case '8': ptr.numlargo[fin]=8;
				fin--;
				break;
			case '9': ptr.numlargo[fin]=9;
				fin--;
				break;
			case '0': ptr.numlargo[fin]=0;
				fin--;
				break;
		}
	}
	return in;
}

ostream &operator<<(ostream &out, const EnteroLargo &ptr) {
	bool r=false;
	for(int i=0; i<size; i++) {
		if(ptr.numlargo[i]!=0)
			r=true;
		if(r)
			out<<ptr.numlargo[i];
	}
	return out;
}

bool EnteroLargo::operator ==(const EnteroLargo &derecha) const {
	bool v=true;
	for(int i=size-1; i>=0; i--) {
		//if(numlargo[i]!=0 || derecha.numlargo[i]!=0) {
			//cout <<"n1:"<<numlargo[i]<<" == "<<"n2:"<<derecha.numlargo[i]<<"-";
		if(numlargo[i]!=derecha.numlargo[i]){
			//cout <<numlargo[i]<<"---"<<derecha.numlargo[i]<<endl;
			v= false;
			break;
		}
		//cout<<v<<endl;
		//}
	}
	//cout <<v<<endl;
	return v;
}	

bool EnteroLargo::operator<(const EnteroLargo &derecha) const {
	bool v=false;
	for(int i=0; i<size; i++) {
		//if(numlargo[i]!=0 || derecha.numlargo[i]!=0) {
		//cout <<"n1:"<<numlargo[i]<<" < "<<"n2:"<<derecha.numlargo[i]<<"-";
		if (numlargo[i] < derecha.numlargo[i]) {
			//cout <<numlargo[i]<<"---"<<derecha.numlargo[i]<<endl;	
			v= true;
			break;		
		}
		else if(numlargo[i] > derecha.numlargo[i]) {
			break;
		}
		//cout<<v<<endl;
	}
	//cout <<v<<endl;
	return v;
}

bool EnteroLargo::operator>(const EnteroLargo &derecha) const {
	bool v=false;
	for(int i=0; i<size; i++) {
		//if(numlargo[i]!=0 || derecha.numlargo[i]!=0) {
		//cout <<"n1:"<<numlargo[i]<<" > "<<"n2:"<<derecha.numlargo[i]<<"-";
		if(numlargo[i] > derecha.numlargo[i]) {
			//cout <<numlargo[i]<<"---"<<derecha.numlargo[i]<<endl;
			v= true;
			break;
		}
		else if(numlargo[i] < derecha.numlargo[i]) {
			break;
		}
		//cout<<v<<endl;
		//}
	}
	//cout <<v<<endl;
	return v;
}

bool EnteroLargo::operator<=(const EnteroLargo &derecha) const {
	bool v=true;
	for(int i=0; i<size; i++){ 
		//cout <<numlargo[i]<<" <= "<<derecha.numlargo[i]<<"-";
		if(numlargo[i] > derecha.numlargo[i]) {
			//cout <<numlargo[i]<<"---"<<derecha.numlargo[i]<<endl;
				v=false;
				break;
		}
		else if(numlargo[i] < derecha.numlargo[i]) {
			break;
		}
		//cout <<v<<endl;
	}
	//cout <<v<<endl;
	return v;
}

bool EnteroLargo::operator>=(const EnteroLargo &derecha) const {
	bool v=true;
	for(int i=0; i<size; i++){ 
		//cout <<numlargo[i]<<" >= "<<derecha.numlargo[i]<<"-";
		if(numlargo[i] < derecha.numlargo[i]) {
			//cout <<numlargo[i]<<"---"<<derecha.numlargo[i]<<endl;
				v=false;
				break;
		}
		else if(numlargo[i] > derecha.numlargo[i]) {
			break;
		}
		//cout <<v<<endl;
	}
	//cout <<v<<endl;
	return v;
}

EnteroLargo &EnteroLargo::operator=(EnteroLargo &derecha) {
	for(int i=0; i<size; i++) 
		numlargo[i]=derecha.numlargo[i];
	return *this;
}

EnteroLargo &EnteroLargo::operator+(EnteroLargo &derecha) {
	EnteroLargo temp;
	int acarreo=0;

	for(int i=size-1; i>=0; i--) {
		temp.numlargo[i]= (numlargo[i]+derecha.numlargo[i]+acarreo);
		if(temp.numlargo[i]>9) {
			temp.numlargo[i]%=10;
			acarreo=1;
		}
		else 
			acarreo=0;
	}
	cout <<temp;
	return temp;
}

EnteroLargo &EnteroLargo::operator-(EnteroLargo &derecha) {
	EnteroLargo temp;
	int nmayor=0;

	for(int i=0; i<size; i++) {
		//cout <<"n1:"<<numlargo[i]<<" > "<<"n2:"<<derecha.numlargo[i]<<"-";
		if(numlargo[i] > derecha.numlargo[i]) {
			nmayor= 1;
			break;
		}
		else if(numlargo[i] < derecha.numlargo[i]) {
			nmayor=2;
			break;
		}
	}

	switch(nmayor) {
		case 1:
			for(int i=size-1; i>=0; i--) {
				if(numlargo[i]<derecha.numlargo[i]){
					temp.numlargo[i]=(numlargo[i]+=10)-derecha.numlargo[i];
					//if(numlargo[i-1]==0)
						numlargo[i-1]-=1;
					//else
						//numlargo[i-1]-=1;
				}
				else {
					temp.numlargo[i]=numlargo[i]-derecha.numlargo[i];
				}
			}
			cout <<temp;
			break;

		case 2:
			for(int i=size-1; i>=0; i--) {
				if(numlargo[i]>derecha.numlargo[i]){
					temp.numlargo[i]=(derecha.numlargo[i]+=10)-numlargo[i];
					//if(derecha.numlargo[i-1]==0)
						derecha.numlargo[i-1]-=1;
					//else
					//	derecha.numlargo[i-1]-=1;
				}
				else {
					temp.numlargo[i]=derecha.numlargo[i]-numlargo[i];
				}
			}
			cout <<"-"<<temp;
			break;

		default:
			cout <<0<<endl;
	}
	return temp;
}


int main() {
	cout <<"SOBRECARGA DE OPERADORES...\n";
	cout <<"\n";
	EnteroLargo n1,n2,n3;
	cout <<"Ingrese N1: ";
	cin >>n1;
	cout <<n1<<endl;
	cout <<"Ingrese N2: ";
	cin >>n2;
	cout <<n2<<endl;
	
	//cout <<num.size()<<endl;
	//EnteroLargo(num,num.size());
	cout <<"----------------------------------------\n";	
	cout <<"\n";
	cout <<"IGUALDAD...\n";
	n1==n2 ? cout <<"N1="<<n1<<" y "<<"N2="<<n2<<" Son iguales...\n" : cout <<"N1="<<n1<<" y "<<"N2="<<n2<<" Son diferentes...\n";
	cout <<"\n";
	system("pause");

	cout <<"----------------------------------------\n";
	cout <<"\n";
	cout <<"MENOR QUE...\n";
	n1<n2 ? cout<<"N1="<<n1<<" es menor que "<<"N2="<<n2<<endl : cout<<"N1="<<n1<<" no es menor que "<<"N2="<<n2<<endl;
	cout <<"\n";
	system("pause");

	cout <<"----------------------------------------\n";
	cout <<"\n";
	cout <<"MAYOR QUE...\n";
	n1>n2 ? cout<<"N1="<<n1<<" es mayor que "<<"N2="<<n2<<endl : cout<<"N1="<<n1<<" no es mayor que "<<"N2="<<n2<<endl;
	cout <<"\n";
	system("pause");

	cout <<"----------------------------------------\n";
	cout <<"\n";
	cout <<"MENOR O IGUAL QUE...\n";
	n1<=n2 ? cout<<"N1="<<n1<<" es menor o igual que "<<"N2="<<n2<<endl : cout<<"N1="<<n1<<" no es menor o igual que "<<"N2="<<n2<<endl;
	cout <<"\n";
	system("pause");

	cout <<"----------------------------------------\n";
	cout <<"\n";
	cout <<"MAYOR O IGUAL QUE...\n";
	n1>=n2 ? cout<<"N1="<<n1<<" es mayor o igual que "<<"N2="<<n2<<endl : cout<<"N1="<<n1<<" no es mayor o igual que "<<"N2="<<n2<<endl;
	cout <<"\n";
	system("pause");
	//cout <<"------------------------------\n";	
	//cout <<"N1:  "<<n1<<endl<<"N2:  "<<n2<<endl;

	cout <<"----------------------------------------\n";
	cout <<"\n";
	cout <<"SUMA...\n";
	cout <<n1<<" + "<<n2<<endl;
	cout <<"R/ ";
	n1+n2;
	cout <<endl;
	cout <<"\n";
	system("pause");

	cout <<"----------------------------------------\n";
	cout <<"\n";
	cout <<"RESTA...\n";
	cout <<n1<<" - "<<n2<<endl;
	cout <<"R/ ";
	n1-n2;
	cout <<endl;
	cout <<"\n";
	system("pause");

	cout <<"----------------------------------------\n";
	cout <<"\n";
	cout <<"ASIGNACION...\n";
	cout <<"Ingrese un numero para asignar a n2: ";
	cin >>n3;
	n2=n3;
	cout <<"N2= "<<n2<<"\nN3= "<<n3<<"\n";
	
	cout <<"\n";
	system("pause");

	cout <<"----------------------------------------\n";
	cout <<"\n";
	cout <<"IMPRESION...\n";
	cout <<"N1=  "<<n1<<endl<<"N2=  "<<n2<<endl<<"N3=  "<<n3<<endl;	
	cout <<"\n";
	cout <<"----------------------------------------\n";
	system("pause");
	return 0;
}
