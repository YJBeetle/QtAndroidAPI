#include "../content/Context.hpp"
#include "./AudioAttributes.hpp"
#include "./Ringtone.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	Ringtone::Ringtone(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::media::AudioAttributes Ringtone::getAudioAttributes()
	{
		return callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	jint Ringtone::getStreamType()
	{
		return callMethod<jint>(
			"getStreamType",
			"()I"
		);
	}
	jstring Ringtone::getTitle(android::content::Context arg0)
	{
		return callObjectMethod(
			"getTitle",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jfloat Ringtone::getVolume()
	{
		return callMethod<jfloat>(
			"getVolume",
			"()F"
		);
	}
	jboolean Ringtone::isHapticGeneratorEnabled()
	{
		return callMethod<jboolean>(
			"isHapticGeneratorEnabled",
			"()Z"
		);
	}
	jboolean Ringtone::isLooping()
	{
		return callMethod<jboolean>(
			"isLooping",
			"()Z"
		);
	}
	jboolean Ringtone::isPlaying()
	{
		return callMethod<jboolean>(
			"isPlaying",
			"()Z"
		);
	}
	void Ringtone::play()
	{
		callMethod<void>(
			"play",
			"()V"
		);
	}
	void Ringtone::setAudioAttributes(android::media::AudioAttributes arg0)
	{
		callMethod<void>(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)V",
			arg0.object()
		);
	}
	jboolean Ringtone::setHapticGeneratorEnabled(jboolean arg0)
	{
		return callMethod<jboolean>(
			"setHapticGeneratorEnabled",
			"(Z)Z",
			arg0
		);
	}
	void Ringtone::setLooping(jboolean arg0)
	{
		callMethod<void>(
			"setLooping",
			"(Z)V",
			arg0
		);
	}
	void Ringtone::setStreamType(jint arg0)
	{
		callMethod<void>(
			"setStreamType",
			"(I)V",
			arg0
		);
	}
	void Ringtone::setVolume(jfloat arg0)
	{
		callMethod<void>(
			"setVolume",
			"(F)V",
			arg0
		);
	}
	void Ringtone::stop()
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::media

