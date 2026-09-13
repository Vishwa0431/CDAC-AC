
public class Date {
	private int Day;
	private int Month;
	private int Year;
	
	public void SetDate(int d, int m, int yy){
		Year = yy;
		if(m < 1 || m >12)  {
			Month =1;
		}
		else {
			Month = m;
		}
		
		if(Month ==1 || Month == 3||  Month == 5||  Month == 7||  Month == 8||  Month == 10 ||  Month == 12 ){
			if(d < 1 || d>31) {
				Day = 1;
			}else {
				Day = d;
			}
		}else if(Month == 4|| Month == 6|| Month == 9|| Month == 11) {
			if(d < 1 || d>30) {
				Day = 1;
			}else {
				Day = d;
			}
		}
		else {
			if((yy % 4 ==0 && yy% 100 !=0 ) || yy % 400 == 0) {
					if(d < 1 || d >29) {
						Day = 1;
					}
					else {
						Day = d;
					}
			}
			else {
				if(d < 1 || d >28) {
					Day = 1;
				}
				else {
					Day = d;
				}
			}
		}
		
		
	}
	
	public void addDay(int d) {
		Day += d;
		if(Month ==1 || Month == 3||  Month == 5||  Month == 7||  Month == 8||  Month == 10){
			if(Day > 31){
				int resDay = Day - 31;
				Day = resDay;
				Month++;
			}
		}
		else if(Month == 4|| Month == 6|| Month == 9|| Month == 11) {
			if(Day > 30){
				int resDay = Day -30;
				Day = resDay;
				Month ++;
			}
		}else {
			if((Year % 4 ==0 && Year% 100 !=0 ) || Year % 400 == 0) {
				if(d >29) {
					Day = 1;
					Month++;
				}
			}
			else
				if(Day > 28) {
					Day = 1;
					Month++;
				}
			if(Month == 12)
				Month = 1;
				Year++;
			
		}
	}
	public void addMonth(int m) {
		Month += m;
		if(Month > 12){
			Month = 1;
			Year ++;
		}
	}
	public void addYear(int y) {
		Year += y;
	}

	public int getDay() {
		return Day;
	}


	public int getMonth() {
		return Month;
	}

	public int getYear() {
		return Year;
	}

}
