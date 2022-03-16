#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ApplicationErrorReport_CrashInfo.hpp"

namespace android::app
{
	// Fields
	JString ApplicationErrorReport_CrashInfo::exceptionClassName()
	{
		return getObjectField(
			"exceptionClassName",
			"Ljava/lang/String;"
		);
	}
	JString ApplicationErrorReport_CrashInfo::exceptionMessage()
	{
		return getObjectField(
			"exceptionMessage",
			"Ljava/lang/String;"
		);
	}
	JString ApplicationErrorReport_CrashInfo::stackTrace()
	{
		return getObjectField(
			"stackTrace",
			"Ljava/lang/String;"
		);
	}
	JString ApplicationErrorReport_CrashInfo::throwClassName()
	{
		return getObjectField(
			"throwClassName",
			"Ljava/lang/String;"
		);
	}
	JString ApplicationErrorReport_CrashInfo::throwFileName()
	{
		return getObjectField(
			"throwFileName",
			"Ljava/lang/String;"
		);
	}
	jint ApplicationErrorReport_CrashInfo::throwLineNumber()
	{
		return getField<jint>(
			"throwLineNumber"
		);
	}
	JString ApplicationErrorReport_CrashInfo::throwMethodName()
	{
		return getObjectField(
			"throwMethodName",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	ApplicationErrorReport_CrashInfo::ApplicationErrorReport_CrashInfo()
		: JObject(
			"android.app.ApplicationErrorReport$CrashInfo",
			"()V"
		) {}
	ApplicationErrorReport_CrashInfo::ApplicationErrorReport_CrashInfo(android::os::Parcel arg0)
		: JObject(
			"android.app.ApplicationErrorReport$CrashInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	ApplicationErrorReport_CrashInfo::ApplicationErrorReport_CrashInfo(JThrowable arg0)
		: JObject(
			"android.app.ApplicationErrorReport$CrashInfo",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	
	// Methods
	void ApplicationErrorReport_CrashInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void ApplicationErrorReport_CrashInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

