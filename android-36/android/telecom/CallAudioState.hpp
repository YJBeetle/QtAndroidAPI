#pragma once

#include "../bluetooth/BluetoothDevice.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CallAudioState.def.hpp"

namespace android::telecom
{
	// Fields
	inline JObject CallAudioState::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.CallAudioState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint CallAudioState::ROUTE_BLUETOOTH()
	{
		return getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_BLUETOOTH"
		);
	}
	inline jint CallAudioState::ROUTE_EARPIECE()
	{
		return getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_EARPIECE"
		);
	}
	inline jint CallAudioState::ROUTE_SPEAKER()
	{
		return getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_SPEAKER"
		);
	}
	inline jint CallAudioState::ROUTE_STREAMING()
	{
		return getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_STREAMING"
		);
	}
	inline jint CallAudioState::ROUTE_WIRED_HEADSET()
	{
		return getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_WIRED_HEADSET"
		);
	}
	inline jint CallAudioState::ROUTE_WIRED_OR_EARPIECE()
	{
		return getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_WIRED_OR_EARPIECE"
		);
	}
	
	// Constructors
	inline CallAudioState::CallAudioState(jboolean arg0, jint arg1, jint arg2)
		: JObject(
			"android.telecom.CallAudioState",
			"(ZII)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline JString CallAudioState::audioRouteToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.CallAudioState",
			"audioRouteToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jint CallAudioState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CallAudioState::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::bluetooth::BluetoothDevice CallAudioState::getActiveBluetoothDevice() const
	{
		return callObjectMethod(
			"getActiveBluetoothDevice",
			"()Landroid/bluetooth/BluetoothDevice;"
		);
	}
	inline jint CallAudioState::getRoute() const
	{
		return callMethod<jint>(
			"getRoute",
			"()I"
		);
	}
	inline JObject CallAudioState::getSupportedBluetoothDevices() const
	{
		return callObjectMethod(
			"getSupportedBluetoothDevices",
			"()Ljava/util/Collection;"
		);
	}
	inline jint CallAudioState::getSupportedRouteMask() const
	{
		return callMethod<jint>(
			"getSupportedRouteMask",
			"()I"
		);
	}
	inline jboolean CallAudioState::isMuted() const
	{
		return callMethod<jboolean>(
			"isMuted",
			"()Z"
		);
	}
	inline JString CallAudioState::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CallAudioState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
