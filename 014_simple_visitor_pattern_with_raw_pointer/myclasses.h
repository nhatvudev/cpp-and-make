#ifndef MY_CLASSES

#define MY_CLASSES

class MediaItem;
class VideoPlayer;
class MusicPlayer;

class MediaPlayer
{
	public:
		virtual void play(MediaItem* item) = 0;
};


class MediaItem
{
	public:
		virtual void isPlayedBy(VideoPlayer* player) = 0;
		virtual void isPlayedBy(MusicPlayer* player) = 0;
};




class VideoPlayer : public MediaPlayer
{
	public:
		virtual void play(MediaItem* pItem) override;
};

class MusicPlayer : public MediaPlayer
{
	public:
		virtual void play(MediaItem* pItem) override;
};




class Mp4Item : public MediaItem
{
	public:
		virtual void isPlayedBy(VideoPlayer* pPlayer) override;
		virtual void isPlayedBy(MusicPlayer* pPlayer) override;
};

class Mp3Item : public MediaItem
{
	public:
		virtual void isPlayedBy(VideoPlayer* pPlayer) override;
		virtual void isPlayedBy(MusicPlayer* pPlayer) override;
};

#endif //MY_CLASSES