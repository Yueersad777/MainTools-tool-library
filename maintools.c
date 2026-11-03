/*
 * Hello World ICS Project
 * Copyright (C) 2026 HWmakerAlice
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */
 
#include "maintools.h"
#define PI 3.1415

/*
void tools1_Basic_Calculator(void);
//基础运算 
void tools2_Seek_Quadratic_Equations(void);
//一元二次方程求解
void tools3_Differentiation(void);
//求导（仅次于幂函数、指数函数、三角函数以及一元二次函数）
void tools4_File_Reader(void);
//文件阅读器
void tools5_Use_The_Pythagorean_Theorem_To_Find_The_Length_Of_The_Hypotuse(void);
//依靠毕达哥拉斯定理求直角三角形的边
void tools6_Use_Trigonometric_Functions_To_Calculate_The_Sides_Of_A_Triangle(void);
//依靠三角函数求三角形边
void tools7_Trigonometric_Functions(void);
//三角函数计算器
void tools8_Student_Mark_Performance_Statistics(void);
//学生成绩统计程序
void tools9_Complex_Number(void);
//复数计算器
void tools10_Find_The_Perimeter(void);
//求各个图形的周长
void tools11_Find_The_Area(void);
//求各个图像的面积
void tools12_Numerical_Type_Conversion_Program(void);
//数字类型转换程序
void tools13_Mathematical_Operations_Related_To_Cosplay(void);
//关于Cosplay的数学运算
void tools14_BMI_Calculator(void);
//BMI求值计算器
void tools15_Calculations_Related_To_Line_Sebments(void);
//与线段有关的数学计算（仅次于求中点以及线段长度）
*/

typedef struct studentmark_three
{
	long long id;
	char name[500];
	int mark1;
	int mark2;
	int mark3;
	int total_score;
	float average_score;
}STMT;

void Bobble_Sort_three(STMT* ant,int num)
{
	int i,j;
	STMT tremp;
	
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<num-i-1;j++)
		{
			if(ant[j].total_score<ant[j+1].total_score)
			{
				tremp=ant[j];
				ant[j]=ant[j+1];
				ant[j+1]=tremp;	
			}	
		}	
	} 
	
	return;
}

typedef struct studentmark_eight
{
	long long id;
	char name[200];
	int mark1;
	int mark2;
	int mark3;
	int mark4;
	int mark5;
	int mark6;
	int mark7;
	int mark8;
	int total_score;
	float average_score;
}STME;

void Bobble_Sort_eight(STME* ane,int num)
{ 
	int i,j;
	STME trap;
	
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<num-i-1;j++)
		{
			if(ane[j].total_score<ane[j+1].total_score)
			{
				trap=ane[j];
				ane[j]=ane[j+1];
				ane[j+1]=trap;
			}
		}	
	}
	
	return; 
}

