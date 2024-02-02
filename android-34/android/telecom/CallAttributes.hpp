#pragma once

#include "../net/Uri.def.hpp"
#include "../os/Parcel.def.hpp"
#include "./PhoneAccountHandle.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CallAttributes.def.hpp"

namespace android::telecom
{
	// Fields
	inline jint CallAttributes::AUDIO_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.CallAttributes",
			"AUDIO_CALL"
		);
	}
	inline JObject CallAttributes::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.CallAttributes",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint CallAttributes::DIRECTION_INCOMING()
	{
		return getStaticField<jint>(
			"android.telecom.CallAttributes",
			"DIRECTION_INCOMING"
		);
	}
	inline jint CallAttributes::DIRECTION_OUTGOING()
	{
		return getStaticField<jint>(
			"android.telecom.CallAttributes",
			"DIRECTION_OUTGOING"
		);
	}
	inline jint CallAttributes::SUPPORTS_SET_INACTIVE()
	{
		return getStaticField<jint>(
			"android.telecom.CallAttributes",
			"SUPPORTS_SET_INACTIVE"
		);
	}
	inline jint CallAttributes::SUPPORTS_STREAM()
	{
		return getStaticField<jint>(
			"android.telecom.CallAttributes",
			"SUPPORTS_STREAM"
		);
	}
	inline jint CallAttributes::SUPPORTS_TRANSFER()
	{
		return getStaticField<jint>(
			"android.telecom.CallAttributes",
			"SUPPORTS_TRANSFER"
		);
	}
	inline jint CallAttributes::VIDEO_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.CallAttributes",
			"VIDEO_CALL"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CallAttributes::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CallAttributes::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::Uri CallAttributes::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Landroid/net/Uri;"
		);
	}
	inline jint CallAttributes::getCallCapabilities() const
	{
		return callMethod<jint>(
			"getCallCapabilities",
			"()I"
		);
	}
	inline jint CallAttributes::getCallType() const
	{
		return callMethod<jint>(
			"getCallType",
			"()I"
		);
	}
	inline jint CallAttributes::getDirection() const
	{
		return callMethod<jint>(
			"getDirection",
			"()I"
		);
	}
	inline JString CallAttributes::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::telecom::PhoneAccountHandle CallAttributes::getPhoneAccountHandle() const
	{
		return callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	inline jint CallAttributes::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CallAttributes::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CallAttributes::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
