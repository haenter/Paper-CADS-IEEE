#include "MAX.h" //this header is for assigning MAX values and NUM_LOOP globally
#define N MAX1
#define M N
#define	P 9
#define Q P
#define	Cdiv  P*P //div for filter 
#define Coffset 2
//offset
__m256i Cdiv_v; // vector that contain Cdiv
__m256i Coffset_v; // vector that contain Coffset

short int kernel[P][Q] __attribute__(( aligned(32)));
// input and out put matrix MAX1 and MAX2 should be equla to xsize and ysize
unsigned short int input[N][M] __attribute__(( aligned(32)));
unsigned short int output[N][M] __attribute__((aligned(32)));
inline void kernelBuilder( short int kernel[P][Q])
{ 
	int i, j, k=1;
	for(i=0;i<P;i++){
		for(j=0;j<Q;j++)
		{
			kernel[i][j]=1;//k;
			k++;
		}
	}
}	
int main()
{
	singleCore
	assignMatrixui16(input);
	kernelBuilder(kernel);
	Coffset_v = _mm256_set1_epi16(Coffset);
	Cdiv_v = _mm256_set1_epi16(32768 / Cdiv);
	programName="CON92";
	
		
		//function to be executed here :
		begin_rdtsc
		
				int i=0,j=0;
			//Broadcasting coefficients
			__m256i c00 = _mm256_set1_epi16(kernel[0][0]); //printf("      c00 : "); printVeci16(c00);
			__m256i c01 = _mm256_set1_epi16(kernel[0][1]); //printf("      c01 : "); printVeci16(c01);
			__m256i c02 = _mm256_set1_epi16(kernel[0][2]); //printf("      c02 : "); printVeci16(c02);
			__m256i c03 = _mm256_set1_epi16(kernel[0][3]); //printf("      c03 : "); printVeci16(c03);
			__m256i c04 = _mm256_set1_epi16(kernel[0][4]); //printf("      c04 : "); printVeci16(c04);
			__m256i c05 = _mm256_set1_epi16(kernel[0][5]); //printf("      c05 : "); printVeci16(c05);
			__m256i c06 = _mm256_set1_epi16(kernel[0][6]); //printf("      c06 : "); printVeci16(c06);
			__m256i c07 = _mm256_set1_epi16(kernel[0][7]); //printf("      c06 : "); printVeci16(c06);
			__m256i c08 = _mm256_set1_epi16(kernel[0][8]); //printf("      c06 : "); printVeci16(c06);
			
			
			__m256i c10 = _mm256_set1_epi16(kernel[1][0]); //printf("      c10 : "); printVeci16(c10);
			__m256i c11 = _mm256_set1_epi16(kernel[1][1]); //printf("      c11 : "); printVeci16(c11);
			__m256i c12 = _mm256_set1_epi16(kernel[1][2]); //printf("      c12 : "); printVeci16(c12);
			__m256i c13 = _mm256_set1_epi16(kernel[1][3]); //printf("      c13 : "); printVeci16(c13);
			__m256i c14 = _mm256_set1_epi16(kernel[1][4]); //printf("      c14 : "); printVeci16(c14);
			__m256i c15 = _mm256_set1_epi16(kernel[1][5]); //printf("      c15 : "); printVeci16(c15);
			__m256i c16 = _mm256_set1_epi16(kernel[1][6]); //printf("      c16 : "); printVeci16(c16);
			__m256i c17 = _mm256_set1_epi16(kernel[1][7]); //printf("      c16 : "); printVeci16(c16);
			__m256i c18 = _mm256_set1_epi16(kernel[1][8]); //printf("      c16 : "); printVeci16(c16);
			
			__m256i c20 = _mm256_set1_epi16(kernel[2][0]); //printf("      c20 : "); printVeci16(c20);
			__m256i c21 = _mm256_set1_epi16(kernel[2][1]); //printf("      c21 : "); printVeci16(c21);
			__m256i c22 = _mm256_set1_epi16(kernel[2][2]); //printf("      c22 : "); printVeci16(c22);
			__m256i c23 = _mm256_set1_epi16(kernel[2][3]); //printf("      c23 : "); printVeci16(c23);
			__m256i c24 = _mm256_set1_epi16(kernel[2][4]); //printf("      c24 : "); printVeci16(c24);
			__m256i c25 = _mm256_set1_epi16(kernel[2][5]); //printf("      c25 : "); printVeci16(c25);
			__m256i c26 = _mm256_set1_epi16(kernel[2][6]); //printf("      c26 : "); printVeci16(c26);
			__m256i c27 = _mm256_set1_epi16(kernel[2][7]); //printf("      c26 : "); printVeci16(c26);
			__m256i c28 = _mm256_set1_epi16(kernel[2][8]); //printf("      c26 : "); printVeci16(c26);
			
			__m256i c30 = _mm256_set1_epi16(kernel[3][0]); //printf("      c30 : "); printVeci16(c30);
			__m256i c31 = _mm256_set1_epi16(kernel[3][1]); //printf("      c31 : "); printVeci16(c31);
			__m256i c32 = _mm256_set1_epi16(kernel[3][2]); //printf("      c32 : "); printVeci16(c32);
			__m256i c33 = _mm256_set1_epi16(kernel[3][3]); //printf("      c33 : "); printVeci16(c33);
			__m256i c34 = _mm256_set1_epi16(kernel[3][4]); //printf("      c34 : "); printVeci16(c34);
			__m256i c35 = _mm256_set1_epi16(kernel[3][5]); //printf("      c35 : "); printVeci16(c35);
			__m256i c36 = _mm256_set1_epi16(kernel[3][6]); //printf("      c36 : "); printVeci16(c36);
			__m256i c37 = _mm256_set1_epi16(kernel[3][7]); //printf("      c36 : "); printVeci16(c36);
			__m256i c38 = _mm256_set1_epi16(kernel[3][8]); //printf("      c36 : "); printVeci16(c36);
			
			__m256i c40 = _mm256_set1_epi16(kernel[4][0]); //printf("      c40 : "); printVeci16(c40);
			__m256i c41 = _mm256_set1_epi16(kernel[4][1]); //printf("      c41 : "); printVeci16(c41);
			__m256i c42 = _mm256_set1_epi16(kernel[4][2]); //printf("      c42 : "); printVeci16(c42);
			__m256i c43 = _mm256_set1_epi16(kernel[4][3]); //printf("      c43 : "); printVeci16(c43);
			__m256i c44 = _mm256_set1_epi16(kernel[4][4]); //printf("      c44 : "); printVeci16(c44);
			__m256i c45 = _mm256_set1_epi16(kernel[4][5]); //printf("      c45 : "); printVeci16(c45);
			__m256i c46 = _mm256_set1_epi16(kernel[4][6]); //printf("      c46 : "); printVeci16(c46);
			__m256i c47 = _mm256_set1_epi16(kernel[4][7]); //printf("      c46 : "); printVeci16(c46);
			__m256i c48 = _mm256_set1_epi16(kernel[4][8]); //printf("      c46 : "); printVeci16(c46);
			
			__m256i c50 = _mm256_set1_epi16(kernel[5][0]); //printf("      c50 : "); printVeci16(c50);
			__m256i c51 = _mm256_set1_epi16(kernel[5][1]); //printf("      c51 : "); printVeci16(c51);
			__m256i c52 = _mm256_set1_epi16(kernel[5][2]); //printf("      c52 : "); printVeci16(c52);
			__m256i c53 = _mm256_set1_epi16(kernel[5][3]); //printf("      c53 : "); printVeci16(c53);
			__m256i c54 = _mm256_set1_epi16(kernel[5][4]); //printf("      c54 : "); printVeci16(c54);
			__m256i c55 = _mm256_set1_epi16(kernel[5][5]); //printf("      c55 : "); printVeci16(c55);
			__m256i c56 = _mm256_set1_epi16(kernel[5][6]); //printf("      c56 : "); printVeci16(c56);
			__m256i c57 = _mm256_set1_epi16(kernel[5][7]); //printf("      c56 : "); printVeci16(c56);
			__m256i c58 = _mm256_set1_epi16(kernel[5][8]); //printf("      c56 : "); printVeci16(c56);
			
			__m256i c60 = _mm256_set1_epi16(kernel[6][0]); //printf("      c60 : "); printVeci16(c60);
			__m256i c61 = _mm256_set1_epi16(kernel[6][1]); //printf("      c61 : "); printVeci16(c61);
			__m256i c62 = _mm256_set1_epi16(kernel[6][2]); //printf("      c62 : "); printVeci16(c62);
			__m256i c63 = _mm256_set1_epi16(kernel[6][3]); //printf("      c63 : "); printVeci16(c63);
			__m256i c64 = _mm256_set1_epi16(kernel[6][4]); //printf("      c64 : "); printVeci16(c64);
			__m256i c65 = _mm256_set1_epi16(kernel[6][5]); //printf("      c65 : "); printVeci16(c65);
			__m256i c66 = _mm256_set1_epi16(kernel[6][6]); //printf("      c66 : "); printVeci16(c66);
			__m256i c67 = _mm256_set1_epi16(kernel[6][7]); //printf("      c66 : "); printVeci16(c66);
			__m256i c68 = _mm256_set1_epi16(kernel[6][8]); //printf("      c66 : "); printVeci16(c66);
			
			__m256i c70 = _mm256_set1_epi16(kernel[7][0]); //printf("      c60 : "); printVeci16(c60);
			__m256i c71 = _mm256_set1_epi16(kernel[7][1]); //printf("      c61 : "); printVeci16(c61);
			__m256i c72 = _mm256_set1_epi16(kernel[7][2]); //printf("      c62 : "); printVeci16(c62);
			__m256i c73 = _mm256_set1_epi16(kernel[7][3]); //printf("      c63 : "); printVeci16(c63);
			__m256i c74 = _mm256_set1_epi16(kernel[7][4]); //printf("      c64 : "); printVeci16(c64);
			__m256i c75 = _mm256_set1_epi16(kernel[7][5]); //printf("      c65 : "); printVeci16(c65);
			__m256i c76 = _mm256_set1_epi16(kernel[7][6]); //printf("      c66 : "); printVeci16(c66);
			__m256i c77 = _mm256_set1_epi16(kernel[7][7]); //printf("      c66 : "); printVeci16(c66);
			__m256i c78 = _mm256_set1_epi16(kernel[7][8]); //printf("      c66 : "); printVeci16(c66);
			
			__m256i c80 = _mm256_set1_epi16(kernel[8][0]); //printf("      c60 : "); printVeci16(c60);
			__m256i c81 = _mm256_set1_epi16(kernel[8][1]); //printf("      c61 : "); printVeci16(c61);
			__m256i c82 = _mm256_set1_epi16(kernel[8][2]); //printf("      c62 : "); printVeci16(c62);
			__m256i c83 = _mm256_set1_epi16(kernel[8][3]); //printf("      c63 : "); printVeci16(c63);
			__m256i c84 = _mm256_set1_epi16(kernel[8][4]); //printf("      c64 : "); printVeci16(c64);
			__m256i c85 = _mm256_set1_epi16(kernel[8][5]); //printf("      c65 : "); printVeci16(c65);
			__m256i c86 = _mm256_set1_epi16(kernel[8][6]); //printf("      c66 : "); printVeci16(c66);
			__m256i c87 = _mm256_set1_epi16(kernel[8][7]); //printf("      c66 : "); printVeci16(c66);
			__m256i c88 = _mm256_set1_epi16(kernel[8][8]); //printf("      c66 : "); printVeci16(c66);
			
			for(i=P/2; i<N-P/2; i++){
				for(j=Q/2; j<M-Q/2; j+=16){ //printf("%d, %d \n", i,j);
					
					//loading inputs
					__m256i input00 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+0][j-(Q/2)+0]);
					__m256i input01 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+0][j-(Q/2)+1]);
					__m256i input02 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+0][j-(Q/2)+2]);
					__m256i input03 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+0][j-(Q/2)+3]);
					__m256i input04 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+0][j-(Q/2)+4]);
					__m256i input05 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+0][j-(Q/2)+5]);
					__m256i input06 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+0][j-(Q/2)+6]);
					__m256i input07 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+0][j-(Q/2)+7]);
					__m256i input08 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+0][j-(Q/2)+8]);
					
					__m256i input10 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+1][j-(Q/2)+0]);
					__m256i input11 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+1][j-(Q/2)+1]);
					__m256i input12 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+1][j-(Q/2)+2]);
					__m256i input13 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+1][j-(Q/2)+3]);
					__m256i input14 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+1][j-(Q/2)+4]);
					__m256i input15 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+1][j-(Q/2)+5]);
					__m256i input16 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+1][j-(Q/2)+6]);
					__m256i input17 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+1][j-(Q/2)+7]);
					__m256i input18 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+1][j-(Q/2)+8]);
					
					__m256i input20 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+2][j-(Q/2)+0]);
					__m256i input21 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+2][j-(Q/2)+1]);
					__m256i input22 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+2][j-(Q/2)+2]);
					__m256i input23 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+2][j-(Q/2)+3]);
					__m256i input24 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+2][j-(Q/2)+4]);
					__m256i input25 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+2][j-(Q/2)+5]);
					__m256i input26 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+2][j-(Q/2)+6]);
					__m256i input27 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+2][j-(Q/2)+7]);
					__m256i input28 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+2][j-(Q/2)+8]);
					
					__m256i input30 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+3][j-(Q/2)+0]);
					__m256i input31 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+3][j-(Q/2)+1]);
					__m256i input32 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+3][j-(Q/2)+2]);
					__m256i input33 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+3][j-(Q/2)+3]);
					__m256i input34 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+3][j-(Q/2)+4]);
					__m256i input35 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+3][j-(Q/2)+5]);
					__m256i input36 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+3][j-(Q/2)+6]);
					__m256i input37 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+3][j-(Q/2)+7]);
					__m256i input38 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+3][j-(Q/2)+8]);
					
					__m256i input40 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+4][j-(Q/2)+0]);
					__m256i input41 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+4][j-(Q/2)+1]);
					__m256i input42 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+4][j-(Q/2)+2]);
					__m256i input43 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+4][j-(Q/2)+3]);
					__m256i input44 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+4][j-(Q/2)+4]);
					__m256i input45 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+4][j-(Q/2)+5]);
					__m256i input46 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+4][j-(Q/2)+6]);
					__m256i input47 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+4][j-(Q/2)+7]);
					__m256i input48 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+4][j-(Q/2)+8]);
					
					__m256i input50 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+5][j-(Q/2)+0]);
					__m256i input51 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+5][j-(Q/2)+1]);
					__m256i input52 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+5][j-(Q/2)+2]);
					__m256i input53 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+5][j-(Q/2)+3]);
					__m256i input54 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+5][j-(Q/2)+4]);
					__m256i input55 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+5][j-(Q/2)+5]);
					__m256i input56 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+5][j-(Q/2)+6]);
					__m256i input57 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+5][j-(Q/2)+7]);
					__m256i input58 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+5][j-(Q/2)+8]);
					
					__m256i input60 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+6][j-(Q/2)+0]);
					__m256i input61 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+6][j-(Q/2)+1]);
					__m256i input62 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+6][j-(Q/2)+2]);
					__m256i input63 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+6][j-(Q/2)+3]);
					__m256i input64 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+6][j-(Q/2)+4]);
					__m256i input65 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+6][j-(Q/2)+5]);
					__m256i input66 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+6][j-(Q/2)+6]);
					__m256i input67 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+6][j-(Q/2)+7]);
					__m256i input68 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+6][j-(Q/2)+8]);
					
					__m256i input70 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+7][j-(Q/2)+0]);
					__m256i input71 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+7][j-(Q/2)+1]);
					__m256i input72 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+7][j-(Q/2)+2]);
					__m256i input73 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+7][j-(Q/2)+3]);
					__m256i input74 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+7][j-(Q/2)+4]);
					__m256i input75 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+7][j-(Q/2)+5]);
					__m256i input76 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+7][j-(Q/2)+6]);
					__m256i input77 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+7][j-(Q/2)+7]);
					__m256i input78 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+7][j-(Q/2)+8]);
					
					__m256i input80 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+8][j-(Q/2)+0]);
					__m256i input81 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+8][j-(Q/2)+1]);
					__m256i input82 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+8][j-(Q/2)+2]);
					__m256i input83 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+8][j-(Q/2)+3]);
					__m256i input84 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+8][j-(Q/2)+4]);
					__m256i input85 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+8][j-(Q/2)+5]);
					__m256i input86 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+8][j-(Q/2)+6]);
					__m256i input87 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+8][j-(Q/2)+7]);
					__m256i input88 = _mm256_loadu_si256((__m256i *) &input[i-(P/2)+8][j-(Q/2)+8]);
					
					//multiplications
					input00 = _mm256_mullo_epi16(input00, c00); //printf("  input00 : "); printVeci16(input00);
					input01 = _mm256_mullo_epi16(input01, c01); //printf("  input01 : "); printVeci16(input01);
					input02 = _mm256_mullo_epi16(input02, c02); //printf("  input02 : "); printVeci16(input02);
					input03 = _mm256_mullo_epi16(input03, c03); //printf("  input03 : "); printVeci16(input03);
					input04 = _mm256_mullo_epi16(input04, c04); //printf("  input04 : "); printVeci16(input04);
					input05 = _mm256_mullo_epi16(input05, c05); //printf("  input04 : "); printVeci16(input04);
					input06 = _mm256_mullo_epi16(input06, c06); //printf("  input04 : "); printVeci16(input04);
					input07 = _mm256_mullo_epi16(input07, c07); //printf("  input04 : "); printVeci16(input04);
					input08 = _mm256_mullo_epi16(input08, c08); //printf("  input04 : "); printVeci16(input04);
					
					input10 = _mm256_mullo_epi16(input10, c10); //printf("  input10 : "); printVeci16(input10);
					input11 = _mm256_mullo_epi16(input11, c11); //printf("  input11 : "); printVeci16(input11);
					input12 = _mm256_mullo_epi16(input12, c12); //printf("  input12 : "); printVeci16(input12);
					input13 = _mm256_mullo_epi16(input13, c13); //printf("  input13 : "); printVeci16(input13);
					input14 = _mm256_mullo_epi16(input14, c14); //printf("  input14 : "); printVeci16(input14);
					input15 = _mm256_mullo_epi16(input15, c15); //printf("  input14 : "); printVeci16(input14);
					input16 = _mm256_mullo_epi16(input16, c16); //printf("  input14 : "); printVeci16(input14);
					input17 = _mm256_mullo_epi16(input17, c17); //printf("  input14 : "); printVeci16(input14);
					input18 = _mm256_mullo_epi16(input18, c18); //printf("  input14 : "); printVeci16(input14);
					
					input20 = _mm256_mullo_epi16(input20, c20); //printf("  input20 : "); printVeci16(input20);
					input21 = _mm256_mullo_epi16(input21, c21); //printf("  input21 : "); printVeci16(input21);
					input22 = _mm256_mullo_epi16(input22, c22); //printf("  input22 : "); printVeci16(input22);
					input23 = _mm256_mullo_epi16(input23, c23); //printf("  input23 : "); printVeci16(input23);
					input24 = _mm256_mullo_epi16(input24, c24); //printf("  input24 : "); printVeci16(input24);
					input25 = _mm256_mullo_epi16(input25, c25); //printf("  input24 : "); printVeci16(input24);
					input26 = _mm256_mullo_epi16(input26, c26); //printf("  input24 : "); printVeci16(input24);
					input27 = _mm256_mullo_epi16(input27, c27); //printf("  input24 : "); printVeci16(input24);
					input28 = _mm256_mullo_epi16(input28, c28); //printf("  input24 : "); printVeci16(input24);
					
					input30 = _mm256_mullo_epi16(input30, c30); //printf("  input30 : "); printVeci16(input30);
					input31 = _mm256_mullo_epi16(input31, c31); //printf("  input31 : "); printVeci16(input31);
					input32 = _mm256_mullo_epi16(input32, c32); //printf("  input32 : "); printVeci16(input32);
					input33 = _mm256_mullo_epi16(input33, c33); //printf("  input33 : "); printVeci16(input33);
					input34 = _mm256_mullo_epi16(input34, c34); //printf("  input34 : "); printVeci16(input34);
					input35 = _mm256_mullo_epi16(input35, c35); //printf("  input34 : "); printVeci16(input34);
					input36 = _mm256_mullo_epi16(input36, c36); //printf("  input34 : "); printVeci16(input34);
					input37 = _mm256_mullo_epi16(input37, c37); //printf("  input34 : "); printVeci16(input34);
					input38 = _mm256_mullo_epi16(input38, c38); //printf("  input34 : "); printVeci16(input34);
					
					input40 = _mm256_mullo_epi16(input40, c40); //printf("  input40 : "); printVeci16(input40);
					input41 = _mm256_mullo_epi16(input41, c41); //printf("  input41 : "); printVeci16(input41);
					input42 = _mm256_mullo_epi16(input42, c42); //printf("  input42 : "); printVeci16(input42);
					input43 = _mm256_mullo_epi16(input43, c43); //printf("  input43 : "); printVeci16(input43);
					input44 = _mm256_mullo_epi16(input44, c44); //printf("  input44 : "); printVeci16(input44);
					input45 = _mm256_mullo_epi16(input45, c45); //printf("  input44 : "); printVeci16(input44);
					input46 = _mm256_mullo_epi16(input46, c46); //printf("  input44 : "); printVeci16(input44);
					input47 = _mm256_mullo_epi16(input47, c47); //printf("  input44 : "); printVeci16(input44);
					input48 = _mm256_mullo_epi16(input48, c48); //printf("  input44 : "); printVeci16(input44);
					
					input50 = _mm256_mullo_epi16(input50, c50); //printf("  input40 : "); printVeci16(input40);
					input51 = _mm256_mullo_epi16(input51, c51); //printf("  input41 : "); printVeci16(input41);
					input52 = _mm256_mullo_epi16(input52, c52); //printf("  input42 : "); printVeci16(input42);
					input53 = _mm256_mullo_epi16(input53, c53); //printf("  input43 : "); printVeci16(input43);
					input54 = _mm256_mullo_epi16(input54, c54); //printf("  input44 : "); printVeci16(input44);
					input55 = _mm256_mullo_epi16(input55, c55); //printf("  input44 : "); printVeci16(input44);
					input56 = _mm256_mullo_epi16(input56, c56); //printf("  input44 : "); printVeci16(input44);
					input57 = _mm256_mullo_epi16(input57, c57); //printf("  input44 : "); printVeci16(input44);
					input58 = _mm256_mullo_epi16(input58, c58); //printf("  input44 : "); printVeci16(input44);
					
					input60 = _mm256_mullo_epi16(input60, c60); //printf("  input40 : "); printVeci16(input40);
					input61 = _mm256_mullo_epi16(input61, c61); //printf("  input41 : "); printVeci16(input41);
					input62 = _mm256_mullo_epi16(input62, c62); //printf("  input42 : "); printVeci16(input42);
					input63 = _mm256_mullo_epi16(input63, c63); //printf("  input43 : "); printVeci16(input43);
					input64 = _mm256_mullo_epi16(input64, c64); //printf("  input44 : "); printVeci16(input44);
					input65 = _mm256_mullo_epi16(input65, c65); //printf("  input44 : "); printVeci16(input44);
					input66 = _mm256_mullo_epi16(input66, c66); //printf("  input44 : "); printVeci16(input44);
					input67 = _mm256_mullo_epi16(input67, c67); //printf("  input44 : "); printVeci16(input44);
					input68 = _mm256_mullo_epi16(input68, c68); //printf("  input44 : "); printVeci16(input44);
					
					input70 = _mm256_mullo_epi16(input70, c70); //printf("  input40 : "); printVeci16(input40);
					input71 = _mm256_mullo_epi16(input71, c71); //printf("  input41 : "); printVeci16(input41);
					input72 = _mm256_mullo_epi16(input72, c72); //printf("  input42 : "); printVeci16(input42);
					input73 = _mm256_mullo_epi16(input73, c73); //printf("  input43 : "); printVeci16(input43);
					input74 = _mm256_mullo_epi16(input74, c74); //printf("  input44 : "); printVeci16(input44);
					input75 = _mm256_mullo_epi16(input75, c75); //printf("  input44 : "); printVeci16(input44);
					input76 = _mm256_mullo_epi16(input76, c76); //printf("  input44 : "); printVeci16(input44);
					input77 = _mm256_mullo_epi16(input77, c77); //printf("  input44 : "); printVeci16(input44);
					input78 = _mm256_mullo_epi16(input78, c78); //printf("  input44 : "); printVeci16(input44);
					
					input80 = _mm256_mullo_epi16(input80, c80); //printf("  input40 : "); printVeci16(input40);
					input81 = _mm256_mullo_epi16(input81, c81); //printf("  input41 : "); printVeci16(input41);
					input82 = _mm256_mullo_epi16(input82, c82); //printf("  input42 : "); printVeci16(input42);
					input83 = _mm256_mullo_epi16(input83, c83); //printf("  input43 : "); printVeci16(input43);
					input84 = _mm256_mullo_epi16(input84, c84); //printf("  input44 : "); printVeci16(input44);
					input85 = _mm256_mullo_epi16(input85, c85); //printf("  input44 : "); printVeci16(input44);
					input86 = _mm256_mullo_epi16(input86, c86); //printf("  input44 : "); printVeci16(input44);
					input87 = _mm256_mullo_epi16(input87, c87); //printf("  input44 : "); printVeci16(input44);
					input88 = _mm256_mullo_epi16(input88, c88); //printf("  input44 : "); printVeci16(input44);
					
					//additions
					 
					__m256i vec0 =  _mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input00, input01),_mm256_add_epi16(input02, input03)),_mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input04,input05),_mm256_add_epi16(input06,input07)), input08));
					__m256i vec1 = 	_mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input10, input11),_mm256_add_epi16(input12, input13)),_mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input14,input15),_mm256_add_epi16(input16,input17)), input18));
					__m256i vec2 = 	_mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input20, input21),_mm256_add_epi16(input22, input23)),_mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input24,input25),_mm256_add_epi16(input26,input27)), input28));
					__m256i vec3 = 	_mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input30, input31),_mm256_add_epi16(input32, input33)),_mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input34,input35),_mm256_add_epi16(input36,input37)), input38));
					__m256i vec4 = 	_mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input40, input41),_mm256_add_epi16(input42, input43)),_mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input44,input45),_mm256_add_epi16(input46,input47)), input48));
					__m256i vec5 = 	_mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input50, input51),_mm256_add_epi16(input52, input53)),_mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input54,input55),_mm256_add_epi16(input56,input57)), input58));
					__m256i vec6 =  _mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input60, input61),_mm256_add_epi16(input62, input63)),_mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input64,input65),_mm256_add_epi16(input66,input67)), input68));
					__m256i vec7 =  _mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input70, input71),_mm256_add_epi16(input72, input73)),_mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input74,input75),_mm256_add_epi16(input76,input77)), input78));
					__m256i vec8 =  _mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input80, input81),_mm256_add_epi16(input82, input83)),_mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(input84,input85),_mm256_add_epi16(input86,input87)), input88));
					
					__m256i result =  _mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(vec0, vec1),_mm256_add_epi16(vec2, vec3)),_mm256_add_epi16(_mm256_add_epi16(_mm256_add_epi16(vec4,vec5),_mm256_add_epi16(vec6,vec7)), vec8));
					
					//pripheral computations
					result = _mm256_mulhrs_epi16(result, Cdiv_v);
					result = _mm256_add_epi16( result, Coffset_v);
					//store results
					_mm256_storeu_si256( (__m256i *) &output[i][j], result);
				}
			}
		end_rdtsc
		
	printf("\nThe  %d X matrix \n", output[N/2][ M/2]);

	return 0;
}
