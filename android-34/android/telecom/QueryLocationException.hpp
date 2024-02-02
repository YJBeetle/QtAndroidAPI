#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./QueryLocationException.def.hpp"

namespace android::telecom
{
	// Fields
	inline JObject QueryLocationException::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.QueryLocationException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint QueryLocationException::ERROR_NOT_ALLOWED_FOR_NON_EMERGENCY_CONNECTIONS()
	{
		return getStaticField<jint>(
			"android.telecom.QueryLocationException",
			"ERROR_NOT_ALLOWED_FOR_NON_EMERGENCY_CONNECTIONS"
		);
	}
	inline jint QueryLocationException::ERROR_NOT_PERMITTED()
	{
		return getStaticField<jint>(
			"android.telecom.QueryLocationException",
			"ERROR_NOT_PERMITTED"
		);
	}
	inline jint QueryLocationException::ERROR_PREVIOUS_REQUEST_EXISTS()
	{
		return getStaticField<jint>(
			"android.telecom.QueryLocationException",
			"ERROR_PREVIOUS_REQUEST_EXISTS"
		);
	}
	inline jint QueryLocationException::ERROR_REQUEST_TIME_OUT()
	{
		return getStaticField<jint>(
			"android.telecom.QueryLocationException",
			"ERROR_REQUEST_TIME_OUT"
		);
	}
	inline jint QueryLocationException::ERROR_SERVICE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.telecom.QueryLocationException",
			"ERROR_SERVICE_UNAVAILABLE"
		);
	}
	inline jint QueryLocationException::ERROR_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.telecom.QueryLocationException",
			"ERROR_UNSPECIFIED"
		);
	}
	
	// Constructors
	inline QueryLocationException::QueryLocationException(JString arg0)
		: java::lang::RuntimeException(
			"android.telecom.QueryLocationException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline QueryLocationException::QueryLocationException(JString arg0, jint arg1)
		: java::lang::RuntimeException(
			"android.telecom.QueryLocationException",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline QueryLocationException::QueryLocationException(JString arg0, jint arg1, JThrowable arg2)
		: java::lang::RuntimeException(
			"android.telecom.QueryLocationException",
			"(Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	inline jint QueryLocationException::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint QueryLocationException::getCode() const
	{
		return callMethod<jint>(
			"getCode",
			"()I"
		);
	}
	inline void QueryLocationException::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
