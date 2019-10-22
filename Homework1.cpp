//Student Name:		Furkan KUMSUZ 
//Student ID :		040150152
#include <iostream>

using namespace std;
const int MAX=10;													//Declaring constatnt size of array
		 

class Matrix{
	
	public:
		int rows;
		int cols;
		int array[MAX][MAX];  										//Declaring two dimensional array 
	
		Matrix(){};  							          			//Declaring default constractor that does nothing
		Matrix(int array[MAX][MAX],int rows,int cols);				//Prototype of parametrized constructor

			
		void print();
};

void Matrix :: print(){  											//Print Function
    for(int i = 0; i < 3; ++i){
	
        for(int j = 0; j < 4; ++j)
        {
            cout <<array [i][j] << "  ";
            if(j == 4 - 1)
                cout << endl;
    	}
    }
    
}


Matrix::Matrix(int data[MAX][MAX],int ro,int co){						//Parametrized Constructor
			rows=ro;
			cols=co;
			for (int i=0;i<ro;i++){
		
				for (int j=0;j<co;j++){
			
					array[i][j]=data[i][j];
			
			}
		
		}
	};
	
Matrix operator+ (const Matrix & M1, const Matrix & M2){  				//nON Member Overload Operator
		
	Matrix Total;
	
	for (int i=0;i<3;i++){
		
		for (int j=0;j<4;j++){
			
			Total.array[i][j]=M1.array[i][j]+M2.array[i][j];
			
		}
		
	}
	
	return Total;
	
}


int main(){
	
	int A[MAX][MAX]={ {1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
	int B[MAX][MAX]{ {10,20,30,40}, {50,60,70,80},{90,100,110,120}};
	Matrix Mat1(A,3,4);
	Matrix Mat2(B,3,4);
	Matrix Total;
	
	

	
	Total=Mat1+Mat2;
	
	cout<<"Total = Mat1 + Mat2\n\n";

	Total.print();
	
	
	
	return 0;
	
}
