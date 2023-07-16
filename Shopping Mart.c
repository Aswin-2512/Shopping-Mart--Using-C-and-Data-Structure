#include<stdio.h>
#include<stdlib.h>
 
//SLL
struct product
 
{
 
	int pro_no;
 
	int price;
 
	int stock;
 
	struct product *Next;
 
};
 
typedef struct product Node;
 
//fn declaration
 
void InsertLast(Node *List, int e, int price, int stock);
 
int IsEmpty(Node *List);
 
void display(Node *List);
 
//STACK
#define MAX 5
int Stack[MAX],top=-1;
//STACK FN DECLARATION
int IsFull();
int IsEmptystack();
void Push(int ele);
int Pop();
void Top();
void Display_stack();

//CANCELLATION
void cancel_order();
 
 
int cus_info[10][2], cus_i=0, cus_j=0;
 
//Admi login
int main();
void admin(Node *List)
 
{
 
 
 
	List->Next = NULL;
 
	Node *Position;
 
	int count, ch,Name, e, price,stock;
 
	printf("1. Add a product\n");
	
	printf("2. Check orders\n");
 
	printf("Enter your choice:");
 
    scanf("%d",&ch);
 
	switch(ch)
 
	{
 
    	case 1:
 
        {
            printf("Enter the number of products: ");
 
            scanf("%d", &count);
 
    	    for(int i=1; i<=count; i++)
 
    	    {
 
                printf("Enter the product no: ");
 
                scanf("%d", &e);
 
                printf("Enter the price: ");
 
    	        scanf("%d", &price);
 
                printf("Enter the stock available: ");
 
                scanf("%d",&stock);
 
                InsertLast(List, e, price, stock);
 
            }
 
   	        display(List);
   	        break;
        }
        case 2:
        {
            printf("Printing order details....\n");     
            for(int i=0;i<10;i++)    
            {    
                printf("\n");    
                for (int j=0;j<2;j++)    
                {    
                    printf("%d\t\t",cus_info[i][j]);    
                    
                }
                
            }
             printf("\n"); 
        }
 
  	
 
   	
 
	}
 
  
 
	main();
 
  
 
}
 
 
 
 
 
//New order
 
void order(Node *List)
 
