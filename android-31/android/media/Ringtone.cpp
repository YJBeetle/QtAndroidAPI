#include "../content/Context.hpp"
#include "./AudioAttributes.hpp"
#include "../../JString.hpp"
#include "./Ringtone.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	Ringtone::Ringtone(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::media::AudioAttributes Ringtone::getAudioAttributes() const
	{
		return callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	jint Ringtone::getStreamType() const
	{
		return callMethod<jint>(
			"getStreamType",
			"()I"
		);
	}
	JString Ringtone::getTitle(android::content::Context arg0) const
	{
		return callObjectMethod(
			"getTitle",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jfloat Ringtone::getVolume() const
	{
		return callMethod<jfloat>(
			"getVolume",
			"()F"
		);
	}
	jboolean Ringtone::isHapticGeneratorEnabled() const
	{
		return callMethod<jboolean>(
			"isHapticGeneratorEnabled",
			"()Z"
		);
	}
	jboolean Ringtone::isLooping() const
	{
		return callMethod<jboolean>(
			"isLooping",
			"()Z"
		);
	}
	jboolean Ringtone::isPlaying() const
	{
		return callMethod<jboolean>(
			"isPlaying",
			"()Z"
		);
	}
	void Ringtone::play() const
	{
		callMethod<void>(
			"play",
			"()V"
		);
	}
	void Ringtone::setAudioAttributes(android::media::AudioAttributes arg0) const
	{
		callMethod<void>(
			"setAudioAttributes",
			"(Landroid/media/AudioAttributes;)V",
			arg0.object()
		);
	}
	jboolean Ringtone::setHapticGeneratorEnabled(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setHapticGeneratorEnabled",
			"(Z)Z",
			arg0
		);
	}
	void Ringtone::setLooping(jboolean arg0) const
	{
		callMethod<void>(
			"setLooping",
			"(Z)V",
			arg0
		);
	}
	void Ringtone::setStreamType(jint arg0) const
	{
		callMethod<void>(
			"setStreamType",
			"(I)V",
			arg0
		);
	}
	void Ringtone::setVolume(jfloat arg0) const
	{
		callMethod<void>(
			"setVolume",
			"(F)V",
			arg0
		);
	}
	void Ringtone::stop() const
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::media

