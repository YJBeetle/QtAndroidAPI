#include "../os/Parcel.hpp"
#include "./ApplicationErrorReport_RunningServiceInfo.hpp"

namespace android::app
{
	// Fields
	jlong ApplicationErrorReport_RunningServiceInfo::durationMillis()
	{
		return getField<jlong>(
			"durationMillis"
		);
	}
	jstring ApplicationErrorReport_RunningServiceInfo::serviceDetails()
	{
		return getObjectField(
			"serviceDetails",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ApplicationErrorReport_RunningServiceInfo::ApplicationErrorReport_RunningServiceInfo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ApplicationErrorReport_RunningServiceInfo::ApplicationErrorReport_RunningServiceInfo()
		: __JniBaseClass(
			"android.app.ApplicationErrorReport$RunningServiceInfo",
			"()V"
		) {}
	ApplicationErrorReport_RunningServiceInfo::ApplicationErrorReport_RunningServiceInfo(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.app.ApplicationErrorReport$RunningServiceInfo",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	void ApplicationErrorReport_RunningServiceInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void ApplicationErrorReport_RunningServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

