#include "../os/Parcel.hpp"
#include "./ApplicationErrorReport_RunningServiceInfo.hpp"

namespace android::app
{
	// Fields
	jlong ApplicationErrorReport_RunningServiceInfo::durationMillis()
	{
		return __thiz.getField<jlong>(
			"durationMillis"
		);
	}
	jstring ApplicationErrorReport_RunningServiceInfo::serviceDetails()
	{
		return __thiz.getObjectField(
			"serviceDetails",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ApplicationErrorReport_RunningServiceInfo::ApplicationErrorReport_RunningServiceInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ApplicationErrorReport_RunningServiceInfo::ApplicationErrorReport_RunningServiceInfo()
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$RunningServiceInfo",
			"()V"
		);
	}
	ApplicationErrorReport_RunningServiceInfo::ApplicationErrorReport_RunningServiceInfo(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$RunningServiceInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void ApplicationErrorReport_RunningServiceInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ApplicationErrorReport_RunningServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

