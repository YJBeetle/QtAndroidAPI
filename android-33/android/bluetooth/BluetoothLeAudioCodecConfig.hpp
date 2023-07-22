#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./BluetoothLeAudioCodecConfig.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline jint BluetoothLeAudioCodecConfig::BITS_PER_SAMPLE_16()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"BITS_PER_SAMPLE_16"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::BITS_PER_SAMPLE_24()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"BITS_PER_SAMPLE_24"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::BITS_PER_SAMPLE_32()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"BITS_PER_SAMPLE_32"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::BITS_PER_SAMPLE_NONE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"BITS_PER_SAMPLE_NONE"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::CHANNEL_COUNT_1()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"CHANNEL_COUNT_1"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::CHANNEL_COUNT_2()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"CHANNEL_COUNT_2"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::CHANNEL_COUNT_NONE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"CHANNEL_COUNT_NONE"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::CODEC_PRIORITY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"CODEC_PRIORITY_DEFAULT"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::CODEC_PRIORITY_DISABLED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"CODEC_PRIORITY_DISABLED"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::CODEC_PRIORITY_HIGHEST()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"CODEC_PRIORITY_HIGHEST"
		);
	}
	inline JObject BluetoothLeAudioCodecConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::FRAME_DURATION_10000()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"FRAME_DURATION_10000"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::FRAME_DURATION_7500()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"FRAME_DURATION_7500"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::FRAME_DURATION_NONE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"FRAME_DURATION_NONE"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::SAMPLE_RATE_16000()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"SAMPLE_RATE_16000"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::SAMPLE_RATE_24000()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"SAMPLE_RATE_24000"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::SAMPLE_RATE_32000()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"SAMPLE_RATE_32000"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::SAMPLE_RATE_44100()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"SAMPLE_RATE_44100"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::SAMPLE_RATE_48000()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"SAMPLE_RATE_48000"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::SAMPLE_RATE_8000()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"SAMPLE_RATE_8000"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::SAMPLE_RATE_NONE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"SAMPLE_RATE_NONE"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::SOURCE_CODEC_TYPE_INVALID()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"SOURCE_CODEC_TYPE_INVALID"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::SOURCE_CODEC_TYPE_LC3()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothLeAudioCodecConfig",
			"SOURCE_CODEC_TYPE_LC3"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BluetoothLeAudioCodecConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean BluetoothLeAudioCodecConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint BluetoothLeAudioCodecConfig::getBitsPerSample() const
	{
		return callMethod<jint>(
			"getBitsPerSample",
			"()I"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::getChannelCount() const
	{
		return callMethod<jint>(
			"getChannelCount",
			"()I"
		);
	}
	inline JString BluetoothLeAudioCodecConfig::getCodecName() const
	{
		return callObjectMethod(
			"getCodecName",
			"()Ljava/lang/String;"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::getCodecPriority() const
	{
		return callMethod<jint>(
			"getCodecPriority",
			"()I"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::getCodecType() const
	{
		return callMethod<jint>(
			"getCodecType",
			"()I"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::getFrameDuration() const
	{
		return callMethod<jint>(
			"getFrameDuration",
			"()I"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::getMaxOctetsPerFrame() const
	{
		return callMethod<jint>(
			"getMaxOctetsPerFrame",
			"()I"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::getMinOctetsPerFrame() const
	{
		return callMethod<jint>(
			"getMinOctetsPerFrame",
			"()I"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::getOctetsPerFrame() const
	{
		return callMethod<jint>(
			"getOctetsPerFrame",
			"()I"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::getSampleRate() const
	{
		return callMethod<jint>(
			"getSampleRate",
			"()I"
		);
	}
	inline jint BluetoothLeAudioCodecConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString BluetoothLeAudioCodecConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BluetoothLeAudioCodecConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
