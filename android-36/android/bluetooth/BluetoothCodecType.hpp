#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./BluetoothCodecType.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline jlong BluetoothCodecType::CODEC_ID_AAC()
	{
		return getStaticField<jlong>(
			"android.bluetooth.BluetoothCodecType",
			"CODEC_ID_AAC"
		);
	}
	inline jlong BluetoothCodecType::CODEC_ID_APTX()
	{
		return getStaticField<jlong>(
			"android.bluetooth.BluetoothCodecType",
			"CODEC_ID_APTX"
		);
	}
	inline jlong BluetoothCodecType::CODEC_ID_APTX_HD()
	{
		return getStaticField<jlong>(
			"android.bluetooth.BluetoothCodecType",
			"CODEC_ID_APTX_HD"
		);
	}
	inline jlong BluetoothCodecType::CODEC_ID_LDAC()
	{
		return getStaticField<jlong>(
			"android.bluetooth.BluetoothCodecType",
			"CODEC_ID_LDAC"
		);
	}
	inline jlong BluetoothCodecType::CODEC_ID_OPUS()
	{
		return getStaticField<jlong>(
			"android.bluetooth.BluetoothCodecType",
			"CODEC_ID_OPUS"
		);
	}
	inline jlong BluetoothCodecType::CODEC_ID_SBC()
	{
		return getStaticField<jlong>(
			"android.bluetooth.BluetoothCodecType",
			"CODEC_ID_SBC"
		);
	}
	inline JObject BluetoothCodecType::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothCodecType",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BluetoothCodecType::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean BluetoothCodecType::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong BluetoothCodecType::getCodecId() const
	{
		return callMethod<jlong>(
			"getCodecId",
			"()J"
		);
	}
	inline JString BluetoothCodecType::getCodecName() const
	{
		return callObjectMethod(
			"getCodecName",
			"()Ljava/lang/String;"
		);
	}
	inline jint BluetoothCodecType::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean BluetoothCodecType::isMandatoryCodec() const
	{
		return callMethod<jboolean>(
			"isMandatoryCodec",
			"()Z"
		);
	}
	inline JString BluetoothCodecType::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BluetoothCodecType::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
