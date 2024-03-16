#include "myclasses.h"

int main()
{
	MediaPlayer* pVideoPlayer = new VideoPlayer();
	MediaPlayer* pMusicPlayer = new MusicPlayer();

	MediaItem* pMp4 = new Mp4Item();
	MediaItem* pMp3 = new Mp3Item();

	pVideoPlayer->play(pMp4);
	pVideoPlayer->play(pMp3);
	pMusicPlayer->play(pMp4);
	pMusicPlayer->play(pMp3);
    return 0;
}