{
	int choice, count,ele,ch,quantity;
	int cus_id;
	labelA:
	printf("Enter the product code you want to buy: ");
	printf("\n");
	printf("\n");
    scanf("%d",&choice);
	if(choice==100)
	{
    	int price = 500;
    	ele=price;
    	labelB:
        printf("LIVE TECH WIRELESS GAMING MOUSE");
        printf("PRICE: %d",price);
        printf("\n");
        printf("\nPRODUCT DESCRIPTION: \n");
        printf("\n");
        printf("\n2.4GHz wireless interface \n12 months battery life \nRequires narrow bluetooth adapter for PC's \nAdvanced optical tracking for smooth movement");
    	
        printf("\n");
        printf("\n 1.ADD TO CART");
        printf("\n");
        printf("\n 2.PROCEED TO BUY");
        printf("\n");
  	    printf("\n 3.GO BACK");
        printf("\n");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
    	switch(ch)
    	{
        	case 1:
        	{
        	    Push(ele);
                printf("GOING BACK\n");
                printf("\n");
            	goto labelB;
            	break;
        	}
        	case 2:
        	{
                
                cus_id=rand();
                printf("YOUR CUSTOMER ID: %d\n",cus_id);
                printf("\n");
                printf("***PLEASE SAVE YOUR CUSTOMER ID FOR FUTURE REFERENCE***\n");
                cus_info[cus_i][cus_j]=cus_id;
                cus_j++;
                Display_stack();
                break;
        	}
        	case 3:
        	{
            	goto labelA;
            	break;
        	}
    	}
	}
 	if(choice==200)
	{
    	int price = 100000;
    	ele=price;
    	labelC:
        printf("ACER PREDATOR HELIOS 300- GAMING LAPTOP");
        printf("%d",price);
        printf("\n");
    	printf("\nPRODUCT DESCRIPTION: \n");
    	printf("\n");
        printf("\n15.6 inch Full HD LED backlight display \n16GB RAM \nHybrid storage \n1 Year On-site warranty");
        printf("\n");
        printf("\n 1.ADD TO CART");
        printf("\n");
    	printf("\n 2.PROCEED TO BUY");
        printf("\n");
        printf("\n 3.GO BACK");
        printf("\n");
        printf("\n Enter your choice:");
        printf("\n");
        scanf("%d",&ch);
    	switch(ch)
    	{
        	case 1:
        	{
            	Push(ele);
                printf("GOING BACK\n");
                printf("\n");
            	goto labelC;
            	break;
        	}
        	case 2:
        	{
        	    cus_id=rand();
                printf("YOUR CUSTOMER ID: %d\n",cus_id);
                printf("\n");
                printf("***PLEASE SAVE YOUR CUSTOMER ID FOR FUTURE REFERENCE***\n");
                cus_info[cus_i][cus_j]=cus_id;
                cus_j++;
                Display_stack();
                break;
        	}
        	case 3:
        	{
            	goto labelA;
            	break;
        	}
  	  }
	}
 	if(choice==300)
	{
    	int price = 83000;
    	ele=price;
    	labelD:
        printf("HP PAVILION GAMING 10th GEN LAPTOP");
        printf("%d",price);
        printf("\n");
        printf("\nPRODUCT DESCRIPTION: \n");
        printf("\n");
        printf("\n10th Gen i3 processor \n8GB RAM & 512GB SSD \n14 inch FULL HD display");
        printf("\n");
        printf("\n 1.ADD TO CART");
        printf("\n");
        printf("\n 2.PROCEED TO BUY");
        printf("\n");
        printf("\n 3.GO BACK");
        printf("\n");
        printf("\n Enter your choice:");
        printf("\n");
        scanf("%d",&ch);
    	switch(ch)
    	{
        	case 1:
        	{
                Push(ele);
                printf("GOING BACK\n");
                printf("\n");
            	goto labelD;
            	break;
        	}
        	case 2:
        	{
               
                 cus_id=rand();
                printf("YOUR CUSTOMER ID: %d\n",cus_id);
                printf("\n");
                printf("***PLEASE SAVE YOUR CUSTOMER ID FOR FUTURE REFERENCE***\n");
                cus_info[cus_i][cus_j]=cus_id;
                cus_j++;
                Display_stack();
                break;
        	}
        	case 3:
        	{
            	goto labelA;
            	break;
        	}
    	}
	}
 	if(choice==400)
	{
    	int price = 222000;
    	ele=price;
    	labelE:
        printf("MACBOOK PRO");
        printf("%d",price);
        printf("\n");
        printf("\nPRODUCT DESCRIPTION: \n");
        printf("\n");
        printf("\n40.65 cm / 16-inch (diagonal) LED‑backlit display with IPS technology \n2.3GHz 8‑core Intel Core i9 \n1TB SSD, \n16GB of 2666MHz DDR4 onboard memory \n720p FaceTime HD camera");
        printf("\n");
        printf("\n 1.ADD TO CART");
        printf("\n");
        printf("\n 2.PROCEED TO BUY");
        printf("\n");
        printf("\n 3.GO BACK");
        printf("\n");
	    printf("\n Enter your choice:");
	    printf("\n");
        scanf("%d",&ch);
    	switch(ch)
    	{
        	case 1:
        	{
                Push(ele);
                printf("GOING BACK\n");
                printf("\n");
            	goto labelE;
            	break;
        	}
        	case 2:
        	{
               
                cus_id=rand();
                printf("YOUR CUSTOMER ID: %d\n",cus_id);
                printf("\n");
                printf("***PLEASE SAVE YOUR CUSTOMER ID FOR FUTURE REFERENCE***\n");
                cus_info[cus_i][cus_j]=cus_id;
                cus_j++;
                Display_stack();
                break;
        	}
        	case 3:
        	{
            	goto labelA;
            	break;
        	}
    	}
	}
 	if(choice==500)
	{
    	int price = 6000;
    	ele=price;
    	labelF:
    	printf("TRANSCEND STOREJET 2TB EXTERNAL HARD DRIVE");
        printf("%d",price);
        printf("\n");
        printf("\nPRODUCT DESCRIPTION: \n");
        printf("\n");
        printf("\nPortable hard drive - 2TB \nUSB 3.0, USB 3.1, USB 2.0 \n1 port for access");
        printf("\n");
    	printf("\n 1.ADD TO CART");
        printf("\n");
        printf("\n 2.PROCEED TO BUY");
        printf("\n");
        printf("\n 3.GO BACK");
        printf("\n");
        printf("\n Enter your choice:");
        printf("\n");
        scanf("%d",&ch);
    	switch(ch)
    	{
        	case 1:
        	{
                Push(ele);
                printf("GOING BACK\n");
                printf("\n");
            	goto labelF;
            	break;
        	}
        	case 2:
        	{
                cus_id=rand();
                printf("YOUR CUSTOMER ID: %d\n",cus_id);
                printf("\n");
                printf("***PLEASE SAVE YOUR CUSTOMER ID FOR FUTURE REFERENCE***\n");
                cus_info[cus_i][cus_j]=cus_id;
                cus_j++;
                Display_stack();
                break;
        	}
        	case 3:
     	   {
            	goto labelA;
            	break;
        	}
    	}
	}
 	if(choice==600)
	{
    	int price = 4000;
    	ele=price;
    	labelG:
        printf("CRUCIAL 4GB RAM FOR PC");
        printf("%d",price);
        printf("\n");
        printf("\nPRODUCT DESCRIPTION: \n");
        printf("\n");
        printf("\n SDRAM - DDR4 \nDual channel memory configuration \nCompatible with PC");
        printf("\n");
        printf("\n 1.ADD TO CART");
        printf("\n");
        printf("\n 2.PROCEED TO BUY");
        printf("\n");
        printf("\n 3.GO BACK");
        printf("\n");
        printf("\n Enter your choice:");
        printf("\n");
        scanf("%d",&ch);
    	switch(ch)
    	{
        	case 1:
        	{
                Push(ele);
                printf("GOING BACK\n");
                printf("\n");
  	            goto labelG;
  	            break;
        	}
        	case 2:
        	{
                cus_id=rand();
                printf("YOUR CUSTOMER ID: %d\n",cus_id);
                printf("\n");
                printf("***PLEASE SAVE YOUR CUSTOMER ID FOR FUTURE REFERENCE***\n");
                cus_info[cus_i][cus_j]=cus_id;
                cus_j++;
                Display_stack();
                break;
        	}
        	case 3:
        	{
            	goto labelA;
            	break;
        	}
    	}
	}
 	if(choice==700)
	{
    	int price = 300;
    	ele=price;
    	labelH:
        printf("LIVE TECH USB WIRELESS BLUETOOTH ADAPTER FOR PC");
        printf("%d",price);
        printf("\n");
        printf("\nPRODUCT DESCRIPTION: \n");
        printf("\n");
        printf("\nUSB 5.0 adapter \nSpeed: 150mbps/sec");
        printf("\n");
        printf("\n 1.ADD TO CART");
        printf("\n");
        printf("\n 2.PROCEED TO BUY");
        printf("\n");
        printf("\n 3.GO BACK");
        printf("\n");
        printf("\n Enter your choice:");
        printf("\n");
        scanf("%d",&ch);
    	switch(ch)
    	{
        	case 1:
        	{
                Push(ele);
                printf("GOING BACK\n");
                printf("\n");
            	goto labelH;
            	break;
        	}
        	case 2:
        	{
                
                cus_id=rand();
                printf("YOUR CUSTOMER ID: %d\n",cus_id);
                printf("\n");
                printf("***PLEASE SAVE YOUR CUSTOMER ID FOR FUTURE REFERENCE***\n");
                cus_info[cus_i][cus_j]=cus_id;
                cus_j++;
                Display_stack();
                break;
     	   }
        	case 3:
        	{
            	goto labelA;
            	break;
        	}
    	}
	}
 	if(choice==800)
	{
    	int price = 800;
    	ele=price;
    	labelI:
        printf("ZEBRONICS USB WIRELESS WIFI ADAPTER FOR PC");
        printf("%d",price);
        printf("\n");
        printf("\nPRODUCT DESCRIPTION: \n");
        printf("\n");
        printf("\n5GHz wifi receiver \nNano USB adapter \nSpeed:600mbps");
        printf("\n");
        printf("\n 1.ADD TO CART");
        printf("\n");
        printf("\n 2.PROCEED TO BUY");
        printf("\n");
        printf("\n 3.GO BACK");
        printf("\n");
        printf("\n Enter your choice:");
        printf("\n");
        scanf("%d",&ch);
    	switch(ch)
    	{
        	case 1:
        	{
        	    Push(ele);
         	   printf("GOING BACK\n");
         	   printf("\n");
         	   goto labelI;
         	   break;
        	}
        	case 2:
        	{
                
                cus_id=rand();
                printf("YOUR CUSTOMER ID: %d\n",cus_id);
                printf("\n");
                printf("***PLEASE SAVE YOUR CUSTOMER ID FOR FUTURE REFERENCE***\n");
                cus_info[cus_i][cus_j]=cus_id;
                cus_j++;
                Display_stack();
                break;
        	}
        	case 3:
        	{
            	goto labelA;
            	break;
        	}
    	}
	}
 	if(choice==900)
	{
    	int price = 2500;
    	ele=price;
    	labelJ:
        printf("ZEBRONICS U725 UPS FOR PC");
        printf("%d",price);
        printf("\n");
        printf("\nPRODUCT DESCRIPTION: \n");
        printf("\n");
        printf("\nType: Offline/Standby \nOutput power wattage: 600w \nInput voltage: 240v \nOutput voltage: 230v \n Frequency: 50 - 60Hz \nDimension: 10cm x 13.2cm x 28cm(W x H x D");	
        printf("\n");
        printf("\n 1.ADD TO CART");
        printf("\n");
        printf("\n 2.PROCEED TO BUY");
        printf("\n");
        printf("\n 3.GO BACK");
        printf("\n");
        printf("\n Enter your choice:");
        printf("\n");
        scanf("%d",&ch);
    	switch(ch)
    	{
        	case 1:
        	{
                Push(ele);
                printf("GOING BACK\n");
                printf("\n");
            	goto labelJ;
            	break;
        	}
        	case 2:
        	{
                
                cus_id=rand();
                printf("YOUR CUSTOMER ID: %d\n",cus_id);
                printf("\n");
                printf("***PLEASE SAVE YOUR CUSTOMER ID FOR FUTURE REFERENCE***\n");
                cus_info[cus_i][cus_j]=cus_id;
                cus_j++;
                Display_stack();
                break;
        	}
        	case 3:
        	{
            	goto labelA;
            	break;
        	}
    	}
    }
 	if(choice==1000)
	{
    	int price = 2000;
    	ele=price;
    	labelK:
        printf("BOAT ROCKERZ 510 WIRELESS HEADPHONES");
        printf("%d",price);
        printf("\n");
        printf("\nPRODUCT DESCRIPTION: \n");
        printf("\n");
        printf("\nColour: Raging Red \nType: On the ear \nBluetooth version: 4.1 \nBattery life: 20hrs \nRange: 10m");
        printf("\n");
        printf("\n 1.ADD TO CART");
        printf("\n");
        printf("\n 2.PROCEED TO BUY");
        printf("\n");
        printf("\n 3.GO BACK");
        printf("\n");
        printf("\n Enter your choice:");
        printf("\n");
        scanf("%d",&ch);
    	switch(ch)
    	{
        	case 1:
        	{
                Push(ele);
                printf("GOING BACK\n");
                printf("\n");
            	goto labelK;
            	break;
        	}
        	case 2:
        	{
                
                cus_id=rand();
                printf("YOUR CUSTOMER ID: %d\n",cus_id);
                printf("\n");
                printf("***PLEASE SAVE YOUR CUSTOMER ID FOR FUTURE REFERENCE***\n");
                cus_info[cus_i][cus_j]=cus_id;
                cus_j++;
                Display_stack();
                break;
        	}
        	case 3:
        	{
            	goto labelA;
            	break;
        	}
    	}
	}
}
//Main
 
