package live;

import music.playable;
import music.string.veena;
import music.wind.saxophone;

public class test {

    public static void main(String[] args) {

        // Part A
        Veena v = new Veena();
        v.play();

        // Part B
        Saxophone s = new Saxophone();
        s.play();

        // Part C
        Playable p;

        p = new Veena();
        p.play();

        p = new Saxophone();
        p.play();
    }
}