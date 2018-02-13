
//Sorting in Java using the predefined function in java- Arrays.sort(...);

import java.util.Arrays;

import java.util.Collections;

public class java_sort
{
    public static void main(String[] args)
    {
       int[] arr={5,6,4,3,8,67,22,34,789,2};
       //to sort the array in acending order
       Arrays.sort(arr);
       System.out.println("Modified array :"+Arrays.toString(arr));
       
       //to sort the subarray of an array
       int[] arr1={5,18,3,6,9,12,0,2,7};
       Arrays.sort(arr1,0,5);
       System.out.println("Modified Array : "+Arrays.toString(arr1));
       
       //To sort the array in decending order
       Integer[] arr2={4,5,3,2,7,8,1,9,0};
       Arrays.sort(arr2,Collections.reverseOrder());
       System.out.println("Modified Array in Reverse order :"+Arrays.toString(arr2)); 
       
       //to sort the strings in alphabetical order
       String arr3[]={"man","om","kiit","durgesh","hari"};
       Arrays.sort(arr3);
       System.out.println("Sorted Strings are (Acending order):"+Arrays.toString(arr3));
       
       Arrays.sort(arr3,Collections.reverseOrder());
       System.out.println("Sorted Strings are (Decending order) :"+Arrays.toString(arr3));
        
    }
}
