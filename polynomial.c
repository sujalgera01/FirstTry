#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct node 
{
	int coeff ;
	int power ;
	struct node* link ;
};

void createPoly (int inputCoeff , int inputPower , struct node **temp )
{
	struct node* p ;
	struct node* q ;
	q = *temp ;
	if (q == NULL)
	{
		p = (struct node*)malloc(sizeof(struct node*));
		p->link = NULL ;
		p->coeff = inputCoeff ;
		p->power = inputPower ;
		//q = p ;
		*temp = p ;
		p->link = (struct node*)malloc(sizeof(struct node*));
		p = p->link ;
		p->link = NULL ;
	}
	else {
		p->coeff = inputCoeff;
		p->power = inputPower ;
		p->link = (struct node*)malloc(sizeof(struct node*));
		p = p->link ;
		p->link = NULL ;
	}
}

void polyAdd (struct node* poly1 , struct node* poly2 , struct node* poly3 )
{
	while (poly1->link && poly2->link)
	{
		if (poly1->power > poly2->power)
		{
			poly3->power = poly1->power ;
			poly3->coeff = poly1->coeff ;
			poly1 = poly1->link ;
		}
		else if (poly1->power < poly2->power)
		{
			poly3->power = poly2->power ;
			poly3->coeff = poly2->coeff ;
			poly2 = poly2->link ;
		}
		else if (poly1->power == poly2->power )
		{
			poly3->power = poly2->power ;
			poly3->coeff = poly1->coeff + poly2->coeff ;
			poly1 = poly1->link ;
			poly2 = poly2->link ;
		}
		poly3->link = (struct node*)malloc(sizeof(struct node*));
		poly3 = poly3->link ;
		poly3->link = NULL ;
	}

	while (poly1->link || poly2->link)
	{
		if (poly1->link)
		{
			poly3->power = poly1->power ;
			poly3->coeff = poly1->coeff ;
			poly1 = poly1->link ; 
		}

		if (poly2->link)
		{
			poly3->power = poly2->power ;
			poly3->coeff = poly2->coeff ;
			poly2 = poly2->link ; 
		}
		poly3->link = (struct node*)malloc(sizeof(struct node*));
		poly3 = poly3->link ;
		poly3->link = NULL ;
	}
}

void display (struct node* p)
{
	while (p->link != NULL)
	{
		printf ("%d x^ %d + ",p->coeff , p->power );
		p = p->link ;
	}
	//printf ("%d x^ %d + ",p->coeff , p->power );
}

void main ()

{
	struct node* poly1 = NULL ;
	struct node* poly2 = NULL ;
	struct node* poly3 = NULL ;
	createPoly(5,4,&poly1);
	createPoly(4,3,&poly1);
	createPoly(3,2,&poly1);
	createPoly(2,1,&poly1);
	createPoly(1,0,&poly1);

	createPoly(5,4,&poly2);
	createPoly(5,4,&poly2);
	createPoly(3,2,&poly2);
	createPoly(2,1,&poly2);
	createPoly(1,0,&poly2);

	poly3 = (struct node*)malloc(sizeof(struct node*));
	polyAdd(poly1, poly2 , poly3);
	display(poly3);
	//printf ("Hello WOrld\n");
}