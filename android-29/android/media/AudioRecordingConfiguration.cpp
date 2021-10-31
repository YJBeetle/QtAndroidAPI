#include "./AudioDeviceInfo.hpp"
#include "./AudioFormat.hpp"
#include "../os/Parcel.hpp"
#include "./AudioRecordingConfiguration.hpp"

namespace android::media
{
	// Fields
	QAndroidJniObject AudioRecordingConfiguration::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.AudioRecordingConfiguration",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	AudioRecordingConfiguration::AudioRecordingConfiguration(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	QAndroidJniObject AudioRecordingConfiguration::getAudioDevice()
	{
		return callObjectMethod(
			"getAudioDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	jint AudioRecordingConfiguration::getAudioSource()
	{
		return callMethod<jint>(
			"getAudioSource",
			"()I"
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
	QAndroidJniObject AudioRecordingConfiguration::getClientEffects()
	{
		return callObjectMethod(
			"getClientEffects",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AudioRecordingConfiguration::getClientFormat()
	{
		return callObjectMethod(
			"getClientFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	QAndroidJniObject AudioRecordingConfiguration::getEffects()
	{
		return callObjectMethod(
			"getEffects",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AudioRecordingConfiguration::getFormat()
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
	jboolean AudioRecordingConfiguration::isClientSilenced()
	{
		return callMethod<jboolean>(
			"isClientSilenced",
			"()Z"
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
