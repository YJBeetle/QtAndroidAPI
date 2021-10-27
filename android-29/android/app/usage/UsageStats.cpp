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
	
	UsageStats::UsageStats(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	UsageStats::UsageStats(android::app::usage::UsageStats &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.UsageStats",
			"(Landroid/app/usage/UsageStats;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void UsageStats::add(android::app::usage::UsageStats arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(Landroid/app/usage/UsageStats;)V",
			arg0.__jniObject().object()
		);
	}
	jint UsageStats::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong UsageStats::getFirstTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getFirstTimeStamp",
			"()J"
		);
	}
	jlong UsageStats::getLastTimeForegroundServiceUsed()
	{
		return __thiz.callMethod<jlong>(
			"getLastTimeForegroundServiceUsed",
			"()J"
		);
	}
	jlong UsageStats::getLastTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getLastTimeStamp",
			"()J"
		);
	}
	jlong UsageStats::getLastTimeUsed()
	{
		return __thiz.callMethod<jlong>(
			"getLastTimeUsed",
			"()J"
		);
	}
	jlong UsageStats::getLastTimeVisible()
	{
		return __thiz.callMethod<jlong>(
			"getLastTimeVisible",
			"()J"
		);
	}
	jstring UsageStats::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong UsageStats::getTotalTimeForegroundServiceUsed()
	{
		return __thiz.callMethod<jlong>(
			"getTotalTimeForegroundServiceUsed",
			"()J"
		);
	}
	jlong UsageStats::getTotalTimeInForeground()
	{
		return __thiz.callMethod<jlong>(
			"getTotalTimeInForeground",
			"()J"
		);
	}
	jlong UsageStats::getTotalTimeVisible()
	{
		return __thiz.callMethod<jlong>(
			"getTotalTimeVisible",
			"()J"
		);
	}
	void UsageStats::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app::usage

