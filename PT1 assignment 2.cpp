// NABIL AFLAH BOO BINTI MOHD YOSUF BOO YONG CHONG (A23CS0252)
// LUBNA AL HAANI BINTI RADZUAN (A23CS0107) 

#include <iostream>
#include <iomanip>
using namespace std;

double calctotalIns( float Ir, float price, int period){
	float totalIns;
	totalIns = (Ir/100) * price * period;
	return totalIns;
}

	
int main(){
	int model, var, region;
	int DownP, year;
	float Ir, monthlyIns, price, Total;
	int period;
	char data;
	
	do{
	cout << "Proton Car Loan Calculator \n\n";
	
	cout << "Model [1-x50, 2-Exora, 3-Persona] : " ;
	cin >> model;
	cout << "Variants [1-1.6L Standard CVT, 2-1.6L Premium CVT] : ";
	cin >> var;
	cout << "Region [1-Peninsular Malaysia, 2-East Malaysia] : ";
	cin >> region;
	cout << "\n\n";
	
	cout << "Car Info" << endl;
    
    switch (model){
    	case 1:
    		cout << "Model: x50" << endl;
    		break;
    	case 2:
    		cout << "Model: Exora" << endl;
    		break;
    	case 3:
    		cout << "Model: Persona" << endl;
    		break;
			}
    		
    switch (var){
    	case 1: cout << "Variant: 1.6L Standard CVT" << endl;
    	        break;
    	case 2: cout << "Variant: 1.6L Premium CVT" << endl;
    	        break;
				}
	
	switch (region){
		case 1: cout << "Region: Peninsular Malaysia" << endl;
		        break;
		case 2: cout << "Region: East Malaysia" << endl;
		        break;
				}
				
	cout << "Paint Type: Metallic" << endl;
	price = 54600.00;
	cout << "Price (MYR): " << price;
	cout << "\n\n";
	
	cout << "Down Payment (MYR) : ";
	cin >> DownP;
	
	if(DownP == 0){
		cout << "Down payment (MYR) : ";
		cin >> DownP;
	} 
	cout << "Interest Rate (%) : ";
	cin >> Ir;
	cout << "Repayment period (in years) : ";
	cin >> period;
    
	cout << "\n\n";
	
	
	monthlyIns = (price + calctotalIns(Ir, price, period)) / (period * 12);
	cout << "MONTHLY INSTALLMENT (MYR) : " << monthlyIns;
	
	cout << "\n\n";
	
	char data;
	
	cout << "Do you want to enter other data? [Y @ N] : ";
	cin >> data;
	cout << "\n";
	
	if(data == 'n' || data == 'N'){
		cout << "Thank you :)";
	}else{
	cout << "\n";
	}
	
	}while (data == 'y' || data =='Y');
	 
	 return 0;
}
