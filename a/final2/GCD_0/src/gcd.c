#include <stdio.h>
#include "xparameters.h"
#include "xintc_l.h"
#include<stdlib.h>
#include <math.h>

int conv(char curNum[16],int count);



int  main()
{
while(1){
    int count1=0;
	int *matrix=(int *)malloc(19*19*sizeof(int));
	int count=2;
	int z=0;
	int p=11;
	char curNum[16]= {0};
	fgets(curNum, 10, stdin);
	if (curNum[0]=='L'){
    int x=conv(curNum,count);
    count=6;
    int y=conv(curNum,count);
    z=x*19+y;
    matrix[z]=2;
    xil_printf("%d%d%d%d",0,6,0,2);
    z=4*19+2;
    matrix[z]=5;
    xil_printf("%d%d%d%d",0,6,0,3);
    z=5*19+3;
    matrix[z]=5;


}
	else{
		int x=conv(curNum,count);
		    count=6;
		    int y=conv(curNum,count);
		    z=x*19+y;
		    matrix[z]=2;
		    xil_printf("%d%d%d%d",0,6,0,2);
		    z=4*19+2;
		    matrix[z]=5;
		    xil_printf("%d%d%d%d",0,6,0,3);
		    z=5*19+3;
		    matrix[z]=5;


	}

	int reset=0;

	while(reset==0){
    int counter=0;
    int a=0;
    int b=0;
	fgets(curNum, 17, stdin);
	count=1;
	int x=conv(curNum,count);
	count=5;
	int y=conv(curNum,count);
    z=x*19+y;
	matrix[z]=2;
	count=9;
	int i=conv(curNum,count);
	count=13;
	int j=conv(curNum,count);
    z=i*19+j;
    matrix[z]=2;
    int g;
    int temp3;int temp2;int temp4;int temp5;int temp1;
    for (g = 3; g < 357; g++){
    	//pano katw

    	 counter=0;
         temp3=0;
    	 temp1=0;
    	 temp2=0;
    	  temp4=0;
    	 temp5=0;
    	    if (g>57 && g<323){
    	    	temp3=matrix[g]+matrix[g+19]+matrix[g+38]+matrix[g-19]+matrix[g-38];
         		if (temp3==8 && matrix[g+57]==0 && matrix[g-57]==0){
         			a=1;
         			counter=1;

         			if (matrix[g]==0){
                				temp1=g;
         			}
         			if (matrix[g+19]==0){
         				temp2=temp1;
         			    temp1=g+19;
         			         			}

         			if (matrix[g+19+19]==0){
         				temp2=temp1;
         		        temp1=g+38;
         		         			       	}


         			if (matrix[g-19]==0){
         				temp2=temp1;
         		        temp1=g+19;
         		         			       	}

         		   	if (matrix[g-19-19]==0){
         		     	temp2=temp1;
         		       	temp1=g-38;
         		         		        		}
counter=1;



         		}
    	    }
         		//aristera deksia

    	    temp3=0;
    	    temp3=matrix[g]+matrix[g+1]+matrix[g+2]+matrix[g-1]+matrix[g-2];
         		if (temp3==8 && matrix[g+3]==0 & matrix[g-3]==0){
         			b=1;
         			counter=1;
         			if (matrix[g]==0){
         		      temp4=g;
         		         			}
         			if (matrix[g+1]==0){
         		       	temp5=temp4;
         		         temp4=g+1;
         		         			         		}

             		if (matrix[g+2]==0){
         		       temp5=temp4;
         		       temp4=g+2;
         		         		          	}


         		   	if (matrix[g-1]==0){
         		       temp5=temp4;
         		        temp4=g-1;
         		         		             	}

         		  	if (matrix[g-2]==0){
         		       temp5=temp4;
         		       	temp4=g-2;
         		         	 		}

counter=1;


         		}


         		}

//counter=0;
    if (counter==0 ||count1==2) {

      xil_printf("%d%d",p,p);
      z=p*19+p;
      matrix[z]=5;
      if (count1==0){
    	  p=16;
      }
      if (count1==1){
          	  p=13;
            }
      if (count1==2){
               	  p=15;
                 }
     xil_printf("%d%d",p,p);
     z=p*19+p;
     if (count1==0){
        	  p=14;
          }
     if (count1==1){
               	  p=12;
                 }
     if (count1==2){
    	 reset=1;
    }
     count1=count1+1;
     counter=0;
    }




if(counter!=0 && a==1){
float temp7=0;
int ia; int ib;
temp7=temp1/19;
temp7=floor(temp7);
ia=temp1-19*temp7;
ib=temp7;
xil_printf("%d%d",ib,ia);
z=ib*19+ia;
matrix[z]=5;
temp7=temp2/19;
temp7=floor(temp7);
ia=temp2-19*temp7;
ib=temp7;
xil_printf("%d%d",ib,ia);
z=ib*19+ia;
matrix[z]=5;



}
if(counter!=0 && b==1){
float temp7=0;
int ia; int ib;
temp7=temp4/19;
temp7=floor(temp7);
ia=temp4-19*temp7;
ib=temp7;
xil_printf("%d%d",ib,ia);
z=ib*19+ia;
matrix[z]=5;
temp7=temp5/19;
temp7=floor(temp7);
ia=temp5-19*temp7;
ib=temp7;
xil_printf("%d%d",ib,ia);
z=ib*19+ia;
matrix[z]=5;



}






         		}



}
}


















int conv(char curNum[],int count){
	int x=0;

	if (curNum[0+count]=='1'){
	    	x=x+10;
	    }
	    if (curNum[2+count]=='0'){
	    	x=x+0;
	    }
	    if (curNum[2+count]=='1'){
	       	x=x+1;
	       }
	    if (curNum[2+count]=='2'){
	       	x=x+2;
	       }
	    if (curNum[2+count]=='3'){
	       	x=x+3;
	       }
	    if (curNum[2+count]=='4'){
	       	x=x+4;
	       }
	    if (curNum[2+count]=='5'){
	       	x=x+5;
	       }
	    if (curNum[2+count]=='6'){
	       	x=x+6;
	       }
	    if (curNum[2+count]=='7'){
	       	x=x+7;
	       }
	    if (curNum[2+count]=='8'){
	       	x=x+8;
	       }
	    if (curNum[2+count]=='9'){
	       	x=x+9;
	       }
	    return x;


}
















