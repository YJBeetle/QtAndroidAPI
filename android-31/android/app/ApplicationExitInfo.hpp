#pragma once

#include "../../JByteArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../os/UserHandle.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ApplicationExitInfo.def.hpp"

namespace android::app
{
	// Fields
	inline JObject ApplicationExitInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ApplicationExitInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ApplicationExitInfo::REASON_ANR()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_ANR"
		);
	}
	inline jint ApplicationExitInfo::REASON_CRASH()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_CRASH"
		);
	}
	inline jint ApplicationExitInfo::REASON_CRASH_NATIVE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_CRASH_NATIVE"
		);
	}
	inline jint ApplicationExitInfo::REASON_DEPENDENCY_DIED()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_DEPENDENCY_DIED"
		);
	}
	inline jint ApplicationExitInfo::REASON_EXCESSIVE_RESOURCE_USAGE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_EXCESSIVE_RESOURCE_USAGE"
		);
	}
	inline jint ApplicationExitInfo::REASON_EXIT_SELF()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_EXIT_SELF"
		);
	}
	inline jint ApplicationExitInfo::REASON_INITIALIZATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_INITIALIZATION_FAILURE"
		);
	}
	inline jint ApplicationExitInfo::REASON_LOW_MEMORY()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_LOW_MEMORY"
		);
	}
	inline jint ApplicationExitInfo::REASON_OTHER()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_OTHER"
		);
	}
	inline jint ApplicationExitInfo::REASON_PERMISSION_CHANGE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_PERMISSION_CHANGE"
		);
	}
	inline jint ApplicationExitInfo::REASON_SIGNALED()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_SIGNALED"
		);
	}
	inline jint ApplicationExitInfo::REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_UNKNOWN"
		);
	}
	inline jint ApplicationExitInfo::REASON_USER_REQUESTED()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_USER_REQUESTED"
		);
	}
	inline jint ApplicationExitInfo::REASON_USER_STOPPED()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_USER_STOPPED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ApplicationExitInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ApplicationExitInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ApplicationExitInfo::getDefiningUid() const
	{
		return callMethod<jint>(
			"getDefiningUid",
			"()I"
		);
	}
	inline JString ApplicationExitInfo::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	inline jint ApplicationExitInfo::getImportance() const
	{
		return callMethod<jint>(
			"getImportance",
			"()I"
		);
	}
	inline jint ApplicationExitInfo::getPackageUid() const
	{
		return callMethod<jint>(
			"getPackageUid",
			"()I"
		);
	}
	inline jint ApplicationExitInfo::getPid() const
	{
		return callMethod<jint>(
			"getPid",
			"()I"
		);
	}
	inline JString ApplicationExitInfo::getProcessName() const
	{
		return callObjectMethod(
			"getProcessName",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray ApplicationExitInfo::getProcessStateSummary() const
	{
		return callObjectMethod(
			"getProcessStateSummary",
			"()[B"
		);
	}
	inline jlong ApplicationExitInfo::getPss() const
	{
		return callMethod<jlong>(
			"getPss",
			"()J"
		);
	}
	inline jint ApplicationExitInfo::getRealUid() const
	{
		return callMethod<jint>(
			"getRealUid",
			"()I"
		);
	}
	inline jint ApplicationExitInfo::getReason() const
	{
		return callMethod<jint>(
			"getReason",
			"()I"
		);
	}
	inline jlong ApplicationExitInfo::getRss() const
	{
		return callMethod<jlong>(
			"getRss",
			"()J"
		);
	}
	inline jint ApplicationExitInfo::getStatus() const
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	inline jlong ApplicationExitInfo::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	inline java::io::InputStream ApplicationExitInfo::getTraceInputStream() const
	{
		return callObjectMethod(
			"getTraceInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	inline android::os::UserHandle ApplicationExitInfo::getUserHandle() const
	{
		return callObjectMethod(
			"getUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	inline jint ApplicationExitInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ApplicationExitInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ApplicationExitInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

