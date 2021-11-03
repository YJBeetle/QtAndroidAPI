#include "./AudioAttributes.hpp"
#include "./AudioDeviceInfo.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AudioPlaybackConfiguration.hpp"

namespace android::media
{
	// Fields
	JObject AudioPlaybackConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.media.AudioPlaybackConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	AudioPlaybackConfiguration::AudioPlaybackConfiguration(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint AudioPlaybackConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AudioPlaybackConfiguration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::media::AudioAttributes AudioPlaybackConfiguration::getAudioAttributes() const
	{
		return callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	android::media::AudioDeviceInfo AudioPlaybackConfiguration::getAudioDeviceInfo() const
	{
		return callObjectMethod(
			"getAudioDeviceInfo",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	jint AudioPlaybackConfiguration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString AudioPlaybackConfiguration::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AudioPlaybackConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

