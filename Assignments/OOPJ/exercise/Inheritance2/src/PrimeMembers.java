
public class PrimeMembers extends Member{
	private int JoiningYear;
	private int  JoinFess;
	private boolean isActive;
	
	
	public int getJoiningYear() {
		return JoiningYear;
	}

	public void setJoiningYear(int joiningYear) {
		JoiningYear = joiningYear;
	}

	public int getJoinFess() {
		return JoinFess;
	}

	public void setJoinFess(int joinFess) {
		JoinFess = joinFess;
	}

	public boolean isActive() {
		return isActive;
	}

	public void setActive(boolean isActive) {
		this.isActive = isActive;
	}

	public void display()
	{
		 System.out.println("Name: " + getName());
	        System.out.println("Age: " + getAge());
	        System.out.println("Phone Number: " + getPhoneNo());
	        System.out.println("Address: " + getAddress());
	        System.out.println("Salary: " + getSalary());
	        
	        System.out.println("Joining Year: " + getJoiningYear());
	        System.out.println("Joining Fees: " + getJoinFess());
	        System.out.println("Active: " + isActive());

	}
}