class PrintEvenNo{

    static void printEvenNumbers(){
        int num = 1;
        while(num <= 50){
            if(num % 2 == 0){
                System.out.println("Even numbers : " + num);
            }
            num++;
        }
    }
    public static void main(String[] args) {
        PrintEvenNo.printEvenNumbers();
    }
}