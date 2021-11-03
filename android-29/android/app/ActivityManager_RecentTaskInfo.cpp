#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./ActivityManager_RecentTaskInfo.hpp"

namespace android::app
{
	// Fields
	JObject ActivityManager_RecentTaskInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.app.ActivityManager$RecentTaskInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ActivityManager_RecentTaskInfo::affiliatedTaskId()
	{
		return getField<jint>(
			"affiliatedTaskId"
		);
	}
	JString ActivityManager_RecentTaskInfo::description()
	{
		return getObjectField(
			"description",
			"Ljava/lang/CharSequence;"
		);
	}
	jint ActivityManager_RecentTaskInfo::id()
	{
		return getField<jint>(
			"id"
		);
	}
	jint ActivityManager_RecentTaskInfo::persistentId()
	{
		return getField<jint>(
			"persistentId"
		);
	}
	
	// QAndroidJniObject forward
	ActivityManager_RecentTaskInfo::ActivityManager_RecentTaskInfo(QAndroidJniObject obj) : android::app::TaskInfo(obj) {}
	
	// Constructors
	ActivityManager_RecentTaskInfo::ActivityManager_RecentTaskInfo()
		: android::app::TaskInfo(
			"android.app.ActivityManager$RecentTaskInfo",
			"()V"
		) {}
	
	// Methods
	jint ActivityManager_RecentTaskInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_RecentTaskInfo::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void ActivityManager_RecentTaskInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

