class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        switch(day_of_week(year,month,day)){
        case 0: return "Sunday";
        break;
        case 1: return"Monday";
        break;
        case 2: return "Tuesday";
        break;
        case 3: return "Wednesday";
        break;
        case 4: return "Thursday";
        break;
        case 5: return "Friday";
        break;
        case 6: return "Saturday";
        break;
    }
        return "0";
    }
    int day_of_week(int y, int m, int d)
{
  static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  y -= m < 3;
  return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

};