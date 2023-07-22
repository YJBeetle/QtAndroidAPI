#pragma once

#include "./BluetoothCodecConfig.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./BluetoothCodecStatus.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline JObject BluetoothCodecStatus::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothCodecStatus",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString BluetoothCodecStatus::EXTRA_CODEC_STATUS()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothCodecStatus",
			"EXTRA_CODEC_STATUS",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BluetoothCodecStatus::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean BluetoothCodecStatus::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::bluetooth::BluetoothCodecConfig BluetoothCodecStatus::getCodecConfig() const
	{
		return callObjectMethod(
			"getCodecConfig",
			"()Landroid/bluetooth/BluetoothCodecConfig;"
		);
	}
	inline JObject BluetoothCodecStatus::getCodecsLocalCapabilities() const
	{
		return callObjectMethod(
			"getCodecsLocalCapabilities",
			"()Ljava/util/List;"
		);
	}
	inline JObject BluetoothCodecStatus::getCodecsSelectableCapabilities() const
	{
		return callObjectMethod(
			"getCodecsSelectableCapabilities",
			"()Ljava/util/List;"
		);
	}
	inline jint BluetoothCodecStatus::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean BluetoothCodecStatus::isCodecConfigSelectable(android::bluetooth::BluetoothCodecConfig arg0) const
	{
		return callMethod<jboolean>(
			"isCodecConfigSelectable",
			"(Landroid/bluetooth/BluetoothCodecConfig;)Z",
			arg0.object()
		);
	}
	inline JString BluetoothCodecStatus::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BluetoothCodecStatus::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
