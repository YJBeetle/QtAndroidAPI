#pragma once

#include "./BluetoothLeAudioCodecConfig.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./BluetoothLeAudioCodecStatus.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline JObject BluetoothLeAudioCodecStatus::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothLeAudioCodecStatus",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString BluetoothLeAudioCodecStatus::EXTRA_LE_AUDIO_CODEC_STATUS()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothLeAudioCodecStatus",
			"EXTRA_LE_AUDIO_CODEC_STATUS",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline BluetoothLeAudioCodecStatus::BluetoothLeAudioCodecStatus(android::bluetooth::BluetoothLeAudioCodecConfig arg0, android::bluetooth::BluetoothLeAudioCodecConfig arg1, JObject arg2, JObject arg3, JObject arg4, JObject arg5)
		: JObject(
			"android.bluetooth.BluetoothLeAudioCodecStatus",
			"(Landroid/bluetooth/BluetoothLeAudioCodecConfig;Landroid/bluetooth/BluetoothLeAudioCodecConfig;Ljava/util/List;Ljava/util/List;Ljava/util/List;Ljava/util/List;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object()
		) {}
	
	// Methods
	inline jint BluetoothLeAudioCodecStatus::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean BluetoothLeAudioCodecStatus::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::bluetooth::BluetoothLeAudioCodecConfig BluetoothLeAudioCodecStatus::getInputCodecConfig() const
	{
		return callObjectMethod(
			"getInputCodecConfig",
			"()Landroid/bluetooth/BluetoothLeAudioCodecConfig;"
		);
	}
	inline JObject BluetoothLeAudioCodecStatus::getInputCodecLocalCapabilities() const
	{
		return callObjectMethod(
			"getInputCodecLocalCapabilities",
			"()Ljava/util/List;"
		);
	}
	inline JObject BluetoothLeAudioCodecStatus::getInputCodecSelectableCapabilities() const
	{
		return callObjectMethod(
			"getInputCodecSelectableCapabilities",
			"()Ljava/util/List;"
		);
	}
	inline android::bluetooth::BluetoothLeAudioCodecConfig BluetoothLeAudioCodecStatus::getOutputCodecConfig() const
	{
		return callObjectMethod(
			"getOutputCodecConfig",
			"()Landroid/bluetooth/BluetoothLeAudioCodecConfig;"
		);
	}
	inline JObject BluetoothLeAudioCodecStatus::getOutputCodecLocalCapabilities() const
	{
		return callObjectMethod(
			"getOutputCodecLocalCapabilities",
			"()Ljava/util/List;"
		);
	}
	inline JObject BluetoothLeAudioCodecStatus::getOutputCodecSelectableCapabilities() const
	{
		return callObjectMethod(
			"getOutputCodecSelectableCapabilities",
			"()Ljava/util/List;"
		);
	}
	inline jint BluetoothLeAudioCodecStatus::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean BluetoothLeAudioCodecStatus::isInputCodecConfigSelectable(android::bluetooth::BluetoothLeAudioCodecConfig arg0) const
	{
		return callMethod<jboolean>(
			"isInputCodecConfigSelectable",
			"(Landroid/bluetooth/BluetoothLeAudioCodecConfig;)Z",
			arg0.object()
		);
	}
	inline jboolean BluetoothLeAudioCodecStatus::isOutputCodecConfigSelectable(android::bluetooth::BluetoothLeAudioCodecConfig arg0) const
	{
		return callMethod<jboolean>(
			"isOutputCodecConfigSelectable",
			"(Landroid/bluetooth/BluetoothLeAudioCodecConfig;)Z",
			arg0.object()
		);
	}
	inline JString BluetoothLeAudioCodecStatus::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BluetoothLeAudioCodecStatus::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
