#include<stdio.h>
#include<conio.h>
main()
{
	int choice;
	
	printf("press 1 for english\n");
	printf("press 2 for hindi\n");
	printf("press 3 for gujarati\n\n");
	
	printf("enter your choice");
	scanf("%d",&choice);
	
	switch (choice)
	{
      case 1 :
      	printf("press 1 for internet recharge\n");
      	printf("press 2 for top-up recharge\n");
      	printf("press 3 for special recharge\n\n");
      	
      	printf("enter your choice:");
      	scanf("%d",&choice);
	}
	
	switch (choice)
	{
		case 1:
		     printf("your internte recharge successfully\n");
		break;
		
		case 2:
		     printf("your top-up recharge successfully\n");
		break;
		
		case 3:
		     printf("your special recharge successfully\n");
		break;
		
		default:
		printf("enter valid input");
		break;
		
	}
	
		switch (choice)
		{	
	  case 2:
	  	
	  	printf("internte recharge ke liye 1 dabaiye\n");
	  	printf("top-up recharge ke liye 2 dabaiye\n");
	  	printf("special recharge ke liye 3 dabaiye\n\n");
	  	
	  	printf("aapna recharge plen pasandha kariye");
	  	scanf("%d",&choice);
	  	
	  	switch (choice)
	  	{
	  		case 2:
	  	
	  	printf("internte recharge ke liye 1 dabaiye\n");
	  	printf("top-up recharge ke liye 2 dabaiye\n");
	  	printf("special recharge ke liye 3 dabaiye\n\n");
	  	
	  	printf("aapna recharge plen pasandha kariye");
	  	scanf("%d",&choice);
	  	
		
			  	
		  }
		  
		  switch (choice)
		  {
		  	
		  	case 1:
		  		printf("internte recharge successfully ho gaya\n");
		  	break;
		  	
		  	case 2:
		  		printf("top-up recharge successfully ho gaya\n");
		  	break;
		  	
		  	case 3:
		  		printf("special recharge successfully ho gaya\n");
		  	break;
		  	
		  	
			  	
		  }
		  
		  switch (choice)
		  {
		  	case 3:
		  		printf("internte recharge mate 1 dabavo\n");
	  	        printf("top-up recharge mate 2 dabavo\n");
	  	        printf("special recharge mate 3 dabavo\n\n");
	  	
	  	printf("tamaro recharge plen pasandha karo");
	  	scanf("%d",&choice);
		  }
		  
		  switch (choice)
		  {
		  	case 1:
		  		printf("internte recharge successfully thay gayu\n");
		  	break;
		  	
		  	case 2:
		  		printf("top-up recharge successfully thay gayu\n");
		  	break;
		  	
		  	case 3:
		  		printf("special recharge successfully thay gayu\n");
		  	break;
		  }
	  }
	  
		
}

		
		
	
