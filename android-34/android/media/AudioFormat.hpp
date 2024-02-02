#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AudioFormat.def.hpp"

namespace android::media
{
	// Fields
	inline jint AudioFormat::CHANNEL_CONFIGURATION_DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_CONFIGURATION_DEFAULT"
		);
	}
	inline jint AudioFormat::CHANNEL_CONFIGURATION_INVALID()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_CONFIGURATION_INVALID"
		);
	}
	inline jint AudioFormat::CHANNEL_CONFIGURATION_MONO()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_CONFIGURATION_MONO"
		);
	}
	inline jint AudioFormat::CHANNEL_CONFIGURATION_STEREO()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_CONFIGURATION_STEREO"
		);
	}
	inline jint AudioFormat::CHANNEL_INVALID()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_INVALID"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_BACK()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_BACK"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_BACK_PROCESSED()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_BACK_PROCESSED"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_DEFAULT"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_FRONT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_FRONT"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_FRONT_PROCESSED()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_FRONT_PROCESSED"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_LEFT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_LEFT"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_LEFT_PROCESSED()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_LEFT_PROCESSED"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_MONO()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_MONO"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_PRESSURE()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_PRESSURE"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_RIGHT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_RIGHT"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_RIGHT_PROCESSED()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_RIGHT_PROCESSED"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_STEREO()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_STEREO"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_VOICE_DNLINK()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_VOICE_DNLINK"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_VOICE_UPLINK()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_VOICE_UPLINK"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_X_AXIS()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_X_AXIS"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_Y_AXIS()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_Y_AXIS"
		);
	}
	inline jint AudioFormat::CHANNEL_IN_Z_AXIS()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_IN_Z_AXIS"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_5POINT1()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_5POINT1"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_5POINT1POINT2()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_5POINT1POINT2"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_5POINT1POINT4()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_5POINT1POINT4"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_6POINT1()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_6POINT1"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_7POINT1()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_7POINT1"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_7POINT1POINT2()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_7POINT1POINT2"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_7POINT1POINT4()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_7POINT1POINT4"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_7POINT1_SURROUND()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_7POINT1_SURROUND"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_9POINT1POINT4()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_9POINT1POINT4"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_9POINT1POINT6()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_9POINT1POINT6"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_BACK_CENTER()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_BACK_CENTER"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_BACK_LEFT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_BACK_LEFT"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_BACK_RIGHT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_BACK_RIGHT"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_BOTTOM_FRONT_CENTER()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_BOTTOM_FRONT_CENTER"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_BOTTOM_FRONT_LEFT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_BOTTOM_FRONT_LEFT"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_BOTTOM_FRONT_RIGHT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_BOTTOM_FRONT_RIGHT"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_DEFAULT"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_FRONT_CENTER()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_CENTER"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_FRONT_LEFT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_LEFT"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_FRONT_LEFT_OF_CENTER()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_LEFT_OF_CENTER"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_FRONT_RIGHT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_RIGHT"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_FRONT_RIGHT_OF_CENTER()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_RIGHT_OF_CENTER"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_FRONT_WIDE_LEFT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_WIDE_LEFT"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_FRONT_WIDE_RIGHT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_FRONT_WIDE_RIGHT"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_LOW_FREQUENCY()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_LOW_FREQUENCY"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_LOW_FREQUENCY_2()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_LOW_FREQUENCY_2"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_MONO()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_MONO"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_QUAD()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_QUAD"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_SIDE_LEFT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_SIDE_LEFT"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_SIDE_RIGHT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_SIDE_RIGHT"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_STEREO()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_STEREO"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_SURROUND()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_SURROUND"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_TOP_BACK_CENTER()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_TOP_BACK_CENTER"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_TOP_BACK_LEFT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_TOP_BACK_LEFT"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_TOP_BACK_RIGHT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_TOP_BACK_RIGHT"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_TOP_CENTER()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_TOP_CENTER"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_TOP_FRONT_CENTER()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_TOP_FRONT_CENTER"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_TOP_FRONT_LEFT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_TOP_FRONT_LEFT"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_TOP_FRONT_RIGHT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_TOP_FRONT_RIGHT"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_TOP_SIDE_LEFT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_TOP_SIDE_LEFT"
		);
	}
	inline jint AudioFormat::CHANNEL_OUT_TOP_SIDE_RIGHT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"CHANNEL_OUT_TOP_SIDE_RIGHT"
		);
	}
	inline JObject AudioFormat::CREATOR()
	{
		return getStaticObjectField(
			"android.media.AudioFormat",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AudioFormat::ENCODING_AAC_ELD()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AAC_ELD"
		);
	}
	inline jint AudioFormat::ENCODING_AAC_HE_V1()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AAC_HE_V1"
		);
	}
	inline jint AudioFormat::ENCODING_AAC_HE_V2()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AAC_HE_V2"
		);
	}
	inline jint AudioFormat::ENCODING_AAC_LC()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AAC_LC"
		);
	}
	inline jint AudioFormat::ENCODING_AAC_XHE()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AAC_XHE"
		);
	}
	inline jint AudioFormat::ENCODING_AC3()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AC3"
		);
	}
	inline jint AudioFormat::ENCODING_AC4()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_AC4"
		);
	}
	inline jint AudioFormat::ENCODING_DEFAULT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DEFAULT"
		);
	}
	inline jint AudioFormat::ENCODING_DOLBY_MAT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DOLBY_MAT"
		);
	}
	inline jint AudioFormat::ENCODING_DOLBY_TRUEHD()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DOLBY_TRUEHD"
		);
	}
	inline jint AudioFormat::ENCODING_DRA()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DRA"
		);
	}
	inline jint AudioFormat::ENCODING_DSD()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DSD"
		);
	}
	inline jint AudioFormat::ENCODING_DTS()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DTS"
		);
	}
	inline jint AudioFormat::ENCODING_DTS_HD()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DTS_HD"
		);
	}
	inline jint AudioFormat::ENCODING_DTS_HD_MA()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DTS_HD_MA"
		);
	}
	inline jint AudioFormat::ENCODING_DTS_UHD()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DTS_UHD"
		);
	}
	inline jint AudioFormat::ENCODING_DTS_UHD_P1()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DTS_UHD_P1"
		);
	}
	inline jint AudioFormat::ENCODING_DTS_UHD_P2()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_DTS_UHD_P2"
		);
	}
	inline jint AudioFormat::ENCODING_E_AC3()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_E_AC3"
		);
	}
	inline jint AudioFormat::ENCODING_E_AC3_JOC()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_E_AC3_JOC"
		);
	}
	inline jint AudioFormat::ENCODING_IEC61937()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_IEC61937"
		);
	}
	inline jint AudioFormat::ENCODING_INVALID()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_INVALID"
		);
	}
	inline jint AudioFormat::ENCODING_MP3()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_MP3"
		);
	}
	inline jint AudioFormat::ENCODING_MPEGH_BL_L3()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_MPEGH_BL_L3"
		);
	}
	inline jint AudioFormat::ENCODING_MPEGH_BL_L4()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_MPEGH_BL_L4"
		);
	}
	inline jint AudioFormat::ENCODING_MPEGH_LC_L3()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_MPEGH_LC_L3"
		);
	}
	inline jint AudioFormat::ENCODING_MPEGH_LC_L4()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_MPEGH_LC_L4"
		);
	}
	inline jint AudioFormat::ENCODING_OPUS()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_OPUS"
		);
	}
	inline jint AudioFormat::ENCODING_PCM_16BIT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_PCM_16BIT"
		);
	}
	inline jint AudioFormat::ENCODING_PCM_24BIT_PACKED()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_PCM_24BIT_PACKED"
		);
	}
	inline jint AudioFormat::ENCODING_PCM_32BIT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_PCM_32BIT"
		);
	}
	inline jint AudioFormat::ENCODING_PCM_8BIT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_PCM_8BIT"
		);
	}
	inline jint AudioFormat::ENCODING_PCM_FLOAT()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"ENCODING_PCM_FLOAT"
		);
	}
	inline jint AudioFormat::SAMPLE_RATE_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.media.AudioFormat",
			"SAMPLE_RATE_UNSPECIFIED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AudioFormat::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AudioFormat::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint AudioFormat::getChannelCount() const
	{
		return callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	inline jint AudioFormat::getChannelIndexMask() const
	{
		return callMethod<jint>(
			"getChannelIndexMask",
			"()I"
		);
	}
	inline jint AudioFormat::getChannelMask() const
	{
		return callMethod<jint>(
			"getChannelMask",
			"()I"
		);
	}
	inline jint AudioFormat::getEncoding() const
	{
		return callMethod<jint>(
			"getEncoding",
			"()I"
		);
	}
	inline jint AudioFormat::getFrameSizeInBytes() const
	{
		return callMethod<jint>(
			"getFrameSizeInBytes",
			"()I"
		);
	}
	inline jint AudioFormat::getSampleRate() const
	{
		return callMethod<jint>(
			"getSampleRate",
			"()I"
		);
	}
	inline jint AudioFormat::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AudioFormat::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AudioFormat::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
