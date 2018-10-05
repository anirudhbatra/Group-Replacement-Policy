# Group-Replacement-Policy

1.	Abstract:
 In this project we consider a situation where we have an auditorium, which is lighted up by many tube lights. As it is expected, the tube lights have a certain life tenure, for which they work and after that they become inactive. Now we have to decide that when will it be most fruitful time to replace the tube lights. Changing the tube lights in group will be economically more beneficial. But we will also have to maintain some threshold time till which we can delay the replacement of the inactive tube lights. Here comes our project, we will decide a time when the lights will be replaced.


2.	Introduction:
 As we discussed earlier that we are dealing here with a hypothetical condition where a city auditorium is lighted by tube lights. As expected, the tube lights have a certain life time after which they become inactive. The cost of individual tube lights is much more than that of tube lights purchased on bulk basis. Now the auditorium owner will definitely try to spend less amount on this. He will, therefore, try to wait for more lights to go inactive. But there should be a threshold where the owner will have to replace the tube lights because value of bulk will go higher than purchasing individual tube lights. This is because, waiting for long will result in increase in number of tube lights. So the problem is to find an optimum way in which we can decide that when to replace the tube lights. This problem is called Replacement Policy.







3.	Group Replacement Policy:
This policy is concerned with the items that either work perfectly, or work partially or inefficiently or fail completely. This situation generally happens when the system consists of a large number of identical low cost items that are increasingly liable to failure with age. In such cases, the replacement of individual items would incur a set of costs, which is independent of the number replaced.  However it may be advantageous to replace all the items at a time at a fixed interval.  This policy is known as group replacement policy and is very attractive, particularly when
•	The value of any individual item is so small.
•	The cost of keeping records of individual ages is high that cannot be justified.
•	The purchase of such identical items in bulk can be had at discounted rate.
•	Average individual replacement would be costlier than the average group replacement.
•	If sufficient number of standby machines are available.
•	New designs of the equipment considerably increase the production rate.

In all the above cases the two types of replacement policies considered are:
•	Individual Replacement
Under this policy, an item is replaced instantly after its failure.
•	Group Replacement
Under this policy a decision will be taken so as to replace all the items irrespective of the fact that the items have failed - not failed, provided if any item fails, before the optimal time it may be replaced individually.
Why Group Replacement Policy?
Group replacement policies are popular in large part due to the ease with which they can be implemented in a real production setting. There has been little work in the literature on identifying which class of policies contains the optimal policy for a given system. For a parallel system where the components have exponential i.i.d. failure times, we can showed that the class of m-failure policies is optimal if one knows the value of the underlying exponential parameter. We can provide optimality results for the adaptive Bayesian case where the parameter is continuously estimated from the failure time data.



4.	Primary Objective:
The primary objective of this project is to find out a policy in which the things in our surroundings must be replaced so as to put in minimum cost and replace a larger quantity of things in minimum investment. To fulfil this requirement we have used the group replacement policy. In group replacement policy, we replace our objects in groups. This is because generally we when the products are purchased in bulk then they cost much less than in the case where they are replaced in bulk. But it is also obvious that the longer we wait, larger is the number of objects to be replaced. So if we are waiting for long, we are also increasing the number of entities to be replaced. A situation will be reached where 
	Cost of n1 product * n1 < Cost of n2 product * n2
Where n1 is number of objects to be replaced at time t1 and n2 is the number of objects to be replaced at time t2 and t1 < t2.
When this happens, we reach the threshold of the waiting period and we should replace before this situation arrives. So our prime objective always remains to find out that threshold. 





5.	Secondary Objective:
We have considered a hypothetical situation where we try to prove the theory above and to develop a software program to solve such kind of problems in any field. To start with, we have considered a hypothetical situation of an auditorium where the tube lights have a certain life period after which it becomes inactive and should be replaced. The replacement might not be very urgent because there are large number of tubes in the auditorium and if a few stop working then it will definitely not effect. Thus the auditorium will wait to replace the tube lights in bulk. So the person waits for a certain amount of time and then, when the threshold is reached, he replaces all the tubes at once. 


6.	Implementation:
•	Step 1
Find the probability of failure of items at the end of each period.
•	Step 2
Find the number of replacements made at the end of each period with reference to probability of failures at the end of each period considering its pervious replacements.
•	Step 3
Calculate cost of individual replacement at the end of each period.
•	Step 4
Calculate cost of group replacement at the end of each period.
•	Step 5
Calculate total cost of group replacement including individual replacements by adding Steps 3 and 4.
•	Step 6
Calculate the average cost per period by dividing the result in Step 5 with period number.
•	Step 7
Identify the least among the average cost per period as the period of group replacement policy.


7.	Area of Application:
This method can be used in various fields:
1.	Street light replacement by municipality.
2.	Number of cricket balls purchased by a cricket academy.
3.	Replacement of computer accessories.
4.	Replacement of tools by builders.
5.	Replacement of binding of books of library. 
