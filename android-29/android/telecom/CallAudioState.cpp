#include "../bluetooth/BluetoothDevice.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CallAudioState.hpp"

namespace android::telecom
{
	// Fields
	JObject CallAudioState::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.CallAudioState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint CallAudioState::ROUTE_BLUETOOTH()
	{
		return getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_BLUETOOTH"
		);
	}
	jint CallAudioState::ROUTE_EARPIECE()
	{
		return getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_EARPIECE"
		);
	}
	jint CallAudioState::ROUTE_SPEAKER()
	{
		return getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_SPEAKER"
		);
	}
	jint CallAudioState::ROUTE_WIRED_HEADSET()
	{
		return getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_WIRED_HEADSET"
		);
	}
	jint CallAudioState::ROUTE_WIRED_OR_EARPIECE()
	{
		return getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_WIRED_OR_EARPIECE"
		);
	}
	
	// QAndroidJniObject forward
	CallAudioState::CallAudioState(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	CallAudioState::CallAudioState(jboolean arg0, jint arg1, jint arg2)
		: JObject(
			"android.telecom.CallAudioState",
			"(ZII)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	JString CallAudioState::audioRouteToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.telecom.CallAudioState",
			"audioRouteToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint CallAudioState::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean CallAudioState::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::bluetooth::BluetoothDevice CallAudioState::getActiveBluetoothDevice()
	{
		return callObjectMethod(
			"getActiveBluetoothDevice",
			"()Landroid/bluetooth/BluetoothDevice;"
		);
	}
	jint CallAudioState::getRoute()
	{
		return callMethod<jint>(
			"getRoute",
			"()I"
		);
	}
	JObject CallAudioState::getSupportedBluetoothDevices()
	{
		return callObjectMethod(
			"getSupportedBluetoothDevices",
			"()Ljava/util/Collection;"
		);
	}
	jint CallAudioState::getSupportedRouteMask()
	{
		return callMethod<jint>(
			"getSupportedRouteMask",
			"()I"
		);
	}
	jboolean CallAudioState::isMuted()
	{
		return callMethod<jboolean>(
			"isMuted",
			"()Z"
		);
	}
	JString CallAudioState::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CallAudioState::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

