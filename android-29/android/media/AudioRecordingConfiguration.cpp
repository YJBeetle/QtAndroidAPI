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
	
	AudioRecordingConfiguration::AudioRecordingConfiguration(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint AudioRecordingConfiguration::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AudioRecordingConfiguration::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject AudioRecordingConfiguration::getAudioDevice()
	{
		return __thiz.callObjectMethod(
			"getAudioDevice",
			"()Landroid/media/AudioDeviceInfo;"
		);
	}
	jint AudioRecordingConfiguration::getAudioSource()
	{
		return __thiz.callMethod<jint>(
			"getAudioSource",
			"()I"
		);
	}
	jint AudioRecordingConfiguration::getClientAudioSessionId()
	{
		return __thiz.callMethod<jint>(
			"getClientAudioSessionId",
			"()I"
		);
	}
	jint AudioRecordingConfiguration::getClientAudioSource()
	{
		return __thiz.callMethod<jint>(
			"getClientAudioSource",
			"()I"
		);
	}
	QAndroidJniObject AudioRecordingConfiguration::getClientEffects()
	{
		return __thiz.callObjectMethod(
			"getClientEffects",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AudioRecordingConfiguration::getClientFormat()
	{
		return __thiz.callObjectMethod(
			"getClientFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	QAndroidJniObject AudioRecordingConfiguration::getEffects()
	{
		return __thiz.callObjectMethod(
			"getEffects",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject AudioRecordingConfiguration::getFormat()
	{
		return __thiz.callObjectMethod(
			"getFormat",
			"()Landroid/media/AudioFormat;"
		);
	}
	jint AudioRecordingConfiguration::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AudioRecordingConfiguration::isClientSilenced()
	{
		return __thiz.callMethod<jboolean>(
			"isClientSilenced",
			"()Z"
		);
	}
	void AudioRecordingConfiguration::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::media

