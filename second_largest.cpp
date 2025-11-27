//sorting takes NLogN time complexity
//if my array is like 1777 then second largest is 1 but this is worst time complexity O(n) //we have to traverse the array to find the second largest element
//so if I first sort the entire array and then find the second largest element, it will take O(nlogn + n) time complexity
//First largest by Brute force is O(2N)
//In case array constians negative number then we use largest =arr[i] but second largest as INT_MIN
//different types of star patters
//attempt striver question yourself
//edge case waali problems kab aynegi

//set.insert takes Nlogn time complexity (for removing duplicates and sorting NlogN +N time complexity)
//TWO POINTER APPROACH



//vector ke andar .insert() function use karte hain


//selection sort, bubble sort, insertion sort, merge sort, quick sort, heap sort
//how to optimize bubble sort with flag to skip passes
//i agr jaa rha hai for(i=0;i<n;i++) then if array is [2,5,3,7,1]then loop will go till i=4
//if array is [2,5,3,7,1] then j will go till j=4-i
