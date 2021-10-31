#include "../graphics/Bitmap.hpp"
#include "../os/Parcel.hpp"
#include "./ActivityManager_RunningTaskInfo.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject ActivityManager_RunningTaskInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.ActivityManager$RunningTaskInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring ActivityManager_RunningTaskInfo::description()
	{
		return getObjectField(
			"description",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ActivityManager_RunningTaskInfo::id()
	{
		return getField<jint>(
			"id"
		);
	}
	jint ActivityManager_RunningTaskInfo::numRunning()
	{
		return getField<jint>(
			"numRunning"
		);
	}
	QAndroidJniObject ActivityManager_RunningTaskInfo::thumbnail()
	{
		return getObjectField(
			"thumbnail",
			"Landroid/graphics/Bitmap;"
		);
	}
	
	// QAndroidJniObject forward
	ActivityManager_RunningTaskInfo::ActivityManager_RunningTaskInfo(QAndroidJniObject obj) : android::app::TaskInfo(obj) {}
	
	// Constructors
	ActivityManager_RunningTaskInfo::ActivityManager_RunningTaskInfo()
		: android::app::TaskInfo(
			"android.app.ActivityManager$RunningTaskInfo",
			"()V"
		) {}
	
	// Methods
	jint ActivityManager_RunningTaskInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ActivityManager_RunningTaskInfo::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void ActivityManager_RunningTaskInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app
