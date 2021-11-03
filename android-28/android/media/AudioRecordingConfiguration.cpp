#include "./AudioDeviceInfo.hpp"
#include "./AudioFormat.hpp"
#include "../os/Parcel.hpp"
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
	
	// QJniObject forward
	AudioRecordingConfiguration::AudioRecordingConfiguration(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint AudioRecordingConfiguration::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AudioRecordingConfiguration::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::media::AudioDeviceInfo AudioRecordingConfiguration::getAudioDevice()
	{
		return callObjectMethod(
			"getAudioDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	jint AudioRecordingConfiguration::getClientAudioSessionId()
	{
		return callMethod<jint>(
			"getClientAudioSessionId",
			"()I"
		);
	}
	jint AudioRecordingConfiguration::getClientAudioSource()
	{
		return callMethod<jint>(
			"getClientAudioSource",
			"()I"
		);
	}
	android::media::AudioFormat AudioRecordingConfiguration::getClientFormat()
	{
		return callObjectMethod(
			"getClientFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	android::media::AudioFormat AudioRecordingConfiguration::getFormat()
	{
		return callObjectMethod(
			"getFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	jint AudioRecordingConfiguration::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void AudioRecordingConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

