# COMPUTER-FUNDAMENTALS-PROJECT
HOLY CRAP I JUST DID IT IN TWO HOURS, FUCK MY LIFE (FIRST YEAR FIRST SEMESTER NO EXPERIENCE PROJECT)


///////////////////////////////////////////////////////////////////////////////////////////////////////////////

ALL RIGHTS RESERVED - PROJECT FOR COMPUTER FUNDAMENTALS (APRIL 16, 2026)

FOR MY GROUP MEMBERS, KINDLY READ THIS READ ME AS THIS IS MY EXPLANATION OF THE CODE THANK YOU! ! ! 

SHOUT OUT TO SCROLLO AS THE GROUP LEADER FOR HIS INSANE SUPPORT AND PADREI FOR HIS EMOTIONAL SUPPORT.

SHOUTOUT TO L.M.B FOR HIS SUPPORT AS A GRP MEMBER,

THIS CODE IS RUNNING ON HOPES AND DREAMS HEHEHEH

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

THE CODE ITSELF IS A TERMINAL BASED APPLICATION

RUNS ENTIRELY ON C++ (NO C# OR C INVOLVED)

POTENTIAL UPDATES IN THE FUTURE:
--> FSTREAM IMPLEMENTATION
--> INCLUSION OF LABORATORY BASED COURSES
--> EXTEND BEYOND MATH AND PHYSICS DEPARTMENT BASED COURSES
--> IMPROVE STATISTICAL MODELS USED
--> IMPLEMENT VISUAL AIDS THROUGH GRAPHS TO BETTER DISPLAY GRADE ANALYSIS
--> IMPLEMENT MACHINE LEARNING 
--> TRANSITION TERMINAL GUI TO A BETTER GUI (POSSIBLY USING NCURSES OR WXWIDGET )

-- > GOAL OF THE PROGRAM:

THE PROGRAM AIMS TO CREATE A GRADE COMPUTATION AND OPTIMIZER FOCUSING ON THE MPD DEPARTMENT (NON LABORATORY COURSES)

THIS IS CHOSEN AS THERE IS A HIGHER PERCENTAGE OF STUDENTS FAILING/ DROPPING/ ANXIOUS ABOUT COURSES OF SIMILAR TYPES

THE OPTIMIZER AIMS TO GIVE THE STUDENTS A CLEAR GOAL

-- > CODE EXPLANATION: 

LIBRARIES USED:

<iostream>
<cstdlib> -> NOT USED (DID NOT USED SLEEP FUNCTION AS THE PROJECT IS IN ITS PROTOTYPE STAGE)
<Windows.h>
<cmath> -> DID NOT USED (STATISTICAL MODELS USED ARE SIMPLE AND STRAIGHTFORWARD)
<vector>
<map>
<iomanip>
<string>

STATISTICAL MODELS/ MATHEMATICAL CONCEPTS USED:

1.Partial Sensitivity Analysis - This explains why a mistake in the Finals "hurts" 6 times more than a mistake in the Prelims.
2. The "Anchor" Detection (Outlier Analysis)/ Maximum Drag Factor - To find which part of your grade affected the final result most negatively, the code uses a Min-Max Normalized Scan.
3. Weighted Arithmetic Mean - Finally, the Class Standing ($CS$) uses a Weighted Mean rather than a simple average.

--> SYNTAX EXPLANATION

Used <iomanip>, <vector> and <map> for databased management and core CRUD functionality.

<map> is used to create a generalized classification for all the assesment tasks (the classifications are: PRELIMS/ MIDTERM/ FINALS)

<vector> handles the grouping for each individual component. It is used as a component of <map>

<iomanip> is used for better input/ output/ terminal handling. 

Main code loop is in the int main() function.

controller() function handles window management. Offers better scaleability for future updates

Used referrals and pointers to easily manipulate data through Object Oriented Programming





