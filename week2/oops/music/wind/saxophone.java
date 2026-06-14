package music.wind;

import music.playable;

public class saxophone implements playable {

    @Override
    public void play() {
        System.out.println("Playing Saxophone");
    }
}