int main()
 
{
 
	Node *List = malloc(sizeof(Node));
 
	int choice, password;
 
	printf(" 1.ADMIN LOGIN\n 2.NEW ORDER\n 3.CANCEL ORDER\n 4.EXIT\n");
 
	printf("Enter your Choice: ");
 
    scanf("%d", & choice);
 
	if(choice==1)
 
	{
 
        printf("Enter your password: ");
 
        scanf("%d", & password);
 
        if(password==20456)
 
    	{
 
            admin(List);
 
 
 
    	}
 
    	else
 
    	{
 
            printf("Access Denied");
 
    	}
 
	}
 
	else if(choice==2)
 
	{
 
    	
 
    	order(List);
 
	}
 
 	else if(choice ==3)
 
 	{
        cancel_order();
 
 	}
 	else if(choice ==4)
 	{
 	    exit(0);
 	}
 	else
 	{
 	    printf("\n**INVALID CHOICE**\n");
 	}
 	
return 0;
 
}
 
 
 
//adding pro to sll
 
void InsertLast(Node *List, int e, int price, int stock)
 
{
 
	Node *NewNode = malloc(sizeof(Node));
 
	Node *Position;
 
	NewNode->pro_no = e;
 
	NewNode->price = price;
 
	NewNode->stock= stock;
 
	NewNode->Next = NULL;
 
	if(IsEmpty(List))
 
    	List->Next = NewNode;
 
	else
 
	{
 
    	Position = List;
 
    	while(Position->Next != NULL)
 
    	{
 
        	Position = Position->Next;
 
    	}
 
        Position->Next = NewNode;
 
        NewNode->pro_no;
 
   	
 
	}
 
}
 
