#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./VpnProfileState.def.hpp"

namespace android::net
{
	// Fields
	inline JObject VpnProfileState::CREATOR()
	{
		return getStaticObjectField(
			"android.net.VpnProfileState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint VpnProfileState::STATE_CONNECTED()
	{
		return getStaticField<jint>(
			"android.net.VpnProfileState",
			"STATE_CONNECTED"
		);
	}
	inline jint VpnProfileState::STATE_CONNECTING()
	{
		return getStaticField<jint>(
			"android.net.VpnProfileState",
			"STATE_CONNECTING"
		);
	}
	inline jint VpnProfileState::STATE_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.net.VpnProfileState",
			"STATE_DISCONNECTED"
		);
	}
	inline jint VpnProfileState::STATE_FAILED()
	{
		return getStaticField<jint>(
			"android.net.VpnProfileState",
			"STATE_FAILED"
		);
	}
	
	// Constructors
	inline VpnProfileState::VpnProfileState(jint arg0, JString arg1, jboolean arg2, jboolean arg3)
		: JObject(
			"android.net.VpnProfileState",
			"(ILjava/lang/String;ZZ)V",
			arg0,
			arg1.object<jstring>(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint VpnProfileState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean VpnProfileState::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString VpnProfileState::getSessionId() const
	{
		return callObjectMethod(
			"getSessionId",
			"()Ljava/lang/String;"
		);
	}
	inline jint VpnProfileState::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline jint VpnProfileState::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean VpnProfileState::isAlwaysOn() const
	{
		return callMethod<jboolean>(
			"isAlwaysOn",
			"()Z"
		);
	}
	inline jboolean VpnProfileState::isLockdownEnabled() const
	{
		return callMethod<jboolean>(
			"isLockdownEnabled",
			"()Z"
		);
	}
	inline JString VpnProfileState::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void VpnProfileState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
