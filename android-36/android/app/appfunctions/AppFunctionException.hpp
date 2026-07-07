#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./AppFunctionException.def.hpp"

namespace android::app::appfunctions
{
	// Fields
	inline JObject AppFunctionException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appfunctions.AppFunctionException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint AppFunctionException::ERROR_APP_UNKNOWN_ERROR()
	{
		return getStaticField<jint>(
			"android.app.appfunctions.AppFunctionException",
			"ERROR_APP_UNKNOWN_ERROR"
		);
	}
	inline jint AppFunctionException::ERROR_CANCELLED()
	{
		return getStaticField<jint>(
			"android.app.appfunctions.AppFunctionException",
			"ERROR_CANCELLED"
		);
	}
	inline jint AppFunctionException::ERROR_CATEGORY_APP()
	{
		return getStaticField<jint>(
			"android.app.appfunctions.AppFunctionException",
			"ERROR_CATEGORY_APP"
		);
	}
	inline jint AppFunctionException::ERROR_CATEGORY_REQUEST_ERROR()
	{
		return getStaticField<jint>(
			"android.app.appfunctions.AppFunctionException",
			"ERROR_CATEGORY_REQUEST_ERROR"
		);
	}
	inline jint AppFunctionException::ERROR_CATEGORY_SYSTEM()
	{
		return getStaticField<jint>(
			"android.app.appfunctions.AppFunctionException",
			"ERROR_CATEGORY_SYSTEM"
		);
	}
	inline jint AppFunctionException::ERROR_CATEGORY_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.appfunctions.AppFunctionException",
			"ERROR_CATEGORY_UNKNOWN"
		);
	}
	inline jint AppFunctionException::ERROR_DENIED()
	{
		return getStaticField<jint>(
			"android.app.appfunctions.AppFunctionException",
			"ERROR_DENIED"
		);
	}
	inline jint AppFunctionException::ERROR_DISABLED()
	{
		return getStaticField<jint>(
			"android.app.appfunctions.AppFunctionException",
			"ERROR_DISABLED"
		);
	}
	inline jint AppFunctionException::ERROR_ENTERPRISE_POLICY_DISALLOWED()
	{
		return getStaticField<jint>(
			"android.app.appfunctions.AppFunctionException",
			"ERROR_ENTERPRISE_POLICY_DISALLOWED"
		);
	}
	inline jint AppFunctionException::ERROR_FUNCTION_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.app.appfunctions.AppFunctionException",
			"ERROR_FUNCTION_NOT_FOUND"
		);
	}
	inline jint AppFunctionException::ERROR_INVALID_ARGUMENT()
	{
		return getStaticField<jint>(
			"android.app.appfunctions.AppFunctionException",
			"ERROR_INVALID_ARGUMENT"
		);
	}
	inline jint AppFunctionException::ERROR_SYSTEM_ERROR()
	{
		return getStaticField<jint>(
			"android.app.appfunctions.AppFunctionException",
			"ERROR_SYSTEM_ERROR"
		);
	}
	
	// Constructors
	inline AppFunctionException::AppFunctionException(jint arg0, JString arg1)
		: java::lang::Exception(
			"android.app.appfunctions.AppFunctionException",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	inline AppFunctionException::AppFunctionException(jint arg0, JString arg1, android::os::Bundle arg2)
		: java::lang::Exception(
			"android.app.appfunctions.AppFunctionException",
			"(ILjava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline jint AppFunctionException::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint AppFunctionException::getErrorCategory() const
	{
		return callMethod<jint>(
			"getErrorCategory",
			"()I"
		);
	}
	inline jint AppFunctionException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	inline JString AppFunctionException::getErrorMessage() const
	{
		return callObjectMethod(
			"getErrorMessage",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::Bundle AppFunctionException::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline void AppFunctionException::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::appfunctions

// Base class headers
#include "../../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appfunctions;
#endif