void tools1_Basic_Calculator(void)
{
	char choice;
	
	printf("Basic calculator\n");
	printf("Enter 'a' for addition\n");
	printf("Enter 'b' for subtraction\n");
	printf("Enter 'c' for multiplication\n");
	printf("Enter 'd' for division\n");
	printf("\n");
	printf("Function choice:");
	scanf(" %c",&choice);
	printf("\n"); 
	
	switch(choice){
		case 'a':
		case 'A':{
			FILE* fp1;
			int a;
			int b;
			int sum;
			char file[200];
			
			printf("a.addition\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("number a and number b:");
			scanf("%d%d",&a,&b);
			printf("\n");
			sum=a+b;
			printf("Answer(sum):%d\n",sum);
			
			fp1=fopen(fule,"w");
			if(fp1==NULL)
			{
				return;
			}
			
			fprintf(fp1,"file:%s\n",file);
			fprintf(fp1,"a.addition\n");
			fprintf(fp1,"number a:%d\tnumber b:%d\tAnswer(sum):%d\n",a,b,sum);
			fclose(fp1);
			
			break;
		} 
		case 'b':
		case 'B':{
			FILE* fp2;
			int a;
			int b;
			int sub;
			char file[200];
			
			printf("b.subtraction\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("number a and number b:");
			scanf("%d%d",&a,&b);
			printf("\n");
			sub=a-b;
			printf("Answer(sub):%d\n",sub);
			
			fp2=fopen(fule,"w");
			if(fp2==NULL)
			{
				return;
			}
			
			fprintf(fp2,"file:%s\n",file);
			fprintf(fp2,"b.subtraction\n");
			fprintf(fp2,"number a:%d\tnumber b:%d\tAnswer(sub):%d\n",a,b,sub);
			fclose(fp2);
			
			break;
		}
		case 'c':
		case 'C':{
			FILE* fp3;
			int a;
			int b;
			int mul;
			char file[200];
			
			printf("c.multiplication\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("number a and number b:");
			scanf("%d%d",&a,&b);
			printf("\n");
			mul=a*b;
			printf("Answer(mul):%d\n",mul);
			
			fp3=fopen(fule,"w");
			if(fp3==NULL)
			{
				return;	
			} 
			
			fprintf(fp3,"file:%s\n",file);
			fprintf(fp3,"c.multiplication\n");
			fprintf(fp3,"number a:%d\tnumber b:%d\tAnswer(mul):%d\n",a,b,mul);
			fclose(fp3);
			
			break;
		}
		case 'd':
		case 'D':{
			FILE* fp4;
			float a,b;
			float div;
			char file[200];
			
			printf("d.division\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("number a and number b:");
			scanf("%f%f",&a,&b);
			if(b==0)
			{
				printf("Division by zero is not possible.\n");
				
				fp4=fopen(fule,"w");
				if(fp4==NULL)
				{
					return;	
				}	
				
				fprintf(fp4,"file:%s\n",file);
				fprintf(fp4,"d.division\n");
				fprintf(fp4,"Division by zero is not possible.\n");
				fclose(fp4);
			}
			else
			{
				div=a/b;
				printf("Answer(div):%.3f\n",div);
				
				fp4=fopen(fule,"w");
				if(fp4==NULL)
				{
					return;
				}
				
				fprintf(fp4,"file:%s\n",file);
				fprintf(fp4,"d.division\n");
				fprintf(fp4,"number a:%.3f\tnumber b:%.3f\tAnswer(div):%.3f\n",a,b,div);
				fclose(fp4);
			}
			break;
		}
		default:{
			printf("Invalid selection\n");
			break;
		}
	}
	return;
}

void tools2_Seek_Quadratic_Equations(void)
{
	FILE* fp5;
	float a,b,c,re_b,re_c;
	float x_1,x_2;
	float Delta_Discrinant;
	float formula_2a;
	char file[200];
	
	printf("Derivative of quadratic functions\n");
	printf("new file:");
	scanf("%s",file);
	char fule[200]; 
	sprintf(fule,"%s.txt",file);
	printf("\n");
	printf("number a and number b and number c:");
	scanf("%f%f%f",&a,&b,&c);
	printf("\n");
	
	re_b=-1*b;
	re_c=-1*c;
	
	if(b<0&&c<0)
	{
		printf("Quadratic function:%.3fx^2-%.3fx-%.3f\n",a,re_b,re_c);
	}
	else if(b<0)
	{
		printf("Quadratic function:%.3fx^2-%.3fx+%.3f\n",a,re_b,c);
	}
	else if(c<0)
	{
		printf("Quadratic function:%.3fx^2+%.3fx-%.3f\n",a,b,re_c);
	}
	else
	{
		printf("Quadratic function:%.3fx^2+%.3fx+%.3f\n",a,b,c);
	}
	
	Delta_Discrinant=pow(b,2)-4*a*c;
	formula_2a=2*a;
	x_1=(-b+sqrt(Delta_Discrinant))/formula_2a;
	x_2=(-b-sqrt(Delta_Discrinant))/formula_2a; 
	
	if(Delta_Discrinant<0)
	{
		printf("No real roots\n");
	}
	else if(Delta_Discrinant==0)
	{
		printf("Answer:x1=x2=%.3f",x_1);
	}
	else
	{
		printf("Answer:x1=%.3f,x2=%.3f\n",x_1,x_2);	
	}
	
	fp5=fopen(fule,"w");
	if(fp5==NULL)
	{
		return;
	}
	
	fprintf(fp5,"file:%s\n",file);
	fprintf(fp5,"Derivative of quadratic functions\n");
	
	if(b<0&&c<0)
	{
		fprintf(fp5,"Quadratic function:%.3fx^2-%.3fx-%.3f\n",a,re_b,re_c);
	}
	else if(b<0)
	{
		fprintf(fp5,"Quadratic function:%.3fx^2-%.3fx+%.3f\n",a,re_b,c);
	}
	else if(c<0)
	{
		fprintf(fp5,"Quadratic function:%.3fx^2+%.3fx-%.3f\n",a,b,re_c);
	}
	else
	{
		fprintf(fp5,"Quadratic function:%.3fx^2+%.3fx+%.3f\n",a,b,c);
	}
	
	if(Delta_Discrinant<0)
	{
		fprintf(fp5,"No real roots\n");
	}
	else if(Delta_Discrinant==0)
	{
		fprintf(fp5,"Answer:x1=x2=%.3f",x_1);
	}
	else
	{
		fprintf(fp5,"Answer:x1=%.3f,x2=%.3f\n",x_1,x_2);	
	}
	fclose(fp5);
	
	return;
}

void tools3_Differentiation(void)
{
	char choice2;
	
	printf("Differentiation\n");
	printf("Enter 'a' for Derivative of power functions\n");
	printf("Enter 'b' for Derivative of quadratic function of one variable\n");
	printf("Enter 'c' for Derivation of exponential function\n");
	printf("\n");
	printf("Function choice:");
	scanf(" %c",&choice2);
	printf("\n"); 
	
	switch(choice2){
		case 'a':
		case 'A':{
			FILE* fp6;
			int Constant,Exponent;
			int D_p_Constant,D_p_Exponent;
			char file[200];
			
			printf("Derivative of power functions\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("Write primitive function(Constant and Exponent):");
			scanf("%d%d",&Constant,&Exponent);
			printf("\n");
			printf("Primttive function: f(x)=%dx^%d\n",Constant,Exponent);
			
			D_p_Constant=Constant*Exponent;
			D_p_Exponent=Exponent-1;
			
			printf("Answer(Derivative function): f'(x)=%dx^%d\n",D_p_Constant,D_p_Exponent);
			
			fp6=fopen(fule,"w");
			if(fp6==NULL)
			{
				return;
			}
			
			fprintf(fp6,"file:%s\n",file);
			fprintf(fp6,"Derivative of power functions\n");
			fprintf(fp6,"Primttive function: f(x)=%dx^%d\n",Constant,Exponent);
			fprintf(fp6,"Answer(Derivative function): f'(x)=%dx^%d\n",D_p_Constant,D_p_Exponent);
			
			fclose(fp6);
			break;
		}
		case 'b':
		case 'B':{
			FILE* fp7;
			int a,b,c;
			int D_Quadratic;
			int re_b;
			int re_c;
			char file[200];
			
			printf("Derivative of quadratic functions\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("Write primitive function(number a and number b and number c):");
			scanf("%d%d%d",&a,&b,&c);
			printf("\n");
			
			re_b=-1*b;
			re_c=-1*c;
			
			if(b<0&&c<0)
			{
				printf("Primitive function: f(x)=%dx^2-%dx-%d\n",a,re_b,re_c); 
			}
			else if(b<0)
			{
				printf("Primitive function: f(x)=%dx^2-%dx+%d\n",a,re_b,c);
			}
			else if(c<0)
			{
				printf("Primitive function: f(x)=%dx^2+%dx-%d\n",a,b,re_c);
			}
			else
			{
				printf("Primitive function: f(x)=%dx^2+%dx+%d\n",a,b,c);
			}
			
			D_Quadratic=2*a;
			
			if(b<0)
			{
				printf("Answer(Derivative function): f'(x)=%dx-%d\n",D_Quadratic,re_b);
				
				fp7=fopen(fule,"w");
				if(fp7==NULL)
				{
					return;
				}
				
				fprintf(fp7,"file:%s\n",file);
				fprintf(fp7,"Derivative of quadratic functions\n");
				if(b<0&&c<0)
				{
					fprintf(fp7,"Primitive function: f(x)=%dx^2-%dx-%d\n",a,re_b,re_c); 
				}
				else if(b<0)
				{
					fprintf(fp7,"Primitive function: f(x)=%dx^2-%dx+%d\n",a,re_b,c);
				}
				else if(c<0)
				{
					fprintf(fp7,"Primitive function: f(x)=%dx^2+%dx-%d\n",a,b,re_c);
				}
				else
				{
					fprintf(fp7,"Primitive function: f(x)=%dx^2+%dx+%d\n",a,b,c);
				}
				fprintf(fp7,"Answer(Derivative function): f'(x)=%dx-%d\n",D_Quadratic,re_b);
			}
			else if(b==0)
			{
				printf("Answer(Derivative function): f'(x)=%dx\n",D_Quadratic);
				
				fp7=fopen(fule,"w");
				if(fp7==NULL)
				{
					return;
				}
				
				fprintf(fp7,"file:%s\n",file);
				fprintf(fp7,"Derivative of quadratic functions\n");
				if(b<0&&c<0)
				{
					fprintf(fp7,"Primitive function: f(x)=%dx^2-%dx-%d\n",a,re_b,re_c); 
				}
				else if(b<0)
				{
					fprintf(fp7,"Primitive function: f(x)=%dx^2-%dx+%d\n",a,re_b,c);
				}
				else if(c<0)
				{
					fprintf(fp7,"Primitive function: f(x)=%dx^2+%dx-%d\n",a,b,re_c);
				}
				else
				{
					fprintf(fp7,"Primitive function: f(x)=%dx^2+%dx+%d\n",a,b,c);
				}
				fprintf(fp7,"Answer(Derivative function): f'(x)=%dx\n",D_Quadratic);
			}
			else
			{
				printf("Answer(Derivative function): f'(x)=%dx+%d\n",D_Quadratic,b);
				
				fp7=fopen(fule,"w");
				if(fp7==NULL)
				{
					return;
				}
				
				fprintf(fp7,"file:%s\n",file);
				fprintf(fp7,"Derivative of quadratic functions\n");
				if(b<0&&c<0)
				{
					fprintf(fp7,"Primitive function: f(x)=%dx^2-%dx-%d\n",a,re_b,re_c); 
				}
				else if(b<0)
				{
					fprintf(fp7,"Primitive function: f(x)=%dx^2-%dx+%d\n",a,re_b,c);
				}
				else if(c<0)
				{
					fprintf(fp7,"Primitive function: f(x)=%dx^2+%dx-%d\n",a,b,re_c);
				}
				else
				{
					fprintf(fp7,"Primitive function: f(x)=%dx^2+%dx+%d\n",a,b,c);
				}
				fprintf(fp7,"Answer(Derivative function): f'(x)=%dx+%d\n",D_Quadratic,b);
			}
			fclose(fp7);
			break;
		}
		case 'c':
		case 'C':{
			FILE* fp8;
			int Pft_Constant,Constant;
			int Def_Constant;
			char file[200];
			
			printf("Derivation of exponential function\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("The constant term of a power function:");
			scanf("%d",&Pft_Constant);
			printf("\n");
			printf("Constant:");
			scanf("%d",&Constant);
			printf("\n");
			
			Def_Constant=Pft_Constant*Constant;
			
			if(Constant==1)
			{
				printf("Primitive function: f(x)=e^%d\n",Pft_Constant);
				printf("Answer(Derivation function): f'(x)=%de^%dx\n",Def_Constant,Constant);
				
				fp8=fopen(fule,"w");
				if(fp8==NULL)
				{
					return;
				}
				
				fprintf(fp8,"file:%s\n",file);
				fprintf(fp8,"Derivation of exponential function\n");
				fprintf(fp8,"Primitive function: f(x)=e^%d\n",Pft_Constant);
				fprintf(fp8,"Answer(Derivation function): f'(x)=%de^%dx\n",Def_Constant,Pft_Constant);
				fclose(fp8);
			}
			else if(Constant==0)
			{
				printf("Primitive function: 0\n");
				printf("Answer(Derivation function): 0\n"); 
				
				fp8=fopen(fule,"w");
				if(fp8==NULL)
				{
					return;
				}
				
				fprintf(fp8,"file:%s\n",file);
				fprintf(fp8,"Derivation of exponential function\n");
				fprintf(fp8,"Primitive function: 0\n");
				fprintf(fp8,"Answer(Derivation function): 0\n");
				fclose(fp8);
			}
			else if(Pft_Constant==1)
			{
				printf("Primitive function: f(x)=%de^x\n",Constant);
				printf("Answer(Derivation function): f'(x)=%de^x\n",Def_Constant);
				
				fp8=fopen(fule,"w");
				if(fp8==NULL)
				{
					return;
				}
				
				fprintf(fp8,"file:%s\n",file);
				fprintf(fp8,"Derivation of exponential function\n");
				fprintf(fp8,"Primitive function: f(x)=%de^x\n",Constant);
				fprintf(fp8,"Answer(Derivation function): f'(x)=%de^x\n",Def_Constant);
				fclose(fp8);
			}
			else if(Pft_Constant==0)
			{
				printf("Primitive function: f(x)=%de\n",Constant);
				printf("Answer(Derivation function): 0\n");
				
				fp8=fopen(fule,"w");
				if(fp8==NULL)
				{
					return;
				}
				
				fprintf(fp8,"file:%s\n",file);
				fprintf(fp8,"Derivation of exponential function\n");
				fprintf(fp8,"Primitive function: f(x)=%de\n",Constant);
				fprintf(fp8,"Answer(Derivation function): 0\n");
				fclose(fp8);
			}
			else
			{
				printf("Primitive function: f(x)=%de^%dx\n",Constant,Pft_Constant);
				printf("Answer(Derivation function): f'(x)=%de^%dx\n",Def_Constant,Pft_Constant);
				
				fp8=fopen(fule,"w");
				if(fp8==NULL)
				{
					return;
				}
				
				fprintf(fp8,"file:%s\n",file);
				fprintf(fp8,"Derivation of exponential function\n");
				fprintf(fp8,"Primitive function: f(x)=%de^%dx\n",Constant,Pft_Constant);
				fprintf(fp8,"Answer(Derivation function): f'(x)=%de^%dx\n",Def_Constant,Pft_Constant);
				fclose(fp8);
			}
			break;
		} 
		default:{
			printf("Invalid selection\n");
			break;
		}
	}
	return;
}

void tools4_File_Reader(void)
{
	char choice3;
	
	printf("File Reader\n");
	printf("Enter 'a' for 'Txt Reader'\n");
	printf("Enter 'b' for 'Code Reader'\n");
	printf("Enter 'c' for 'Code writer'\n");
	printf("\n");
	printf("Function choice:");
	scanf(" %c",&choice3);
	printf("\n"); 
	
	switch(choice3){
		case 'A':
		case 'a':{
			FILE* fp10;
			char file[200];
			
			printf("txt reader\n");
			printf("Input the file you want to search for:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("File output:\n");
			
			fp10=fopen(fule,"r");
			if(fp10==NULL)
			{
				return;
			}
			
			printf("\n");
			while(fgets(fule,sizeof(fule),fp10)!=NULL)
			{
				printf("%s",fule);
			}
			fclose(fp10);
			printf("\n");
			printf("File output completed\n");
			break;
		}
		case 'B':
		case 'b':{
			FILE* fp11;
			long len=1;
			char file[200];
			
			printf("code reader\n");
			printf("Input the file(source file) you want to search for:");
			scanf("%s",file);
			printf("\n");
			printf("Code output:\n");
			
			fp11=fopen(file,"r");
			if(fp11==NULL)
			{
				return;
			}
			
			printf("\n");
			while(fgets(file,sizeof(file),fp11)!=NULL)
			{
				printf("%d\t%s",len,file);
				len++;
			}
			fclose(fp11);
			printf("\n");
			printf("\n");
			printf("File output completed\n");
			break;
		}
		case 'C':
		case 'c':{
			FILE* code;
			char codefile[1000];
			char file[200];
			
			printf("code writer\n");
			printf("Program type(source file):");
			scanf("%s",file);
			printf("\n");
			
			code=fopen(file,"w");
			if(code==NULL)
			{
				printf("There is a document with the same name, unable to run.\n");
				return; 
			}
			
			while(1){
				gets(codefile);//gets：从键盘中读取一整行文字（包括空格），存到一个字符数组里。 
				if(strcmp(codefile,"end")==0)//strcmp():用于比较两个字符串的函数，==代表两个字符串相等，<0代表str1小于str2(即str1在字典序中排在str2前面，>0则是在str2的后面） 
				{
					//strcmp(字符串名，字符串);
					break;
				}
				fprintf(code,"%s",codefile);
				fprintf(code,"\n");
			}
			
			fclose(code);
			printf("Completed writing\n");
			break;
		} 
		default:{
			printf("Invalid selection\n");
			break;
		}
	}
	return;
}

void tools5_Use_The_Pythagorean_Theorem_To_Find_The_Length_Of_The_Hypotuse(void)
{
	char choice4;
	
	printf("Use the pythagorean theorem to find the length of the hypotuse\n");
	printf("Enter 'a' for 'seek side a'\n");
	printf("Enter 'b' for 'seek side b'\n");
	printf("Enter 'c' for 'seek side c'\n");
	printf("\n");
	printf("Function choice:");
	scanf(" %c",&choice4);
	printf("\n"); 
	
	switch(choice4)
	{
		case 'a':
		case 'A':{
			FILE* fp12;
			int side_b,side_c;
			int side_a;
			char file[200];
			
			printf("a.seek side a\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			resultLen1: 
			printf("side b and side c:");
			scanf("%d%d",&side_b,&side_c);
			printf("\n");
			
			if(side_b<0||side_b==0||side_c<0||side_c==0)
			{
				printf("In this case,it cannot form a triangle.\n");
				goto resultLen1;
			}
			else
			{
				side_a=sqrt(pow(side_c,2)-pow(side_b,2));
				if(side_a<0||side_a==0)
				{
					printf("In this case,it cannot form a triangle.\n");
					goto resultLen1;
				}
				else
				{
					printf("Answer(side a):%d\n",side_a);
					
					fp12 = fopen(fule,"w");
					if(fp12 == NULL)
					{
						return;
					}
					
					fprintf(fp12,"file:%s\n",file);
					fprintf(fp12,"seek side a\n");
					fprintf(fp12,"side b:%d\tside c:%d\n",side_b,side_c);
					fprintf(fp12,"Answer(side a):%d\n",side_a);
					fclose(fp12);
				}
			}
			break;
		}
		case 'b':
		case 'B':{
			FILE* fp13;
			int side_a,side_c;
			int side_b;
			char file[200];
			
			printf("b.seek side b\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			resultLen2:
			printf("side a and side c:");
			scanf("%d%d",&side_a,&side_c);
			printf("\n");
			
			if(side_a<0||side_a==0||side_c<0||side_c==0)
			{
				printf("In this case,it cannot form a triangle.\n");
				goto resultLen2;
			}
			else
			{
				side_b=sqrt(pow(side_c,2)-pow(side_a,2));
				if(side_b<0||side_b==0)
				{
					printf("In this case,it cannot form a triangle.\n");
					goto resultLen2;
				}
				else
				{
					printf("Answer(side b):%d\n",side_b);
					
					fp13=fopen(fule,"w");
					if(fp13==NULL)
					{
						return;
					}
					
					fprintf(fp13,"file:%s\n",file);
					fprintf(fp13,"seek side b\n");
					fprintf(fp13,"side a:%d\tside c:%d\n",side_a,side_c);
					fprintf(fp13,"Answer(side b):%d\n",side_b);
					fclose(fp13);
				}
			}
			break;
		} 
		case 'c':
		case 'C':{
			FILE* fp14;
			int side_a,side_b;
			int side_c;
			char file[200];
			
			printf("c.seek side c\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			
			resultLen3:
				
			printf("side a and side b:");
			scanf("%d%d",&side_a,&side_b);
			printf("\n");
			
			if(side_a<0||side_a==0||side_b<0||side_b==0)
			{
				printf("In this case,it cannot form a triangle.\n");
				goto resultLen3;
			}
			else
			{
				side_c=sqrt(pow(side_a,2)+pow(side_b,2));
				if(side_c==0||side_c<0)
				{
					printf("In this case,it cannot form a triangle.\n");
					goto resultLen3;
				}
				else
				{
					printf("Answer(side c):%d\n",side_c);
					
					fp14=fopen(fule,"w");
					if(fp14==NULL)
					{
						return;
					}
					
					fprintf(fp14,"file:%s\n",file);
					fprintf(fp14,"seek side c");
					fprintf(fp14,"side a:%d\tside b:%d\n",side_a,side_b);
					fprintf(fp14,"Answer(side c):%d\n",side_c);
					fclose(fp14);
				}
			}
			break;
		}
		default:{
			printf("Invalid selection\n");
			break;
		}
	}
	return;
}
//weiwanc 
void tools6_Use_Trigonometric_Functions_To_Calculate_The_Sides_Of_A_Triangle(void)
{
	char choice5;
	
	printf("Use trigonometric functions to calculate the sides of a triangle\n");
	printf("Enter 'a' for 'seek side a'\n");
	printf("Enter 'b' for 'seek side b'\n");
	printf("Enter 'c' for 'seek side c'\n");
	printf("\n");
	printf("Function choice:");
	scanf(" %c",&choice5);
	printf("\n");
	
	switch(choice5){
		case 'a':
		case 'A':{
			FILE* fp15;
			float angle;
			float side_b,side_c;
			float side_a;
			float formula_Angle;
			float resultcos;
			char file[200];
			
			printf("a.seek side a\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("angle:");
			scanf("%f",&angle);
			printf("side b and side c:");
			scanf("%f%f",&side_b,&side_c);
			printf("\n");
			
			if(side_b<0||side_b==0||side_c<0||side_c==0)
			{
				printf("In this case,it cannot form a triangle.\n");
			}
			else
			{
				formula_Angle=(angle*PI)/180;
				resultcos=cos(formula_Angle);
				side_a=sqrt(pow(side_b,2)+pow(side_c,2)-2*side_b*side_c*resultcos);
				if(side_a==0||side_a<0)
				{
					printf("In this case,it cannot form a triangle.\n");
				}
				else
				{
					printf("Answer(side a):%.2f",side_a);
					
					fp15=fopen(fule,"w");
					if(fp15==NULL)
					{
						return;
					}
					
					fprintf(fp15,"file:%s\n",file);
					fprintf(fp15,"seek side a\n");
					fprintf(fp15,"angle:%.2f\n",angle);
					fprintf(fp15,"side b:%.2f   side c:%.2f\n",side_b,side_c);
					fprintf(fp15,"Answer(side a):%.2f\n",side_a);
					fclose(fp15);
				}
			}
			break;
		}
		case 'b':
		case 'B':{
			FILE* fp16;
			float angle;
			float side_a,side_c;
			float side_b;
			float formula_Angle;
			float resultcos;
			char file[200];
			
			printf("b.seek side b\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("angle:");
			scanf("%f",&angle);
			printf("side a and side c:");
			scanf("%f%f",&side_a,&side_c);
			printf("\n");
			
			if(side_a<0||side_a==0||side_c<0||side_c==0)
			{
				printf("In this case,it cannot form a triangle.\n");
			}
			else
			{
				formula_Angle=(angle*PI)/180;
				resultcos=cos(formula_Angle);
				side_b=sqrt(pow(side_a,2)+pow(side_c,2)-2*side_a*side_c*resultcos);
				if(side_b==0||side_b<0)
				{
					printf("In this case,it cannot form a triangle.\n");
				}
				else
				{
					printf("Answer(side b):%.2f",side_b);
					
					fp16=fopen(fule,"w");
					if(fp16==NULL)
					{
						return;
					}
					
					fprintf(fp16,"file:%s\n",file);
					fprintf(fp16,"seek side b\n");
					fprintf(fp16,"angle:%.2f\n",angle);
					fprintf(fp16,"side a:%.2f   side c:%.2f\n",side_a,side_c);
					fprintf(fp16,"Answer(side b):%.2f\n",side_b);
					fclose(fp16);
				}
			}
			break;
		}
		case 'c':
		case 'C':{
			FILE* fp17;
			float angle;
			float side_a,side_b;
			float side_c;
			float formula_Angle;
			float resultcos;
			char file[200];
			
			printf("c.seek side c\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("angle:");
			scanf("%f",&angle);
			printf("side a and side b:");
			scanf("%f%f",&side_a,&side_b);
			printf("\n");
			
			if(side_a==0||side_a<0||side_b==0||side_b<0)
			{
				printf("In this case,it cannot form a triangle.\n");
			} 
			else
			{
				formula_Angle=(angle*PI)/180;
				resultcos=cos(formula_Angle);
				side_c=sqrt(pow(side_a,2)+pow(side_b,2)-2*side_a*side_b*resultcos);
				if(side_c==0||side_c<0)
				{
					printf("In this case,it cannot form a triangle.\n");
				}
				else
				{
					printf("Answer(side c):%.2f\n",side_c);
					
					fp17=fopen(fule,"w");
					if(fp17==NULL)
					{
						return;
					}
					
					fprintf(fp17,"file:%s\n",file);
					fprintf(fp17,"seek side c\n");
					fprintf(fp17,"side a:%.2f   side b:%.2f\n",side_a,side_b);
					fprintf(fp17,"Answer(side c):%.2f\n",side_c);
					fclose(fp17);
				}
			}
			break;
		}
		default:{
			printf("Invalid selection\n");
			break;
		}
	}
	return;	
} 

void tools7_Trigonometric_Functions(void)
{
	char choice6;
	
	printf("Trigonometric functions\n");
	printf("Enter 'a' for 'seek sin's number'\n");
	printf("Enter 'b' for 'seek cos's number'\n");
	printf("Enter 'c' for 'seek tan's number'\n");
	printf("\n");
	printf("Function choice:");
	scanf(" %c",&choice6);
	printf("\n");
	
	switch(choice6){
		case 'a':
		case 'A':{
			FILE* fpa17;
			float angle;
			float formula_sin;
			float resultsin;
			char file[200];
			
			printf("a.seek sin's number\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("angle:");
			scanf("%f",&angle);
			/*
			double formula_sin;
			double resultSin;
			
			formula_sin = (angrl * PI)/180;
			resultSin = sin(formula_sin);
			
			return resultSin; 
			*/
			formula_sin=(angle*PI)/180;
			resultsin=sin(formula_sin);
			
			printf("Answer(sin):%.2f\n",resultsin);
			fpa17=fopen(fule,"w");
			if(fpa17==NULL)
			{
				return;
			}
			
			fprintf(fpa17,"file:%s\n",file);
			fprintf(fpa17,"seek sin's number\n");
			fprintf(fpa17,"angle:%.2f\n",angle);
			fprintf(fpa17,"Answer(sin):%.2f\n",resultsin);
			fclose(fpa17);
			break;
		}
		case 'b':
		case 'B':{
			FILE* fp18;
			float angle;
			float formula_cos;
			float resultcos;
			char file[200];
			
			printf("b.seek cos's number\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("angle:");
			scanf("%f",&angle);
			
			formula_cos=(angle*PI)/180;
			resultcos=cos(formula_cos);
			
			printf("Answer(cos):%.2f\n",resultcos);
			fp18=fopen(fule,"w");
			if(fp18==NULL)
			{
				return;
			}
			
			fprintf(fp18,"file:%s\n",file);
			fprintf(fp18,"seek cos's number\n");
			fprintf(fp18,"angle:%.2f\n",angle);
			fprintf(fp18,"Answer(cos):%.2f\n",resultcos);
			fclose(fp18);
			break;
		}
		case 'c':
		case 'C':{
			FILE* fp19;
			float angle;
			float formula_tan;
			float resulttan;
			char file[200];
			
			printf("c.seek tan's number\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("angle:");
			scanf("%f",&angle);
			
			formula_tan=(angle*PI)/180;
			resulttan=tan(formula_tan);
			
			printf("Answer(tan):%.2f\n",resulttan);
			fp19=fopen(fule,"w");
			if(fp19==NULL)
			{
				return;
			}
			
			fprintf(fp19,"file:%s\n",file);
			fprintf(fp19,"seek tan's number\n");
			fprintf(fp19,"angle:%.2f\n",angle);
			fprintf(fp19,"Answer(tan):%.2f\n",resulttan);
			fclose(fp19);
			break;
		} 
		default:{
			printf("Invalid selection\n");
			break;
		}
	}
	return;
}

void tools8_Student_Mark_Performance_Statistics(void)
{
	char choice7;
	
	printf("Student performance statistics\n");
	printf("Enter 'a' for 'Statistic of three subjects'\n");
	printf("Enter 'b' for 'Statistic of eight subjects'\n");
	printf("\n");
	printf("Function choice:");
	scanf(" %c",&choice7);
	printf("\n");
	
	switch(choice7){
		case 'A':
		case 'a':{
			char cho1;
			
			printf("a.Statistic of three subjects\n");
			printf("File type:a.txt  b.csv\n");
			printf("\n");
			printf("Type choice:");
			scanf(" %c",&cho1);
			printf("\n");
			
			switch(cho1){
				case 'a':
				case 'A':{
					FILE* fp20;
					int num;
					int i;
					char subject1[200];
					char subject2[200];
					char subject3[200];
					char file[200];
					
					printf("Statistic of three subjects(txt)\n");
					printf("new file:");
					scanf("%s",file);
					char fule[200];
					sprintf(fule,"%s.txt",file);
					printf("\n");
					printf("count the number of student:");
					scanf("%d",&num);
					printf("\n");
					
					STMT ant[num];
					
					printf("subject name:\n");
					printf("subject 1:");
					scanf("%s",subject1);
					
					printf("subject 2:");
					scanf("%s",subject2);
	
					printf("subject 3:");
					scanf("%s",subject3);
					printf("\n");
					
					printf("statistical elements:\n");
					printf("student id  name  Subject 1(%s)  Subject 2(%s)  Subject 3(%s)\n",subject1,subject2,subject3);
					printf("-------------------------------------------------------------\n");
					for(i=0;i<num;i++)
					{
						scanf("%lld%s%d%d%d",&ant[i].id,ant[i].name,&ant[i].mark1,&ant[i].mark2,&ant[i].mark3);
						ant[i].total_score=ant[i].mark1+ant[i].mark2+ant[i].mark3;
						ant[i].average_score=(ant[i].mark1+ant[i].mark2+ant[i].mark3)/3.0;
					}
					printf("-------------------------------------------------------------\n");
					printf("statistical table:\n");
					printf("Serial Number   id   name   subject(%s)   subject(%s)   subject(%s)   total score   average score\n",subject1,subject2,subject3);
					Bobble_Sort_three(ant,num);
					for(i=0;i<num;i++)
					{
						printf("%d   ",i+1);
						printf("%lld ",ant[i].id);
						printf("%s   ",ant[i].name);
						printf("%d   ",ant[i].mark1);
						printf("%d   ",ant[i].mark2);
						printf("%d   ",ant[i].mark3);
						printf("%d   ",ant[i].total_score);
						printf("%.3f\n",ant[i].average_score);
					}
					
					fp20=fopen(fule,"w");
					if(fp20==NULL)
					{
						return;
					}
					
					fprintf(fp20,"Serial Number   id   name   subject(%s)   subject(%s)   subject(%s)   total score   average score\n",subject1,subject2,subject3);
					Bobble_Sort_three(ant,num);
					for(i=0;i<num;i++)
					{
						fprintf(fp20,"%d   ",i+1);
						fprintf(fp20,"%lld   ",ant[i].id);
						fprintf(fp20,"%s   ",ant[i].name);
						fprintf(fp20,"%d   ",ant[i].mark1);
						fprintf(fp20,"%d   ",ant[i].mark2);
						fprintf(fp20,"%d   ",ant[i].mark3);
						fprintf(fp20,"%d   ",ant[i].total_score);
						fprintf(fp20,"%.3f\n",ant[i].average_score);
					}
					fclose(fp20);
					break;
				}
				case 'b':
				case 'B':{
					FILE* fp21;
					int num;
					int i;
					char subject1[200];
					char subject2[200];
					char subject3[200];
					char file[200];
					
					printf("Statistic of three subjects(csv)\n");
					printf("new file:");
					scanf("%s",file);
					char fule[200];
					sprintf(fule,"%s.csv",file);
					printf("\n");
					printf("count the number of student:");
					scanf("%d",&num);
					printf("\n");
					
					STMT ant[num];
					
					printf("subject name:\n");
					printf("subject 1:");
					scanf("%s",subject1);
					
					printf("subject 2:");
					scanf("%s",subject2);
					
					printf("subject 3:");
					scanf("%s",subject3);
					printf("\n");
					
					printf("statistical elements:\n");
					printf("student id  name  Subject 1(%s)  Subject 2(%s)  Subject 3(%s)\n",subject1,subject2,subject3);
					printf("-------------------------------------------------------------\n");
					for(i=0;i<num;i++)
					{
						scanf("%lld%s%d%d%d",&ant[i].id,ant[i].name,&ant[i].mark1,&ant[i].mark2,&ant[i].mark3);
						ant[i].total_score=ant[i].mark1+ant[i].mark2+ant[i].mark3;
						ant[i].average_score=(ant[i].mark1+ant[i].mark2+ant[i].mark3)/3.0;
					}
					printf("-------------------------------------------------------------\n");
					printf("statistical table:\n");
					printf("Serial Number   id   name   subject(%s)   subject(%s)   subject(%s)   total score   average score\n",subject1,subject2,subject3);
					Bobble_Sort_three(ant,num);
					for(i=0;i<num;i++)
					{
						printf("%d   ",i+1);
						printf("%lld   ",ant[i].id);
						printf("%s   ",ant[i].name);
						printf("%d   ",ant[i].mark1);
						printf("%d   ",ant[i].mark2);
						printf("%d   ",ant[i].mark3);
						printf("%d   ",ant[i].total_score);
						printf("%.3f\n",ant[i].average_score);
					}
					
					fp21=fopen(fule,"w");
					if(fp21==NULL)
					{
						return;
					} 
					
					fprintf(fp21,"Serial Number,id,name,subject(%s),subject(%s),subject(%s),total score,average score\n",subject1,subject2,subject3);
					Bobble_Sort_three(ant,num);
					for(i=0;i<num;i++)
					{
						fprintf(fp21,"%d,%lld,%s,%d,%d,%d,%d,%.3f\n",i+1,ant[i].id,ant[i].name,ant[i].mark1,ant[i].mark2,ant[i].mark3,ant[i].total_score,ant[i].average_score);
					}
					fclose(fp21);
					break;
				}
				default:{
					printf("Invalid selection\n");
					break;
				}
			}
			break;
		}
		case 'b':
		case 'B':{
			char cho2;
			
			printf("b.Statistic of eight subjects\n");
			printf("File type:a.txt  b.csv\n");
			printf("Type choice:");
			scanf(" %c",&cho2);
			printf("\n");
			
			switch(cho2){
				case 'a':
				case 'A':{
					FILE* fp22;
					int num;
					int i;
					char subject1[200];
					char subject2[200];
					char subject3[200];
					char subject4[200];
					char subject5[200];
					char subject6[200];
					char subject7[200];
					char subject8[200];
					char file[200]; 
					
					printf("Statistic of eight subjects(txt)\n");
					printf("new file:");
					scanf("%s",file);
					char fule[200];
					sprintf(fule,"%s.txt",file);
					printf("\n");
					printf("count the number of student:");
					scanf("%d",&num);
					printf("\n");
					
					STME ane[num];
					
					printf("subject name:");
					printf("subject 1:");
					scanf("%s",subject1);
					printf("subject 2:");
					scanf("%s",subject2);
					printf("subject 3:");
					scanf("%s",subject3);
					printf("subject 4:");
					scanf("%s",subject4);
					printf("subject 5:");
					scanf("%s",subject5);
					printf("subject 6:");
					scanf("%s",subject6);
					printf("subject 7:");
					scanf("%s",subject7);
					printf("subject 8:");
					scanf("%s",subject8);
					printf("\n");
					
					printf("statistical elements:\n");
					printf("student id  name  Subject 1(%s)  Subject 2(%s)  Subject 3(%s)   Subject 4(%s)   Subject 5(%s)   Subject 6(%s)   Subject 7(%s)   Subject 8(%s)\n",subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8);
					printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					for(i=0;i<num;i++)
					{
						scanf("%lld%s%d%d%d%d%d%d%d%d",&ane[i].id,ane[i].name,&ane[i].mark1,&ane[i].mark2,&ane[i].mark3,&ane[i].mark4,&ane[i].mark5,&ane[i].mark6,&ane[i].mark7,&ane[i].mark8);
						ane[i].total_score=ane[i].mark1+ane[i].mark2+ane[i].mark3+ane[i].mark4+ane[i].mark5+ane[i].mark6+ane[i].mark7+ane[i].mark8;
						ane[i].average_score=(ane[i].mark1+ane[i].mark2+ane[i].mark3+ane[i].mark4+ane[i].mark5+ane[i].mark6+ane[i].mark7+ane[i].mark8)/8.0;
					}
					printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("statistical table:\n");
					printf("Serial Number   id   name   subject(%s)   subject(%s)   subject(%s)   subject(%s)   subject(%s)   subject(%s)   subject(%s)   subject(%s)   total score   average score\n",subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8);
					Bobble_Sort_eight(ane,num);
					for(i=0;i<num;i++)
					{
						printf("%d   ",i+1);
						printf("%lld   ",ane[i].id);
						printf("%s   ",ane[i].name);
						printf("%d   ",ane[i].mark1);
						printf("%d   ",ane[i].mark2);
						printf("%d   ",ane[i].mark3);
						printf("%d   ",ane[i].mark4);
						printf("%d   ",ane[i].mark5);
						printf("%d   ",ane[i].mark6);
						printf("%d   ",ane[i].mark7);
						printf("%d   ",ane[i].mark8);
						printf("%d   ",ane[i].total_score);
						printf("%.3f\n",ane[i].average_score);
					}
					
					fp22=fopen(fule,"w");
					if(fp22==NULL)
					{
						return;
					}
					
					fprintf(fp22,"Serial Number   id   name   subject(%s)   subject(%s)   subject(%s)   subject(%s)   subject(%s)   subject(%s)   subject(%s)   subject(%s)   total score   average score\n",subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8);
					Bobble_Sort_eight(ane,num);
					for(i=0;i<num;i++)
					{
						fprintf(fp22,"%d   ",i+1);
						fprintf(fp22,"%lld   ",ane[i].id);
						fprintf(fp22,"%s   ",ane[i].name);
						fprintf(fp22,"%d   ",ane[i].mark1);
						fprintf(fp22,"%d   ",ane[i].mark2);
						fprintf(fp22,"%d   ",ane[i].mark3);
						fprintf(fp22,"%d   ",ane[i].mark4);
						fprintf(fp22,"%d   ",ane[i].mark5);
						fprintf(fp22,"%d   ",ane[i].mark6);
						fprintf(fp22,"%d   ",ane[i].mark7);
						fprintf(fp22,"%d   ",ane[i].mark8);
						fprintf(fp22,"%d   ",ane[i].total_score);
						fprintf(fp22,"%.3f\n",ane[i].average_score);
					}
					fclose(fp22);
					break;
				}
				case 'b':
				case 'B':{
					FILE* fp23;
					int num;
					int i;
					char subject1[200];
					char subject2[200];
					char subject3[200];
					char subject4[200];
					char subject5[200];
					char subject6[200];
					char subject7[200];
					char subject8[200];
					char file[200]; 
					
					printf("Statistic of eight subjects(csv)\n");
					printf("new file:");
					scanf("%s",file);
					char fule[200];
					sprintf(fule,"%s.csv",file);
					printf("\n");
					printf("count the number of student:");
					scanf("%d",&num);
					printf("\n");
					
					STME ane[num];
					
					printf("subject name:");
					printf("subject 1:");
					scanf("%s",subject1);
					printf("subject 2:");
					scanf("%s",subject2);
					printf("subject 3:");
					scanf("%s",subject3);
					printf("subject 4:");
					scanf("%s",subject4);
					printf("subject 5:");
					scanf("%s",subject5);
					printf("subject 6:");
					scanf("%s",subject6);
					printf("subject 7:");
					scanf("%s",subject7);
					printf("subject 8:");
					scanf("%s",subject8);
					printf("\n");
					
					printf("statistical elements:\n");
					printf("student id  name  Subject 1(%s)  Subject 2(%s)  Subject 3(%s)   Subject 4(%s)   Subject 5(%s)   Subject 6(%s)   Subject 7(%s)   Subject 8(%s)\n",subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8);
					printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					for(i=0;i<num;i++)
					{
						scanf("%lld%s%d%d%d%d%d%d%d%d",&ane[i].id,ane[i].name,&ane[i].mark1,&ane[i].mark2,&ane[i].mark3,&ane[i].mark4,&ane[i].mark5,&ane[i].mark6,&ane[i].mark7,&ane[i].mark8);
						ane[i].total_score=ane[i].mark1+ane[i].mark2+ane[i].mark3+ane[i].mark4+ane[i].mark5+ane[i].mark6+ane[i].mark7+ane[i].mark8;
						ane[i].average_score=(ane[i].mark1+ane[i].mark2+ane[i].mark3+ane[i].mark4+ane[i].mark5+ane[i].mark6+ane[i].mark7+ane[i].mark8)/8.0;
					}
					printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("statistical table:\n");
					printf("Serial Number   id   name   subject(%s)   subject(%s)   subject(%s)   subject(%s)   subject(%s)   subject(%s)   subject(%s)   subject(%s)   total score   average score\n",subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8);
					Bobble_Sort_eight(ane,num);
					for(i=0;i<num;i++)
					{
						printf("%d   ",i+1);
						printf("%lld   ",ane[i].id);
						printf("%s   ",ane[i].name);
						printf("%d   ",ane[i].mark1);
						printf("%d   ",ane[i].mark2);
						printf("%d   ",ane[i].mark3);
						printf("%d   ",ane[i].mark4);
						printf("%d   ",ane[i].mark5);
						printf("%d   ",ane[i].mark6);
						printf("%d   ",ane[i].mark7);
						printf("%d   ",ane[i].mark8);
						printf("%d   ",ane[i].total_score);
						printf("%.3f\n",ane[i].average_score);
					}
					
					fp23=fopen(fule,"w");
					if(fp23==NULL)
					{
						return;
					}
					
					fprintf(fp23,"Serial Number,id,name,subject(%s),subject(%s),subject(%s),subject(%s),subject(%s),subject(%s),subject(%s),subject(%s),total score,average score\n",subject1,subject2,subject3,subject4,subject5,subject6,subject7,subject8);
					Bobble_Sort_eight(ane,num);
					for(i=0;i<num;i++)
					{
						fprintf(fp23,"%d,%lld,%s,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",i+1,ane[i].id,ane[i].name,ane[i].mark1,ane[i].mark2,ane[i].mark3,ane[i].mark4,ane[i].mark5,ane[i].mark6,ane[i].mark7,ane[i].mark8,ane[i].total_score,ane[i].average_score);
					}
					fclose(fp23);
					break;
				}
				default:{
					printf("Invalid selection\n");
					break;
				}
			}
			break;
		}
		default:{
			printf("Invalid selection\n");
			break;
		}
	}
	return;
}

void tools9_Complex_Number(void)
{
	char choice8;
	
	printf("Complex number\n");
	printf("Enter 'a' for 'Complex number sum'\n");
	printf("Enter 'b' for 'Complex number sub'\n");
	printf("Enter 'c' for 'Complex number mul'\n");
	printf("Enter 'd' for 'Complex number div'\n");
	printf("\n"); 
	printf("Function choice:");
	scanf(" %c",&choice8);
	printf("\n");
	
	switch(choice8){
		case 'a':
		case 'A':{
			FILE* fp24;
			float real1,imagin1;
			float real2,imagin2;
			float real,imagin;
			char file[200];
			float re_imagin;
			float re_imagin1;
			float re_imagin2;
			
			printf("a.Complex number sum\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			
			printf("Complex 1 real part and imagin part:");
			scanf("%f%f",&real1,&imagin1);
			printf("Complex 2 real part and imagin part:");
			scanf("%f%f",&real2,&imagin2);
			printf("\n");
			
			real=real1+real2;
			imagin=imagin1+imagin2;
			re_imagin2=imagin2*-1;
			re_imagin1=imagin1*-1;
			re_imagin=imagin*-1;
			
			if(imagin<0)
			{
				printf("Answer(Complex number):%.2f-%.2fi\n",real,re_imagin);
				
				fp24=fopen(fule,"w");
				if(fp24==NULL)
				{
					return;
				}
				
				fprintf(fp24,"file:%s\n",file);
				fprintf(fp24,"complex number sum\n");
				if(imagin1<0)
				{

					fprintf(fp24,"complex number 1:%.2f-%.2fi\n",real1,re_imagin1);
				}
				else if(imagin1==0)
				{
					fprintf(fp24,"complex number 1:%.2f\n",real1);
				}
				else
				{
					fprintf(fp24,"complex number 1:%.2f+%.2fi\n",real1,imagin1);
				}
				
				if(imagin2<0)
				{
					fprintf(fp24,"complex number 2:%.2f-%.2fi\n",real2,re_imagin2);
				}
				else if(imagin2==0)
				{
					fprintf(fp24,"complex number 2:%.2f\n",real2);
				}
				else
				{
					fprintf(fp24,"complex number 2:%.2f+%.2fi\n",real2,imagin2);
				}
				
				fprintf(fp24,"Answer(Complex number):%.2f-%.2fi\n",real,imagin);
				fclose(fp24);
			}
			else if(imagin==0)
			{
				printf("Answer(Complex number):%.2f\n",real);
				
				fp24=fopen(fule,"w");
				if(fp24==NULL)
				{
					return;
				}
				
				fprintf(fp24,"file:%s\n",file);
				fprintf(fp24,"complex number sum\n");
				if(imagin1<0)
				{
					fprintf(fp24,"complex number 1:%.2f-%.2fi\n",real1,re_imagin1);
				}
				else if(imagin1==0)
				{
					fprintf(fp24,"complex number 1:%.2f\n",real1);
				}
				else
				{
					fprintf(fp24,"complex number 1:%.2f+%.2fi\n",real1,imagin1);
				}
				
				if(imagin2<0)
				{
					fprintf(fp24,"complex number 2:%.2f-%.2fi\n",real2,re_imagin2);
				}
				else if(imagin2==0)
				{
					fprintf(fp24,"complex number 2:%.2f\n",real2);
				}
				else
				{
					fprintf(fp24,"complex number 2:%.2f+%.2fi\n",real2,imagin2);
				}
				
				fprintf(fp24,"Answer(Complex number):%.2f\n",real);
				fclose(fp24);
			}
			else
			{
				printf("Answer(Complex number):%.2f+%.2fi\n",real,imagin);
				
				fp24=fopen(fule,"w");
				if(fp24==NULL)
				{
					return;
				}
				
				fprintf(fp24,"file:%s\n",file);
				fprintf(fp24,"complex number sum\n");
				if(imagin1<0)
				{
					fprintf(fp24,"complex number 1:%.2f-%.2fi\n",real1,re_imagin1);
				}
				else if(imagin1==0)
				{
					fprintf(fp24,"complex number 1:%.2f\n",real1);
				}
				else
				{
					fprintf(fp24,"complex number 1:%.2f+%.2fi\n",real1,imagin1);
				}
				
				if(imagin2<0)
				{
					fprintf(fp24,"complex number 2:%.2f-%.2fi\n",real2,re_imagin2);
				}
				else if(imagin2==0)
				{
					fprintf(fp24,"complex number 2:%.2f\n",real2);
				}
				else
				{
					fprintf(fp24,"complex number 2:%.2f+%.2fi\n",real2,imagin2);
				}
				
				fprintf(fp24,"Answer(Complex number):%.2f+%.2fi\n",real,imagin);
				fclose(fp24);
			}
			break;
		}
		case 'b':
		case 'B':{
			FILE* fp25;
			float real1,imagin1;
			float real2,imagin2;
			float real,imagin;
			char file[200];
			float re_imagin;
			float re_imagin1;
			float re_imagin2;
			
			printf("b.Complex number sub\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			
			printf("Complex 1 real part and imagin part:");
			scanf("%f%f",&real1,&imagin1);
			printf("Complex 2 real part and imagin part:");
			scanf("%f%f",&real2,&imagin2);
			printf("\n");
			
			real=real1-real2;
			imagin=imagin1-imagin2;
			re_imagin2=imagin2*-1;
			re_imagin1=imagin1*-1;
			re_imagin=imagin*-1;
			
			if(imagin<0)
			{
				printf("Answer(Complex number):%.2f-%.2fi\n",real,re_imagin);
				
				fp25=fopen(fule,"w");
				if(fp25==NULL)
				{
					return;
				}
				
				fprintf(fp25,"file:%s\n",file);
				fprintf(fp25,"complex number sub\n");
				if(imagin1<0)
				{
					fprintf(fp25,"complex number 1:%.2f-%.2fi\n",real1,re_imagin1);
				}
				else if(imagin1==0)
				{
					fprintf(fp25,"complex number 1:%.2f\n",real1);	
				}
				else
				{
					fprintf(fp25,"complex number 1:%.2f+%.2fi\n",real1,imagin1);
				}
				
				if(imagin2<0)
				{
					fprintf(fp25,"complex number 2:%.2f-%.2fi\n",real2,re_imagin2);
				}
				else if(imagin2==0)
				{
					fprintf(fp25,"complex number 2:%.2f\n",real2);
				}
				else
				{
					fprintf(fp25,"complex number 2:%.2f+%.2fi\n",real2,imagin2);
				}
				fprintf(fp25,"Answer(Complex number):%.2f-%.2fi\n",real,re_imagin);
				fclose(fp25);
			}
			else if(imagin==0)
			{
				printf("Answer(Complex number):%.2f\n",real);
				
				fp25=fopen(fule,"w");
				if(fp25==NULL)
				{
					return;
				}
				
				fprintf(fp25,"file:%s\n",file);
				fprintf(fp25,"complex number sub\n");
				if(imagin1<0)
				{
					fprintf(fp25,"complex number 1:%.2f-%.2fi\n",real1,re_imagin1);
				}
				else if(imagin1==0)
				{
					fprintf(fp25,"complex number 1:%.2f\n",real1);	
				}
				else
				{
					fprintf(fp25,"complex number 1:%.2f+%.2fi\n",real1,imagin1);
				}
				
				if(imagin2<0)
				{
					fprintf(fp25,"complex number 2:%.2f-%.2fi\n",real2,re_imagin2);
				}
				else if(imagin2==0)
				{
					fprintf(fp25,"complex number 2:%.2f\n",real2);
				}
				else
				{
					fprintf(fp25,"complex number 2:%.2f+%.2fi\n",real2,imagin2);
				}
				fprintf(fp25,"Answer(Complex number):%.2f\n",real);
				fclose(fp25);
			}
			else
			{
				printf("Answer(Complex number):%.2f+%.2fi\n",real,imagin);
				
				fp25=fopen(fule,"w");
				if(fp25==NULL)
				{
					return;
				}
				
				fprintf(fp25,"file:%s\n",file);
				fprintf(fp25,"complex number sub\n");
				if(imagin1<0)
				{
					fprintf(fp25,"complex number 1:%.2f-%.2fi\n",real1,re_imagin1);
				}
				else if(imagin1==0)
				{
					fprintf(fp25,"complex number 1:%.2f\n",real1);
				}
				else
				{
					fprintf(fp25,"complex number 1:%.2f+%.2fi\n",real1,imagin1);
				}
				
				if(imagin2<0)
				{
					fprintf(fp25,"complex number 2:%.2f-%.2fi\n",real2,re_imagin2);
				}
				else if(imagin2==0)
				{
					fprintf(fp25,"complex number 2:%.2f\n",real2);
				}
				else
				{
					fprintf(fp25,"complex number 2:%.2f+%.2fi\n",real2,imagin2);
				}
				fprintf(fp25,"Answer(Complex number):%.2f+%.2fi\n",real,imagin);
				fclose(fp25);
			}
			break;
		}
		case 'c':
		case 'C':{
			FILE* fp26;
			float real1,imagin1;
			float real2,imagin2;
			float real,imagin;
			char file[200];
			float re_imagin;
			float re_imagin1;
			float re_imagin2;
			
			printf("c.Complex number mul\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			
			printf("Complex 1 real part and imagin part:");
			scanf("%f%f",&real1,&imagin1);
			printf("Complex 2 real part and imagin part:");
			scanf("%f%f",&real2,&imagin2);
			printf("\n");
			
			real=(real1*real2)-(imagin1*imagin2);
			imagin=(real1*imagin2)+(imagin1*real2);
			re_imagin=imagin*-1;
			re_imagin1=imagin1*-1;
			re_imagin2=imagin2*-1;
			
			if(imagin<0)
			{
				printf("Answer(Complex number):%.2f-%.2fi\n",real,re_imagin);
				
				fp26=fopen(fule,"w");
				if(fp26==NULL)
				{
					return;	
				}
				
				fprintf(fp26,"file:%s\n",file);
				fprintf(fp26,"complex number mul\n");
				if(imagin1<0)
				{
					fprintf(fp26,"complex number 1:%.2f-%.2fi\n",real1,re_imagin1);	
				}
				else if(imagin1==0)
				{
					fprintf(fp26,"complex number 1:%.2f\n",real1);	
				}	
				else
				{
					fprintf(fp26,"complex number 1:%.2f+%.2fi\n",real1,imagin1);
				}
				
				if(imagin2<0)
				{
					fprintf(fp26,"complex number 2:%.2f-%.2f\n",real2,re_imagin2);
				}
				else if(imagin2==0)
				{
					fprintf(fp26,"complex number 2:%.2f\n",real2);
				}
				else
				{
					fprintf(fp26,"complex number 2:%.2f+%.2fi\n",real2,imagin2);
				}
				fprintf(fp26,"Answer(Complex number):%.2f-%.2fi\n",real,re_imagin);
				fclose(fp26);
			}
			else if(imagin==0)
			{
				printf("Answer(Complex number):%.2f\n",real);
				
				fp26=fopen(fule,"w");
				if(fp26==NULL)
				{
					return;
				}
				
				fprintf(fp26,"file:%s\n",file);
				fprintf(fp26,"complex number mul\n");
				if(imagin1<0)
				{
					fprintf(fp26,"complex number 1:%.2f-%.2fi\n",real1,re_imagin1);
				}
				else if(imagin1==0)
				{
					fprintf(fp26,"complex number 1:%.2f\n",real1);
				}
				else
				{
					fprintf(fp26,"Complex number 1:%.2f+%.2fi\n",real1,imagin1);
				}
				
				if(imagin2<0)
				{
					fprintf(fp26,"complex number 2:%.2f-%.2fi\n",real2,re_imagin2);
				}
				else if(imagin2==0)
				{
					fprintf(fp26,"complex number 2:%.2f\n",real2);
				}
				else
				{
					fprintf(fp26,"complex number 2:%.2f+%.2fi\n",real2,imagin2);
				}
				fprintf(fp26,"Answer(Complex number):%.2f\n",real);
				fclose(fp26);
			}
			else
			{
				printf("Answer(Complex number):%.2f+%.2fi\n",real,imagin);
				
				fp26=fopen(fule,"w");
				if(fp26==NULL)
				{
					return;
				}
				
				fprintf(fp26,"file:%s\n",file);
				fprintf(fp26,"complex number mul\n");
				if(imagin1<0)
				{
					fprintf(fp26,"complex number 1:%.2f-%.2fi\n",real1,re_imagin1);
				}
				else if(imagin1==0)
				{
					fprintf(fp26,"complex number 1:%.2f\n",real1);
				}
				else
				{
					fprintf(fp26,"complex number 1:%.2f+%.2fi\n",real1,imagin1);
				}
				
				if(imagin2<0)
				{
					fprintf(fp26,"complex number 2:%.2f-%.2fi\n",real2,re_imagin2);
				}
				else if(imagin2==0)
				{
					fprintf(fp26,"complex number 2:%.2f\n",real2);
				}
				else
				{
					fprintf(fp26,"complex number 2:%.2f+%.2fi\n",real2,imagin2);
				}
				fprintf(fp26,"Answer(Complex number):%.2f+%.2fi\n",real,imagin);
				fclose(fp26);
			}
			break;
		}
		case 'd':
		case 'D':{
			FILE* fp27;
			float real1,imagin1;
			float real2,imagin2;
			float real,imagin;
			float formula; 
			char file[200];
			float re_imagin;
			float re_imagin1;
			float re_imagin2;
			
			printf("d.Complex number div\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			
			printf("Complex 1 real part and imagin part:");
			scanf("%f%f",&real1,&imagin1);
			printf("Complex 2 real part and imagin part:");
			scanf("%f%f",&real2,&imagin2);
			printf("\n");
			
			formula=pow(real2,2)+pow(imagin2,2);
			real=(real1*real2+imagin1*imagin2)/formula;
			imagin=(imagin1*real2-real1*imagin2)/formula;
			re_imagin=imagin*-1;
			re_imagin1=imagin1*-1;
			re_imagin2=imagin2*-1;
			
			if(formula==0)
			{
				printf("Division by zero is not possible.\n");
			}
			else
			{
				if(imagin<0)
				{
					printf("Answer(Complex number):%.2f-%.2fi\n",real,re_imagin);
					
					fp27=fopen(fule,"w");
					if(fp27==NULL)
					{
						return;
					}
					
					fprintf(fp27,"file:%s\n",file);
					fprintf(fp27,"Complex number div\n");
					if(imagin1<0)
					{
						fprintf(fp27,"complex number 1:%.2f-%.2fi\n",real1,re_imagin1);
					}
					else if(imagin1==0)
					{
						fprintf(fp27,"complex number 1:%.2f\n",real1);
					}
					else
					{
						fprintf(fp27,"complex number 1:%.2f+%.2fi\n",real1,imagin1);
					}
					
					if(imagin2<0)
					{
						fprintf(fp27,"complex number 2:%.2f-%.2fi\n",real2,re_imagin2);
					}
					else if(imagin2==0)
					{
						fprintf(fp27,"complex number 2:%.2f\n",real2);
					}
					else
					{
						fprintf(fp27,"complex number 2:%.2f+%.2fi\n",real2,imagin2);
					}
					
					fprintf(fp27,"Answer(Complex number):%.2f-%.2fi\n",real,re_imagin);
					fclose(fp27);
				}
				else if(imagin==0)
				{
					printf("Answer(Complex number):%.2f\n",real);
					
					fp27=fopen(fule,"w");
					if(fp27==NULL)
					{
						return;
					}
					
					fprintf(fp27,"file:%s\n",file);
					fprintf(fp27,"Complex number div\n");
					if(imagin1<0)
					{
						fprintf(fp27,"complex number 1:%.2f-%.2fi\n",real1,re_imagin1);
					}
					else if(imagin1==0)
					{
						fprintf(fp27,"complex number 1:%.2f\n",real1);
					}
					else
					{
						fprintf(fp27,"complex number 1:%.2f+%.2fi\n",real1,imagin1);
					}
					
					if(imagin2<0)
					{
						fprintf(fp27,"complex number 2:%.2f-%.2fi\n",real2,re_imagin2);
					}
					else if(imagin2==0)
					{
						fprintf(fp27,"complex number 2:%.2f\n",real2);
					}
					else
					{
						fprintf(fp27,"complex number 2:%.2f+%.2fi\n",real2,imagin2);
					}
					
					fprintf(fp27,"Answer(Complex number):%.2f\n",real);
					fclose(fp27);
				}
				else
				{
					printf("Answer(Complex number):%.2f+%.2fi\n",real,imagin);
					
					fp27=fopen(fule,"w");
					if(fp27==NULL)
					{
						return;
					}
					
					fprintf(fp27,"file:%s\n",file);
					fprintf(fp27,"Complex number div\n");
					if(imagin1<0)
					{
						fprintf(fp27,"complex number 1:%.2f-%.2fi\n",real1,re_imagin1);
					}
					else if(imagin1==0)
					{
						fprintf(fp27,"complex number 1:%.2f\n",real1);
					}
					else
					{
						fprintf(fp27,"complex number 1:%.2f+%.2fi\n",real1,imagin1);
					}
					
					if(imagin2<0)
					{
						fprintf(fp27,"complex number 2:%.2f-%.2fi\n",real2,re_imagin2);
					}
					else if(imagin2==0)
					{
						fprintf(fp27,"complex number 2:%.2f\n",real2);
					}
					else
					{
						fprintf(fp27,"complex number 2:%.2f+%.2fi\n",real2,imagin2);
					}
					
					fprintf(fp27,"Answer(Complex number):%.2f+%.2fi\n",real,imagin);
					fclose(fp27);
				}
			}
			break;
		} 
		default:{
			printf("Invalid selection\n");
			break;
		}
	}
	return;
}

void tools10_Find_The_Perimeter(void)
{
	char choice9;
	
	//a.Square perimeter  b.Rectangular perimeter  c.Circular perimeter  d.Triangular perimeter\n
	printf("Find the perimeter\n");
	printf("Enter 'a' for 'seek square perimeter'\n");
	printf("Enter 'b' for 'seek rectangular perimeter'\n");
	printf("Enter 'c' for 'seek circular perimeter'\n");
	printf("Enter 'd' for 'seek triangular perimeter'\n");
	printf("\n");
	printf("Function choice:");
	scanf(" %c",&choice9);
	printf("\n");
	
	switch(choice9){
		case 'a':
		case 'A':{
			FILE* fp28;
			float side_a;
			float perimeter;
			char file[200];
			
			printf("a.Seek square perimeter\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("Side a:");
			scanf("%f",&side_a);
			printf("\n");
			
			if(side_a<0||side_a==0)
			{
				printf("Under these circumstances,it cannot form a square.\n");
			}
			else
			{
				perimeter=4*side_a;
				
				printf("Answer(Perimeter):%.2f\n",perimeter);
				
				fp28=fopen(fule,"w");
				if(fp28==NULL)
				{
					return;
				}
				
				fprintf(fp28,"file:%s\n",file);
				fprintf(fp28,"seek square perimeter\n");
				fprintf(fp28,"side a:%.2f\n",side_a);
				fprintf(fp28,"Answer(Perimeter):%.2f\n",perimeter);
				fclose(fp28);
			}
			break;
		}
		case 'b':
		case 'B':{
			FILE* fp29;
			float side_a,side_b;
			float perimeter;
			char file[200];
			
			printf("b.seek rectangular perimeter\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("Side a and side b:");
			scanf("%f%f",&side_a,&side_b);
			printf("\n");
			
			if(side_a==0||side_a<0||side_b==0||side_b<0)
			{
				printf("Under these circumstances,it cannot form a rectangular.\n");
			}
			else
			{
				perimeter=2*(side_a+side_b);
				
				printf("Answer(Perimeter):%.2f\n",perimeter);
				
				fp29=fopen(fule,"w");
				if(fp29==NULL)
				{
					return;
				}
				
				fprintf(fp29,"file:%s\n",file);
				fprintf(fp29,"seek rectangular perimeter\n");
				fprintf(fp29,"side a:%.2f   side b:%.2f\n",side_a,side_b);
				fprintf(fp29,"Answer(Perimeter):%.2f\n",perimeter);
				fclose(fp29);
			}
			break;
		}
		case 'c':
		case 'C':{
			FILE* fp30;
			float radius;
			float perimeter;
			char file[200];
			
			printf("c.seek circular perimeter\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("radius:");
			scanf("%f",&radius);
			printf("\n");
			
			if(radius<0||radius==0)
			{
				printf("Under these circumstances,it cannot form a circular.\n");
			}
			else
			{
				perimeter=2*radius*PI;
				
				printf("Answer(Perimeter):%.2f\n",perimeter);
				
				fp30=fopen(fule,"w");
				if(fp30==NULL)
				{
					return;
				}
				
				fprintf(fp30,"file:%s\n",file);
				fprintf(fp30,"Seek circular perimeter\n");
				fprintf(fp30,"radius:%.2f\n",radius);
				fprintf(fp30,"Answer(Perimeter):%.2f\n",perimeter);
				fclose(fp30);
			}
			break;
		}
		case 'd':
		case 'D':{
			FILE* fp31;
			float side_a,side_b,side_c;
			float perimeter;
			char file[200];
			
			printf("d.seek triangular perimeter\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("Side a and side b and side c:");
			scanf("%f%f%f",&side_a,&side_b,&side_c);
			printf("\n");
			
			if(side_a<0||side_a==0||side_b<0||side_b==0||side_c<0||side_c==0)
			{
				printf("Under these circumstances,it cannot form a triangular.\n");
			}
			else
			{
				perimeter=side_a+side_b+side_c;
				
				printf("Answer(Perimeter):%.2f\n",perimeter);
				
				fp31=fopen(fule,"w");
				if(fp31==NULL)
				{
					return;
				}
				
				fprintf(fp31,"file:%s\n",file);
				fprintf(fp31,"seek triangular perimeter\n");
				fprintf(fp31,"side a:%.2f   side b:%.2f   side c:%.2f\n",side_a,side_b,side_c);
				fprintf(fp31,"Answer(Perimeter):%.2f\n",perimeter);
				fclose(fp31);
			}
			break;
		}
		default:{
			printf("Invalid selection\n");
			break;
		}
	}
	return;
}

void tools11_Find_The_Area(void)
{
	char choice10;
	
	//a.Square perimeter  b.Rectangular perimeter  c.Circular perimeter  d.Triangular perimeter\n
	printf("Find the area\n");
	printf("Enter 'a' for 'seek square area'\n");
	printf("Enter 'b' for 'seek rectangular area'\n");
	printf("Enter 'c' for 'seek circular area'\n");
	printf("Enter 'd' for 'seek triangular perimeter'\n");
	printf("\n");
	printf("Function choice:");
	scanf(" %c",&choice10);
	printf("\n");
	
	switch(choice10){
		case 'a':
		case 'A':{
			FILE* fp32;
			float side_a;
			float area;
			char file[200];
			
			printf("a.seek square area\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("Side a:");
			scanf("%f",&side_a);
			printf("\n");
			
			if(side_a==0||side_a<0)
			{
				printf("Under these circumstances,it cannot form a square.\n");
			}
			else 
			{
				area=pow(side_a,2);
				
				printf("Answer(Area):%.2f\n",area);
				
				fp32=fopen(fule,"w");
				if(fp32==NULL)
				{
					return;	
				} 
				
				fprintf(fp32,"file:%s\n",file);
				fprintf(fp32,"seek square area\n");
				fprintf(fp32,"side a:%.2f\n",side_a);
				fprintf(fp32,"Answer(Area):%.2f\n",area);
				fclose(fp32);
			}
			break;
		}
		case 'b':
		case 'B':{
			FILE* fp33;
			float side_a,side_b;
			float area;
			char file[200];
			
			printf("b.seek rectangular area\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("Side a and side b:");
			scanf("%f%f",&side_a,&side_b);
			printf("\n");
			
			if(side_a==0||side_a<0||side_b<0||side_b==0)
			{
				printf("Under these circumstances,it cannot form a rectangular.\n");
			}
			else
			{
				area=side_a*side_b;
				
				printf("Answer(Area):%.2f\n",area);
				
				fp33=fopen(fule,"w");
				if(fp33==NULL)
				{
					return;
				}
				
				fprintf(fp33,"file:%s\n",file);
				fprintf(fp33,"seek rectangular area\n");
				fprintf(fp33,"side a:%.2f   side b:%.2f\n",side_a,side_b);
				fprintf(fp33,"Answer(Area):%.2f\n",area);
				fclose(fp33);
			}
			break;
		}
		case 'c':
		case 'C':{
			FILE* fp34;
			float radius;
			float area;
			char file[200];
			
			printf("c.seek circular area\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("Radius:");
			scanf("%f",&radius);
			printf("\n");
			
			if(radius==0||radius<0)
			{
				printf("Under these circumstances,it cannot form a rectangular.\n");
			}
			else
			{
				area=PI*pow(radius,2);
				
				printf("Answer(Area):%.2f\n",area);
				
				fp34=fopen(fule,"w");
				if(fp34==NULL)
				{
					return;
				}	
				
				fprintf(fp34,"file:%s\n",file);
				fprintf(fp34,"seek circular area\n");
				fprintf(fp34,"radius:%.2f\n",radius);
				fprintf(fp34,"Answer(Area):%.2f\n",area);
				fclose(fp34);
			} 
			break;
		}
		case 'd':
		case 'D':{
			FILE* fp35;
			float side_a,side_b,side_c;
			float formula;
			float area;
			char file[200];
			
			printf("d.seek triangular perimeter\n");
			printf("new file:"); 
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("Side a and side b and side c:");
			scanf("%f%f%f",&side_a,&side_b,&side_c);
			printf("\n");
			
			if(side_a==0||side_a<0||side_b==0||side_b<0||side_c==0||side_c<0)
			{
				printf("Under these circumstances,it cannot form a triangular.\n");
			}
			else
			{
				formula=(side_a+side_b+side_c)/2.0;
				area=sqrt(formula*(formula-side_a)*(formula-side_b)*(formula-side_c));
				
				printf("Answer(Area):%.2f\n",area);
				
				fp35=fopen(fule,"w");
				if(fp35==NULL)
				{
					return;
				}
				
				fprintf(fp35,"file:%s\n",file);
				fprintf(fp35,"seek triangular area\n");
				fprintf(fp35,"side a:%.2f   side b:%.2f   side c:%.2f\n",side_a,side_b,side_c);
				fprintf(fp35,"Answer(Area):%.2f\n",area);
				fclose(fp35);
			}
			break;
		}
		default:{
			printf("Invalid selection\n");
			break;
		}
	}
	return;
}

void tools12_Numerical_Type_Conversion_Program(void)
{
	FILE* fp36;
	char choice11;
	int num;
	int bit;
	int i;
	char file[200];
	
	printf("Numrical type conversion program\n");
	printf("new file:");
	scanf("%s",file);
	char fule[200];
	sprintf(fule,"%s.txt",file);
	printf("\n");
	printf("number(integer number):");
	scanf("%d",&num);
	printf("\n");
	printf("Conversion type:a.octal number   b.hexadecimal number(uppercase or lowercase)   c.binary number\n");
	printf("Type choice:");
	scanf(" %c",&choice11);
	printf("\n");
	
	switch(choice11){
		case 'a':
		case 'A':{
			printf("The converted value(octal number):%o\n",num);
			
			fp36=fopen(fule,"w");
			if(fp36==NULL)
			{
				return;
			}
			
			fprintf(fp36,"file:%s\n",file);
			fprintf(fp36,"numrical type conversion program\n");
			fprintf(fp36,"number(integer):%d\n",num);
			fprintf(fp36,"The converted value(Octal):%o\n",num);
			fclose(fp36);
			break;
		}
		case 'b':
		case 'B':{
			printf("The converted value(hexadecimal number):\n");
			printf("Uppercase:%X\n",num);
			printf("Lowercase:%x\n",num);
			
			fp36=fopen(fule,"w");
			if(fp36==NULL)
			{
				return;
			}
			
			fprintf(fp36,"file:%s\n",file);
			fprintf(fp36,"numrical type conversion program\n");
			fprintf(fp36,"number(integer):%d\n",num);
			fprintf(fp36,"the converted value(Hexadecimal):\n");
			fprintf(fp36,"uppercase:%X\n",num);
			fprintf(fp36,"lowercase:%x\n",num);
			fclose(fp36);
			break;
		}
		case 'c':
		case 'C':{
			printf("The converted value(binary number):\n");
			for(i=31;i>=0;i--)
			{
				bit=(num>>i)&1;
				printf("%d",bit);
				if(i%4==0)
				{
					printf(" ");
				}
			} 
			printf("\n");
			
			fp36=fopen(fule,"w");
			if(fp36==NULL)
			{
				return;
			}
			
			fprintf(fp36,"file:%s\n",file);
			fprintf(fp36,"numrical type conversion program\n");
			fprintf(fp36,"number(integer):%d\n",num);
			fprintf(fp36,"the converted value(Binary number):\n");
			for(i=31;i>=0;i--)
			{
				bit=(num>>i)&1;
				fprintf(fp36,"%d",bit);
				if(i%4==0)
				{
					fprintf(fp36," ");
				}
			} 
			fprintf(fp36,"\n");
			fclose(fp36);
			break;
		}
		default:{
			printf("Invalid selection\n");
			break;
		}
	}
	return; 
} 

void tools13_Mathematical_Operations_Related_To_Cosplay(void)
{
	char choice12;
	
	printf("Mathematical operations related to cosplay\n");
	printf("Enter 'a' for 'cost estimation'\n");
	printf("Enter 'b' for 'fabric budget'\n");
	printf("Enter 'c' for 'props and consumables (like EVA and other materials)'\n");
	printf("Enter 'd' for 'height Scaling'\n");
	printf("Enter 'e' for 'turn pictures into real objects'\n");
	printf("\n");
	printf("Function choice:");
	scanf(" %c",&choice12);
	printf("\n");
	
	switch(choice12){
		case 'A':
		case 'a':{
			FILE* fp37;
			float Clothing_price,Wig_price,Item_price,Cosmetic_prices;
			float formula;
			float Cost_estimation;
			char file[200];
			
			printf("a.cost estimation\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("clothing price and wig price:");
			scanf("%f%f",&Clothing_price,&Wig_price);
			printf("item price and cosmetic prices:");
			scanf("%f%f",&Item_price,&Cosmetic_prices);
			printf("\n");
			
			if(Clothing_price==0||Clothing_price<0||Wig_price==0||Wig_price<0||Item_price==0||Item_price<0||Cosmetic_prices==0||Cosmetic_prices<0)
			{
				printf("Such numerical values cannot satisfy practical calculations.\n");
			}
			else
			{
				/*
				float Cost_estimation(float a,float b,float c,float d)
{
	return (a+b+c+d)/1.2;
}
				*/
				formula=Clothing_price+Wig_price+Item_price+Cosmetic_prices;
				Cost_estimation=formula/1.2;
				if(Cost_estimation<0||Cost_estimation==0)
				{
					printf("Such numerical values cannot satisfy practical calculations.\n");
				}
				else
				{
					printf("Answer(Cost estimation):%.2f\n",Cost_estimation);
					
					fp37=fopen(fule,"w");
					if(fp37==NULL)
					{
						return;
					}
					
					fprintf(fp37,"file:%s\n",file);
					fprintf(fp37,"cost estimation\n");
					fprintf(fp37,"clothing price:%.2f\n",Clothing_price);
					fprintf(fp37,"wig price:%.2f\n",Wig_price);
					fprintf(fp37,"item price:%.2f\n",Item_price);
					fprintf(fp37,"cosmetic prices:%.2f\n",Cosmetic_prices);
					fprintf(fp37,"Answer(Cost estimation):%.2f\n",Cost_estimation);
					fclose(fp37);
				}
			}
			break;
		}
		case 'B':
		case 'b':{
			FILE* fp38;
			float Clothing_length,Sleeve_length;
			float formula;
			float Fabric_budget;
			char file[200];
			
			printf("b.fabric budget\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("clothing length(cm) and sleeve length(cm):");
			scanf("%f%f",&Clothing_length,&Sleeve_length);
			printf("\n");
			
			if(Sleeve_length==0||Sleeve_length<0||Clothing_length==0||Clothing_length<0)
			{
				printf("Such numerical values cannot satisfy practical calculations.\n");
			}
			else
			{
				/*
				double Fabric_budget(double a,double b)
{
	return (a+b+10.0)*2.0;
}
				*/
				formula=Clothing_length+Sleeve_length;
				Fabric_budget=2*formula;
				if(Fabric_budget<0||Fabric_budget==0)
				{
					printf("Such numerical values cannot satisfy practical calculations.\n");
				}
				else 
				{
					printf("Answer(fabric budget):%.2f\n",Fabric_budget);
					
					fp38=fopen(fule,"w");
					if(fp38==NULL)
					{
						return;
					}
					
					fprintf(fp38,"file:%s\n",file);
					fprintf(fp38,"fabric budget\n");
					fprintf(fp38,"clothing length:%.2fcm\n",Clothing_length);
					fprintf(fp38,"sleeve length:%.2fcm\n",Sleeve_length);
					fprintf(fp38,"Answer(Fabric budget):%.2f\n",Fabric_budget);
					fclose(fp38);
				}
			}
			break;
		}
		case 'C':
		case 'c':{
			FILE* fp39;
			float Props_and_consumables;
			float Unfolded_area,Single_board_area;
			char file[200];
			
			printf("c.props and consumables (like EVA and other materials)\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("unfolded area and single board area:");
			scanf("%f%f",&Unfolded_area,&Single_board_area);
			printf("\n");
			
			if(Single_board_area==0||Single_board_area<0||Unfolded_area==0||Unfolded_area<0)
			{
				printf("Such numerical values cannot satisfy practical calculations.\n");
			}
			else
			{
				Props_and_consumables=(Unfolded_area/Single_board_area)*1.5;
				if(Props_and_consumables<0||Props_and_consumables==0)
				{
					printf("Such numerical values cannot satisfy practical calculations.\n");
				}
				else 
				{
					printf("Answer(props and consumables):%.2f\n",Props_and_consumables);
					
					fp39=fopen(fule,"w");
					if(fp39==NULL)
					{
						return;
					}
					
					fprintf(fp39,"file:%s\n",file);
					fprintf(fp39,"props and consumables (like EVA and other materials)\n");
					fprintf(fp39,"unfolded area:%.2f\n",Unfolded_area);
					fprintf(fp39,"single board area:%.2f\n",Single_board_area);
					fprintf(fp39,"Answer(Props and consumables):%.2f\n",Props_and_consumables);
					fclose(fp39);
				}
			}
			break;
		}
		case 'D':
		case 'd':{
			FILE* fp40;
			float Character_design_dimensions,Your_height,Character_set_height;
			float Height_Scaling;
			char file[200];
			
			printf("d.height Scaling\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("character design dimensions:");
			scanf("%f",&Character_design_dimensions);
			printf("your height:");
			scanf("%f",&Your_height);
			printf("character set height:");
			scanf("%f",&Character_set_height);
			printf("\n");
			
			if(Character_design_dimensions<0||Character_design_dimensions==0||Your_height<0||Your_height==0||Character_set_height<0||Character_set_height==0)
			{
				printf("Such numerical values cannot satisfy practical calculations.\n");
			} 
			else
			{
				/*
				double Height_Scaling(double a,double b,double c)
{
	return a*(b/c);
}
				*/
				Height_Scaling=Character_design_dimensions*(Your_height/Character_set_height);
				if(Height_Scaling<0||Height_Scaling==0)
				{
					printf("Such numerical values cannot satisfy practical calculations.\n");
				}
				else
				{
					printf("Answer(height scaling):%.2f\n",Height_Scaling);
					
					fp40=fopen(fule,"w");
					if(fp40==NULL)
					{
						return;
					}
					
					fprintf(fp40,"file:%s\n",file);
					fprintf(fp40,"height Scaling\n");
					fprintf(fp40,"character design dimensions:%.2f\n",Character_design_dimensions);
					fprintf(fp40,"your height:%.2f\n",Your_height);
					fprintf(fp40,"character set height:%.2f\n",Character_set_height);
					fprintf(fp40,"Answer(Height Scaling):%.2f\n",Height_Scaling);
					fclose(fp40);
				}
			}
			break;
		}
		case 'E':
		case 'e':{
			FILE* fp41;
			float Image_pixel_length,Reference_for_image_pixels,Length_of_he_physical_reference;
			float Turn_pictures_into_real_objects;
			char file[200];
			
			printf("e.turn pictures into real objects\n");
			printf("new file:");
			scanf("%s",file); 
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("image pixel length:");
			scanf("%f",&Image_pixel_length);
			printf("reference for image pixels:");
			scanf("%f",&Reference_for_image_pixels);
			printf("length of the physical reference:");
			scanf("%f",&Length_of_he_physical_reference);
			printf("\n");
			
			if(Image_pixel_length<0||Image_pixel_length==0||Reference_for_image_pixels<0||Reference_for_image_pixels==0||Length_of_he_physical_reference<0||Length_of_he_physical_reference==0)
			{
				printf("Such numerical values cannot satisfy practical calculations.\n");
			}
			else
			{
				/*
				double Turn_pictures_into_real_objects(double a,double b,double c)
{
	return (a/b)*c;
}
				*/
				Turn_pictures_into_real_objects=(Image_pixel_length/Reference_for_image_pixels)*Length_of_he_physical_reference;
				if(Turn_pictures_into_real_objects<0||Turn_pictures_into_real_objects==0)
				{
					printf("Such numerical values cannot satisfy practical calculations.\n");
				}
				else 
				{
					printf("Answer(turn pictures into real objects):%.2f\n",Turn_pictures_into_real_objects);
					
					fp41=fopen(fule,"w");
					if(fp41==NULL)
					{
						return;
					}
					
					fprintf(fp41,"file:%s\n",file);
					fprintf(fp41,"turn pictures into real objects\n");
					fprintf(fp41,"image pixel length:%.2f\n",Image_pixel_length);
					fprintf(fp41,"reference for image pixels:%.2f\n",Reference_for_image_pixels);
					fprintf(fp41,"length of the physical reference:%.2f\n",Length_of_he_physical_reference);
					fprintf(fp41,"Answer(Turn pictures into real objects):%.2f\n",Turn_pictures_into_real_objects);
					fclose(fp41);
				}
			}
			break;
		}
		default:{
			printf("Invalid selection\n");
			break;
		}
	}
	return;
}

void tools14_BMI_Calculator(void)
{
	FILE* fp42;
	float Height,Bodyweight;
	float Bmi;
	char file[200];
	
	printf("BMI calculator\n");
	printf("new file:");
	scanf("%s",file);
	char fule[200];
	sprintf(fule,"%s.txt",file);
	printf("\n");
	printf("height:");
	scanf("%f",&Height);
	printf("body weight:");
	scanf("%f",&Bodyweight);
	printf("\n");
	
	if(Height==0||Height<0||Bodyweight==0||Bodyweight<0)
	{
		printf("Such numerical values cannot satisfy practical calculations.\n");
	}
	else
	{
		Bmi=Bodyweight/pow(Height,2);
		if(Bmi<0||Bmi==0)
		{
			printf("Such numerical values cannot satisfy practical calculations.\n");
		}
		else
		{
			if(Bmi<18.5)
			{
				printf("Answer(bmi):%.2f,body condition:underweight.\n",Bmi);
				
				fp42=fopen(fule,"w");
				if(fp42==NULL)
				{
					return;
				}
				
				fprintf(fp42,"file:%s\n",file);
				fprintf(fp42,"BMI calculator\n");
				fprintf(fp42,"height:%.2f   body weight:%.2f\n",Height,Bodyweight);
				fprintf(fp42,"Answer(BMI):%.2f,body condition:underweight.",Bmi);
				fclose(fp42);
			}
			else if(Bmi>=18.5&&Bmi<=23.9)
			{
				printf("Answer(bmi):%.2f,body condition:normal.\n",Bmi);
				
				fp42=fopen(fule,"w");
				if(fp42==NULL)
				{
					return;
				}
				
				fprintf(fp42,"file:%s\n",file);
				fprintf(fp42,"BMI calculator\n");
				fprintf(fp42,"height:%.2f   body weight:%.2f\n",Height,Bodyweight);
				fprintf(fp42,"Answer(BMI):%.2f,body condition:normal.",Bmi);
				fclose(fp42);
			}
			else if(Bmi>=24&&Bmi<=27.9)
			{
				printf("Answer(bmi):%.2f,body condition:overweight.\n",Bmi);
				
				fp42=fopen(fule,"w");
				if(fp42==NULL)
				{
					return;
				}
				
				fprintf(fp42,"file:%s\n",file);
				fprintf(fp42,"BMI calculator\n");
				fprintf(fp42,"height:%.2f   body weight:%.2f\n",Height,Bodyweight);
				fprintf(fp42,"Answer(BMI):%.2f,body condition:overweight.",Bmi);
				fclose(fp42);
			}
			else if(Bmi>=28)
			{
				printf("Answer(bmi):%.2f,body condition:obesity.\n",Bmi);
				
				fp42=fopen(fule,"w");
				if(fp42==NULL)
				{
					return;
				}
				
				fprintf(fp42,"file:%s\n",file);
				fprintf(fp42,"BMI calculator\n");
				fprintf(fp42,"height:%.2f   body weight:%.2f\n",Height,Bodyweight);
				fprintf(fp42,"Answer(BMI):%.2f,body condition:obesity.",Bmi);
				fclose(fp42);
			}
		}
	}
	return;
}

void tools15_Calculations_Related_To_Line_Sebments(void)
{
	char choice13;
	
	printf("Calculations related to line sebments\n");
	printf("Enter 'a' for 'Find the midpoint of a line segement'\n");
	printf("Enter 'b' for 'Evaluate the length of a line segement'\n");
	printf("\n");
	printf("Function choice:");
	scanf(" %c",&choice13);
	printf("\n");
	
	switch(choice13){
		case 'A':
		case 'a':{
			FILE* fp43;
			float x1,y1,x2,y2;
			float mid_x,mid_y;
			char file[200];
			
			printf("a.find the midpoint of a line segement\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("point 1(x,y):");
			scanf("%f%f",&x1,&y1);
			printf("point 2(x,y):");
			scanf("%f%f",&x2,&y2);
			printf("\n");
			
			mid_x=(x1+x2)/2;
			mid_y=(y1+y2)/2;
			
			printf("Answer(midpoint):(%.2f,%.2f)\n",mid_x,mid_y);
			
			fp43=fopen(fule,"w");
			if(fp43==NULL)
			{
				return;
			}
			
			fprintf(fp43,"file:%s\n",file);
			fprintf(fp43,"find the midpoint of a line segement\n");
			fprintf(fp43,"point 1:(%.2f,%.2f)   point 2:(%.2f,%.2f)\n",x1,y1,x2,y2);
			fprintf(fp43,"Answer(Midpoint):(%.2f,%.2f)\n",mid_x,mid_y);
			fclose(fp43);
			break;
		}
		case 'B':
		case 'b':{
			FILE* fp44;
			float x1,y1,x2,y2;
			float formula_x,formula_y;
			float Line_length;
			char file[200];
			
			printf("b.evaluate the length of a line segement\n");
			printf("new file:");
			scanf("%s",file);
			char fule[200];
			sprintf(fule,"%s.txt",file);
			printf("\n");
			printf("point 1(x,y):");
			scanf("%f%f",&x1,&y1);
			printf("point 2(x,y):");
			scanf("%f%f",&x2,&y2);
			printf("\n");
			
			formula_x=x2-x1;
			formula_y=y2-y1;
			Line_length=sqrt(pow(formula_x,2)+pow(formula_y,2));
			if(Line_length<0||Line_length==0)
			{
				printf("Such numerical values cannot satisfy practical calculations.\n");
			}
			else
			{
				printf("Answer(line length):%.2f\n",Line_length);
				
				fp44=fopen(fule,"w");
				if(fp44==NULL)
				{
					return;
				}
				
				fprintf(fp44,"file:%s\n",file);
				fprintf(fp44,"evaluate the length of a line segement\n");
				fprintf(fp44,"point 1:(%.2f,%.2f)   point 2:(%.2f,%.2f)\n",x1,y1,x2,y2);
				fprintf(fp44,"Answer(Line length):%.2f\n",Line_length);
				fclose(fp44);
			}
			break;
		}
		default:{
			printf("Invalid selection\n");
			break;
		}
	}
	return;
}
