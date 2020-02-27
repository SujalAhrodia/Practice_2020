/* 
Intuition:
break down the given date into number of days, depending on the leap/non-leap year conditions.

Ref: Sakamoto's algo
*/

class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) 
    {
        string ans[] = {"Sunday","Monday", "Tuesday", "Wednesday", "Thursday","Friday", "Saturday"};
        
        //number of days in leap year(monthwise)
        int temp[] = {0,3,2,5,0,3,5,1,4,6,2,4};
        
        //leap year
        if(month <=2)
            year-=1;
        
        int index = ((year+year/4-year/100+year/400) + temp[month-1] + day) % 7 ; 
        
        return ans[index];
    }
};
