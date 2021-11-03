#include "../content/Context.hpp"
#include "./AudioAttributes.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./AsyncPlayer.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	AsyncPlayer::AsyncPlayer(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AsyncPlayer::AsyncPlayer(JString arg0)
		: JObject(
			"android.media.AsyncPlayer",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	void AsyncPlayer::play(android::content::Context arg0, android::net::Uri arg1, jboolean arg2, android::media::AudioAttributes arg3)
	{
		callMethod<void>(
			"play",
			"(Landroid/content/Context;Landroid/net/Uri;ZLandroid/media/AudioAttributes;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	void AsyncPlayer::play(android::content::Context arg0, android::net::Uri arg1, jboolean arg2, jint arg3)
	{
		callMethod<void>(
			"play",
			"(Landroid/content/Context;Landroid/net/Uri;ZI)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	void AsyncPlayer::stop()
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::media

