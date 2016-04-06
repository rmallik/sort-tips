# sort-tips  - Insertion / Merge sort algorithm analysis

Algorithmic is a branch of computer science that consists of designing and analysing computer algorithms.
1. The design pertains to 
   (a)  Descript ion of algorithm at an abstract level by means of psuedo code languages and
    (b) Proof of correctness i.e, the algorithm solves a given problem in all cases.
2. The “analysis” deals with performance evaluation( complexity analysis)

Analysis of Algorithm:

1. Theorital study of computer program targets for 
   (a) performance and 
   (b) resource usage ( ram and disk memory) of the program behaviour. 
   How do we make the performance fast? 

2. What is more important than performance?
   Correctness, Simplicity, maintainability, cost ( program time – billing :) ) , 
   stability, robustness of the software, modularity, security, scalibality, and userfriendlyness...

3. Why do we study algorithms and performances?

   1. Performance is co-related with user-friendlyness
   2. There are real time contraints that we need to compromise with performances..
   3. Performance measures the line between the feasible and in-feasible
   4. Real time scinerio ( not fast enough, uses too much of resources ( memory), thus time 
      consuming and where things donot scale.)

4. That's why Algorithm are there in the cutting edge of enterprenuership. 
   1. Algorithm gives us a language of talking about programming behaviour.
   2. Anything else? 

5. Performance is like money. What good does a good stack of $100 bills do for you? 
   Wouldn't you rather have water, food, shelter that we are willing to pay those $100 bills.
   1. Performance is that we pay for user-friendlyness and security. 
   2. People would say program in “Java” rather in “C” , as it has more functionality (object 
      oriented feature and has expection handling mechanism). 
      So smart invester lands up paying a factor of 3 times because of performance and speed.

Problem: Sorting ( Many algorithm technique )

   Input    : Sequence < a1, a2, ..... , an > of numbers in some order 
   Output   : In order sequence of < a1', a2' ...... an' > such that ( $ ) 
                                    $ a1' <= a2' <= ...... <= an' ( monotonically increasing in size) 
   Use an algorithm to do this output sequence : This can be done by using INSERTION SORT. 

   Insertion Sort(A, n) : Wrtite a psuedo code that sorts an array A with size (1,....,n)

   Psuedo code: 
   
   FOR ( j ← 2 ) TO length[A]  or “n”   // We are running an outer loop ( j from 2 to n ) 
       DO key ← A[j]
         {Put A[j] into the sorted sequence A[1 . . [j − 1]}
          i← ( j − 1)                        // the inner loop starts at ( j - 1) 
          WHILE ( i > 0 and A[i] > key
              DO A[i + 1] ← A[i] 
                 i ← (i − 1)        // the inner loop goes down as ( i < - ( 1 – 1) ) until it goes down to “0” while ( i > 0)
          A[i + 1] ← key                // This psuedo code has induction techniques followed 

Explaination Notes :    
    1. There is an Array which is partitioned at jth position. 
       We introduce a key and start running an outer loop ( j  < -  2 to n ) and 

    2. There are inner loop start at from i  at  ( j – 1)  and then goes down to  
       ( i  < - ( i -1 )  until it goes to '0' ( while i > 0)   

    3. The elements below jth position are sorted using the key value , 
       we pull the value out here and then we call the key which we can insert in the same position
    
    4. There is an invariant which is being maintained by this while loop each time its through.

    5. The invariant is that each time the element before jth element are sorted.
  
    6. The goal for each time through the loop is to increase ( add 1) to the length of things that are being sorted.

    7. We pull out the key and copy the values, keep copying up, until we find the place 
       where the key goes and inserted the key into that position.

    8. Like we have just sorted from 1 to j  and next we can start sorting ( j  + 1 ) 