int IsEmpty(Node *List)
 
{
 
	if(List->Next == NULL)
 
    	return 1;
 
	else
 
    	return 0;
 
}
 
 
 
void display (Node *List)
 
{
 
  
   system("clear");
   printf("\n*************************WELCOME TO TECH-CART*************************\n");
   printf("\n");
   printf("         You Order, we deliver it to your doorstep safe and sound       \n");
   printf("\n");
   
	for(int i=0;List!=NULL;i++)
 
	{
 
        if(List->pro_no!=0)
 
    	{
 
            printf("%d. ",i);
 
            if(List->pro_no==100)
        	{
 	           char name[]="LIVE TECH WIRELESS GAMING MOUSE";
                printf("%s\n",name);
        	}
            if(List->pro_no==200)
        	{
            	char name[]="ACER PREDATOR HELIOS 300- GAMING LAPTOP";
                printf("%s\n",name);
        	}
            if(List->pro_no==300)
        	{
            	char name[]="HP PAVILION GAMING 10th GEN LAPTOP";
                printf("%s\n",name);
        	}
            if(List->pro_no==400)
  	      {
            	char name[]="MACBOOK PRO ";
                printf("%s\n",name);
        	}
            if(List->pro_no==500)
        	{
            	char name[]="TRANSCEND STOREJET 2TB EXTERNAL HARD DRIVE";
                printf("%s\n",name);
        	}
            if(List->pro_no==600)
        	{
            	char name[]="CRUCIAL 4GB RAM FOR PC";
                printf("%s\n",name);
        	}
            if(List->pro_no==700)
        	{
            	char name[]="LIVE TECH USB WIRELESS BLUETOOTH ADAPTER FOR PC";
                printf("%s\n",name);
        	}
            if(List->pro_no==800)
        	{
            	char name[]="ZEBRONICS USB WIRELESS WIFI ADAPTER FOR PC";
                printf("%s\n",name);
        	}
            if(List->pro_no==900)
        	{
            	char name[]="ZEBRONICS U725 UPS FOR PC";
                printf("%s\n",name);
        	}
            if(List->pro_no==1000)
        	{
                char name[]="BOAT ROCKERZ 510 WIRELESS HEADPHONES";
                printf("%s\n",name);
        	}
            printf("   PRODUCT NO : %d\n", List -> pro_no);
        	
            printf("   PRICE : %d\n", List -> price);
 
        	printf("   STOCK AVAILABLE : %d\n", List->stock);
 
    	}
 
   	
 
        List=List->Next;
 
	}
 
}
void Push(int ele)
{
	if(IsFull())
        printf("Stack Overflow...!\n");
	else
	{
    	top = top + 1;
    	Stack[top] = ele;
    	
	}
}
 
 
int Pop()
{
  if(IsEmptystack())
  {
 	printf("YOUR CART IS EMPTIED!..\n");
 	return 0;
  }
  else
  {
      printf("%d\n", Stack[top]);
      top = top - 1;
        return 1;
      
  }


}
 
