
public class ComplexNo {
	int real;
	int imag;
	
	ComplexNo(int real, int imag){
		this.real = real;
		this.imag = imag;
	}
	
	public void sum(ComplexNo  c) {
		int rl = this.real + c.real;
		int img = this.imag + c.imag;
 		System.out.println("Sum of Complex number is : "+rl + " + " + img +"i"); 
	}
	
	public void Difference(ComplexNo  c) {
		int rl = this.real - c.real;
		int img = this.imag - c.imag;
		System.out.println("Difference of Complex number is : "+ rl + " + " + img +"i");
	}
	
	public void Product(ComplexNo  c) {
		int rl = this.real * c.real;
		int img = this.imag * c.imag;
		System.out.println("Product of Complex number is : "+ rl + " + " + img +"i");
	}
}
