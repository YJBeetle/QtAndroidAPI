#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./BluetoothCodecConfig.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline jint BluetoothCodecConfig::BITS_PER_SAMPLE_16()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"BITS_PER_SAMPLE_16"
		);
	}
	inline jint BluetoothCodecConfig::BITS_PER_SAMPLE_24()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"BITS_PER_SAMPLE_24"
		);
	}
	inline jint BluetoothCodecConfig::BITS_PER_SAMPLE_32()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"BITS_PER_SAMPLE_32"
		);
	}
	inline jint BluetoothCodecConfig::BITS_PER_SAMPLE_NONE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"BITS_PER_SAMPLE_NONE"
		);
	}
	inline jint BluetoothCodecConfig::CHANNEL_MODE_MONO()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"CHANNEL_MODE_MONO"
		);
	}
	inline jint BluetoothCodecConfig::CHANNEL_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"CHANNEL_MODE_NONE"
		);
	}
	inline jint BluetoothCodecConfig::CHANNEL_MODE_STEREO()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"CHANNEL_MODE_STEREO"
		);
	}
	inline jint BluetoothCodecConfig::CODEC_PRIORITY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"CODEC_PRIORITY_DEFAULT"
		);
	}
	inline jint BluetoothCodecConfig::CODEC_PRIORITY_DISABLED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"CODEC_PRIORITY_DISABLED"
		);
	}
	inline jint BluetoothCodecConfig::CODEC_PRIORITY_HIGHEST()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"CODEC_PRIORITY_HIGHEST"
		);
	}
	inline JObject BluetoothCodecConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothCodecConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint BluetoothCodecConfig::SAMPLE_RATE_176400()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"SAMPLE_RATE_176400"
		);
	}
	inline jint BluetoothCodecConfig::SAMPLE_RATE_192000()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"SAMPLE_RATE_192000"
		);
	}
	inline jint BluetoothCodecConfig::SAMPLE_RATE_44100()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"SAMPLE_RATE_44100"
		);
	}
	inline jint BluetoothCodecConfig::SAMPLE_RATE_48000()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"SAMPLE_RATE_48000"
		);
	}
	inline jint BluetoothCodecConfig::SAMPLE_RATE_88200()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"SAMPLE_RATE_88200"
		);
	}
	inline jint BluetoothCodecConfig::SAMPLE_RATE_96000()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"SAMPLE_RATE_96000"
		);
	}
	inline jint BluetoothCodecConfig::SAMPLE_RATE_NONE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"SAMPLE_RATE_NONE"
		);
	}
	inline jint BluetoothCodecConfig::SOURCE_CODEC_TYPE_AAC()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"SOURCE_CODEC_TYPE_AAC"
		);
	}
	inline jint BluetoothCodecConfig::SOURCE_CODEC_TYPE_APTX()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"SOURCE_CODEC_TYPE_APTX"
		);
	}
	inline jint BluetoothCodecConfig::SOURCE_CODEC_TYPE_APTX_HD()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"SOURCE_CODEC_TYPE_APTX_HD"
		);
	}
	inline jint BluetoothCodecConfig::SOURCE_CODEC_TYPE_INVALID()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"SOURCE_CODEC_TYPE_INVALID"
		);
	}
	inline jint BluetoothCodecConfig::SOURCE_CODEC_TYPE_LC3()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"SOURCE_CODEC_TYPE_LC3"
		);
	}
	inline jint BluetoothCodecConfig::SOURCE_CODEC_TYPE_LDAC()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"SOURCE_CODEC_TYPE_LDAC"
		);
	}
	inline jint BluetoothCodecConfig::SOURCE_CODEC_TYPE_OPUS()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"SOURCE_CODEC_TYPE_OPUS"
		);
	}
	inline jint BluetoothCodecConfig::SOURCE_CODEC_TYPE_SBC()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothCodecConfig",
			"SOURCE_CODEC_TYPE_SBC"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BluetoothCodecConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean BluetoothCodecConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint BluetoothCodecConfig::getBitsPerSample() const
	{
		return callMethod<jint>(
			"getBitsPerSample",
			"()I"
		);
	}
	inline jint BluetoothCodecConfig::getChannelMode() const
	{
		return callMethod<jint>(
			"getChannelMode",
			"()I"
		);
	}
	inline jint BluetoothCodecConfig::getCodecPriority() const
	{
		return callMethod<jint>(
			"getCodecPriority",
			"()I"
		);
	}
	inline jlong BluetoothCodecConfig::getCodecSpecific1() const
	{
		return callMethod<jlong>(
			"getCodecSpecific1",
			"()J"
		);
	}
	inline jlong BluetoothCodecConfig::getCodecSpecific2() const
	{
		return callMethod<jlong>(
			"getCodecSpecific2",
			"()J"
		);
	}
	inline jlong BluetoothCodecConfig::getCodecSpecific3() const
	{
		return callMethod<jlong>(
			"getCodecSpecific3",
			"()J"
		);
	}
	inline jlong BluetoothCodecConfig::getCodecSpecific4() const
	{
		return callMethod<jlong>(
			"getCodecSpecific4",
			"()J"
		);
	}
	inline jint BluetoothCodecConfig::getCodecType() const
	{
		return callMethod<jint>(
			"getCodecType",
			"()I"
		);
	}
	inline jint BluetoothCodecConfig::getSampleRate() const
	{
		return callMethod<jint>(
			"getSampleRate",
			"()I"
		);
	}
	inline jint BluetoothCodecConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean BluetoothCodecConfig::isMandatoryCodec() const
	{
		return callMethod<jboolean>(
			"isMandatoryCodec",
			"()Z"
		);
	}
	inline JString BluetoothCodecConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BluetoothCodecConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
