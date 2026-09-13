
public class Rectangle {
	
	int  length;
	int breadth;
	
	Rectangle(int length, int breadth){
		this.length = length;
		this.breadth =breadth;
	}
	
	int Area() {
		return length * breadth;
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Rectangle robj1 = new Rectangle(4, 5);
		Rectangle robj2 = new Rectangle(5, 8);
		
		System.out.println("Area of rectangle 1 : "+ robj1.Area());
		System.out.println("Area of rectangle 2 : "+ robj2.Area());
	}

}
