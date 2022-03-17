#pragma once

#include "../os/Parcel.def.hpp"
#include "./PhoneAccountHandle.def.hpp"
#include "../../JObject.hpp"
#include "./PhoneAccountSuggestion.def.hpp"

namespace android::telecom
{
	// Fields
	inline JObject PhoneAccountSuggestion::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.PhoneAccountSuggestion",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PhoneAccountSuggestion::REASON_FREQUENT()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccountSuggestion",
			"REASON_FREQUENT"
		);
	}
	inline jint PhoneAccountSuggestion::REASON_INTRA_CARRIER()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccountSuggestion",
			"REASON_INTRA_CARRIER"
		);
	}
	inline jint PhoneAccountSuggestion::REASON_NONE()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccountSuggestion",
			"REASON_NONE"
		);
	}
	inline jint PhoneAccountSuggestion::REASON_OTHER()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccountSuggestion",
			"REASON_OTHER"
		);
	}
	inline jint PhoneAccountSuggestion::REASON_USER_SET()
	{
		return getStaticField<jint>(
			"android.telecom.PhoneAccountSuggestion",
			"REASON_USER_SET"
		);
	}
	
	// Constructors
	inline PhoneAccountSuggestion::PhoneAccountSuggestion(android::telecom::PhoneAccountHandle arg0, jint arg1, jboolean arg2)
		: JObject(
			"android.telecom.PhoneAccountSuggestion",
			"(Landroid/telecom/PhoneAccountHandle;IZ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint PhoneAccountSuggestion::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PhoneAccountSuggestion::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::telecom::PhoneAccountHandle PhoneAccountSuggestion::getPhoneAccountHandle() const
	{
		return callObjectMethod(
			"getPhoneAccountHandle",
			"()Landroid/telecom/PhoneAccountHandle;"
		);
	}
	inline jint PhoneAccountSuggestion::getReason() const
	{
		return callMethod<jint>(
			"getReason",
			"()I"
		);
	}
	inline jint PhoneAccountSuggestion::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean PhoneAccountSuggestion::shouldAutoSelect() const
	{
		return callMethod<jboolean>(
			"shouldAutoSelect",
			"()Z"
		);
	}
	inline void PhoneAccountSuggestion::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

