#include "../os/Parcel.hpp"
#include "./ActivityManager_RecentTaskInfo.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject ActivityManager_RecentTaskInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager$RecentTaskInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ActivityManager_RecentTaskInfo::affiliatedTaskId()
	{
		return __thiz.getField<jint>(
			"affiliatedTaskId"
		);
	}
	jstring ActivityManager_RecentTaskInfo::description()
	{
		return __thiz.getObjectField(
			"description",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ActivityManager_RecentTaskInfo::id()
	{
		return __thiz.getField<jint>(
			"id"
		);
	}
	jint ActivityManager_RecentTaskInfo::persistentId()
	{
		return __thiz.getField<jint>(
			"persistentId"
		);
	}
	
	ActivityManager_RecentTaskInfo::ActivityManager_RecentTaskInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ActivityManager_RecentTaskInfo::ActivityManager_RecentTaskInfo()
	{
		__thiz = QAndroidJniObject(
			"android.app.ActivityManager$RecentTaskInfo",
			"()V"
		);
	}
	
	// Methods
	jint ActivityManager_RecentTaskInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_RecentTaskInfo::readFromParcel(android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void ActivityManager_RecentTaskInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

