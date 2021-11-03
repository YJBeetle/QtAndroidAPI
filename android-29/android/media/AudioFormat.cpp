#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AudioFormat.hpp"

namespace android::media
{
	// Fields
	jint AudioFormat::CHANNEL_CONFIGURATION_DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_CONFIGURATION_DEFAULT"
		);
	}
	jint AudioFormat::CHANNEL_CONFIGURATION_INVALID()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_CONFIGURATION_INVALID"
		);
	}
	jint AudioFormat::CHANNEL_CONFIGURATION_MONO()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_CONFIGURATION_MONO"
		);
	}
	jint AudioFormat::CHANNEL_CONFIGURATION_STEREO()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_CONFIGURATION_STEREO"
		);
	}
	jint AudioFormat::CHANNEL_INVALID()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_INVALID"
		);
	}
	jint AudioFormat::CHANNEL_IN_BACK()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_BACK"
		);
	}
	jint AudioFormat::CHANNEL_IN_BACK_PROCESSED()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_BACK_PROCESSED"
		);
	}
	jint AudioFormat::CHANNEL_IN_DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_DEFAULT"
		);
	}
	jint AudioFormat::CHANNEL_IN_FRONT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_FRONT"
		);
	}
	jint AudioFormat::CHANNEL_IN_FRONT_PROCESSED()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_FRONT_PROCESSED"
		);
	}
	jint AudioFormat::CHANNEL_IN_LEFT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_LEFT"
		);
	}
	jint AudioFormat::CHANNEL_IN_LEFT_PROCESSED()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_LEFT_PROCESSED"
		);
	}
	jint AudioFormat::CHANNEL_IN_MONO()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_MONO"
		);
	}
	jint AudioFormat::CHANNEL_IN_PRESSURE()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_PRESSURE"
		);
	}
	jint AudioFormat::CHANNEL_IN_RIGHT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_RIGHT"
		);
	}
	jint AudioFormat::CHANNEL_IN_RIGHT_PROCESSED()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_RIGHT_PROCESSED"
		);
	}
	jint AudioFormat::CHANNEL_IN_STEREO()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_STEREO"
		);
	}
	jint AudioFormat::CHANNEL_IN_VOICE_DNLINK()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_VOICE_DNLINK"
		);
	}
	jint AudioFormat::CHANNEL_IN_VOICE_UPLINK()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_VOICE_UPLINK"
		);
	}
	jint AudioFormat::CHANNEL_IN_X_AXIS()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_X_AXIS"
		);
	}
	jint AudioFormat::CHANNEL_IN_Y_AXIS()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_Y_AXIS"
		);
	}
	jint AudioFormat::CHANNEL_IN_Z_AXIS()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_Z_AXIS"
		);
	}
	jint AudioFormat::CHANNEL_OUT_5POINT1()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_5POINT1"
		);
	}
	jint AudioFormat::CHANNEL_OUT_7POINT1()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_7POINT1"
		);
	}
	jint AudioFormat::CHANNEL_OUT_7POINT1_SURROUND()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_7POINT1_SURROUND"
		);
	}
	jint AudioFormat::CHANNEL_OUT_BACK_CENTER()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_BACK_CENTER"
		);
	}
	jint AudioFormat::CHANNEL_OUT_BACK_LEFT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_BACK_LEFT"
		);
	}
	jint AudioFormat::CHANNEL_OUT_BACK_RIGHT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_BACK_RIGHT"
		);
	}
	jint AudioFormat::CHANNEL_OUT_DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_DEFAULT"
		);
	}
	jint AudioFormat::CHANNEL_OUT_FRONT_CENTER()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_CENTER"
		);
	}
	jint AudioFormat::CHANNEL_OUT_FRONT_LEFT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_LEFT"
		);
	}
	jint AudioFormat::CHANNEL_OUT_FRONT_LEFT_OF_CENTER()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_LEFT_OF_CENTER"
		);
	}
	jint AudioFormat::CHANNEL_OUT_FRONT_RIGHT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_RIGHT"
		);
	}
	jint AudioFormat::CHANNEL_OUT_FRONT_RIGHT_OF_CENTER()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_RIGHT_OF_CENTER"
		);
	}
	jint AudioFormat::CHANNEL_OUT_LOW_FREQUENCY()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_LOW_FREQUENCY"
		);
	}
	jint AudioFormat::CHANNEL_OUT_MONO()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_MONO"
		);
	}
	jint AudioFormat::CHANNEL_OUT_QUAD()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_QUAD"
		);
	}
	jint AudioFormat::CHANNEL_OUT_SIDE_LEFT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_SIDE_LEFT"
		);
	}
	jint AudioFormat::CHANNEL_OUT_SIDE_RIGHT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_SIDE_RIGHT"
		);
	}
	jint AudioFormat::CHANNEL_OUT_STEREO()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_STEREO"
		);
	}
	jint AudioFormat::CHANNEL_OUT_SURROUND()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_SURROUND"
		);
	}
	JObject AudioFormat::CREATOR()
	{
		return getStaticObjectField(
			"android.media.AudioFormat",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint AudioFormat::ENCODING_AAC_ELD()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AAC_ELD"
		);
	}
	jint AudioFormat::ENCODING_AAC_HE_V1()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AAC_HE_V1"
		);
	}
	jint AudioFormat::ENCODING_AAC_HE_V2()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AAC_HE_V2"
		);
	}
	jint AudioFormat::ENCODING_AAC_LC()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AAC_LC"
		);
	}
	jint AudioFormat::ENCODING_AAC_XHE()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AAC_XHE"
		);
	}
	jint AudioFormat::ENCODING_AC3()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AC3"
		);
	}
	jint AudioFormat::ENCODING_AC4()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AC4"
		);
	}
	jint AudioFormat::ENCODING_DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DEFAULT"
		);
	}
	jint AudioFormat::ENCODING_DOLBY_MAT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DOLBY_MAT"
		);
	}
	jint AudioFormat::ENCODING_DOLBY_TRUEHD()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DOLBY_TRUEHD"
		);
	}
	jint AudioFormat::ENCODING_DTS()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DTS"
		);
	}
	jint AudioFormat::ENCODING_DTS_HD()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DTS_HD"
		);
	}
	jint AudioFormat::ENCODING_E_AC3()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_E_AC3"
		);
	}
	jint AudioFormat::ENCODING_E_AC3_JOC()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_E_AC3_JOC"
		);
	}
	jint AudioFormat::ENCODING_IEC61937()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_IEC61937"
		);
	}
	jint AudioFormat::ENCODING_INVALID()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_INVALID"
		);
	}
	jint AudioFormat::ENCODING_MP3()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_MP3"
		);
	}
	jint AudioFormat::ENCODING_PCM_16BIT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_PCM_16BIT"
		);
	}
	jint AudioFormat::ENCODING_PCM_8BIT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_PCM_8BIT"
		);
	}
	jint AudioFormat::ENCODING_PCM_FLOAT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_PCM_FLOAT"
		);
	}
	jint AudioFormat::SAMPLE_RATE_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"SAMPLE_RATE_UNSPECIFIED"
		);
	}
	
	// QJniObject forward
	AudioFormat::AudioFormat(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint AudioFormat::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AudioFormat::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint AudioFormat::getChannelCount()
	{
		return callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	jint AudioFormat::getChannelIndexMask()
	{
		return callMethod<jint>(
			"getChannelIndexMask",
			"()I"
		);
	}
	jint AudioFormat::getChannelMask()
	{
		return callMethod<jint>(
			"getChannelMask",
			"()I"
		);
	}
	jint AudioFormat::getEncoding()
	{
		return callMethod<jint>(
			"getEncoding",
			"()I"
		);
	}
	jint AudioFormat::getFrameSizeInBytes()
	{
		return callMethod<jint>(
			"getFrameSizeInBytes",
			"()I"
		);
	}
	jint AudioFormat::getSampleRate()
	{
		return callMethod<jint>(
			"getSampleRate",
			"()I"
		);
	}
	jint AudioFormat::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString AudioFormat::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AudioFormat::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

