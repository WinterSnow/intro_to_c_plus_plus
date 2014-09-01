#include <stdio.h>
#include <stdlib.h>     /* for atof()  */

#include <iostream>		/* for cout		*/
using namespace std; 

#define MAXOP	100		/* max size of operand or operator */
#define NUMBER 	'0' 	/* signal that a number was found */

int getop(char[]);
void push(double);
double pop(void);

/*reverse Polish calculator	*/
int main()
{
	int type;
	double op2;
	char s[MAXOP];


    cout << "Please enter a string for a: ";

	while ((type = getop(s)) != EOF) {
		//cout << "s:" << s << "\n";
		//cout << "type: " << type << "\n";
		switch (type) {
		case NUMBER:
			push(atof(s));
			break;
		case '+':
			push(pop() + pop());
			break;
		case '*':
			push(pop() * pop());
			break;
		case '-':
			op2 = pop();
			push(pop() - op2);
			break;
		case '/':
			op2 = pop();
			if (op2 != 0.0){
				push(pop()/ op2);
			}
			else {
				printf("error: zero divisor\n");
			}
			break;
		case '\n':
			printf("\t%.8g\n", pop());
			break;
		default:
			printf("error: unknown command %s\n", s);
			break;
		}
		
	}
	return 0;
}

#define MAXVAL 	100		/* maximum depth of val stack*/

int sp = 0;				/* next free stack position*/
double val[MAXVAL];		/* value stack */

/* push: push f onto value stack */
void push(double f)
{
	if (sp < MAXVAL){
		val[sp++] = f;
		//cout << "push: " << f << '\n';
	}
	else
		printf("error: stack full, can't push %g\n", f);
}



/* pop: pop and return top value from stack */
double pop(void){
	if (sp > 0){
		double top = val[--sp];
		//cout << "pop: "<< top << '\n';
		return top;
	}
	else {
		printf("error: stack empty\n");
		return 0.0;

	}
}

#include <ctype.h>

int getch(void);
void ungetch(int);

/* getop: get next operator or numeric operand */
int getop(char s[]){
	int i, c;
	//cout << "S in getop: " << s << "\n"; 

	while ((s[0] = c = getch()) == ' ' || c == '\t'){
	}
	//cout << "S in getop (a second time): " << s << "\n";
	//cout << "C in getop: " << c << "\n";
	s[1] = '\0';
	if (!isdigit(c) && c !='.'){
		//cout << "C is returning as not a number. C is " << c << "\n";
		return c; 		/* not a number */
	} 
	i = 0;
	if (isdigit(c)){	/* collect integer part */
		while (isdigit(s[++i] = c = getch())){
		}
	}
	if (c == '.'){ 		/* collect fraction part */
		while (isdigit(s[++i] = c = getch())){
		}
	}
	s[i] = '\0';

	if (c != EOF){
		//cout << "Calling ungetch on C. C is " << c << "\n";
		ungetch(c);
	}
	//cout << "Returning from getop. returning NUMBER which is " << NUMBER << "\n";
	//cout << "s in getop: " << s << '\n';
	return NUMBER;
}	

#define BUFSIZE 100

char buf[BUFSIZE]; 	/* buffer for ungetch */
int bufp = 0; 		/* next free posiiton in buf */

int getch(void) 	/* get a (possibly pushed back) character */
{
//	cout << "buffer bufp: " << bufp << '\n';
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch (int c)/* push character back on input */
{
	if ( bufp >= BUFSIZE){
		printf("ungetch: too many characters\n");
	} else {
		buf[bufp++] = c;
	}
}