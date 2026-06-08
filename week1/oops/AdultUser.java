public class AdultUser implements LibraryUser {

    int age;
    String bookType;

    // Constructor
    AdultUser(int age, String bookType) {
        this.age = age;
        this.bookType = bookType;
    }

    @Override
    public void registerAccount() {

        if (age > 12) {
            System.out.println(
                "You have successfully registered under an Adult Account"
            );
        } else {
            System.out.println(
                "Sorry, Age must be greater than 12 to register as an adult"
            );
        }
    }

    @Override
    public void requestBook() {
        //  i can use == but this check that both the string are referring to same object or not 
        //using.equal can also be used but it chech content of the strings are identical like fiction will ot be accepted thus i choose
        // .equalIgnoreCase in this fiction Fiction or fiCtion is also accepted 
        if (bookType.equalsIgnoreCase("Fiction")) {
            System.out.println(
                "Book Issued successfully, please return the book within 7 days"
            );
        } else {
            System.out.println(
                "sorry, you are allowed to take only adult Fiction books"
            );
        }
    }
}