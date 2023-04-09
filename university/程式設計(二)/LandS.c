#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main(void) {
	char c;
	float a = 0.0,b=0.0;
	c = getchar();
	while(c!='q' && c!='Q'){ 
		if(c=='l'||c=='L'){ //大樂透 
			srand(time(NULL));
			int num[49],lotto[20][7],n=20; // n=幾組 num=幾個號碼 lotto[幾次][幾位數字] 
			for(int i=0;i<49;i++){
				num[i] = i+1;
			}
			while(n--){
				for(int i=0;i<7;i++){
					int r = rand()%(49-i);
					lotto[n][i] = num[r];
					num[r] = num[49-i-1]; 
				}
			}
    		int count[49]={0};// 計算一般數字出現次數 
    		for (int i=0;i<20;i++) {
        		for (int j=0;j<6;j++) {
            		count[lotto[i][j] - 1]++;
        		}
    		}
    		int super[49]={0};// 計算特別號出現次數
			for(int i=0;i<20;i++){
				super[lotto[i][6]-1]++;// 第7個數字=特別號 
			}
			
    		printf("數字出現機率：\n");
    		for (int i=0;i<49;i++) {
    			a = count[i] / 120.0 * 100.0;
    			b = super[i] / 20.0 * 100.0;
        		printf("%2d: %5.2f %%, 特別號 %5.2f %%\n",i+1,a,b);
			}	
    	
    		getchar();
    		printf("\n");
		}
		else if(c=='s'||c=='S'){ //威力彩 
			srand(time(NULL));
			int num[38],lotto[20][6],n=20; // n=幾組 num=幾個號碼 lotto[幾次][幾位數字] 
			for(int i=0;i<38;i++){
				num[i] = i+1;
			}
			while(n--){
				for(int i=0;i<6;i++){
					int r = rand()%(38-i);
					lotto[n][i] = num[r];
					num[r] = num[38-i-1]; 
				}
				lotto[n][6]=rand()%8+1;//特別號 1~8 
			}
    		int count[38]={0};// 計算一般數字出現次數 
    		for (int i=0;i<20;i++) {
        		for (int j=0;j<6;j++) {
            		count[lotto[i][j] - 1]++;
        		}
    		}
    		int super[8]={0};// 計算特別號出現次數
			for(int i=0;i<20;i++){
				super[lotto[i][6]-1]++;// 第7個數字=特別號 
			}
			
    		printf("數字出現機率：\n");
    		for (int i=0;i<38;i++) {
    			a = count[i] / 120.0 * 100.0;
    			b = super[i] / 20.0 * 100.0;
        		if(i<8)printf("%2d: %5.2f %%, 特別號 %5.2f %%\n",i+1,a,b);
        		else printf("%2d: %5.2f %%\n",i+1,a);
			}	
    	
    		getchar();
    		printf("\n");
		}
		else{
			puts("輸入錯誤");
		}
		c = getchar();
	}
return 0;
}
