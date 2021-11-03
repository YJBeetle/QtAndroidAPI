#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./UsageStats.hpp"

namespace android::app::usage
{
	// Fields
	JObject UsageStats::CREATOR()
	{
		return getStaticObjectField(
			"android.app.usage.UsageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	UsageStats::UsageStats(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	UsageStats::UsageStats(android::app::usage::UsageStats &arg0)
		: JObject(
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
	JString UsageStats::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	jlong UsageStats::getTotalTimeInForeground()
	{
		return callMethod<jlong>(
			"getTotalTimeInForeground",
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

