#include<iostream>
using namespace std;

int main()
{
int num1,num2;
char choice;
cout<<"Give values of num1 & num2 ";
cin>>num1>>num2;
cout<<"Enter symbol according to operation(+,-,*,/)";
cin>>choice;
switch(choice)
{
	case'+':
		cout<<"Sum ="<<(num1+num2);
		break;
		case'-':
			cout<<"Difference ="<<(num1-num2);
			break;
			case'*':
				cout<<"Product ="<<num1*num2;
				break;
				case'/':
					cout<<"Quotient="<<num1/num2;
					break;
					case'%':
						cout<<"Remainder="<<num1%num2;
						break;
						default:
							cout<<"Wrong Operator input";
							}
							return 0;
						}
                        
