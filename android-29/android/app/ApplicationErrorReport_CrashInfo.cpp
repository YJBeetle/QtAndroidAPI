#include "../os/Parcel.hpp"
#include "./ApplicationErrorReport_CrashInfo.hpp"

namespace android::app
{
	// Fields
	jstring ApplicationErrorReport_CrashInfo::exceptionClassName()
	{
		return __thiz.getObjectField(
			"exceptionClassName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_CrashInfo::exceptionMessage()
	{
		return __thiz.getObjectField(
			"exceptionMessage",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_CrashInfo::stackTrace()
	{
		return __thiz.getObjectField(
			"stackTrace",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_CrashInfo::throwClassName()
	{
		return __thiz.getObjectField(
			"throwClassName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_CrashInfo::throwFileName()
	{
		return __thiz.getObjectField(
			"throwFileName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApplicationErrorReport_CrashInfo::throwLineNumber()
	{
		return __thiz.getField<jint>(
			"throwLineNumber"
		);
	}
	jstring ApplicationErrorReport_CrashInfo::throwMethodName()
	{
		return __thiz.getObjectField(
			"throwMethodName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ApplicationErrorReport_CrashInfo::ApplicationErrorReport_CrashInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ApplicationErrorReport_CrashInfo::ApplicationErrorReport_CrashInfo()
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$CrashInfo",
			"()V"
		);
	}
	ApplicationErrorReport_CrashInfo::ApplicationErrorReport_CrashInfo(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$CrashInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	ApplicationErrorReport_CrashInfo::ApplicationErrorReport_CrashInfo(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$CrashInfo",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	
	// Methods
	void ApplicationErrorReport_CrashInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ApplicationErrorReport_CrashInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

