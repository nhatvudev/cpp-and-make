#include "myclasses.h"

#include <iostream>

using std::cout;

void VideoPlayer::play(MediaItem* pItem)
{
	pItem->isPlayedBy(this);
}

void MusicPlayer::play(MediaItem* pItem)
{
	pItem->isPlayedBy(this);
}




void Mp4Item::isPlayedBy(VideoPlayer* pPlayer)
{
	cout << "Video Player played MP4 file\n";
}

void Mp4Item::isPlayedBy(MusicPlayer* pPlayer)
{
	cout << "Music Player cannot play MP4 file\n";
}




void Mp3Item::isPlayedBy(VideoPlayer* pPlayer)
{
	cout << "Video Player played MP3 file without image\n";
}

void Mp3Item::isPlayedBy(MusicPlayer* pPlayer)
{
	cout << "Music Player played MP3 file\n";
}