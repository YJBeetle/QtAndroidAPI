#include "../os/Parcel.hpp"
#include "./ApplicationErrorReport_AnrInfo.hpp"

namespace android::app
{
	// Fields
	jstring ApplicationErrorReport_AnrInfo::activity()
	{
		return __thiz.getObjectField(
			"activity",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_AnrInfo::cause()
	{
		return __thiz.getObjectField(
			"cause",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ApplicationErrorReport_AnrInfo::info()
	{
		return __thiz.getObjectField(
			"info",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ApplicationErrorReport_AnrInfo::ApplicationErrorReport_AnrInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ApplicationErrorReport_AnrInfo::ApplicationErrorReport_AnrInfo()
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$AnrInfo",
			"()V"
		);
	}
	ApplicationErrorReport_AnrInfo::ApplicationErrorReport_AnrInfo(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$AnrInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void ApplicationErrorReport_AnrInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ApplicationErrorReport_AnrInfo::dump(__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void ApplicationErrorReport_AnrInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

