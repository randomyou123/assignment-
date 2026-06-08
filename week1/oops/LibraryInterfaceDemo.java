public class LibraryInterfaceDemo {

    public static void main(String[] args) {

        System.out.println("Kid User");

        KidUser kid1 = new KidUser(10, "kids");
        kid1.registerAccount();
        kid1.requestBook();

        System.out.println();

        KidUser kid2 = new KidUser(18, "fiction");
        kid2.registerAccount();
        kid2.requestBook();

        System.out.println("\n Adult User ");

        AdultUser adult1 = new AdultUser(5, "kids");
        adult1.registerAccount();
        adult1.requestBook();

        System.out.println();

        AdultUser adult2 = new AdultUser(23, "fiction");
        adult2.registerAccount();
        adult2.requestBook();
    }
}