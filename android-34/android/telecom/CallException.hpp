#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./CallException.def.hpp"

namespace android::telecom
{
	// Fields
	inline jint CallException::CODE_CALL_CANNOT_BE_SET_TO_ACTIVE()
	{
		return getStaticField<jint>(
			"android.telecom.CallException",
			"CODE_CALL_CANNOT_BE_SET_TO_ACTIVE"
		);
	}
	inline jint CallException::CODE_CALL_IS_NOT_BEING_TRACKED()
	{
		return getStaticField<jint>(
			"android.telecom.CallException",
			"CODE_CALL_IS_NOT_BEING_TRACKED"
		);
	}
	inline jint CallException::CODE_CALL_NOT_PERMITTED_AT_PRESENT_TIME()
	{
		return getStaticField<jint>(
			"android.telecom.CallException",
			"CODE_CALL_NOT_PERMITTED_AT_PRESENT_TIME"
		);
	}
	inline jint CallException::CODE_CANNOT_HOLD_CURRENT_ACTIVE_CALL()
	{
		return getStaticField<jint>(
			"android.telecom.CallException",
			"CODE_CANNOT_HOLD_CURRENT_ACTIVE_CALL"
		);
	}
	inline jint CallException::CODE_ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telecom.CallException",
			"CODE_ERROR_UNKNOWN"
		);
	}
	inline jint CallException::CODE_OPERATION_TIMED_OUT()
	{
		return getStaticField<jint>(
			"android.telecom.CallException",
			"CODE_OPERATION_TIMED_OUT"
		);
	}
	inline JObject CallException::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.CallException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline CallException::CallException(JString arg0, jint arg1)
		: java::lang::RuntimeException(
			"android.telecom.CallException",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline jint CallException::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint CallException::getCode() const
	{
		return callMethod<jint>(
			"getCode",
			"()I"
		);
	}
	inline void CallException::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
