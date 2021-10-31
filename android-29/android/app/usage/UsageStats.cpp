#include "../../os/Parcel.hpp"
#include "./UsageStats.hpp"

namespace android::app::usage
{
	// Fields
	QAndroidJniObject UsageStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.usage.UsageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	UsageStats::UsageStats(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	UsageStats::UsageStats(android::app::usage::UsageStats &arg0)
		: __JniBaseClass(
			"android.app.usage.UsageStats",
			"(Landroid/app/usage/UsageStats;)V",
			arg0.object()
		) {}
	
	// Methods
	void UsageStats::add(android::app::usage::UsageStats arg0)
	{
		callMethod<void>(
			"add",
			"(Landroid/app/usage/UsageStats;)V",
			arg0.object()
		);
	}
	jint UsageStats::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong UsageStats::getFirstTimeStamp()
	{
		return callMethod<jlong>(
			"getFirstTimeStamp",
			"()J"
		);
	}
	jlong UsageStats::getLastTimeForegroundServiceUsed()
	{
		return callMethod<jlong>(
			"getLastTimeForegroundServiceUsed",
			"()J"
		);
	}
	jlong UsageStats::getLastTimeStamp()
	{
		return callMethod<jlong>(
			"getLastTimeStamp",
			"()J"
		);
	}
	jlong UsageStats::getLastTimeUsed()
	{
		return callMethod<jlong>(
			"getLastTimeUsed",
			"()J"
		);
	}
	jlong UsageStats::getLastTimeVisible()
	{
		return callMethod<jlong>(
			"getLastTimeVisible",
			"()J"
		);
	}
	jstring UsageStats::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong UsageStats::getTotalTimeForegroundServiceUsed()
	{
		return callMethod<jlong>(
			"getTotalTimeForegroundServiceUsed",
			"()J"
		);
	}
	jlong UsageStats::getTotalTimeInForeground()
	{
		return callMethod<jlong>(
			"getTotalTimeInForeground",
			"()J"
		);
	}
	jlong UsageStats::getTotalTimeVisible()
	{
		return callMethod<jlong>(
			"getTotalTimeVisible",
			"()J"
		);
	}
	void UsageStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::usage

