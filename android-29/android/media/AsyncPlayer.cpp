#include "../content/Context.hpp"
#include "./AudioAttributes.hpp"
#include "../net/Uri.hpp"
#include "./AsyncPlayer.hpp"

namespace android::media
{
	// Fields
	
	AsyncPlayer::AsyncPlayer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AsyncPlayer::AsyncPlayer(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.AsyncPlayer",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
	void AsyncPlayer::play(android::content::Context arg0, android::net::Uri arg1, jboolean arg2, android::media::AudioAttributes arg3)
	{
		__thiz.callMethod<void>(
			"play",
			"(Landroid/content/Context;Landroid/net/Uri;ZLandroid/media/AudioAttributes;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	void AsyncPlayer::play(android::content::Context arg0, android::net::Uri arg1, jboolean arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"play",
			"(Landroid/content/Context;Landroid/net/Uri;ZI)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void AsyncPlayer::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::media

