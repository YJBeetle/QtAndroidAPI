#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DisconnectCause.def.hpp"

namespace android::telecom
{
	// Fields
	inline jint DisconnectCause::ANSWERED_ELSEWHERE()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"ANSWERED_ELSEWHERE"
		);
	}
	inline jint DisconnectCause::BUSY()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"BUSY"
		);
	}
	inline jint DisconnectCause::CALL_PULLED()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"CALL_PULLED"
		);
	}
	inline jint DisconnectCause::CANCELED()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"CANCELED"
		);
	}
	inline jint DisconnectCause::CONNECTION_MANAGER_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"CONNECTION_MANAGER_NOT_SUPPORTED"
		);
	}
	inline JObject DisconnectCause::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.DisconnectCause",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint DisconnectCause::ERROR()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"ERROR"
		);
	}
	inline jint DisconnectCause::LOCAL()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"LOCAL"
		);
	}
	inline jint DisconnectCause::MISSED()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"MISSED"
		);
	}
	inline jint DisconnectCause::OTHER()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"OTHER"
		);
	}
	inline jint DisconnectCause::REJECTED()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"REJECTED"
		);
	}
	inline jint DisconnectCause::REMOTE()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"REMOTE"
		);
	}
	inline jint DisconnectCause::RESTRICTED()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"RESTRICTED"
		);
	}
	inline jint DisconnectCause::UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"UNKNOWN"
		);
	}
	
	// Constructors
	inline DisconnectCause::DisconnectCause(jint arg0)
		: JObject(
			"android.telecom.DisconnectCause",
			"(I)V",
			arg0
		) {}
	inline DisconnectCause::DisconnectCause(jint arg0, JString arg1)
		: JObject(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	inline DisconnectCause::DisconnectCause(jint arg0, JString arg1, JString arg2, JString arg3)
		: JObject(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	inline DisconnectCause::DisconnectCause(jint arg0, JString arg1, JString arg2, JString arg3, jint arg4)
		: JObject(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4
		) {}
	
	// Methods
	inline jint DisconnectCause::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean DisconnectCause::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint DisconnectCause::getCode() const
	{
		return callMethod<jint>(
			"getCode",
			"()I"
		);
	}
	inline JString DisconnectCause::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString DisconnectCause::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString DisconnectCause::getReason() const
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		);
	}
	inline jint DisconnectCause::getTone() const
	{
		return callMethod<jint>(
			"getTone",
			"()I"
		);
	}
	inline jint DisconnectCause::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString DisconnectCause::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DisconnectCause::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

