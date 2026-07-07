#pragma once

#include "./Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ProfilingResult.def.hpp"

namespace android::os
{
	// Fields
	inline JObject ProfilingResult::CREATOR()
	{
		return getStaticObjectField(
			"android.os.ProfilingResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ProfilingResult::ERROR_FAILED_EXECUTING()
	{
		return getStaticField<jint>(
			"android.os.ProfilingResult",
			"ERROR_FAILED_EXECUTING"
		);
	}
	inline jint ProfilingResult::ERROR_FAILED_INVALID_REQUEST()
	{
		return getStaticField<jint>(
			"android.os.ProfilingResult",
			"ERROR_FAILED_INVALID_REQUEST"
		);
	}
	inline jint ProfilingResult::ERROR_FAILED_NO_DISK_SPACE()
	{
		return getStaticField<jint>(
			"android.os.ProfilingResult",
			"ERROR_FAILED_NO_DISK_SPACE"
		);
	}
	inline jint ProfilingResult::ERROR_FAILED_POST_PROCESSING()
	{
		return getStaticField<jint>(
			"android.os.ProfilingResult",
			"ERROR_FAILED_POST_PROCESSING"
		);
	}
	inline jint ProfilingResult::ERROR_FAILED_PROFILING_IN_PROGRESS()
	{
		return getStaticField<jint>(
			"android.os.ProfilingResult",
			"ERROR_FAILED_PROFILING_IN_PROGRESS"
		);
	}
	inline jint ProfilingResult::ERROR_FAILED_RATE_LIMIT_PROCESS()
	{
		return getStaticField<jint>(
			"android.os.ProfilingResult",
			"ERROR_FAILED_RATE_LIMIT_PROCESS"
		);
	}
	inline jint ProfilingResult::ERROR_FAILED_RATE_LIMIT_SYSTEM()
	{
		return getStaticField<jint>(
			"android.os.ProfilingResult",
			"ERROR_FAILED_RATE_LIMIT_SYSTEM"
		);
	}
	inline jint ProfilingResult::ERROR_NONE()
	{
		return getStaticField<jint>(
			"android.os.ProfilingResult",
			"ERROR_NONE"
		);
	}
	inline jint ProfilingResult::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.os.ProfilingResult",
			"ERROR_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ProfilingResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ProfilingResult::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ProfilingResult::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
	inline JString ProfilingResult::getErrorMessage() const
	{
		return callObjectMethod(
			"getErrorMessage",
			"()Ljava/lang/String;"
		);
	}
	inline JString ProfilingResult::getResultFilePath() const
	{
		return callObjectMethod(
			"getResultFilePath",
			"()Ljava/lang/String;"
		);
	}
	inline JString ProfilingResult::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	inline jint ProfilingResult::getTriggerType() const
	{
		return callMethod<jint>(
			"getTriggerType",
			"()I"
		);
	}
	inline jint ProfilingResult::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void ProfilingResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