void Top()
{
if(IsEmptystack())
printf("Stack Underflow...!\n");
else
printf("%d\n", Stack[top]);
}
 
void Display_stack()
{
 int i;
  if(IsEmptystack())
  {
      printf("YOUR CART IS EMPTY!\n");
 	
  }
  else
  {
 	int tot=0;
 	for(i = top; i >= 0; i--)
 	{
   	    tot+=Stack[i];
 	}
     printf("\n");
     printf("Total amount to be paid: %d\n", tot);
     printf("\n");
     printf("THANK YOU FOR SHOPPING WITH US\n");
     printf("\n");
     printf("YOUR ORDER WILL REACH US WITH IN 3 WORKING DAYS\n");
     printf("\n");
     cus_info[cus_i][cus_j]=tot;
     cus_i++;
     cus_j--;
     
  }
  int res=Pop();
  if(res==1)
  {
      Pop();
  }
  main();
}
 
int IsFull()
{
if(top == MAX - 1)
return 1;
else
return 0;
}
 
 
int IsEmptystack()
{
 if(top == -1)
 return 1;
 else
 return 0;
}


void cancel_order()
{
    int c_id;
    int j;
    printf("Enter your Customer Id: \n");
    scanf("%d",&c_id);
    for(int i=0; i<=5; i++)
    {
        j=0;
        if(cus_info[i][j]==c_id)
        {
            cus_info[i][j]=0;
            cus_info[i][1]=0;
        }
    }
    printf("\nYOUR ORDER IS CANCELLED\n");
    main();
}