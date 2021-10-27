#include "../content/Context.hpp"
#include "./AudioAttributes.hpp"
#include "./Ringtone.hpp"

namespace android::media
{
	// Fields
	
	Ringtone::Ringtone(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Ringtone::getAudioAttributes()
	{
		return __thiz.callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	jint Ringtone::getStreamType()
	{
		return __thiz.callMethod<jint>(
			"getStreamType",
			"()I"
		);
	}
	jstring Ringtone::getTitle(android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"getTitle",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jfloat Ringtone::getVolume()
	{
		return __thiz.callMethod<jfloat>(
			"getVolume",
			"()F"
		);
	}
	jboolean Ringtone::isLooping()
	{
		return __thiz.callMethod<jboolean>(
			"isLooping",
			"()Z"
		);
	}
	jboolean Ringtone::isPlaying()
	{
		return __thiz.callMethod<jboolean>(
			"isPlaying",
			"()Z"
		);
	}
	void Ringtone::play()
	{
		__thiz.callMethod<void>(
			"play",
			"()V"
		);
	}
	void Ringtone::setAudioAttributes(android::media::AudioAttributes arg0)
	{
		__thiz.callMethod<void>(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)V",
			arg0.__jniObject().object()
		);
	}
	void Ringtone::setLooping(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setLooping",
			"(Z)V",
			arg0
		);
	}
	void Ringtone::setStreamType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStreamType",
			"(I)V",
			arg0
		);
	}
	void Ringtone::setVolume(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setVolume",
			"(F)V",
			arg0
		);
	}
	void Ringtone::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::media

