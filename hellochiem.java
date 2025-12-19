public class hellochiem {
    public static void main(String[] args) {
        System.out.println("Line 1");
        System.out.println("Line 2");
    }


    static void printNumber() {
        // Removed: System.out.println("This is line 2.");
    }

    static void printPattern() {
        // Removed: System.out.println("***");
    }
    static void printSum() {
        int sum = 7 + 8;
        // Removed: System.out.println("The sum of 7 and 8 is: " + sum);
    }

    static void printReverse() {
        String word = "Hello";
        String rev = new StringBuilder(word).reverse().toString();
        // Removed: System.out.println("Reverse of Hello: " + rev);
    }

    static void printBye() {
        // Removed: System.out.println("Goodbye!");
    }
}