 #include <iostream>
using namespace std;
int** generateMatrix(int rows, int cols){
	int** temp =new int *[rows];
	for(int i =0;i<rows;++i) {
		temp[i]=new int[cols];
		
	}
	return temp;
	
}
void print(int** matrix, int rows, int cols){
	for (int i=0;i<rows;++i){
		for (int j=0;j<cols;++j){
			cout<< matrix[i][j]<<" ";
		}
		cout << endl;
	}
	
}
void populateMatrix(int** matrix,int rows,int cols,int *src,int src_size){
	if(rows * cols != src_size){
		cout<<"Size of matrix is not equal size of source array!"<<std::endl;
		exit(-1);		
	}
	int pos=0;
	for (int i =0;i<rows;++i){
		for(int j=0;j<cols;++j){
			matrix[i][j]=src[pos++];
		}
	}
}
int** addMatrices(int** matA,int**matB,int rows,int cols){
	int**resultMat=generateMatrix(rows,cols);
	for(int i=0;i<rows;++i) {
		for(int j=0;j<cols;++j) {
			resultMat[i][j]=matA[i][j]+matB[i][j];	
		}
	}
	return resultMat;
}
int main(){
	int m1_src[]={1,2,3,4,5,6,7,8,9,10,11,12};
	int m1_rows=3,m1_cols=4;
	int** m1 = generateMatrix(m1_rows,m1_cols);
	populateMatrix(m1,m1_rows,m1_cols,m1_src,12);
	
	
	int m2_src[]={10,20,30,40,50,60,70,80,90,100,110,120};
	int m2_rows=3,m2_cols=4;
	int** m2 = generateMatrix(m2_rows,m2_cols);
	populateMatrix(m2,m2_rows,m2_cols,m2_src,12);
	
	
	print(m1,m1_rows,m1_cols);
	cout<<endl;
	print(m2,m2_rows,m2_cols);
	cout<<endl;
	print(addMatrices(m1,m2,m1_rows,m1_cols),m1_rows,m1_cols);
   return 0;
}
 
