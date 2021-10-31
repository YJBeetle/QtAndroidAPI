#include "../os/Parcel.hpp"
#include "./ApplicationErrorReport_CrashInfo.hpp"

namespace android::app
{
	// Fields
	jstring ApplicationErrorReport_CrashInfo::exceptionClassName()
	{
		return getObjectField(
			"exceptionClassName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_CrashInfo::exceptionMessage()
	{
		return getObjectField(
			"exceptionMessage",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_CrashInfo::stackTrace()
	{
		return getObjectField(
			"stackTrace",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_CrashInfo::throwClassName()
	{
		return getObjectField(
			"throwClassName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_CrashInfo::throwFileName()
	{
		return getObjectField(
			"throwFileName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApplicationErrorReport_CrashInfo::throwLineNumber()
	{
		return getField<jint>(
			"throwLineNumber"
		);
	}
	jstring ApplicationErrorReport_CrashInfo::throwMethodName()
	{
		return getObjectField(
			"throwMethodName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	ApplicationErrorReport_CrashInfo::ApplicationErrorReport_CrashInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ApplicationErrorReport_CrashInfo::ApplicationErrorReport_CrashInfo()
		: __JniBaseClass(
			"android.app.ApplicationErrorReport$CrashInfo",
			"()V"
		) {}
	ApplicationErrorReport_CrashInfo::ApplicationErrorReport_CrashInfo(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.app.ApplicationErrorReport$CrashInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	ApplicationErrorReport_CrashInfo::ApplicationErrorReport_CrashInfo(jthrowable arg0)
		: __JniBaseClass(
			"android.app.ApplicationErrorReport$CrashInfo",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	
	// Methods
	void ApplicationErrorReport_CrashInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void ApplicationErrorReport_CrashInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

