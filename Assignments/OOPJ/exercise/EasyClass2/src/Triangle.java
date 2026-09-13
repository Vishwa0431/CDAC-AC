
public class Triangle {
	int side1;
	int side2;
	int side3;
	
	Triangle(int side1, int side2, int side3){
		this.side1 = side1;
		this.side2 = side2;
		this.side3= side3;
	}
	int perimeter() {
		return side1 + side2 + side3;
	}
	
	double Area() {
		double s = perimeter() /2;
		return Math.sqrt( s * (s-side1) * (s- side2) * (s - side3));
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		Triangle tobj = new Triangle(3, 4, 5);
		
		System.out.println("Perimeter of Triangle is  : "+ tobj.perimeter());
		System.out.println("Area of triangle is : "+ tobj.Area());
	}

}
