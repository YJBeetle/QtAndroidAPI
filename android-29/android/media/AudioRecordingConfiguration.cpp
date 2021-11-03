#include "./AudioDeviceInfo.hpp"
#include "./AudioFormat.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "./AudioRecordingConfiguration.hpp"

namespace android::media
{
	// Fields
	JObject AudioRecordingConfiguration::CREATOR()
	{
		return getStaticObjectField(
			"android.media.AudioRecordingConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	AudioRecordingConfiguration::AudioRecordingConfiguration(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint AudioRecordingConfiguration::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AudioRecordingConfiguration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::media::AudioDeviceInfo AudioRecordingConfiguration::getAudioDevice() const
	{
		return callObjectMethod(
			"getAudioDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	jint AudioRecordingConfiguration::getAudioSource() const
	{
		return callMethod<jint>(
			"getAudioSource",
			"()I"
		);
	}
	jint AudioRecordingConfiguration::getClientAudioSessionId() const
	{
		return callMethod<jint>(
			"getClientAudioSessionId",
			"()I"
		);
	}
	jint AudioRecordingConfiguration::getClientAudioSource() const
	{
		return callMethod<jint>(
			"getClientAudioSource",
			"()I"
		);
	}
	JObject AudioRecordingConfiguration::getClientEffects() const
	{
		return callObjectMethod(
			"getClientEffects",
			"()Ljava/util/List;"
		);
	}
	android::media::AudioFormat AudioRecordingConfiguration::getClientFormat() const
	{
		return callObjectMethod(
			"getClientFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	JObject AudioRecordingConfiguration::getEffects() const
	{
		return callObjectMethod(
			"getEffects",
			"()Ljava/util/List;"
		);
	}
	android::media::AudioFormat AudioRecordingConfiguration::getFormat() const
	{
		return callObjectMethod(
			"getFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	jint AudioRecordingConfiguration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AudioRecordingConfiguration::isClientSilenced() const
	{
		return callMethod<jboolean>(
			"isClientSilenced",
			"()Z"
		);
	}
	void AudioRecordingConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

