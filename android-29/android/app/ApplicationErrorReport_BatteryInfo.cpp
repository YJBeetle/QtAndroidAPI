#include "../os/Parcel.hpp"
#include "./ApplicationErrorReport_BatteryInfo.hpp"

namespace android::app
{
	// Fields
	jstring ApplicationErrorReport_BatteryInfo::checkinDetails()
	{
		return __thiz.getObjectField(
			"checkinDetails",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ApplicationErrorReport_BatteryInfo::durationMicros()
	{
		return __thiz.getField<jlong>(
			"durationMicros"
		);
	}
	jstring ApplicationErrorReport_BatteryInfo::usageDetails()
	{
		return __thiz.getObjectField(
			"usageDetails",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApplicationErrorReport_BatteryInfo::usagePercent()
	{
		return __thiz.getField<jint>(
			"usagePercent"
		);
	}
	
	ApplicationErrorReport_BatteryInfo::ApplicationErrorReport_BatteryInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ApplicationErrorReport_BatteryInfo::ApplicationErrorReport_BatteryInfo()
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$BatteryInfo",
			"()V"
		);
	}
	ApplicationErrorReport_BatteryInfo::ApplicationErrorReport_BatteryInfo(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.ApplicationErrorReport$BatteryInfo",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void ApplicationErrorReport_BatteryInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ApplicationErrorReport_BatteryInfo::dump(__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void ApplicationErrorReport_BatteryInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

