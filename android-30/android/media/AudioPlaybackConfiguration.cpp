#include "./AudioAttributes.hpp"
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
	
	// QJniObject forward
	AudioPlaybackConfiguration::AudioPlaybackConfiguration(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint AudioPlaybackConfiguration::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AudioPlaybackConfiguration::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::media::AudioAttributes AudioPlaybackConfiguration::getAudioAttributes()
	{
		return callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	jint AudioPlaybackConfiguration::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString AudioPlaybackConfiguration::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AudioPlaybackConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

