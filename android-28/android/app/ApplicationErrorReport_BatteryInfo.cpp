#include "../os/Parcel.hpp"
#include "./ApplicationErrorReport_BatteryInfo.hpp"

namespace android::app
{
	// Fields
	jstring ApplicationErrorReport_BatteryInfo::checkinDetails()
	{
		return getObjectField(
			"checkinDetails",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ApplicationErrorReport_BatteryInfo::durationMicros()
	{
		return getField<jlong>(
			"durationMicros"
		);
	}
	jstring ApplicationErrorReport_BatteryInfo::usageDetails()
	{
		return getObjectField(
			"usageDetails",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint ApplicationErrorReport_BatteryInfo::usagePercent()
	{
		return getField<jint>(
			"usagePercent"
		);
	}
	
	// QAndroidJniObject forward
	ApplicationErrorReport_BatteryInfo::ApplicationErrorReport_BatteryInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ApplicationErrorReport_BatteryInfo::ApplicationErrorReport_BatteryInfo()
		: __JniBaseClass(
			"android.app.ApplicationErrorReport$BatteryInfo",
			"()V"
		) {}
	ApplicationErrorReport_BatteryInfo::ApplicationErrorReport_BatteryInfo(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.app.ApplicationErrorReport$BatteryInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	void ApplicationErrorReport_BatteryInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void ApplicationErrorReport_BatteryInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

