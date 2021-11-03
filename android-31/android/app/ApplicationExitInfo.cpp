#include "../os/Parcel.hpp"
#include "../os/UserHandle.hpp"
#include "../../java/io/InputStream.hpp"
#include "./ApplicationExitInfo.hpp"

namespace android::app
{
	// Fields
	JObject ApplicationExitInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ApplicationExitInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ApplicationExitInfo::REASON_ANR()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_ANR"
		);
	}
	jint ApplicationExitInfo::REASON_CRASH()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_CRASH"
		);
	}
	jint ApplicationExitInfo::REASON_CRASH_NATIVE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_CRASH_NATIVE"
		);
	}
	jint ApplicationExitInfo::REASON_DEPENDENCY_DIED()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_DEPENDENCY_DIED"
		);
	}
	jint ApplicationExitInfo::REASON_EXCESSIVE_RESOURCE_USAGE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_EXCESSIVE_RESOURCE_USAGE"
		);
	}
	jint ApplicationExitInfo::REASON_EXIT_SELF()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_EXIT_SELF"
		);
	}
	jint ApplicationExitInfo::REASON_INITIALIZATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_INITIALIZATION_FAILURE"
		);
	}
	jint ApplicationExitInfo::REASON_LOW_MEMORY()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_LOW_MEMORY"
		);
	}
	jint ApplicationExitInfo::REASON_OTHER()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_OTHER"
		);
	}
	jint ApplicationExitInfo::REASON_PERMISSION_CHANGE()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_PERMISSION_CHANGE"
		);
	}
	jint ApplicationExitInfo::REASON_SIGNALED()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_SIGNALED"
		);
	}
	jint ApplicationExitInfo::REASON_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_UNKNOWN"
		);
	}
	jint ApplicationExitInfo::REASON_USER_REQUESTED()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_USER_REQUESTED"
		);
	}
	jint ApplicationExitInfo::REASON_USER_STOPPED()
	{
		return getStaticField<jint>(
			"android.app.ApplicationExitInfo",
			"REASON_USER_STOPPED"
		);
	}
	
	// QAndroidJniObject forward
	ApplicationExitInfo::ApplicationExitInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ApplicationExitInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ApplicationExitInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ApplicationExitInfo::getDefiningUid()
	{
		return callMethod<jint>(
			"getDefiningUid",
			"()I"
		);
	}
	jstring ApplicationExitInfo::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApplicationExitInfo::getImportance()
	{
		return callMethod<jint>(
			"getImportance",
			"()I"
		);
	}
	jint ApplicationExitInfo::getPackageUid()
	{
		return callMethod<jint>(
			"getPackageUid",
			"()I"
		);
	}
	jint ApplicationExitInfo::getPid()
	{
		return callMethod<jint>(
			"getPid",
			"()I"
		);
	}
	jstring ApplicationExitInfo::getProcessName()
	{
		return callObjectMethod(
			"getProcessName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray ApplicationExitInfo::getProcessStateSummary()
	{
		return callObjectMethod(
			"getProcessStateSummary",
			"()[B"
		).object<jbyteArray>();
	}
	jlong ApplicationExitInfo::getPss()
	{
		return callMethod<jlong>(
			"getPss",
			"()J"
		);
	}
	jint ApplicationExitInfo::getRealUid()
	{
		return callMethod<jint>(
			"getRealUid",
			"()I"
		);
	}
	jint ApplicationExitInfo::getReason()
	{
		return callMethod<jint>(
			"getReason",
			"()I"
		);
	}
	jlong ApplicationExitInfo::getRss()
	{
		return callMethod<jlong>(
			"getRss",
			"()J"
		);
	}
	jint ApplicationExitInfo::getStatus()
	{
		return callMethod<jint>(
			"getStatus",
			"()I"
		);
	}
	jlong ApplicationExitInfo::getTimestamp()
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
	java::io::InputStream ApplicationExitInfo::getTraceInputStream()
	{
		return callObjectMethod(
			"getTraceInputStream",
			"()Ljava/io/InputStream;"
		);
	}
	android::os::UserHandle ApplicationExitInfo::getUserHandle()
	{
		return callObjectMethod(
			"getUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	jint ApplicationExitInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ApplicationExitInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ApplicationExitInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

