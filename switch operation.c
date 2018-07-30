#include<stdio.h>
#include<conio.h>
int main ()
{
 int option,arr[50],num,i,element,location,j,a;

 while(1)

 {

 printf("\n1.View all elements ");
 printf("\n2.Insert new element ");
 printf("\n3.Search an element");
 printf("\n4.Delete an element");
 printf("\n5.Sort elements in ascending order ");
 printf("\n6.Sort elements in descending order");
printf("\n7.find memory location of an element");
 printf("\n8.exit");
 printf("\nEnter your choice:");
 scanf("%d",&option);

 switch(option)
 {
  //case 1:exit(0);
  case 1:


   printf("\nEnter no of elements :");
   scanf("%d", &num);

   //Reading values into Array
   printf("\nEnter the values :");
   for (i = 0; i < num; i++) {
      scanf("%d", &arr[i]);
   }

   //Printing of all elements of array
   for (i = 0; i < num; i++) {
      printf("\narr[%d] = %d", i, arr[i]);
   }
   break;
 case 2:
  // int arr[30], element, num, i, location;

   printf("\nEnter no of elements :");
   scanf("%d", &num);

   for (i = 0; i < num; i++) {
      scanf("%d", &arr[i]);
   }

   printf("\nEnter the element to be inserted :");
   scanf("%d", &element);

   printf("\nEnter the location");
   scanf("%d", &location);

   //Create space at the specified location
   for (i = num; i >= location; i--) {
      arr[i] = arr[i - 1];
   }

   num++;
   arr[location - 1] = element;

   //Print out the result of insertion
   for (i = 0; i < num; i++)
      printf("\n %d", arr[i]);
      break;
 case 3:


   printf("\nEnter no of elements :");
   scanf("%d", &num);

   printf("\nEnter the values :");
   for (i = 0; i < num; i++) {
      scanf("%d", &arr[i]);
   }

   //Read the element to be searched
   printf("\nEnter the elements to be searched :");
   scanf("%d", &element);

   //Search starts from the zeroth location
   i = 0;
   while (i < num && element != arr[i]) {
      i++;
   }

   //If i < num then Match found
   if (i < num) {
      printf("Number found at the location = %d", i + 1);
   } else {
      printf("Number not found");
   }
   break;
 case 4:


   printf("\nEnter no of elements :");
   scanf("%d", &num);

   //Read elements in an array
   printf("\nEnter %d elements :", num);
   for (i = 0; i < num; i++) {
      scanf("%d", &arr[i]);
   }

   //Read the location
   printf("\n location of the element to be deleted :");
   scanf("%d", &location);

   /* loop for the deletion  */
   while (location < num) {
      arr[location - 1] = arr[location];
      location++;
   }
   num--;  // No of elements reduced by 1

   //Print Array
   for (i = 0; i < num; i++)
      printf("\n %d", arr[i]);
      break;
 case 5:


        printf("Enter the value of N \n");

        scanf("%d", &num);



        printf("Enter the numbers \n");

        for (i = 0; i <num ; ++i)

            scanf("%d", &arr[i]);



        for (i = 0; i < num; ++i)

        {



            for (j = i + 1; j < num; ++j)

            {



                if (arr[i] > arr[j])

                {



                    a =  arr[i];

                    arr[i] = arr[j];

                   arr[j] = a;



                }



            }



        }



        printf("The numbers arranged in ascending order are given below \n");

        for (i = 0; i < num; ++i)

            printf("%d\n", arr[i]);
           break;
 case 6:
         // int number[30];





        printf("Enter the value of N\n");

        scanf("%d", &num);



        printf("Enter the numbers \n");

        for (i = 0; i < num; ++i)

	        scanf("%d", &arr[i]);



        /*  sorting begins ... */



        for (i = 0; i < num; ++i)

        {

            for (j = i + 1; j < num; ++j)

            {

                if (arr[i] < arr[j])

                {

                    a = arr[i];

                    arr[i] = arr[j];

                    arr[j] = a;

                }

            }

        }



        printf("The numbers arranged in descending order are given below\n");

        for (i = 0; i < num; ++i)

        {

            printf("%d\n", arr[i]);

        }
        break;
 case 7:
  printf("\nenter no of element");
scanf("%d",&num);
printf("\nenter values :" );
for(i=0;i<num;i++)
  scanf("%d",&arr[i]);
  printf("\nenter the element");
  scanf("%d",&element);
location(arr[element]) = base(arr) + 4(element - )
  printf("\nlocation is=%d",arr[element]);
  break;
 case 8:exit(0);
 default:
    printf("invalid choice");


 }
getch();

 }
 }
